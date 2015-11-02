#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1492.h"
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
extern TypeInfo t1492_TI;
#include "t1492MD.h"

#include "t58.h"
#include "t1603.h"
#include "t122.h"
#include "t124.h"
#include "t125.h"
#include "t9.h"
#include "mscorlib_ArrayTypes.h"
#include "t2.h"
#include "t132.h"
#include "t169.h"
#include "t570.h"
#include "t310.h"
#include "t303.h"
#include "t156.h"
#include "t909.h"
#include "t1602.h"
#include "t126.h"
#include "t1536.h"
extern TypeInfo t1603_TI;
extern TypeInfo t122_TI;
extern TypeInfo t124_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t570_TI;
extern TypeInfo t909_TI;
extern TypeInfo t1602_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1536_TI;
extern TypeInfo t9_TI;
#include "t1602MD.h"
#include "t58MD.h"
#include "t1603MD.h"
#include "t1215MD.h"
#include "t1532MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t570MD.h"
#include "t310MD.h"
#include "t909MD.h"
#include "t1876MD.h"
#include "t306MD.h"
#include "t9MD.h"
#include "t126MD.h"
#include "t1536MD.h"
extern MethodInfo m9837_MI;
extern MethodInfo m4502_MI;
extern MethodInfo m7896_MI;
extern MethodInfo m5812_MI;
extern MethodInfo m7621_MI;
extern MethodInfo m11144_MI;
extern MethodInfo m6937_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5776_MI;
extern MethodInfo m5757_MI;
extern MethodInfo m5761_MI;
extern MethodInfo m11138_MI;
extern MethodInfo m11864_MI;
extern MethodInfo m5763_MI;
extern MethodInfo m9894_MI;
extern MethodInfo m11139_MI;
extern MethodInfo m9895_MI;
extern MethodInfo m1115_MI;
extern MethodInfo m9839_MI;
extern MethodInfo m1117_MI;
extern MethodInfo m11145_MI;
extern MethodInfo m9836_MI;
extern MethodInfo m11143_MI;
extern MethodInfo m9838_MI;
extern MethodInfo m2550_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m6953_MI;
extern MethodInfo m646_MI;

#include "t121.h"

extern MethodInfo m11135_MI;
extern "C" void m11135 (t1492 * __this, MethodInfo* method)
{
	{
		m5812(__this, &m5812_MI);
		return;
	}
}
extern MethodInfo m11136_MI;
extern "C" void m11136 (t9 * __this , MethodInfo* method)
{
	{
		t58 L_0 = m7621(NULL, (-1), &m7621_MI);
		((t1492_SFs*)InitializedTypeInfo(&t1492_TI)->static_fields)->f3 = L_0;
		return;
	}
}
extern MethodInfo m11137_MI;
extern "C" void m11137 (t1492 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m11144_MI, __this, 1);
		m6937(NULL, __this, &m6937_MI);
		return;
	}
}
extern "C" void m11138 (t9 * __this , t2090* p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1492 * V_1 = {0};
	t2090* V_2 = {0};
	int32_t V_3 = 0;
	{
		t2090* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2566, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2090* L_2 = p0;
		V_0 = (((int32_t)(((t121 *)L_2)->max_length)));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0022;
		}
	}
	{
		t169 * L_4 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_4, (t2*) &_stringLiteral2567, &m5776_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		t2090* L_5 = p0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_005b;
	}

IL_0028:
	{
		t2090* L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		V_1 = (*(t1492 **)(t1492 **)SZArrayLdElema(L_6, L_8));
		t1492 * L_9 = V_1;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		t132 * L_10 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m5757(L_10, (t2*) &_stringLiteral2566, (t2*) &_stringLiteral2568, &m5757_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003f:
	{
		t1492 * L_11 = V_1;
		t1603 * L_12 = (L_11->f2);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_13, (t2*) &_stringLiteral2569, (t2*) &_stringLiteral2570, &m5761_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_15 = V_3;
		t2090* L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
extern "C" int32_t m11139 (t9 * __this , t2090* p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef int32_t (*m11139_ftn) (t2090*, int32_t, bool);
	static m11139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11139_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m11140_MI;
extern "C" int32_t m11140 (t9 * __this , t2090* p0, t310  p1, bool p2, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t2090* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1492_TI));
		m11138(NULL, L_0, 0, &m11138_MI);
		double L_1 = m11864((&p1), &m11864_MI);
		V_0 = (((int64_t)L_1));
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) < ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_001e;
		}
	}
	{
		int64_t L_3 = V_0;
		if ((((int64_t)L_3) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_4, (t2*) &_stringLiteral438, &m5763_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			bool L_5 = p2;
			if (!L_5)
			{
				goto IL_0031;
			}
		}

IL_002c:
		{
			m9894(NULL, &m9894_MI);
		}

IL_0031:
		{
			t2090* L_6 = p0;
			int64_t L_7 = V_0;
			bool L_8 = p2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1492_TI));
			int32_t L_9 = m11139(NULL, L_6, (((int32_t)L_7)), L_8, &m11139_MI);
			V_1 = L_9;
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			bool L_10 = p2;
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0042:
		{
			m9895(NULL, &m9895_MI);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0048:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11141_MI;
extern "C" t58 m11141 (t1492 * __this, MethodInfo* method)
{
	{
		t1603 * L_0 = (__this->f2);
		t58 L_1 = m9837(L_0, &m9837_MI);
		return L_1;
	}
}
extern MethodInfo m11142_MI;
extern "C" void m11142 (t1492 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1492_TI));
		t58 L_1 = ((t1492_SFs*)InitializedTypeInfo(&t1492_TI)->static_fields)->f3;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1492_TI));
		t58 L_3 = ((t1492_SFs*)InitializedTypeInfo(&t1492_TI)->static_fields)->f3;
		t1603 * L_4 = (t1603 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1603_TI));
		m7896(L_4, L_3, 0, &m7896_MI);
		__this->f2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		t58 L_5 = p0;
		t1603 * L_6 = (t1603 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1603_TI));
		m7896(L_6, L_5, 1, &m7896_MI);
		__this->f2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
extern "C" bool m11143 (t1492 * __this, t58 p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef bool (*m11143_ftn) (t1492 *, t58, int32_t, bool);
	static m11143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11143_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" void m11144 (t1492 * __this, bool p0, MethodInfo* method)
{
	t1492 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		__this->f4 = 1;
		t1603 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		V_0 = __this;
		t1492 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1603 * L_3 = (__this->f2);
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_0028:
		{
			t1603 * L_4 = (__this->f2);
			VirtActionInvoker0::Invoke(&m9839_MI, L_4);
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		t1492 * L_5 = V_0;
		m1117(NULL, L_5, &m1117_MI);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_003c:
	{
		return;
	}
}
extern MethodInfo m7035_MI;
extern "C" bool m7035 (t1492 * __this, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m11145(__this, &m11145_MI);
		V_0 = 0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1603 * L_0 = (__this->f2);
			m9836(L_0, (&V_0), &m9836_MI);
			t1603 * L_1 = (__this->f2);
			t58 L_2 = m9837(L_1, &m9837_MI);
			bool L_3 = m11143(__this, L_2, (-1), 0, &m11143_MI);
			V_1 = L_3;
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_003b;
			}
		}

IL_0030:
		{
			t1603 * L_5 = (__this->f2);
			m9838(L_5, &m9838_MI);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_003c:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m7067_MI;
extern "C" bool m7067 (t1492 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m11145(__this, &m11145_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_1, (t2*) &_stringLiteral2548, &m5763_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		V_0 = 0;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = p1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			m9894(NULL, &m9894_MI);
		}

IL_001f:
		{
			t1603 * L_3 = (__this->f2);
			m9836(L_3, (&V_0), &m9836_MI);
			t1603 * L_4 = (__this->f2);
			t58 L_5 = m9837(L_4, &m9837_MI);
			int32_t L_6 = p0;
			bool L_7 = p1;
			bool L_8 = m11143(__this, L_5, L_6, L_7, &m11143_MI);
			V_1 = L_8;
			IL2CPP_LEAVE(0x5B, FINALLY_0044);
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			bool L_9 = p1;
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_0047:
		{
			m9895(NULL, &m9895_MI);
		}

IL_004c:
		{
			bool L_10 = V_0;
			if (!L_10)
			{
				goto IL_005a;
			}
		}

IL_004f:
		{
			t1603 * L_11 = (__this->f2);
			m9838(L_11, &m9838_MI);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_005b:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
extern "C" void m11145 (t1492 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		t1603 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0021;
		}
	}

IL_0010:
	{
		t126 * L_2 = m2550(__this, &m2550_MI);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_2);
		t1536 * L_4 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_4, L_3, &m6953_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m11146_MI;
extern "C" void m11146 (t1492 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m11144_MI, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0010:
	{
		return;
	}
}
#include "t2091.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2091_TI;
#include "t2091MD.h"

#include "t1106.h"
#include "t1107.h"
#include "t1597MD.h"
#include "t1375MD.h"
#include "t138MD.h"
extern MethodInfo m7888_MI;
extern MethodInfo m5942_MI;
extern MethodInfo m4499_MI;
extern MethodInfo m11848_MI;


extern MethodInfo m11147_MI;
extern "C" void m11147 (t2091 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2571, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467261), &m4499_MI);
		return;
	}
}
extern MethodInfo m11148_MI;
extern "C" void m11148 (t2091 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2092.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2092_TI;
#include "t2092MD.h"

extern MethodInfo m11152_MI;


extern MethodInfo m11149_MI;
extern "C" void m11149 (t2092 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11150_MI;
extern "C" void m11150 (t2092 * __this, MethodInfo* method)
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
		m11152(__this, 0, &m11152_MI);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0010:
	{
		return;
	}
}
extern MethodInfo m11151_MI;
extern "C" void m11151 (t2092 * __this, MethodInfo* method)
{
	{
		m11152(__this, 1, &m11152_MI);
		m6937(NULL, __this, &m6937_MI);
		return;
	}
}
extern "C" void m11152 (t2092 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = p0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}

IL_000b:
	{
		__this->f0 = 1;
	}

IL_0012:
	{
		return;
	}
}
#include "t1353.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1353_TI;
#include "t1353MD.h"

#include "t939.h"
#include "t931.h"
#include "t907.h"
#include "t833.h"
#include "t328.h"
#include "t920.h"
#include "t940.h"
#include "t2132.h"
#include "t2139.h"
#include "t1579.h"
#include "t127.h"
extern TypeInfo t158_TI;
extern TypeInfo t939_TI;
extern TypeInfo t152_TI;
extern TypeInfo t932_TI;
extern TypeInfo t833_TI;
extern TypeInfo t931_TI;
extern TypeInfo t920_TI;
extern TypeInfo t1812_TI;
extern TypeInfo t941_TI;
extern TypeInfo t940_TI;
extern TypeInfo t328_TI;
extern TypeInfo t2132_TI;
extern TypeInfo t907_TI;
extern TypeInfo t2139_TI;
extern TypeInfo t1579_TI;
#include "t939MD.h"
#include "t2MD.h"
#include "t328MD.h"
#include "t2132MD.h"
#include "t1857MD.h"
#include "t920MD.h"
#include "t833MD.h"
#include "t2139MD.h"
extern Il2CppType t158_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t1593_0_0_0;
extern Il2CppType t1594_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t1592_0_0_0;
extern MethodInfo m5816_MI;
extern MethodInfo m11155_MI;
extern MethodInfo m9549_MI;
extern MethodInfo m11156_MI;
extern MethodInfo m11157_MI;
extern MethodInfo m7843_MI;
extern MethodInfo m511_MI;
extern MethodInfo m12023_MI;
extern MethodInfo m12055_MI;
extern MethodInfo m7803_MI;
extern MethodInfo m11159_MI;
extern MethodInfo m1203_MI;
extern MethodInfo m7840_MI;
extern MethodInfo m1207_MI;
extern MethodInfo m5926_MI;
extern MethodInfo m6031_MI;
extern MethodInfo m1251_MI;
extern MethodInfo m11630_MI;
extern MethodInfo m11158_MI;
extern MethodInfo m7799_MI;
extern MethodInfo m7889_MI;
extern MethodInfo m9846_MI;
extern MethodInfo m12068_MI;
extern MethodInfo m12065_MI;
extern MethodInfo m11654_MI;
extern MethodInfo m4432_MI;
extern MethodInfo m7839_MI;
extern MethodInfo m610_MI;
extern MethodInfo m11632_MI;
extern MethodInfo m4458_MI;
extern MethodInfo m329_MI;
extern MethodInfo m7792_MI;


extern MethodInfo m11153_MI;
extern "C" t9 * m11153 (t9 * __this , t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t9 * L_1 = m5816(NULL, L_0, 0, &m5816_MI);
		return L_1;
	}
}
extern MethodInfo m11154_MI;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m11154 (t9 * __this , t126 * p0, t158* p1, MethodInfo* method)
{
	static bool m11154_init;
	if (!m11154_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11154_init = true;
	}
	{
		t126 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = m11155(NULL, L_0, L_1, ((t158*)SZArrayNew(t158_TI_var, 0)), &m11155_MI);
		return L_2;
	}
}
extern "C" t9 * m11155 (t9 * __this , t126 * p0, t158* p1, t158* p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_1 = m9549(NULL, &m9549_MI);
		t158* L_2 = p1;
		t158* L_3 = p2;
		t9 * L_4 = m11156(NULL, L_0, 0, L_1, L_2, (t907 *)NULL, L_3, &m11156_MI);
		return L_4;
	}
}
extern TypeInfo* t152_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m11156 (t9 * __this , t126 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, t158* p5, MethodInfo* method)
{
	static bool m11156_init;
	if (!m11156_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11156_init = true;
	}
	int32_t V_0 = 0;
	t152* V_1 = {0};
	int32_t V_2 = 0;
	t833 * V_3 = {0};
	t328 * V_4 = {0};
	t126 * V_5 = {0};
	t152* V_6 = {0};
	int32_t V_7 = 0;
	t2* V_8 = {0};
	t9 * V_9 = {0};
	t152* G_B9_0 = {0};
	t328 * G_B23_0 = {0};
	t328 * G_B22_0 = {0};
	t2* G_B24_0 = {0};
	t328 * G_B24_1 = {0};
	{
		t126 * L_0 = p0;
		m11157(NULL, L_0, &m11157_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_3, (t2*) &_stringLiteral2572, &m511_MI);
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_5, L_4, (t2*) &_stringLiteral1105, &m5761_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0024:
	{
		int32_t L_6 = p1;
		if (((int32_t)((int32_t)L_6&(int32_t)((int32_t)127))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = p1;
		p1 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)20)));
	}

IL_0032:
	{
		V_0 = 0;
		t158* L_8 = p3;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		t158* L_9 = p3;
		V_0 = (((int32_t)(((t121 *)L_9)->max_length)));
	}

IL_003b:
	{
		int32_t L_10 = V_0;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_11 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		G_B9_0 = L_11;
		goto IL_004b;
	}

IL_0045:
	{
		int32_t L_12 = V_0;
		G_B9_0 = ((t152*)SZArrayNew(t152_TI_var, L_12));
	}

IL_004b:
	{
		V_1 = G_B9_0;
		V_2 = 0;
		goto IL_0064;
	}

IL_0050:
	{
		t158* L_13 = p3;
		int32_t L_14 = V_2;
		int32_t L_15 = L_14;
		if (!(*(t9 **)(t9 **)SZArrayLdElema(L_13, L_15)))
		{
			goto IL_0060;
		}
	}
	{
		t152* L_16 = V_1;
		int32_t L_17 = V_2;
		t158* L_18 = p3;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		t126 * L_21 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_18, L_20)), &m2550_MI);
		ArrayElementTypeCheck (L_16, L_21);
		*((t126 **)(t126 **)SZArrayLdElema(L_16, L_17)) = (t126 *)L_21;
	}

IL_0060:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0050;
		}
	}
	{
		t939 * L_25 = p2;
		if (L_25)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_26 = m9549(NULL, &m9549_MI);
		p2 = L_26;
	}

IL_0074:
	{
		t939 * L_27 = p2;
		int32_t L_28 = p1;
		t126 * L_29 = p0;
		int32_t L_30 = p1;
		t932* L_31 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m12023_MI, L_29, L_30);
		t152* L_32 = V_1;
		t920 * L_33 = (t920 *)VirtFuncInvoker4< t920 *, int32_t, t1812*, t152*, t941* >::Invoke(&m12055_MI, L_27, L_28, (t1812*)(t1812*)L_31, L_32, (t941*)(t941*)NULL);
		V_3 = ((t833 *)Castclass(L_33, InitializedTypeInfo(&t833_TI)));
		t833 * L_34 = V_3;
		if (L_34)
		{
			goto IL_0125;
		}
	}
	{
		t126 * L_35 = p0;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_35);
		if (!L_36)
		{
			goto IL_00a4;
		}
	}
	{
		t152* L_37 = V_1;
		if ((((int32_t)(((t121 *)L_37)->max_length))))
		{
			goto IL_00a4;
		}
	}
	{
		t126 * L_38 = p0;
		t9 * L_39 = m11159(NULL, L_38, &m11159_MI);
		return L_39;
	}

IL_00a4:
	{
		t328 * L_40 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_40, &m1203_MI);
		V_4 = L_40;
		t152* L_41 = V_1;
		V_6 = L_41;
		V_7 = 0;
		goto IL_00e7;
	}

IL_00b3:
	{
		t152* L_42 = V_6;
		int32_t L_43 = V_7;
		int32_t L_44 = L_43;
		V_5 = (*(t126 **)(t126 **)SZArrayLdElema(L_42, L_44));
		t328 * L_45 = V_4;
		t126 * L_46 = V_5;
		G_B22_0 = L_45;
		if (!L_46)
		{
			G_B23_0 = L_45;
			goto IL_00c9;
		}
	}
	{
		t126 * L_47 = V_5;
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_47);
		G_B24_0 = L_48;
		G_B24_1 = G_B22_0;
		goto IL_00ce;
	}

IL_00c9:
	{
		G_B24_0 = (t2*) &_stringLiteral2573;
		G_B24_1 = G_B23_0;
	}

IL_00ce:
	{
		m1207(G_B24_1, G_B24_0, &m1207_MI);
		t328 * L_49 = V_4;
		m1207(L_49, (t2*) &_stringLiteral384, &m1207_MI);
		int32_t L_50 = V_7;
		V_7 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_00e7:
	{
		int32_t L_51 = V_7;
		t152* L_52 = V_6;
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((t121 *)L_52)->max_length))))))
		{
			goto IL_00b3;
		}
	}
	{
		t328 * L_53 = V_4;
		int32_t L_54 = m5926(L_53, &m5926_MI);
		if ((((int32_t)L_54) <= ((int32_t)2)))
		{
			goto IL_0108;
		}
	}
	{
		t328 * L_55 = V_4;
		t328 * L_56 = L_55;
		int32_t L_57 = m5926(L_56, &m5926_MI);
		m6031(L_56, ((int32_t)((int32_t)L_57-(int32_t)2)), &m6031_MI);
	}

IL_0108:
	{
		t2* L_58 = m7888(NULL, (t2*) &_stringLiteral2574, &m7888_MI);
		t126 * L_59 = p0;
		t2* L_60 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_59);
		t328 * L_61 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_62 = m1251(NULL, L_58, L_60, L_61, &m1251_MI);
		t2132 * L_63 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11630(L_63, L_62, &m11630_MI);
		il2cpp_codegen_raise_exception(L_63);
	}

IL_0125:
	{
		t126 * L_64 = p0;
		m11158(NULL, L_64, &m11158_MI);
		t158* L_65 = p5;
		if (!L_65)
		{
			goto IL_0180;
		}
	}
	{
		t158* L_66 = p5;
		if ((((int32_t)(((int32_t)(((t121 *)L_66)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0180;
		}
	}
	{
		t126 * L_67 = p0;
		bool L_68 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7799_MI, L_67);
		if (L_68)
		{
			goto IL_0161;
		}
	}
	{
		t158* L_69 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_70 = p0;
		t2* L_71 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_70);
		ArrayElementTypeCheck (L_69, L_71);
		*((t9 **)(t9 **)SZArrayLdElema(L_69, 0)) = (t9 *)L_71;
		t2* L_72 = m7889(NULL, (t2*) &_stringLiteral2575, L_69, &m7889_MI);
		V_8 = L_72;
		t2* L_73 = V_8;
		t169 * L_74 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_74, L_73, &m5776_MI);
		il2cpp_codegen_raise_exception(L_74);
	}

IL_0161:
	{
		t126 * L_75 = p0;
		t158* L_76 = p5;
		t9 * L_77 = m9846(NULL, L_75, L_76, &m9846_MI);
		V_9 = L_77;
		t9 * L_78 = V_9;
		if (!L_78)
		{
			goto IL_0180;
		}
	}
	{
		t833 * L_79 = V_3;
		t9 * L_80 = V_9;
		int32_t L_81 = p1;
		t939 * L_82 = p2;
		t158* L_83 = p3;
		t907 * L_84 = p4;
		VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_79, L_80, L_81, L_82, L_83, L_84);
		t9 * L_85 = V_9;
		return L_85;
	}

IL_0180:
	{
		t833 * L_86 = V_3;
		int32_t L_87 = p1;
		t939 * L_88 = p2;
		t158* L_89 = p3;
		t907 * L_90 = p4;
		t9 * L_91 = (t9 *)VirtFuncInvoker4< t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12065_MI, L_86, L_87, L_88, L_89, L_90);
		return L_91;
	}
}
extern "C" t9 * m5816 (t9 * __this , t126 * p0, bool p1, MethodInfo* method)
{
	t833 * V_0 = {0};
	t2139 * V_1 = {0};
	int32_t V_2 = {0};
	{
		t126 * L_0 = p0;
		m11157(NULL, L_0, &m11157_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_3, (t2*) &_stringLiteral2572, &m511_MI);
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_5, L_4, (t2*) &_stringLiteral1105, &m5761_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0024:
	{
		t126 * L_6 = p0;
		m11158(NULL, L_6, &m11158_MI);
		t126 * L_7 = p0;
		V_1 = ((t2139 *)IsInst(L_7, InitializedTypeInfo(&t2139_TI)));
		t2139 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		t2139 * L_9 = V_1;
		t833 * L_10 = m11654(L_9, &m11654_MI);
		V_0 = L_10;
		bool L_11 = p1;
		if (L_11)
		{
			goto IL_004b;
		}
	}
	{
		t833 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t833 * L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4432_MI, L_13);
		if (L_14)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = (t833 *)NULL;
	}

IL_004b:
	{
		goto IL_0068;
	}

IL_004d:
	{
		V_2 = ((int32_t)20);
		bool L_15 = p1;
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16|(int32_t)((int32_t)32)));
	}

IL_0058:
	{
		t126 * L_17 = p0;
		int32_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_19 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		t833 * L_20 = (t833 *)VirtFuncInvoker5< t833 *, int32_t, t939 *, int32_t, t152*, t941* >::Invoke(&m7839_MI, L_17, L_18, (t939 *)NULL, 3, L_19, (t941*)(t941*)NULL);
		V_0 = L_20;
	}

IL_0068:
	{
		t833 * L_21 = V_0;
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		t126 * L_22 = p0;
		bool L_23 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_22);
		if (!L_23)
		{
			goto IL_007a;
		}
	}
	{
		t126 * L_24 = p0;
		t9 * L_25 = m11159(NULL, L_24, &m11159_MI);
		return L_25;
	}

IL_007a:
	{
		t2* L_26 = m7888(NULL, (t2*) &_stringLiteral2576, &m7888_MI);
		t126 * L_27 = p0;
		t2* L_28 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_27);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_29 = m610(NULL, (t2*) &_stringLiteral2577, L_28, &m610_MI);
		t2132 * L_30 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11632(L_30, L_26, L_29, &m11632_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009a:
	{
		t833 * L_31 = V_0;
		t9 * L_32 = m4458(L_31, (t158*)(t158*)NULL, &m4458_MI);
		return L_32;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11157 (t9 * __this , t126 * p0, MethodInfo* method)
{
	static bool m11157_init;
	if (!m11157_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11157_init = true;
	}
	t2* V_0 = {0};
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1105, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1593_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_2) == ((t9*)(t126 *)L_3)))
		{
			goto IL_0042;
		}
	}
	{
		t126 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t1594_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_4) == ((t9*)(t126 *)L_5)))
		{
			goto IL_0042;
		}
	}
	{
		t126 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t122_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_6) == ((t9*)(t126 *)L_7)))
		{
			goto IL_0042;
		}
	}
	{
		t126 * L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t1592_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_8) == ((t9*)(t126 *)L_9))))
		{
			goto IL_0063;
		}
	}

IL_0042:
	{
		t158* L_10 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_11 = p0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 0)) = (t9 *)L_12;
		t2* L_13 = m7889(NULL, (t2*) &_stringLiteral2578, L_10, &m7889_MI);
		V_0 = L_13;
		t2* L_14 = V_0;
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_15, L_14, &m5776_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0063:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11158 (t9 * __this , t126 * p0, MethodInfo* method)
{
	static bool m11158_init;
	if (!m11158_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11158_init = true;
	}
	t2* V_0 = {0};
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7792_MI, L_0);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_4;
		t2* L_5 = m7889(NULL, (t2*) &_stringLiteral2579, L_2, &m7889_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		t2132 * L_7 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11630(L_7, L_6, &m11630_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0029:
	{
		return;
	}
}
extern "C" t9 * m11159 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t9 * (*m11159_ftn) (t126 *);
	static m11159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11159_ftn)il2cpp_codegen_resolve_icall ("System.Activator::CreateInstanceInternal(System.Type)");
	return _il2cpp_icall_func(p0);
}
#include "t2042.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2042_TI;
#include "t2042MD.h"

#include "t1750.h"
#include "t1754.h"
#include "t1757.h"
#include "t1351.h"
#include "t1806.h"
#include "t1726.h"
#include "t1867.h"
#include "t924.h"
extern TypeInfo t1750_TI;
extern TypeInfo t1726_TI;
extern TypeInfo t924_TI;
#include "t1750MD.h"
#include "t1726MD.h"
#include "t924MD.h"
extern MethodInfo m11161_MI;
extern MethodInfo m9137_MI;
extern MethodInfo m11167_MI;
extern MethodInfo m2763_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m11165_MI;
extern MethodInfo m8893_MI;
extern MethodInfo m11594_MI;
extern MethodInfo m11600_MI;
extern MethodInfo m11170_MI;
extern MethodInfo m11160_MI;


extern "C" t2* m11160 (t2042 * __this, MethodInfo* method)
{
	typedef t2* (*m11160_ftn) (t2042 *);
	static m11160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11160_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::getFriendlyName()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2042 * m11161 (t9 * __this , MethodInfo* method)
{
	typedef t2042 * (*m11161_ftn) ();
	static m11161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11161_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::getCurDomain()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11162_MI;
extern "C" t2042 * m11162 (t9 * __this , MethodInfo* method)
{
	{
		t2042 * L_0 = m11161(NULL, &m11161_MI);
		return L_0;
	}
}
extern MethodInfo m11163_MI;
extern "C" t1750 * m11163 (t2042 * __this, t1754 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1754 * L_0 = p0;
		int32_t L_1 = p1;
		t1750 * L_2 = (t1750 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1750_TI));
		m9137(L_2, L_0, (t2*)NULL, L_1, 1, &m9137_MI);
		return L_2;
	}
}
extern MethodInfo m11164_MI;
extern "C" t9 * m11164 (t2042 * __this, MethodInfo* method)
{
	{
		return NULL;
	}
}
extern "C" t1351 * m11165 (t2042 * __this, t2* p0, t1806 * p1, bool p2, MethodInfo* method)
{
	typedef t1351 * (*m11165_ftn) (t2042 *, t2*, t1806 *, bool);
	static m11165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11165_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m11166_MI;
extern "C" t1351 * m11166 (t2042 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1351 * L_1 = m11167(__this, L_0, (t1806 *)NULL, 0, &m11167_MI);
		return L_1;
	}
}
extern "C" t1351 * m11167 (t2042 * __this, t2* p0, t1806 * p1, bool p2, MethodInfo* method)
{
	t1351 * V_0 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2580, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral2581, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		t1806 * L_6 = p1;
		bool L_7 = p2;
		t1351 * L_8 = m11165(__this, L_5, L_6, L_7, &m11165_MI);
		V_0 = L_8;
		t1351 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_10 = p0;
		t1726 * L_11 = (t1726 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1726_TI));
		m8893(L_11, (t2*)NULL, L_10, &m8893_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0036:
	{
		t1351 * L_12 = V_0;
		return L_12;
	}
}
extern MethodInfo m11168_MI;
extern "C" t1867 * m11168 (t9 * __this , MethodInfo* method)
{
	typedef t1867 * (*m11168_ftn) ();
	static m11168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11168_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetContext()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11169_MI;
extern "C" t1867 * m11169 (t9 * __this , MethodInfo* method)
{
	typedef t1867 * (*m11169_ftn) ();
	static m11169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11169_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetDefaultContext()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11170 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t2* (*m11170_ftn) (t2*);
	static m11170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11170_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetProcessGuid(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m11171_MI;
extern "C" t2* m11171 (t9 * __this , MethodInfo* method)
{
	t924  V_0 = {0};
	{
		t2* L_0 = ((t2042_SFs*)InitializedTypeInfo(&t2042_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		t924  L_1 = m11594(NULL, &m11594_MI);
		V_0 = L_1;
		t2* L_2 = m11600((&V_0), &m11600_MI);
		t2* L_3 = m11170(NULL, L_2, &m11170_MI);
		((t2042_SFs*)InitializedTypeInfo(&t2042_TI)->static_fields)->f2 = L_3;
	}

IL_001e:
	{
		t2* L_4 = ((t2042_SFs*)InitializedTypeInfo(&t2042_TI)->static_fields)->f2;
		return L_4;
	}
}
extern MethodInfo m11172_MI;
extern "C" t2* m11172 (t2042 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11160(__this, &m11160_MI);
		return L_0;
	}
}
#include "t2093.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2093_TI;
#include "t2093MD.h"



#include "t2099.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2099_TI;
#include "t2099MD.h"

extern MethodInfo m336_MI;


extern MethodInfo m11173_MI;
extern "C" void m11173 (t2099 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t2102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2102_TI;
#include "t2102MD.h"

extern MethodInfo m379_MI;
extern MethodInfo m7070_MI;


extern MethodInfo m11174_MI;
extern "C" void m11174 (t2102 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2582, &m7888_MI);
		m379(__this, L_0, &m379_MI);
		m4499(__this, ((int32_t)-2146232832), &m4499_MI);
		return;
	}
}
extern MethodInfo m11175_MI;
extern "C" void m11175 (t2102 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		m4499(__this, ((int32_t)-2146232832), &m4499_MI);
		return;
	}
}
extern MethodInfo m11176_MI;
extern "C" void m11176 (t2102 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m7070(__this, L_0, L_1, &m7070_MI);
		return;
	}
}
#include "t2094.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2094_TI;
#include "t2094MD.h"



extern MethodInfo m11177_MI;
extern "C" void m11177 (t2094 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11178_MI;
extern "C" t2* m11178 (t2094 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t138.h"
extern TypeInfo t138_TI;
extern TypeInfo t1106_TI;
extern TypeInfo t1107_TI;
#include "t899MD.h"
#include "t1106MD.h"
extern MethodInfo m11182_MI;
extern MethodInfo m1131_MI;
extern MethodInfo m5845_MI;
extern MethodInfo m4485_MI;
extern MethodInfo m11849_MI;
extern MethodInfo m5782_MI;
extern MethodInfo m4539_MI;
extern MethodInfo m5785_MI;


extern MethodInfo m11179_MI;
extern "C" void m11179 (t570 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2584, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147024809), &m4499_MI);
		return;
	}
}
extern "C" void m2949 (t570 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147024809), &m4499_MI);
		return;
	}
}
extern MethodInfo m5897_MI;
extern "C" void m5897 (t570 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11849(__this, L_0, L_1, &m11849_MI);
		m4499(__this, ((int32_t)-2147024809), &m4499_MI);
		return;
	}
}
extern "C" void m5761 (t570 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		t2* L_1 = p1;
		__this->f12 = L_1;
		m4499(__this, ((int32_t)-2147024809), &m4499_MI);
		return;
	}
}
extern MethodInfo m11180_MI;
extern "C" void m11180 (t570 * __this, t2* p0, t2* p1, t138 * p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p2;
		m11849(__this, L_0, L_1, &m11849_MI);
		t2* L_2 = p1;
		__this->f12 = L_2;
		m4499(__this, ((int32_t)-2147024809), &m4499_MI);
		return;
	}
}
extern MethodInfo m11181_MI;
extern "C" void m11181 (t570 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral2585, &m5782_MI);
		__this->f12 = L_3;
		return;
	}
}
extern "C" t2* m11182 (t570 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m11183_MI;
extern "C" t2* m11183 (t570 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11182_MI, __this);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11182_MI, __this);
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_3 = m1131(__this, &m1131_MI);
		t2* L_4 = m5845(NULL, &m5845_MI);
		t2* L_5 = m7888(NULL, (t2*) &_stringLiteral2583, &m7888_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11182_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m4485(NULL, L_3, L_4, L_5, L_6, &m4485_MI);
		return L_7;
	}

IL_0036:
	{
		t2* L_8 = m1131(__this, &m1131_MI);
		return L_8;
	}
}
extern MethodInfo m11184_MI;
extern "C" void m11184 (t570 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m4539(__this, L_0, L_1, &m4539_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11182_MI, __this);
		m5785(L_2, (t2*) &_stringLiteral2585, L_3, &m5785_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11185_MI;
extern "C" void m11185 (t132 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2586, &m7888_MI);
		m2949(__this, L_0, &m2949_MI);
		m4499(__this, ((int32_t)-2147467261), &m4499_MI);
		return;
	}
}
extern "C" void m339 (t132 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2586, &m7888_MI);
		t2* L_1 = p0;
		m5761(__this, L_0, L_1, &m5761_MI);
		m4499(__this, ((int32_t)-2147467261), &m4499_MI);
		return;
	}
}
extern "C" void m5757 (t132 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t2* L_1 = p0;
		m5761(__this, L_0, L_1, &m5761_MI);
		m4499(__this, ((int32_t)-2147467261), &m4499_MI);
		return;
	}
}
extern MethodInfo m11186_MI;
extern "C" void m11186 (t132 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11181(__this, L_0, L_1, &m11181_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2459_MI;


extern MethodInfo m5940_MI;
extern "C" void m5940 (t909 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2587, &m7888_MI);
		m2949(__this, L_0, &m2949_MI);
		m4499(__this, ((int32_t)-2146233086), &m4499_MI);
		return;
	}
}
extern "C" void m5763 (t909 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2587, &m7888_MI);
		t2* L_1 = p0;
		m5761(__this, L_0, L_1, &m5761_MI);
		m4499(__this, ((int32_t)-2146233086), &m4499_MI);
		return;
	}
}
extern MethodInfo m4402_MI;
extern "C" void m4402 (t909 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t2* L_1 = p0;
		m5761(__this, L_0, L_1, &m5761_MI);
		m4499(__this, ((int32_t)-2146233086), &m4499_MI);
		return;
	}
}
extern MethodInfo m11187_MI;
extern "C" void m11187 (t909 * __this, t2* p0, t9 * p1, t2* p2, MethodInfo* method)
{
	{
		t2* L_0 = p2;
		t2* L_1 = p0;
		m5761(__this, L_0, L_1, &m5761_MI);
		t9 * L_2 = p1;
		__this->f13 = L_2;
		m4499(__this, ((int32_t)-2146233086), &m4499_MI);
		return;
	}
}
extern MethodInfo m11188_MI;
extern "C" void m11188 (t909 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11181(__this, L_0, L_1, &m11181_MI);
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral2588, &m5782_MI);
		__this->f13 = L_3;
		return;
	}
}
extern MethodInfo m11189_MI;
extern "C" t2* m11189 (t909 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = m11183(__this, &m11183_MI);
		V_0 = L_0;
		t9 * L_1 = (__this->f13);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		t2* L_2 = V_0;
		return L_2;
	}

IL_0011:
	{
		t2* L_3 = V_0;
		t2* L_4 = m5845(NULL, &m5845_MI);
		t9 * L_5 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m2459(NULL, L_3, L_4, L_5, &m2459_MI);
		return L_6;
	}
}
extern MethodInfo m11190_MI;
extern "C" void m11190 (t909 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11184(__this, L_0, L_1, &m11184_MI);
		t1106 * L_2 = p0;
		t9 * L_3 = (__this->f13);
		m5785(L_2, (t2*) &_stringLiteral2588, L_3, &m5785_MI);
		return;
	}
}
#include "t1530.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1530_TI;
#include "t1530MD.h"



extern MethodInfo m11191_MI;
extern "C" void m11191 (t1530 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2589, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147024362), &m4499_MI);
		return;
	}
}
extern MethodInfo m6928_MI;
extern "C" void m6928 (t1530 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147024362), &m4499_MI);
		return;
	}
}
extern MethodInfo m11192_MI;
extern "C" void m11192 (t1530 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2103_TI;
#include "t2103MD.h"



extern MethodInfo m11193_MI;
extern "C" void m11193 (t2103 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2590, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233085), &m4499_MI);
		return;
	}
}
extern MethodInfo m11194_MI;
extern "C" void m11194 (t2103 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233085), &m4499_MI);
		return;
	}
}
extern MethodInfo m11195_MI;
extern "C" void m11195 (t2103 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2104_TI;
#include "t2104MD.h"



#include "t1564.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1564_TI;
#include "t1564MD.h"



#include "t1349.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1349_TI;
#include "t1349MD.h"

#include "t582.h"
#include "t309.h"
extern TypeInfo t737_TI;
extern TypeInfo t582_TI;
extern Il2CppType t737_0_0_0;
extern MethodInfo m11198_MI;
extern MethodInfo m11197_MI;
extern MethodInfo m11203_MI;
extern MethodInfo m11205_MI;
extern MethodInfo m11202_MI;
extern MethodInfo m11206_MI;
extern MethodInfo m11201_MI;
extern MethodInfo m11204_MI;
extern MethodInfo m11207_MI;
extern MethodInfo m4396_MI;
extern MethodInfo m2797_MI;
extern MethodInfo m1209_MI;


extern MethodInfo m11196_MI;
extern "C" void m11196 (t9 * __this , MethodInfo* method)
{
	{
		bool L_0 = m11198(NULL, &m11198_MI);
		((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f0 = L_0;
		bool L_1 = m11197(NULL, &m11197_MI);
		((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1 = L_1;
		return;
	}
}
extern "C" bool m11197 (t9 * __this , MethodInfo* method)
{
	double V_0 = 0.0;
	uint8_t* V_1 = {0};
	{
		V_0 = (1.0);
		V_1 = (uint8_t*)(&V_0);
		uint8_t* L_0 = V_1;
		return ((((int32_t)(*((uint8_t*)L_0))) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11198 (t9 * __this , MethodInfo* method)
{
	double V_0 = 0.0;
	uint8_t* V_1 = {0};
	{
		V_0 = (1.0);
		V_1 = (uint8_t*)(&V_0);
		uint8_t* L_0 = V_1;
		return ((((int32_t)(*((uint8_t*)((intptr_t)((intptr_t)L_0+(int32_t)2))))) == ((int32_t)((int32_t)240)))? 1 : 0);
	}
}
extern MethodInfo m11199_MI;
extern "C" int64_t m11199 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		t737* L_1 = m11203(NULL, L_0, &m11203_MI);
		int64_t L_2 = m11205(NULL, L_1, 0, &m11205_MI);
		return L_2;
	}
}
extern MethodInfo m11200_MI;
extern "C" double m11200 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		t737* L_1 = m11202(NULL, L_0, &m11202_MI);
		double L_2 = m11206(NULL, L_1, 0, &m11206_MI);
		return L_2;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m11201 (t9 * __this , uint8_t* p0, int32_t p1, MethodInfo* method)
{
	static bool m11201_init;
	if (!m11201_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m11201_init = true;
	}
	t737* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((t737*)SZArrayNew(t737_TI_var, L_0));
		V_1 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		t737* L_1 = V_0;
		int32_t L_2 = V_1;
		uint8_t* L_3 = p0;
		int32_t L_4 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_3+(int32_t)L_4))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = p1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		t737* L_8 = V_0;
		return L_8;
	}
}
extern "C" t737* m11202 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		t737* L_0 = m11201(NULL, (uint8_t*)(uint8_t*)(&p0), 8, &m11201_MI);
		return L_0;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m11203 (t9 * __this , double p0, MethodInfo* method)
{
	static bool m11203_init;
	if (!m11203_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m11203_init = true;
	}
	t737* V_0 = {0};
	uint8_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		V_0 = ((t737*)SZArrayNew(t737_TI_var, 8));
		V_1 = (uint8_t*)(&p0);
		t737* L_1 = V_0;
		uint8_t* L_2 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_2+(int32_t)4))));
		t737* L_3 = V_0;
		uint8_t* L_4 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)5))));
		t737* L_5 = V_0;
		uint8_t* L_6 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)6))));
		t737* L_7 = V_0;
		uint8_t* L_8 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)7))));
		t737* L_9 = V_0;
		uint8_t* L_10 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 4)) = (uint8_t)(*((uint8_t*)L_10));
		t737* L_11 = V_0;
		uint8_t* L_12 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)1))));
		t737* L_13 = V_0;
		uint8_t* L_14 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)2))));
		t737* L_15 = V_0;
		uint8_t* L_16 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 7)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)3))));
		t737* L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		t737* L_18 = m11201(NULL, (uint8_t*)(uint8_t*)(&p0), 8, &m11201_MI);
		return L_18;
	}
}
extern "C" void m11204 (t9 * __this , uint8_t* p0, t737* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t737* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral607, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = p2;
		t737* L_4 = p1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1)))))
		{
			goto IL_002a;
		}
	}

IL_001a:
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_5, (t2*) &_stringLiteral1113, (t2*) &_stringLiteral2591, &m4402_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t737* L_6 = p1;
		int32_t L_7 = p3;
		int32_t L_8 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, (t2*) &_stringLiteral2592, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003d:
	{
		V_0 = 0;
		goto IL_004e;
	}

IL_0041:
	{
		uint8_t* L_10 = p0;
		int32_t L_11 = V_0;
		t737* L_12 = p1;
		int32_t L_13 = V_0;
		int32_t L_14 = p2;
		int32_t L_15 = ((int32_t)((int32_t)L_13+(int32_t)L_14));
		*((int8_t*)(((intptr_t)((intptr_t)L_10+(int32_t)L_11)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_15));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = p3;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0041;
		}
	}
	{
		return;
	}
}
extern "C" int64_t m11205 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		t737* L_0 = p0;
		int32_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		m11204(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, 8, &m11204_MI);
		int64_t L_2 = V_0;
		return L_2;
	}
}
extern "C" double m11206 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	double V_0 = 0.0;
	uint8_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0090;
		}
	}
	{
		V_1 = (uint8_t*)(&V_0);
		t737* L_1 = p0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, (t2*) &_stringLiteral607, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		int32_t L_3 = p1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = p1;
		t737* L_5 = p0;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)1)))))
		{
			goto IL_0037;
		}
	}

IL_0027:
	{
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_6, (t2*) &_stringLiteral1113, (t2*) &_stringLiteral2591, &m4402_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0037:
	{
		t737* L_7 = p0;
		int32_t L_8 = p1;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)8))) >= ((int32_t)L_8)))
		{
			goto IL_004a;
		}
	}
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, (t2*) &_stringLiteral2592, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		uint8_t* L_10 = V_1;
		t737* L_11 = p0;
		int32_t L_12 = p1;
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)4));
		*((int8_t*)(L_10)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_13));
		uint8_t* L_14 = V_1;
		t737* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)5));
		*((int8_t*)(((intptr_t)((intptr_t)L_14+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_17));
		uint8_t* L_18 = V_1;
		t737* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = ((int32_t)((int32_t)L_20+(int32_t)6));
		*((int8_t*)(((intptr_t)((intptr_t)L_18+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_21));
		uint8_t* L_22 = V_1;
		t737* L_23 = p0;
		int32_t L_24 = p1;
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)7));
		*((int8_t*)(((intptr_t)((intptr_t)L_22+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25));
		uint8_t* L_26 = V_1;
		t737* L_27 = p0;
		int32_t L_28 = p1;
		int32_t L_29 = L_28;
		*((int8_t*)(((intptr_t)((intptr_t)L_26+(int32_t)4)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_29));
		uint8_t* L_30 = V_1;
		t737* L_31 = p0;
		int32_t L_32 = p1;
		int32_t L_33 = ((int32_t)((int32_t)L_32+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_30+(int32_t)5)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_31, L_33));
		uint8_t* L_34 = V_1;
		t737* L_35 = p0;
		int32_t L_36 = p1;
		int32_t L_37 = ((int32_t)((int32_t)L_36+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_34+(int32_t)6)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_35, L_37));
		uint8_t* L_38 = V_1;
		t737* L_39 = p0;
		int32_t L_40 = p1;
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)3));
		*((int8_t*)(((intptr_t)((intptr_t)L_38+(int32_t)7)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41));
		double L_42 = V_0;
		return L_42;
	}

IL_0090:
	{
		t737* L_43 = p0;
		int32_t L_44 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		m11204(NULL, (uint8_t*)(uint8_t*)(&V_0), L_43, L_44, 8, &m11204_MI);
		double L_45 = V_0;
		return L_45;
	}
}
extern MethodInfo m7019_MI;
extern "C" t2* m7019 (t9 * __this , t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral607, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t737* L_2 = p0;
		t737* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		t2* L_4 = m11207(NULL, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m11207_MI);
		return L_4;
	}
}
extern "C" t2* m11207 (t9 * __this , t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2593, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = p1;
		t737* L_4 = p0;
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_0018:
	{
		int32_t L_5 = p1;
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		t737* L_6 = p0;
		if ((((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_7;
	}

IL_0026:
	{
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_8, (t2*) &_stringLiteral1113, (t2*) &_stringLiteral2591, &m4402_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0036:
	{
		int32_t L_9 = p2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		t909 * L_10 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_10, (t2*) &_stringLiteral1114, (t2*) &_stringLiteral2594, &m4402_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004a:
	{
		int32_t L_11 = p1;
		t737* L_12 = p0;
		int32_t L_13 = p2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)L_13)))))
		{
			goto IL_005d;
		}
	}
	{
		t570 * L_14 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_14, (t2*) &_stringLiteral2595, &m2949_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005d:
	{
		int32_t L_15 = p2;
		if (L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_16;
	}

IL_0066:
	{
		int32_t L_17 = p2;
		t328 * L_18 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_18, ((int32_t)((int32_t)((int32_t)((int32_t)L_17*(int32_t)3))-(int32_t)1)), &m4396_MI);
		V_0 = L_18;
		int32_t L_19 = p1;
		int32_t L_20 = p2;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)L_20));
		int32_t L_21 = p1;
		V_2 = L_21;
		goto IL_00e7;
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = p1;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0086;
		}
	}
	{
		t328 * L_24 = V_0;
		m2797(L_24, ((int32_t)45), &m2797_MI);
	}

IL_0086:
	{
		t737* L_25 = p0;
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		V_3 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_27))>>(int32_t)4))&(int32_t)((int32_t)15)))));
		t737* L_28 = p0;
		int32_t L_29 = V_2;
		int32_t L_30 = L_29;
		V_4 = (((uint16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_30))&(int32_t)((int32_t)15)))));
		uint16_t L_31 = V_3;
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_32 = V_3;
		V_3 = (((uint16_t)((int32_t)((int32_t)L_32+(int32_t)((int32_t)48)))));
		goto IL_00b2;
	}

IL_00a6:
	{
		uint16_t L_33 = V_3;
		V_3 = (((uint16_t)((int32_t)((int32_t)L_33-(int32_t)((int32_t)10)))));
		uint16_t L_34 = V_3;
		V_3 = (((uint16_t)((int32_t)((int32_t)L_34+(int32_t)((int32_t)65)))));
	}

IL_00b2:
	{
		uint16_t L_35 = V_4;
		if ((((int32_t)L_35) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00c2;
		}
	}
	{
		uint16_t L_36 = V_4;
		V_4 = (((uint16_t)((int32_t)((int32_t)L_36+(int32_t)((int32_t)48)))));
		goto IL_00d2;
	}

IL_00c2:
	{
		uint16_t L_37 = V_4;
		V_4 = (((uint16_t)((int32_t)((int32_t)L_37-(int32_t)((int32_t)10)))));
		uint16_t L_38 = V_4;
		V_4 = (((uint16_t)((int32_t)((int32_t)L_38+(int32_t)((int32_t)65)))));
	}

IL_00d2:
	{
		t328 * L_39 = V_0;
		uint16_t L_40 = V_3;
		m2797(L_39, L_40, &m2797_MI);
		t328 * L_41 = V_0;
		uint16_t L_42 = V_4;
		m2797(L_41, L_42, &m2797_MI);
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00e7:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0079;
		}
	}
	{
		t328 * L_46 = V_0;
		t2* L_47 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_46);
		return L_47;
	}
}
#include "t1360.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1360_TI;
#include "t1360MD.h"

extern MethodInfo m11209_MI;
extern MethodInfo m11210_MI;
extern MethodInfo m11208_MI;


extern "C" int32_t m11208 (t9 * __this , t121 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m11209(NULL, L_2, &m11209_MI);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = m7888(NULL, (t2*) &_stringLiteral2596, &m7888_MI);
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, L_5, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m5834_MI;
extern "C" void m5834 (t9 * __this , t121 * p0, int32_t p1, t121 * p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	bool V_0 = false;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2597, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral2598, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		t2* L_5 = m7888(NULL, (t2*) &_stringLiteral1147, &m7888_MI);
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_6, (t2*) &_stringLiteral2599, L_5, &m4402_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		int32_t L_7 = p3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		t2* L_8 = m7888(NULL, (t2*) &_stringLiteral1147, &m7888_MI);
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_9, (t2*) &_stringLiteral2600, L_8, &m4402_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004e:
	{
		int32_t L_10 = p4;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		t2* L_11 = m7888(NULL, (t2*) &_stringLiteral1147, &m7888_MI);
		t909 * L_12 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_12, (t2*) &_stringLiteral489, L_11, &m4402_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0068:
	{
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		t121 * L_15 = p2;
		int32_t L_16 = p3;
		int32_t L_17 = p4;
		bool L_18 = m11210(NULL, L_13, L_14, L_15, L_16, L_17, &m11210_MI);
		V_0 = L_18;
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_20 = p1;
		t121 * L_21 = p0;
		int32_t L_22 = m11208(NULL, L_21, &m11208_MI);
		int32_t L_23 = p4;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)((int32_t)L_22-(int32_t)L_23)))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_24 = p3;
		t121 * L_25 = p2;
		int32_t L_26 = m11208(NULL, L_25, &m11208_MI);
		int32_t L_27 = p4;
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)((int32_t)L_26-(int32_t)L_27)))))
		{
			goto IL_009f;
		}
	}

IL_008f:
	{
		t2* L_28 = m7888(NULL, (t2*) &_stringLiteral2601, &m7888_MI);
		t570 * L_29 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_29, L_28, &m2949_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009f:
	{
		return;
	}
}
extern "C" int32_t m11209 (t9 * __this , t121 * p0, MethodInfo* method)
{
	typedef int32_t (*m11209_ftn) (t121 *);
	static m11209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11209_ftn)il2cpp_codegen_resolve_icall ("System.Buffer::ByteLengthInternal(System.Array)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m11210 (t9 * __this , t121 * p0, int32_t p1, t121 * p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	typedef bool (*m11210_ftn) (t121 *, int32_t, t121 *, int32_t, int32_t);
	static m11210_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11210_ftn)il2cpp_codegen_resolve_icall ("System.Buffer::BlockCopyInternal(System.Array,System.Int32,System.Array,System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
#include "t2105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2105_TI;
#include "t2105MD.h"

#include "t1347.h"
extern TypeInfo t309_TI;
extern TypeInfo t1347_TI;
#include "t1347MD.h"
extern MethodInfo m11214_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m2778_MI;


extern MethodInfo m11211_MI;
extern "C" void m11211 (t2105 * __this, t2* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = (-1);
		t2* L_1 = p0;
		int32_t L_2 = m2763(L_1, &m2763_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m11212_MI;
extern "C" t9 * m11212 (t2105 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&m11214_MI, __this);
		uint16_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t309_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m11213_MI;
extern "C" void m11213 (t2105 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" uint16_t m11214 (t2105 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0027;
		}
	}

IL_0017:
	{
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral2602, &m7888_MI);
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_4, L_3, &m5755_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t2* L_5 = (__this->f0);
		int32_t L_6 = (__this->f1);
		uint16_t L_7 = m2778(L_5, L_6, &m2778_MI);
		return L_7;
	}
}
extern MethodInfo m11215_MI;
extern "C" bool m11215 (t2105 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		__this->f1 = L_3;
		return 0;
	}

IL_002a:
	{
		return 1;
	}
}
#include "t1377.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1377_TI;
#include "t1377MD.h"

#include "t1376.h"
#include "t736.h"
#include "t302.h"
#include "t1747.h"
#include "t1741.h"
#include "t1746.h"
#include "t1671.h"
#include "t1193.h"
#include "t300.h"
#include "t1738.h"
extern TypeInfo t736_TI;
extern TypeInfo t1747_TI;
extern TypeInfo t1741_TI;
extern TypeInfo t1376_TI;
extern TypeInfo t1746_TI;
extern TypeInfo t1671_TI;
extern TypeInfo t300_TI;
extern TypeInfo t1738_TI;
extern TypeInfo t1555_TI;
extern TypeInfo t1734_TI;
#include "t736MD.h"
#include "t1747MD.h"
#include "t1741MD.h"
#include "t1376MD.h"
#include "t1746MD.h"
#include "t1671MD.h"
#include "t300MD.h"
#include "t1738MD.h"
#include "t1734MD.h"
extern MethodInfo m11570_MI;
extern MethodInfo m10902_MI;
extern MethodInfo m10901_MI;
extern MethodInfo m10904_MI;
extern MethodInfo m11217_MI;
extern MethodInfo m11219_MI;
extern MethodInfo m9131_MI;
extern MethodInfo m9061_MI;
extern MethodInfo m9108_MI;
extern MethodInfo m11221_MI;
extern MethodInfo m11220_MI;
extern MethodInfo m9123_MI;
extern MethodInfo m9091_MI;
extern MethodInfo m8906_MI;
extern MethodInfo m9011_MI;
extern MethodInfo m8985_MI;
extern MethodInfo m11218_MI;
extern MethodInfo m8984_MI;
extern MethodInfo m8983_MI;


extern MethodInfo m11216_MI;
extern "C" void m11216 (t9 * __this , MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = m11570(NULL, &m11570_MI);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_1 = m10902(NULL, &m10902_MI);
		t736 * L_2 = L_1;
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f4 = L_2;
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f3 = L_2;
		goto IL_005c;
	}

IL_0019:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		m10901(NULL, (&V_0), &m10901_MI);
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)268435455)))) == ((int32_t)3)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = V_0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)268435456))))
		{
			goto IL_004c;
		}
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_6 = m10904(NULL, &m10904_MI);
		t736 * L_7 = L_6;
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f4 = L_7;
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f3 = L_7;
		goto IL_005c;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_8 = m10902(NULL, &m10902_MI);
		t736 * L_9 = L_8;
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f4 = L_9;
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f3 = L_9;
	}

IL_005c:
	{
		t736 * L_10 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f3;
		t736 * L_11 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f4;
		m11217(NULL, L_10, L_11, &m11217_MI);
		return;
	}
}
extern "C" void m11217 (t9 * __this , t736 * p0, t736 * p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1377_TI));
		t302 * L_0 = m11219(NULL, 0, &m11219_MI);
		t736 * L_1 = p1;
		t1747 * L_2 = (t1747 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1747_TI));
		m9131(L_2, L_0, L_1, &m9131_MI);
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f1 = L_2;
		t1376 * L_3 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f1;
		VirtActionInvoker1< bool >::Invoke(&m9061_MI, ((t1741 *)Castclass(L_3, InitializedTypeInfo(&t1741_TI))), 1);
		t1376 * L_4 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1376_TI));
		t1376 * L_5 = m9108(NULL, L_4, 1, &m9108_MI);
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f1 = L_5;
		t302 * L_6 = m11221(NULL, 0, &m11221_MI);
		t736 * L_7 = p1;
		t1747 * L_8 = (t1747 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1747_TI));
		m9131(L_8, L_6, L_7, &m9131_MI);
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f0 = L_8;
		t1376 * L_9 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f0;
		VirtActionInvoker1< bool >::Invoke(&m9061_MI, ((t1741 *)Castclass(L_9, InitializedTypeInfo(&t1741_TI))), 1);
		t1376 * L_10 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f0;
		t1376 * L_11 = m9108(NULL, L_10, 1, &m9108_MI);
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f0 = L_11;
		t302 * L_12 = m11220(NULL, 0, &m11220_MI);
		t736 * L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1746_TI));
		t1746 * L_14 = (t1746 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1746_TI));
		m9123(L_14, L_12, L_13, &m9123_MI);
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f2 = L_14;
		t1671 * L_15 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1671_TI));
		t1671 * L_16 = m9091(NULL, L_15, &m9091_MI);
		((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f2 = L_16;
		t1376 * L_17 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f0;
		m6937(NULL, L_17, &m6937_MI);
		t1376 * L_18 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f1;
		m6937(NULL, L_18, &m6937_MI);
		t1671 * L_19 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f2;
		m6937(NULL, L_19, &m6937_MI);
		return;
	}
}
extern MethodInfo m5989_MI;
extern "C" t1376 * m5989 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1377_TI));
		t1376 * L_0 = ((t1377_SFs*)InitializedTypeInfo(&t1377_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t302 * m11218 (t9 * __this , t58 p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t302 * V_0 = {0};
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
			t58 L_0 = p0;
			int32_t L_1 = p1;
			int32_t L_2 = p2;
			int32_t L_3 = p2;
			t300 * L_4 = (t300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t300_TI));
			m8906(L_4, L_0, L_1, 0, L_2, 0, ((((int32_t)L_3) == ((int32_t)0))? 1 : 0), &m8906_MI);
			V_0 = L_4;
			goto IL_001e;
		}

IL_0011:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1555_TI, e.ex->object.klass))
			goto CATCH_0013;
		throw e;
	}

CATCH_0013:
	{ // begin catch(System.IO.IOException)
		{
			t1738 * L_5 = (t1738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1738_TI));
			m9011(L_5, &m9011_MI);
			V_0 = L_5;
			goto IL_001e;
		}

IL_001c:
		{
			goto IL_001e;
		}
	} // end catch (depth: 1)

IL_001e:
	{
		t302 * L_6 = V_0;
		return L_6;
	}
}
extern "C" t302 * m11219 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_0 = m8985(NULL, &m8985_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1377_TI));
		t302 * L_2 = m11218(NULL, L_0, 2, L_1, &m11218_MI);
		return L_2;
	}
}
extern "C" t302 * m11220 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_0 = m8984(NULL, &m8984_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1377_TI));
		t302 * L_2 = m11218(NULL, L_0, 1, L_1, &m11218_MI);
		return L_2;
	}
}
extern "C" t302 * m11221 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_0 = m8983(NULL, &m8983_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1377_TI));
		t302 * L_2 = m11218(NULL, L_0, 2, L_1, &m11218_MI);
		return L_2;
	}
}
#include "t2106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2106_TI;
#include "t2106MD.h"



extern MethodInfo m11222_MI;
extern "C" void m11222 (t2106 * __this, MethodInfo* method)
{
	{
		m5812(__this, &m5812_MI);
		return;
	}
}
#include "t305.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t305_TI;
#include "t305MD.h"

#include "t2107.h"
#include "t2047.h"
#include "t910.h"
#include "t123.h"
#include "t186.h"
#include "t341.h"
#include "t168.h"
#include "t896.h"
#include "t315.h"
#include "t2145.h"
#include "t2128.h"
#include "t272.h"
#include "t1710.h"
#include "t1561.h"
extern TypeInfo t2107_TI;
extern TypeInfo t2047_TI;
extern TypeInfo t910_TI;
extern TypeInfo t184_TI;
extern TypeInfo t912_TI;
extern TypeInfo t2145_TI;
extern TypeInfo t2128_TI;
extern TypeInfo t272_TI;
extern TypeInfo t156_TI;
extern TypeInfo t341_TI;
extern TypeInfo t125_TI;
extern TypeInfo t303_TI;
extern TypeInfo t186_TI;
extern TypeInfo t123_TI;
extern TypeInfo t315_TI;
extern TypeInfo t168_TI;
extern TypeInfo t896_TI;
extern TypeInfo t1710_TI;
extern TypeInfo t1561_TI;
#include "t2107MD.h"
#include "t2020MD.h"
#include "t2047MD.h"
#include "t910MD.h"
#include "t124MD.h"
#include "t2145MD.h"
#include "t160MD.h"
#include "t156MD.h"
#include "t123MD.h"
#include "t582MD.h"
#include "t2128MD.h"
#include "t309MD.h"
#include "t272MD.h"
#include "t341MD.h"
#include "t125MD.h"
#include "t303MD.h"
#include "t186MD.h"
#include "t315MD.h"
#include "t168MD.h"
#include "t896MD.h"
#include "t907MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t2107_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t186_0_0_0;
extern Il2CppType t582_0_0_0;
extern Il2CppType t341_0_0_0;
extern Il2CppType t315_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t896_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t156_0_0_0;
extern Il2CppType t910_0_0_0;
extern Il2CppType t272_0_0_0;
extern Il2CppType t2_0_0_0;
extern MethodInfo m11224_MI;
extern MethodInfo m11225_MI;
extern MethodInfo m10685_MI;
extern MethodInfo m10801_MI;
extern MethodInfo m5870_MI;
extern MethodInfo m7503_MI;
extern MethodInfo m7583_MI;
extern MethodInfo m7608_MI;
extern MethodInfo m11237_MI;
extern MethodInfo m12159_MI;
extern MethodInfo m11822_MI;
extern MethodInfo m7585_MI;
extern MethodInfo m7586_MI;
extern MethodInfo m11612_MI;
extern MethodInfo m7563_MI;
extern MethodInfo m7492_MI;
extern MethodInfo m7491_MI;
extern MethodInfo m4304_MI;
extern MethodInfo m7464_MI;
extern MethodInfo m7463_MI;
extern MethodInfo m7250_MI;
extern MethodInfo m7248_MI;
extern MethodInfo m12160_MI;
extern MethodInfo m11605_MI;
extern MethodInfo m7361_MI;
extern MethodInfo m12161_MI;
extern MethodInfo m11486_MI;
extern MethodInfo m12162_MI;
extern MethodInfo m7575_MI;
extern MethodInfo m7571_MI;
extern MethodInfo m7580_MI;
extern MethodInfo m7579_MI;
extern MethodInfo m7577_MI;
extern MethodInfo m7572_MI;
extern MethodInfo m7573_MI;
extern MethodInfo m7541_MI;
extern MethodInfo m7576_MI;
extern MethodInfo m7578_MI;
extern MethodInfo m7574_MI;
extern MethodInfo m12163_MI;
extern MethodInfo m7582_MI;
extern MethodInfo m7495_MI;
extern MethodInfo m12164_MI;
extern MethodInfo m7565_MI;
extern MethodInfo m7302_MI;
extern MethodInfo m11313_MI;
extern MethodInfo m12165_MI;
extern MethodInfo m7567_MI;
extern MethodInfo m7132_MI;
extern MethodInfo m6995_MI;
extern MethodInfo m12015_MI;
extern MethodInfo m7502_MI;
extern MethodInfo m7569_MI;
extern MethodInfo m7171_MI;
extern MethodInfo m7169_MI;
extern MethodInfo m11342_MI;
extern MethodInfo m12166_MI;
extern MethodInfo m7564_MI;
extern MethodInfo m7274_MI;
extern MethodInfo m12167_MI;
extern MethodInfo m7581_MI;
extern MethodInfo m7467_MI;
extern MethodInfo m12168_MI;
extern MethodInfo m11372_MI;
extern MethodInfo m12169_MI;
extern MethodInfo m673_MI;
extern MethodInfo m7566_MI;
extern MethodInfo m7329_MI;
extern MethodInfo m11386_MI;
extern MethodInfo m12170_MI;
extern MethodInfo m7568_MI;
extern MethodInfo m7199_MI;
extern MethodInfo m12171_MI;
extern MethodInfo m7570_MI;
extern MethodInfo m7222_MI;
extern MethodInfo m11414_MI;
extern MethodInfo m12172_MI;
extern MethodInfo m7011_MI;
extern MethodInfo m8706_MI;
extern MethodInfo m8705_MI;
extern MethodInfo m11416_MI;
extern MethodInfo m12173_MI;


extern MethodInfo m11223_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m11223 (t9 * __this , MethodInfo* method)
{
	static bool m11223_init;
	if (!m11223_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m11223_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t2107 * L_0 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f0;
		((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f0 = L_0;
		t152* L_1 = ((t152*)SZArrayNew(t152_TI_var, ((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_1, L_2);
		*((t126 **)(t126 **)SZArrayLdElema(L_1, 1)) = (t126 *)L_2;
		t152* L_3 = L_1;
		t126 * L_4 = m329(NULL, LoadTypeToken(&t2107_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_3, L_4);
		*((t126 **)(t126 **)SZArrayLdElema(L_3, 2)) = (t126 *)L_4;
		t152* L_5 = L_3;
		t126 * L_6 = m329(NULL, LoadTypeToken(&t124_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_5, L_6);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, 3)) = (t126 *)L_6;
		t152* L_7 = L_5;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t309_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_7, L_8);
		*((t126 **)(t126 **)SZArrayLdElema(L_7, 4)) = (t126 *)L_8;
		t152* L_9 = L_7;
		t126 * L_10 = m329(NULL, LoadTypeToken(&t186_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_9, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_9, 5)) = (t126 *)L_10;
		t152* L_11 = L_9;
		t126 * L_12 = m329(NULL, LoadTypeToken(&t582_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_11, L_12);
		*((t126 **)(t126 **)SZArrayLdElema(L_11, 6)) = (t126 *)L_12;
		t152* L_13 = L_11;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t341_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_13, L_14);
		*((t126 **)(t126 **)SZArrayLdElema(L_13, 7)) = (t126 *)L_14;
		t152* L_15 = L_13;
		t126 * L_16 = m329(NULL, LoadTypeToken(&t315_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_15, L_16);
		*((t126 **)(t126 **)SZArrayLdElema(L_15, 8)) = (t126 *)L_16;
		t152* L_17 = L_15;
		t126 * L_18 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_17, L_18);
		*((t126 **)(t126 **)SZArrayLdElema(L_17, ((int32_t)9))) = (t126 *)L_18;
		t152* L_19 = L_17;
		t126 * L_20 = m329(NULL, LoadTypeToken(&t168_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_19, L_20);
		*((t126 **)(t126 **)SZArrayLdElema(L_19, ((int32_t)10))) = (t126 *)L_20;
		t152* L_21 = L_19;
		t126 * L_22 = m329(NULL, LoadTypeToken(&t303_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_21, L_22);
		*((t126 **)(t126 **)SZArrayLdElema(L_21, ((int32_t)11))) = (t126 *)L_22;
		t152* L_23 = L_21;
		t126 * L_24 = m329(NULL, LoadTypeToken(&t896_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_23, L_24);
		*((t126 **)(t126 **)SZArrayLdElema(L_23, ((int32_t)12))) = (t126 *)L_24;
		t152* L_25 = L_23;
		t126 * L_26 = m329(NULL, LoadTypeToken(&t123_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_25, L_26);
		*((t126 **)(t126 **)SZArrayLdElema(L_25, ((int32_t)13))) = (t126 *)L_26;
		t152* L_27 = L_25;
		t126 * L_28 = m329(NULL, LoadTypeToken(&t156_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_27, L_28);
		*((t126 **)(t126 **)SZArrayLdElema(L_27, ((int32_t)14))) = (t126 *)L_28;
		t152* L_29 = L_27;
		t126 * L_30 = m329(NULL, LoadTypeToken(&t910_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_29, L_30);
		*((t126 **)(t126 **)SZArrayLdElema(L_29, ((int32_t)15))) = (t126 *)L_30;
		t152* L_31 = L_29;
		t126 * L_32 = m329(NULL, LoadTypeToken(&t272_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_31, L_32);
		*((t126 **)(t126 **)SZArrayLdElema(L_31, ((int32_t)16))) = (t126 *)L_32;
		t152* L_33 = L_31;
		t126 * L_34 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_33, L_34);
		*((t126 **)(t126 **)SZArrayLdElema(L_33, ((int32_t)18))) = (t126 *)L_34;
		((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1 = L_33;
		return;
	}
}
extern "C" t737* m11224 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	typedef t737* (*m11224_ftn) (t2*, bool);
	static m11224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11224_ftn)il2cpp_codegen_resolve_icall ("System.Convert::InternalFromBase64String(System.String,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m6984_MI;
extern TypeInfo* t737_TI_var;
extern "C" t737* m6984 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m6984_init;
	if (!m6984_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m6984_init = true;
	}
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1077, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return ((t737*)SZArrayNew(t737_TI_var, 0));
	}

IL_001d:
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t737* L_5 = m11224(NULL, L_4, 1, &m11224_MI);
		return L_5;
	}
}
extern MethodInfo m4364_MI;
extern "C" t2* m4364 (t9 * __this , t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2603, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t737* L_2 = p0;
		t737* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t2* L_4 = m11225(NULL, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m11225_MI);
		return L_4;
	}
}
extern "C" t2* m11225 (t9 * __this , t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t737* V_0 = {0};
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2603, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = p2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_4, (t2*) &_stringLiteral2604, &m5763_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		int32_t L_5 = p1;
		t737* L_6 = p0;
		int32_t L_7 = p2;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)L_7)))))
		{
			goto IL_0034;
		}
	}
	{
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_8, (t2*) &_stringLiteral2605, &m5763_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		t737* L_9 = p0;
		int32_t L_10 = p1;
		int32_t L_11 = p2;
		t737* L_12 = m10685(NULL, L_9, L_10, L_11, &m10685_MI);
		V_0 = L_12;
		t2047 * L_13 = (t2047 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2047_TI));
		m10801(L_13, &m10801_MI);
		t737* L_14 = V_0;
		t2* L_15 = (t2*)VirtFuncInvoker1< t2*, t737* >::Invoke(&m5870_MI, L_13, L_14);
		return L_15;
	}
}
extern MethodInfo m11226_MI;
extern "C" bool m11226 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11227_MI;
extern "C" bool m11227 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7503(&L_1, 0, &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7583(NULL, L_0, L_1, &m7583_MI);
		return L_2;
	}
}
extern MethodInfo m11228_MI;
extern "C" bool m11228 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return ((((int32_t)((((double)L_0) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11229_MI;
extern "C" bool m11229 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return ((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m1139_MI;
extern "C" bool m1139 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11230_MI;
extern "C" bool m11230 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11231_MI;
extern "C" bool m11231 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return ((((int32_t)((((int32_t)(((int32_t)L_0))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11232_MI;
extern "C" bool m11232 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11233_MI;
extern "C" bool m11233 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t124_TI));
		bool L_2 = m7608(NULL, L_1, &m7608_MI);
		return L_2;
	}
}
extern MethodInfo m11234_MI;
extern "C" bool m11234 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11235_MI;
extern "C" bool m11235 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11236_MI;
extern "C" bool m11236 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4358_MI;
extern "C" bool m4358 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		bool L_2 = m11237(NULL, L_1, (t9 *)NULL, &m11237_MI);
		return L_2;
	}
}
extern "C" bool m11237 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12159_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11238_MI;
extern "C" uint8_t m11238 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((uint8_t)G_B3_0));
	}
}
extern MethodInfo m11239_MI;
extern "C" uint8_t m11239 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2606, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11240_MI;
extern "C" uint8_t m11240 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7503(&L_1, ((int32_t)255), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, 0, &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2607, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		uint8_t L_10 = m7563(NULL, L_9, &m7563_MI);
		return L_10;
	}
}
extern MethodInfo m11241_MI;
extern "C" uint8_t m11241 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(255.0))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2607, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		bool L_5 = m7492(NULL, L_4, &m7492_MI);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m7491(NULL, L_6, &m7491_MI);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		t2* L_8 = m7888(NULL, (t2*) &_stringLiteral2608, &m7888_MI);
		t2145 * L_9 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_9, L_8, &m11822_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0048:
	{
		double L_10 = p0;
		double L_11 = round(L_10);
		return (((uint8_t)L_11));
	}
}
extern MethodInfo m11242_MI;
extern "C" uint8_t m11242 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(255.0f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2609, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		bool L_5 = m7464(NULL, L_4, &m7464_MI);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = p0;
		bool L_7 = m7463(NULL, L_6, &m7463_MI);
		if (!L_7)
		{
			goto IL_0040;
		}
	}

IL_0030:
	{
		t2* L_8 = m7888(NULL, (t2*) &_stringLiteral2610, &m7888_MI);
		t2145 * L_9 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_9, L_8, &m11822_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		float L_10 = p0;
		double L_11 = round((((double)L_10)));
		return (((uint8_t)L_11));
	}
}
extern MethodInfo m11243_MI;
extern "C" uint8_t m11243 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)255))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2607, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11244_MI;
extern "C" uint8_t m11244 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)((int32_t)255))))))
		{
			goto IL_000e;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001e;
		}
	}

IL_000e:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2607, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11245_MI;
extern "C" uint8_t m11245 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2611, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11246_MI;
extern "C" uint8_t m11246 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)255))))
		{
			goto IL_000c;
		}
	}
	{
		int16_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2607, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int16_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11247_MI;
extern "C" uint8_t m11247 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		uint8_t L_2 = m7250(NULL, L_1, &m7250_MI);
		return L_2;
	}
}
extern MethodInfo m11248_MI;
extern "C" uint8_t m11248 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		uint8_t L_3 = m7248(NULL, L_1, L_2, &m7248_MI);
		return L_3;
	}
}
extern MethodInfo m11249_MI;
extern "C" uint8_t m11249 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2606, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11250_MI;
extern "C" uint8_t m11250 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)255)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2606, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11251_MI;
extern "C" uint8_t m11251 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2606, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11252_MI;
extern "C" uint8_t m11252 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		uint8_t L_3 = (uint8_t)InterfaceFuncInvoker1< uint8_t, t9 * >::Invoke(&m12160_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m6986_MI;
extern "C" uint16_t m6986 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint16_t)L_0));
	}
}
extern MethodInfo m11253_MI;
extern "C" uint16_t m11253 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)65535))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2612, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11254_MI;
extern "C" uint16_t m11254 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)((int32_t)65535))))))
		{
			goto IL_000e;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001e;
		}
	}

IL_000e:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2612, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11255_MI;
extern "C" uint16_t m11255 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11256_MI;
extern "C" uint16_t m11256 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2614, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11257_MI;
extern "C" uint16_t m11257 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2614, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11258_MI;
extern "C" uint16_t m11258 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		uint16_t L_1 = m7361(NULL, L_0, &m7361_MI);
		return L_1;
	}
}
extern MethodInfo m11259_MI;
extern "C" uint16_t m11259 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2615, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11260_MI;
extern "C" uint16_t m11260 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)65535)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2615, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11261_MI;
extern "C" uint16_t m11261 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11262_MI;
extern "C" uint16_t m11262 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		uint16_t L_3 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12161_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11263_MI;
extern "C" t272  m11263 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_1 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		return L_1;
	}

IL_0009:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_4 = m11486(NULL, L_2, L_3, &m11486_MI);
		return L_4;
	}
}
extern MethodInfo m11264_MI;
extern "C" t272  m11264 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11265_MI;
extern "C" t272  m11265 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11266_MI;
extern "C" t272  m11266 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11267_MI;
extern "C" t272  m11267 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11268_MI;
extern "C" t272  m11268 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_1 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		return L_1;
	}

IL_0009:
	{
		t9 * L_2 = p0;
		t9 * L_3 = p1;
		t272  L_4 = (t272 )InterfaceFuncInvoker1< t272 , t9 * >::Invoke(&m12162_MI, ((t9 *)Castclass(L_2, InitializedTypeInfo(&t184_TI))), L_3);
		return L_4;
	}
}
extern MethodInfo m11269_MI;
extern "C" t272  m11269 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11270_MI;
extern "C" t272  m11270 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11271_MI;
extern "C" t272  m11271 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11272_MI;
extern "C" t272  m11272 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_0, (t2*) &_stringLiteral2613, &m11605_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11273_MI;
extern "C" t910  m11273 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7575(NULL, G_B3_0, &m7575_MI);
		return L_1;
	}
}
extern MethodInfo m11274_MI;
extern "C" t910  m11274 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7571(NULL, L_0, &m7571_MI);
		return L_1;
	}
}
extern MethodInfo m11275_MI;
extern "C" t910  m11275 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7580(NULL, L_0, &m7580_MI);
		return L_1;
	}
}
extern MethodInfo m11276_MI;
extern "C" t910  m11276 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7579(NULL, L_0, &m7579_MI);
		return L_1;
	}
}
extern MethodInfo m11277_MI;
extern "C" t910  m11277 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7575(NULL, L_0, &m7575_MI);
		return L_1;
	}
}
extern MethodInfo m11278_MI;
extern "C" t910  m11278 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7577(NULL, L_0, &m7577_MI);
		return L_1;
	}
}
extern MethodInfo m11279_MI;
extern "C" t910  m11279 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7572(NULL, L_0, &m7572_MI);
		return L_1;
	}
}
extern MethodInfo m11280_MI;
extern "C" t910  m11280 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7573(NULL, L_0, &m7573_MI);
		return L_1;
	}
}
extern MethodInfo m11281_MI;
extern "C" t910  m11281 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t910  L_1 = {0};
		m7503(&L_1, 0, &m7503_MI);
		return L_1;
	}

IL_000a:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_4 = m7541(NULL, L_2, L_3, &m7541_MI);
		return L_4;
	}
}
extern MethodInfo m11282_MI;
extern "C" t910  m11282 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7576(NULL, L_0, &m7576_MI);
		return L_1;
	}
}
extern MethodInfo m11283_MI;
extern "C" t910  m11283 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7578(NULL, L_0, &m7578_MI);
		return L_1;
	}
}
extern MethodInfo m11284_MI;
extern "C" t910  m11284 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7574(NULL, L_0, &m7574_MI);
		return L_1;
	}
}
extern MethodInfo m11285_MI;
extern "C" t910  m11285 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t910  L_1 = {0};
		m7503(&L_1, 0, &m7503_MI);
		return L_1;
	}

IL_000a:
	{
		t9 * L_2 = p0;
		t9 * L_3 = p1;
		t910  L_4 = (t910 )InterfaceFuncInvoker1< t910 , t9 * >::Invoke(&m12163_MI, ((t9 *)Castclass(L_2, InitializedTypeInfo(&t184_TI))), L_3);
		return L_4;
	}
}
extern MethodInfo m11286_MI;
extern "C" double m11286 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((double)G_B3_0));
	}
}
extern MethodInfo m11287_MI;
extern "C" double m11287 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11288_MI;
extern "C" double m11288 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		double L_1 = m7582(NULL, L_0, &m7582_MI);
		return L_1;
	}
}
extern MethodInfo m11289_MI;
extern "C" double m11289 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11290_MI;
extern "C" double m11290 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11291_MI;
extern "C" double m11291 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11292_MI;
extern "C" double m11292 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11293_MI;
extern "C" double m11293 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11294_MI;
extern "C" double m11294 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11295_MI;
extern "C" double m11295 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (0.0);
	}

IL_000d:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		double L_3 = m7495(NULL, L_1, L_2, &m7495_MI);
		return L_3;
	}
}
extern MethodInfo m11296_MI;
extern "C" double m11296 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((double)(((double)L_0))));
	}
}
extern MethodInfo m11297_MI;
extern "C" double m11297 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return (((double)(((double)L_0))));
	}
}
extern MethodInfo m11298_MI;
extern "C" double m11298 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m4417_MI;
extern "C" double m4417 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (0.0);
	}

IL_000d:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		double L_3 = (double)InterfaceFuncInvoker1< double, t9 * >::Invoke(&m12164_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11299_MI;
extern "C" int16_t m11299 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((int16_t)G_B3_0));
	}
}
extern MethodInfo m11300_MI;
extern "C" int16_t m11300 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11301_MI;
extern "C" int16_t m11301 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2616, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11302_MI;
extern "C" int16_t m11302 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7503(&L_1, ((int32_t)32767), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, ((int32_t)-32768), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2617, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		int16_t L_10 = m7565(NULL, L_9, &m7565_MI);
		return L_10;
	}
}
extern MethodInfo m11303_MI;
extern "C" int16_t m11303 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(32767.0))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(-32768.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2617, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int16_t)L_5));
	}
}
extern MethodInfo m11304_MI;
extern "C" int16_t m11304 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(32767.0f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(-32768.0f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2617, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int16_t)L_5));
	}
}
extern MethodInfo m11305_MI;
extern "C" int16_t m11305 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)32767))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)-32768))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2617, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		int32_t L_4 = p0;
		return (((int16_t)L_4));
	}
}
extern MethodInfo m11306_MI;
extern "C" int16_t m11306 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)((int32_t)32767))))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((int32_t)-32768))))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2617, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = p0;
		return (((int16_t)L_4));
	}
}
extern MethodInfo m11307_MI;
extern "C" int16_t m11307 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int16_t)L_0));
	}
}
extern MethodInfo m11308_MI;
extern "C" int16_t m11308 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m6934_MI;
extern "C" int16_t m6934 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		int16_t L_3 = m7302(NULL, L_1, L_2, &m7302_MI);
		return L_3;
	}
}
extern MethodInfo m11309_MI;
extern "C" int16_t m11309 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((((int64_t)(((uint64_t)L_0))) <= ((int64_t)(((int64_t)((int32_t)32767))))))
		{
			goto IL_001a;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2616, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001a:
	{
		uint32_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11310_MI;
extern "C" int16_t m11310 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)32767)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2616, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11311_MI;
extern "C" int16_t m11311 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2616, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11312_MI;
extern "C" int16_t m11312 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int16_t L_2 = m11313(NULL, L_1, (t9 *)NULL, &m11313_MI);
		return L_2;
	}
}
extern "C" int16_t m11313 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		int16_t L_3 = (int16_t)InterfaceFuncInvoker1< int16_t, t9 * >::Invoke(&m12165_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m1135_MI;
extern "C" int32_t m1135 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return G_B3_0;
	}
}
extern MethodInfo m11314_MI;
extern "C" int32_t m11314 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11315_MI;
extern "C" int32_t m11315 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11316_MI;
extern "C" int32_t m11316 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7503(&L_1, ((int32_t)2147483647), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, ((int32_t)-2147483648), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2618, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		int32_t L_10 = m7567(NULL, L_9, &m7567_MI);
		return L_10;
	}
}
extern MethodInfo m11317_MI;
extern "C" int32_t m11317 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(2147483647.0))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(-2147483648.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2618, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		if (L_5 > (double)(2147483647)) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		return (((int32_t)L_5));
	}
}
extern MethodInfo m11318_MI;
extern "C" int32_t m11318 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(2.14748365E+09f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(-2.14748365E+09f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2618, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		if (L_5 > (double)(2147483647)) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		return (((int32_t)L_5));
	}
}
extern MethodInfo m11319_MI;
extern "C" int32_t m11319 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((int32_t)-2147483648))))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2618, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = p0;
		return (((int32_t)L_4));
	}
}
extern MethodInfo m11320_MI;
extern "C" int32_t m11320 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int32_t)L_0));
	}
}
extern MethodInfo m11321_MI;
extern "C" int32_t m11321 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11322_MI;
extern "C" int32_t m11322 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		int32_t L_3 = m7132(NULL, L_1, L_2, &m7132_MI);
		return L_3;
	}
}
extern MethodInfo m11323_MI;
extern "C" int32_t m11323 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2619, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11324_MI;
extern "C" int32_t m11324 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)2147483647)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2619, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((int32_t)L_3));
	}
}
extern MethodInfo m11325_MI;
extern "C" int32_t m11325 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m4355_MI;
extern "C" int32_t m4355 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int32_t L_2 = m6995(NULL, L_1, (t9 *)NULL, &m6995_MI);
		return L_2;
	}
}
extern "C" int32_t m6995 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12015_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11326_MI;
extern "C" int64_t m11326 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((int64_t)G_B3_0));
	}
}
extern MethodInfo m11327_MI;
extern "C" int64_t m11327 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11328_MI;
extern "C" int64_t m11328 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11329_MI;
extern "C" int64_t m11329 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7502(&L_1, (-1), ((int32_t)2147483647), 0, 0, 0, &m7502_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7502(&L_4, 0, ((int32_t)-2147483648), 0, (-1), 0, &m7502_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_003c;
		}
	}

IL_002c:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2620, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003c:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		int64_t L_10 = m7569(NULL, L_9, &m7569_MI);
		return L_10;
	}
}
extern MethodInfo m11330_MI;
extern "C" int64_t m11330 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(9.2233720368547758E+18))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(-9.2233720368547758E+18)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2620, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int64_t)L_5));
	}
}
extern MethodInfo m11331_MI;
extern "C" int64_t m11331 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(9.223372E+18f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(-9.223372E+18f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2620, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int64_t)L_5));
	}
}
extern MethodInfo m11332_MI;
extern "C" int64_t m11332 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11333_MI;
extern "C" int64_t m11333 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11334_MI;
extern "C" int64_t m11334 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11335_MI;
extern "C" int64_t m11335 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11336_MI;
extern "C" int64_t m11336 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t2* L_1 = p0;
		int64_t L_2 = m7171(NULL, L_1, &m7171_MI);
		return L_2;
	}
}
extern MethodInfo m11337_MI;
extern "C" int64_t m11337 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		int64_t L_3 = m7169(NULL, L_1, L_2, &m7169_MI);
		return L_3;
	}
}
extern MethodInfo m11338_MI;
extern "C" int64_t m11338 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11339_MI;
extern "C" int64_t m11339 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_001c;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2621, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001c:
	{
		uint64_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11340_MI;
extern "C" int64_t m11340 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11341_MI;
extern "C" int64_t m11341 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int64_t L_2 = m11342(NULL, L_1, (t9 *)NULL, &m11342_MI);
		return L_2;
	}
}
extern "C" int64_t m11342 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		int64_t L_3 = (int64_t)InterfaceFuncInvoker1< int64_t, t9 * >::Invoke(&m12166_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11343_MI;
extern "C" int8_t m11343 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((int8_t)G_B3_0));
	}
}
extern MethodInfo m11344_MI;
extern "C" int8_t m11344 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2622, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint8_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11345_MI;
extern "C" int8_t m11345 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2622, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11346_MI;
extern "C" int8_t m11346 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7503(&L_1, ((int32_t)127), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, ((int32_t)-128), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}

IL_001e:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2623, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		int8_t L_10 = m7564(NULL, L_9, &m7564_MI);
		return L_10;
	}
}
extern MethodInfo m11347_MI;
extern "C" int8_t m11347 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(127.0))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(-128.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2623, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int8_t)L_5));
	}
}
extern MethodInfo m11348_MI;
extern "C" int8_t m11348 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(127.0f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(-128.0f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2624, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int8_t)L_5));
	}
}
extern MethodInfo m11349_MI;
extern "C" int8_t m11349 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)-128))))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2623, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11350_MI;
extern "C" int8_t m11350 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)((int32_t)127))))))
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((int32_t)-128))))))
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2623, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int64_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11351_MI;
extern "C" int8_t m11351 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_000a;
		}
	}
	{
		int16_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)-128))))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2623, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int16_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11352_MI;
extern "C" int8_t m11352 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral607, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		int8_t L_4 = m7274(NULL, L_2, L_3, &m7274_MI);
		return L_4;
	}
}
extern MethodInfo m11353_MI;
extern "C" int8_t m11353 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((((int64_t)(((uint64_t)L_0))) <= ((int64_t)(((int64_t)((int32_t)127))))))
		{
			goto IL_0017;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2622, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		uint32_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11354_MI;
extern "C" int8_t m11354 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)127)))))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2622, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		uint64_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11355_MI;
extern "C" int8_t m11355 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2622, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11356_MI;
extern "C" int8_t m11356 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		int8_t L_3 = (int8_t)InterfaceFuncInvoker1< int8_t, t9 * >::Invoke(&m12167_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11357_MI;
extern "C" float m11357 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((float)G_B3_0));
	}
}
extern MethodInfo m11358_MI;
extern "C" float m11358 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11359_MI;
extern "C" float m11359 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		float L_1 = m7581(NULL, L_0, &m7581_MI);
		return L_1;
	}
}
extern MethodInfo m11360_MI;
extern "C" float m11360 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11361_MI;
extern "C" float m11361 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11362_MI;
extern "C" float m11362 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11363_MI;
extern "C" float m11363 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11364_MI;
extern "C" float m11364 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11365_MI;
extern "C" float m11365 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11366_MI;
extern "C" float m11366 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (0.0f);
	}

IL_0009:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		float L_3 = m7467(NULL, L_1, L_2, &m7467_MI);
		return L_3;
	}
}
extern MethodInfo m11367_MI;
extern "C" float m11367 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((float)(((double)L_0))));
	}
}
extern MethodInfo m11368_MI;
extern "C" float m11368 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return (((float)(((double)L_0))));
	}
}
extern MethodInfo m11369_MI;
extern "C" float m11369 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11370_MI;
extern "C" float m11370 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (0.0f);
	}

IL_0009:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		float L_3 = (float)InterfaceFuncInvoker1< float, t9 * >::Invoke(&m12168_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11371_MI;
extern "C" t2* m11371 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t2* L_1 = m11372(NULL, L_0, (t9 *)NULL, &m11372_MI);
		return L_1;
	}
}
extern "C" t2* m11372 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t184_TI))))
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		t2* L_3 = (t2*)InterfaceFuncInvoker1< t2*, t9 * >::Invoke(&m12169_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}

IL_0015:
	{
		t9 * L_4 = p0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		t9 * L_5 = p0;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_5);
		return L_6;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_7;
	}
}
extern MethodInfo m11373_MI;
extern "C" uint16_t m11373 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((uint16_t)G_B3_0));
	}
}
extern MethodInfo m11374_MI;
extern "C" uint16_t m11374 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11375_MI;
extern "C" uint16_t m11375 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11376_MI;
extern "C" uint16_t m11376 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7503(&L_1, ((int32_t)65535), &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, 0, &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2625, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		uint16_t L_10 = m7566(NULL, L_9, &m7566_MI);
		return L_10;
	}
}
extern MethodInfo m11377_MI;
extern "C" uint16_t m11377 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(65535.0))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2625, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint16_t)L_5));
	}
}
extern MethodInfo m11378_MI;
extern "C" uint16_t m11378 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(65535.0f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2625, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint16_t)L_5));
	}
}
extern MethodInfo m11379_MI;
extern "C" uint16_t m11379 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)65535))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2625, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11380_MI;
extern "C" uint16_t m11380 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)((int32_t)65535))))))
		{
			goto IL_000e;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001e;
		}
	}

IL_000e:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2625, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11381_MI;
extern "C" uint16_t m11381 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2626, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11382_MI;
extern "C" uint16_t m11382 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2626, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11383_MI;
extern "C" uint16_t m11383 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		uint16_t L_3 = m7329(NULL, L_1, L_2, &m7329_MI);
		return L_3;
	}
}
extern MethodInfo m11384_MI;
extern "C" uint16_t m11384 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2627, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11385_MI;
extern "C" uint16_t m11385 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)65535)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2627, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m4356_MI;
extern "C" uint16_t m4356 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		uint16_t L_2 = m11386(NULL, L_1, (t9 *)NULL, &m11386_MI);
		return L_2;
	}
}
extern "C" uint16_t m11386 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		uint16_t L_3 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12170_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11387_MI;
extern "C" uint32_t m11387 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return G_B3_0;
	}
}
extern MethodInfo m11388_MI;
extern "C" uint32_t m11388 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11389_MI;
extern "C" uint32_t m11389 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11390_MI;
extern "C" uint32_t m11390 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7502(&L_1, (-1), 0, 0, 0, 0, &m7502_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, 0, &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2628, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		uint32_t L_10 = m7568(NULL, L_9, &m7568_MI);
		return L_10;
	}
}
extern MethodInfo m11391_MI;
extern "C" uint32_t m11391 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(4294967295.0))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2628, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint32_t)L_5));
	}
}
extern MethodInfo m11392_MI;
extern "C" uint32_t m11392 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(4.2949673E+09f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2628, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint32_t)L_5));
	}
}
extern MethodInfo m11393_MI;
extern "C" uint32_t m11393 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2629, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int32_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11394_MI;
extern "C" uint32_t m11394 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) > ((int64_t)(((uint64_t)(((uint32_t)(-1))))))))
		{
			goto IL_000a;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2628, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int64_t L_4 = p0;
		return (((uint32_t)L_4));
	}
}
extern MethodInfo m11395_MI;
extern "C" uint32_t m11395 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2629, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int8_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11396_MI;
extern "C" uint32_t m11396 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2629, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int16_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11397_MI;
extern "C" uint32_t m11397 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		uint32_t L_3 = m7199(NULL, L_1, L_2, &m7199_MI);
		return L_3;
	}
}
extern MethodInfo m11398_MI;
extern "C" uint32_t m11398 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2630, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint64_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11399_MI;
extern "C" uint32_t m11399 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11400_MI;
extern "C" uint32_t m11400 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		uint32_t L_3 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t9 * >::Invoke(&m12171_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11401_MI;
extern "C" uint64_t m11401 (t9 * __this , bool p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		return (((int64_t)G_B3_0));
	}
}
extern MethodInfo m11402_MI;
extern "C" uint64_t m11402 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11403_MI;
extern "C" uint64_t m11403 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11404_MI;
extern "C" uint64_t m11404 (t9 * __this , t910  p0, MethodInfo* method)
{
	{
		t910  L_0 = p0;
		t910  L_1 = {0};
		m7502(&L_1, (-1), (-1), 0, 0, 0, &m7502_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_2 = m7585(NULL, L_0, L_1, &m7585_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t910  L_3 = p0;
		t910  L_4 = {0};
		m7503(&L_4, 0, &m7503_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_5 = m7586(NULL, L_3, L_4, &m7586_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral2631, &m7888_MI);
		t2145 * L_7 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_7, L_6, &m11822_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t910  L_8 = p0;
		t910  L_9 = m11612(NULL, L_8, &m11612_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		uint64_t L_10 = m7570(NULL, L_9, &m7570_MI);
		return L_10;
	}
}
extern MethodInfo m11405_MI;
extern "C" uint64_t m11405 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		if ((((double)L_0) > ((double)(1.8446744073709552E+19))))
		{
			goto IL_0018;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2631, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint64_t)L_5));
	}
}
extern MethodInfo m11406_MI;
extern "C" uint64_t m11406 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((((float)L_0) > ((float)(1.84467441E+19f))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = p0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2631, &m7888_MI);
		t2145 * L_3 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_3, L_2, &m11822_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint64_t)L_5));
	}
}
extern MethodInfo m11407_MI;
extern "C" uint64_t m11407 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2632, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		return (((int64_t)L_3));
	}
}
extern MethodInfo m11408_MI;
extern "C" uint64_t m11408 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2632, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int64_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11409_MI;
extern "C" uint64_t m11409 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t2145 * L_1 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_1, (t2*) &_stringLiteral2632, &m11822_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0010:
	{
		int8_t L_2 = p0;
		return (((int64_t)L_2));
	}
}
extern MethodInfo m11410_MI;
extern "C" uint64_t m11410 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2632, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((int64_t)L_3));
	}
}
extern MethodInfo m11411_MI;
extern "C" uint64_t m11411 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t2* L_1 = p0;
		t9 * L_2 = p1;
		uint64_t L_3 = m7222(NULL, L_1, L_2, &m7222_MI);
		return L_3;
	}
}
extern MethodInfo m11412_MI;
extern "C" uint64_t m11412 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11413_MI;
extern "C" uint64_t m11413 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m4357_MI;
extern "C" uint64_t m4357 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		uint64_t L_2 = m11414(NULL, L_1, (t9 *)NULL, &m11414_MI);
		return L_2;
	}
}
extern "C" uint64_t m11414 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (((int64_t)0));
	}

IL_0006:
	{
		t9 * L_1 = p0;
		t9 * L_2 = p1;
		uint64_t L_3 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t9 * >::Invoke(&m12172_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11415_MI;
extern "C" t9 * m11415 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	t907 * V_0 = {0};
	t9 * V_1 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t126 * L_1 = p1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, (t2*) &_stringLiteral2633, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_3 = m7011(NULL, &m7011_MI);
		V_0 = L_3;
		t126 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t272_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_4) == ((t9*)(t126 *)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		t907 * L_6 = V_0;
		t1710 * L_7 = (t1710 *)VirtFuncInvoker0< t1710 * >::Invoke(&m8706_MI, L_6);
		V_1 = L_7;
		goto IL_0034;
	}

IL_002d:
	{
		t907 * L_8 = V_0;
		t1561 * L_9 = (t1561 *)VirtFuncInvoker0< t1561 * >::Invoke(&m8705_MI, L_8);
		V_1 = L_9;
	}

IL_0034:
	{
		t9 * L_10 = p0;
		t126 * L_11 = p1;
		t9 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t9 * L_13 = m11416(NULL, L_10, L_11, L_12, 1, &m11416_MI);
		return L_13;
	}
}
extern "C" t9 * m11416 (t9 * __this , t9 * p0, t126 * p1, t9 * p2, bool p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		t126 * L_1 = p1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		t126 * L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_2);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		t2128 * L_4 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_4, (t2*) &_stringLiteral2634, &m11605_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0019:
	{
		return NULL;
	}

IL_001b:
	{
		t126 * L_5 = p1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		t2128 * L_6 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_6, (t2*) &_stringLiteral2635, &m11605_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		t9 * L_7 = p0;
		t126 * L_8 = m2550(L_7, &m2550_MI);
		t126 * L_9 = p1;
		if ((!(((t9*)(t126 *)L_8) == ((t9*)(t126 *)L_9))))
		{
			goto IL_0034;
		}
	}
	{
		t9 * L_10 = p0;
		return L_10;
	}

IL_0034:
	{
		t9 * L_11 = p0;
		if (!((t9 *)IsInst(L_11, InitializedTypeInfo(&t184_TI))))
		{
			goto IL_01e0;
		}
	}
	{
		t9 * L_12 = p0;
		V_0 = ((t9 *)Castclass(L_12, InitializedTypeInfo(&t184_TI)));
		t126 * L_13 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_14 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_15 = 0;
		if ((!(((t9*)(t126 *)L_13) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_14, L_15))))))
		{
			goto IL_0056;
		}
	}
	{
		t132 * L_16 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11185(L_16, &m11185_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0056:
	{
		t126 * L_17 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_18 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_19 = 1;
		if ((!(((t9*)(t126 *)L_17) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_18, L_19))))))
		{
			goto IL_0062;
		}
	}
	{
		t9 * L_20 = p0;
		return L_20;
	}

IL_0062:
	{
		t126 * L_21 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_22 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_23 = 2;
		if ((!(((t9*)(t126 *)L_21) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_22, L_23))))))
		{
			goto IL_0077;
		}
	}
	{
		t2128 * L_24 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_24, (t2*) &_stringLiteral2636, &m11605_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0077:
	{
		t126 * L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_26 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_27 = 3;
		if ((!(((t9*)(t126 *)L_25) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_26, L_27))))))
		{
			goto IL_008e;
		}
	}
	{
		t9 * L_28 = V_0;
		t9 * L_29 = p2;
		bool L_30 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12159_MI, L_28, L_29);
		bool L_31 = L_30;
		t9 * L_32 = Box(InitializedTypeInfo(&t124_TI), &L_31);
		return L_32;
	}

IL_008e:
	{
		t126 * L_33 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_34 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_35 = 4;
		if ((!(((t9*)(t126 *)L_33) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_34, L_35))))))
		{
			goto IL_00a5;
		}
	}
	{
		t9 * L_36 = V_0;
		t9 * L_37 = p2;
		uint16_t L_38 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12161_MI, L_36, L_37);
		uint16_t L_39 = L_38;
		t9 * L_40 = Box(InitializedTypeInfo(&t309_TI), &L_39);
		return L_40;
	}

IL_00a5:
	{
		t126 * L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_42 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_43 = 5;
		if ((!(((t9*)(t126 *)L_41) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_42, L_43))))))
		{
			goto IL_00bc;
		}
	}
	{
		t9 * L_44 = V_0;
		t9 * L_45 = p2;
		int8_t L_46 = (int8_t)InterfaceFuncInvoker1< int8_t, t9 * >::Invoke(&m12167_MI, L_44, L_45);
		int8_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t186_TI), &L_47);
		return L_48;
	}

IL_00bc:
	{
		t126 * L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_50 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_51 = 6;
		if ((!(((t9*)(t126 *)L_49) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_50, L_51))))))
		{
			goto IL_00d3;
		}
	}
	{
		t9 * L_52 = V_0;
		t9 * L_53 = p2;
		uint8_t L_54 = (uint8_t)InterfaceFuncInvoker1< uint8_t, t9 * >::Invoke(&m12160_MI, L_52, L_53);
		uint8_t L_55 = L_54;
		t9 * L_56 = Box(InitializedTypeInfo(&t582_TI), &L_55);
		return L_56;
	}

IL_00d3:
	{
		t126 * L_57 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_58 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_59 = 7;
		if ((!(((t9*)(t126 *)L_57) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_58, L_59))))))
		{
			goto IL_00ea;
		}
	}
	{
		t9 * L_60 = V_0;
		t9 * L_61 = p2;
		int16_t L_62 = (int16_t)InterfaceFuncInvoker1< int16_t, t9 * >::Invoke(&m12165_MI, L_60, L_61);
		int16_t L_63 = L_62;
		t9 * L_64 = Box(InitializedTypeInfo(&t341_TI), &L_63);
		return L_64;
	}

IL_00ea:
	{
		t126 * L_65 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_66 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_67 = 8;
		if ((!(((t9*)(t126 *)L_65) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_66, L_67))))))
		{
			goto IL_0101;
		}
	}
	{
		t9 * L_68 = V_0;
		t9 * L_69 = p2;
		uint16_t L_70 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12170_MI, L_68, L_69);
		uint16_t L_71 = L_70;
		t9 * L_72 = Box(InitializedTypeInfo(&t315_TI), &L_71);
		return L_72;
	}

IL_0101:
	{
		t126 * L_73 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_74 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_75 = ((int32_t)9);
		if ((!(((t9*)(t126 *)L_73) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_74, L_75))))))
		{
			goto IL_0119;
		}
	}
	{
		t9 * L_76 = V_0;
		t9 * L_77 = p2;
		int32_t L_78 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12015_MI, L_76, L_77);
		int32_t L_79 = L_78;
		t9 * L_80 = Box(InitializedTypeInfo(&t125_TI), &L_79);
		return L_80;
	}

IL_0119:
	{
		t126 * L_81 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_82 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_83 = ((int32_t)10);
		if ((!(((t9*)(t126 *)L_81) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_82, L_83))))))
		{
			goto IL_0131;
		}
	}
	{
		t9 * L_84 = V_0;
		t9 * L_85 = p2;
		uint32_t L_86 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t9 * >::Invoke(&m12171_MI, L_84, L_85);
		uint32_t L_87 = L_86;
		t9 * L_88 = Box(InitializedTypeInfo(&t168_TI), &L_87);
		return L_88;
	}

IL_0131:
	{
		t126 * L_89 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_90 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_91 = ((int32_t)11);
		if ((!(((t9*)(t126 *)L_89) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_90, L_91))))))
		{
			goto IL_0149;
		}
	}
	{
		t9 * L_92 = V_0;
		t9 * L_93 = p2;
		int64_t L_94 = (int64_t)InterfaceFuncInvoker1< int64_t, t9 * >::Invoke(&m12166_MI, L_92, L_93);
		int64_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t303_TI), &L_95);
		return L_96;
	}

IL_0149:
	{
		t126 * L_97 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_98 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_99 = ((int32_t)12);
		if ((!(((t9*)(t126 *)L_97) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_98, L_99))))))
		{
			goto IL_0161;
		}
	}
	{
		t9 * L_100 = V_0;
		t9 * L_101 = p2;
		uint64_t L_102 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t9 * >::Invoke(&m12172_MI, L_100, L_101);
		uint64_t L_103 = L_102;
		t9 * L_104 = Box(InitializedTypeInfo(&t896_TI), &L_103);
		return L_104;
	}

IL_0161:
	{
		t126 * L_105 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_106 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_107 = ((int32_t)13);
		if ((!(((t9*)(t126 *)L_105) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_106, L_107))))))
		{
			goto IL_0179;
		}
	}
	{
		t9 * L_108 = V_0;
		t9 * L_109 = p2;
		float L_110 = (float)InterfaceFuncInvoker1< float, t9 * >::Invoke(&m12168_MI, L_108, L_109);
		float L_111 = L_110;
		t9 * L_112 = Box(InitializedTypeInfo(&t123_TI), &L_111);
		return L_112;
	}

IL_0179:
	{
		t126 * L_113 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_114 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_115 = ((int32_t)14);
		if ((!(((t9*)(t126 *)L_113) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_114, L_115))))))
		{
			goto IL_0191;
		}
	}
	{
		t9 * L_116 = V_0;
		t9 * L_117 = p2;
		double L_118 = (double)InterfaceFuncInvoker1< double, t9 * >::Invoke(&m12164_MI, L_116, L_117);
		double L_119 = L_118;
		t9 * L_120 = Box(InitializedTypeInfo(&t156_TI), &L_119);
		return L_120;
	}

IL_0191:
	{
		t126 * L_121 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_122 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_123 = ((int32_t)15);
		if ((!(((t9*)(t126 *)L_121) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_122, L_123))))))
		{
			goto IL_01a9;
		}
	}
	{
		t9 * L_124 = V_0;
		t9 * L_125 = p2;
		t910  L_126 = (t910 )InterfaceFuncInvoker1< t910 , t9 * >::Invoke(&m12163_MI, L_124, L_125);
		t910  L_127 = L_126;
		t9 * L_128 = Box(InitializedTypeInfo(&t910_TI), &L_127);
		return L_128;
	}

IL_01a9:
	{
		t126 * L_129 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_130 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_131 = ((int32_t)16);
		if ((!(((t9*)(t126 *)L_129) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_130, L_131))))))
		{
			goto IL_01c1;
		}
	}
	{
		t9 * L_132 = V_0;
		t9 * L_133 = p2;
		t272  L_134 = (t272 )InterfaceFuncInvoker1< t272 , t9 * >::Invoke(&m12162_MI, L_132, L_133);
		t272  L_135 = L_134;
		t9 * L_136 = Box(InitializedTypeInfo(&t272_TI), &L_135);
		return L_136;
	}

IL_01c1:
	{
		t126 * L_137 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t152* L_138 = ((t305_SFs*)InitializedTypeInfo(&t305_TI)->static_fields)->f1;
		int32_t L_139 = ((int32_t)18);
		if ((!(((t9*)(t126 *)L_137) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_138, L_139))))))
		{
			goto IL_01d4;
		}
	}
	{
		t9 * L_140 = V_0;
		t9 * L_141 = p2;
		t2* L_142 = (t2*)InterfaceFuncInvoker1< t2*, t9 * >::Invoke(&m12169_MI, L_140, L_141);
		return L_142;
	}

IL_01d4:
	{
		bool L_143 = p3;
		if (!L_143)
		{
			goto IL_01e0;
		}
	}
	{
		t9 * L_144 = V_0;
		t126 * L_145 = p1;
		t9 * L_146 = p2;
		t9 * L_147 = (t9 *)InterfaceFuncInvoker2< t9 *, t126 *, t9 * >::Invoke(&m12173_MI, L_144, L_145, L_146);
		return L_147;
	}

IL_01e0:
	{
		t9 * L_148 = p0;
		t126 * L_149 = m2550(L_148, &m2550_MI);
		t2* L_150 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_149);
		t126 * L_151 = p1;
		t2* L_152 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_151);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_153 = m4485(NULL, (t2*) &_stringLiteral2637, L_150, (t2*) &_stringLiteral2638, L_152, &m4485_MI);
		t2* L_154 = m7888(NULL, L_153, &m7888_MI);
		t2128 * L_155 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11605(L_155, L_154, &m11605_MI);
		il2cpp_codegen_raise_exception(L_155);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2157MD.h"
extern MethodInfo m561_MI;
extern MethodInfo m11417_MI;
extern MethodInfo m11604_MI;
extern MethodInfo m11917_MI;


extern "C" void m11417 (t2107 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11418_MI;
extern "C" void m11418 (t2107 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11419_MI;
extern "C" void m11419 (t9 * __this , MethodInfo* method)
{
	{
		t2107 * L_0 = (t2107 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2107_TI));
		m11417(L_0, &m11417_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m11420_MI;
extern "C" bool m11420 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11421_MI;
extern "C" uint8_t m11421 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11422_MI;
extern "C" uint16_t m11422 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11423_MI;
extern "C" t272  m11423 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11424_MI;
extern "C" t910  m11424 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11425_MI;
extern "C" double m11425 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11426_MI;
extern "C" int16_t m11426 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11427_MI;
extern "C" int32_t m11427 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11428_MI;
extern "C" int64_t m11428 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11429_MI;
extern "C" int8_t m11429 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11430_MI;
extern "C" float m11430 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11431_MI;
extern "C" t9 * m11431 (t2107 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_2;
	}

IL_0013:
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t2107_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_3) == ((t9*)(t126 *)L_4))))
		{
			goto IL_0022;
		}
	}
	{
		return __this;
	}

IL_0022:
	{
		t2128 * L_5 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_5, &m11604_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m11432_MI;
extern "C" uint16_t m11432 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11433_MI;
extern "C" uint32_t m11433 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11434_MI;
extern "C" uint64_t m11434 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11435_MI;
extern "C" void m11435 (t2107 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11917(NULL, __this, L_0, L_1, &m11917_MI);
		return;
	}
}
extern MethodInfo m11436_MI;
extern "C" t2* m11436 (t2107 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m11437_MI;
extern "C" t2* m11437 (t2107 * __this, t9 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
#include "t2108.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2108_TI;
#include "t2108MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1706.h"
#include "t2151.h"
#include "t2109.h"
#include "t2199.h"
#include "t2200.h"
#include "t2178.h"
#include "t2177.h"
#include "t319.h"
#include "t2137.h"
#include "t1531.h"
#include "t923.h"
#include "t897.h"
extern TypeInfo t2151_TI;
extern TypeInfo t310_TI;
extern TypeInfo t221_TI;
extern TypeInfo t1101_TI;
extern TypeInfo t2178_TI;
extern TypeInfo t2137_TI;
extern TypeInfo t2199_TI;
extern TypeInfo t2200_TI;
extern TypeInfo t897_TI;
#include "t2151MD.h"
#include "t2178MD.h"
#include "t320MD.h"
#include "t2137MD.h"
#include "t2199MD.h"
#include "t2200MD.h"
#include "t923MD.h"
#include "t897MD.h"
#include "t1710MD.h"
#include "t2110MD.h"
extern Il2CppType t221_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t2199_0_0_0;
extern Il2CppType t2200_0_0_0;
extern MethodInfo m11460_MI;
extern MethodInfo m11856_MI;
extern MethodInfo m11857_MI;
extern MethodInfo m11859_MI;
extern MethodInfo m11860_MI;
extern MethodInfo m11468_MI;
extern MethodInfo m11438_MI;
extern MethodInfo m11890_MI;
extern MethodInfo m11895_MI;
extern MethodInfo m11505_MI;
extern MethodInfo m11861_MI;
extern MethodInfo m1132_MI;
extern MethodInfo m11470_MI;
extern MethodInfo m11461_MI;
extern MethodInfo m11462_MI;
extern MethodInfo m11439_MI;
extern MethodInfo m11442_MI;
extern MethodInfo m11851_MI;
extern MethodInfo m7021_MI;
extern MethodInfo m11440_MI;
extern MethodInfo m11481_MI;
extern MethodInfo m11459_MI;
extern MethodInfo m11853_MI;
extern MethodInfo m11483_MI;
extern MethodInfo m11441_MI;
extern MethodInfo m1160_MI;
extern MethodInfo m12174_MI;
extern MethodInfo m12175_MI;
extern MethodInfo m11503_MI;
extern MethodInfo m11485_MI;
extern MethodInfo m11473_MI;
extern MethodInfo m5794_MI;
extern MethodInfo m11885_MI;
extern MethodInfo m11882_MI;
extern MethodInfo m11474_MI;
extern MethodInfo m11881_MI;
extern MethodInfo m4446_MI;
extern MethodInfo m5859_MI;
extern MethodInfo m11487_MI;
extern MethodInfo m11488_MI;
extern MethodInfo m11512_MI;
extern MethodInfo m4354_MI;
extern MethodInfo m8724_MI;
extern MethodInfo m11489_MI;
extern MethodInfo m11497_MI;
extern MethodInfo m8744_MI;
extern MethodInfo m2834_MI;
extern MethodInfo m8755_MI;
extern MethodInfo m11500_MI;
extern MethodInfo m8741_MI;
extern MethodInfo m5967_MI;
extern MethodInfo m11492_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m7080_MI;
extern MethodInfo m11496_MI;
extern MethodInfo m8736_MI;
extern MethodInfo m2777_MI;
extern MethodInfo m8748_MI;
extern MethodInfo m8737_MI;
extern MethodInfo m8739_MI;
extern MethodInfo m11494_MI;
extern MethodInfo m2829_MI;
extern MethodInfo m11529_MI;
extern MethodInfo m6028_MI;
extern MethodInfo m5847_MI;
extern MethodInfo m11493_MI;
extern MethodInfo m8734_MI;
extern MethodInfo m11491_MI;
extern MethodInfo m8732_MI;
extern MethodInfo m5968_MI;
extern MethodInfo m331_MI;
extern MethodInfo m11495_MI;
extern MethodInfo m11490_MI;
extern MethodInfo m8735_MI;
extern MethodInfo m8733_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m11469_MI;
extern MethodInfo m7018_MI;
extern MethodInfo m11463_MI;
extern MethodInfo m11507_MI;
extern MethodInfo m11510_MI;
extern MethodInfo m11852_MI;
extern MethodInfo m11511_MI;
extern MethodInfo m11524_MI;
extern MethodInfo m11887_MI;
extern MethodInfo m11498_MI;
extern MethodInfo m11499_MI;
extern MethodInfo m11504_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m11531_MI;
extern MethodInfo m11893_MI;
extern MethodInfo m11894_MI;
extern MethodInfo m11880_MI;
extern MethodInfo m11883_MI;
extern MethodInfo m11884_MI;
extern MethodInfo m11886_MI;
extern FieldInfo t2178_f50_FieldInfo;
extern FieldInfo t2178_f51_FieldInfo;
extern Il2CppGenericMethod m12174_GM;
extern Il2CppGenericMethod m12175_GM;


extern TypeInfo* t158_TI_var;
extern "C" void m11438 (t272 * __this, int64_t p0, MethodInfo* method)
{
	static bool m11438_init;
	if (!m11438_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11438_init = true;
	}
	t2* V_0 = {0};
	t272  V_1 = {0};
	t272  V_2 = {0};
	t272  V_3 = {0};
	t272  V_4 = {0};
	{
		int64_t L_0 = p0;
		t310  L_1 = {0};
		m11851(&L_1, L_0, &m11851_MI);
		__this->f0 = L_1;
		int64_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_3 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		V_1 = L_3;
		int64_t L_4 = m7021((&V_1), &m7021_MI);
		if ((((int64_t)L_2) < ((int64_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		int64_t L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_6 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		V_2 = L_6;
		int64_t L_7 = m7021((&V_2), &m7021_MI);
		if ((((int64_t)L_5) <= ((int64_t)L_7)))
		{
			goto IL_007d;
		}
	}

IL_002c:
	{
		t158* L_8 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int64_t L_9 = p0;
		int64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t303_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 0)) = (t9 *)L_11;
		t158* L_12 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_13 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		V_3 = L_13;
		int64_t L_14 = m7021((&V_3), &m7021_MI);
		int64_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t303_TI), &L_15);
		ArrayElementTypeCheck (L_12, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 1)) = (t9 *)L_16;
		t158* L_17 = L_12;
		t272  L_18 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		V_4 = L_18;
		int64_t L_19 = m7021((&V_4), &m7021_MI);
		int64_t L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t303_TI), &L_20);
		ArrayElementTypeCheck (L_17, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 2)) = (t9 *)L_21;
		t2* L_22 = m7889(NULL, (t2*) &_stringLiteral2639, L_17, &m7889_MI);
		V_0 = L_22;
		t2* L_23 = V_0;
		t909 * L_24 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_24, (t2*) &_stringLiteral2640, L_23, &m4402_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_007d:
	{
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11439 (t272 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		m11440(__this, L_0, L_1, L_2, 0, 0, 0, 0, &m11440_MI);
		return;
	}
}
extern "C" void m11440 (t272 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)9999))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_3 = p1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)12))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = p2;
		if ((((int32_t)L_4) < ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_5 = p2;
		int32_t L_6 = p0;
		int32_t L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_8 = m11481(NULL, L_6, L_7, &m11481_MI);
		if ((((int32_t)L_5) > ((int32_t)L_8)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = p3;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_10 = p3;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)23))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_11 = p4;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_12 = p4;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)59))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_13 = p5;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_14 = p5;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)59))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_15 = p6;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_16 = p6;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)999))))
		{
			goto IL_005d;
		}
	}

IL_0052:
	{
		t909 * L_17 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_17, (t2*) &_stringLiteral2641, &m5763_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_005d:
	{
		int32_t L_18 = p0;
		int32_t L_19 = p1;
		int32_t L_20 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_21 = m11459(NULL, L_18, L_19, L_20, &m11459_MI);
		int32_t L_22 = p3;
		int32_t L_23 = p4;
		int32_t L_24 = p5;
		int32_t L_25 = p6;
		t310  L_26 = {0};
		m11853(&L_26, L_21, L_22, L_23, L_24, L_25, &m11853_MI);
		__this->f0 = L_26;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11441 (t272 * __this, bool p0, t310  p1, MethodInfo* method)
{
	t272  V_0 = {0};
	t272  V_1 = {0};
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int64_t L_1 = m11861((&p1), &m11861_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_2 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		V_0 = L_2;
		int64_t L_3 = m7021((&V_0), &m7021_MI);
		if ((((int64_t)L_1) < ((int64_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_4 = m11861((&p1), &m11861_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_5 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		V_1 = L_5;
		int64_t L_6 = m7021((&V_1), &m7021_MI);
		if ((((int64_t)L_4) <= ((int64_t)L_6)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_7, &m5940_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		t310  L_8 = p1;
		__this->f0 = L_8;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11442 (t272 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		m11438(__this, L_0, &m11438_MI);
		int32_t L_1 = p1;
		m11483(__this, L_1, &m11483_MI);
		int32_t L_2 = p1;
		__this->f1 = L_2;
		return;
	}
}
extern MethodInfo m11443_MI;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t1101_TI_var;
extern TypeInfo* t2199_TI_var;
extern TypeInfo* t2200_TI_var;
extern MethodInfo* m12174_MI_var;
extern MethodInfo* m12175_MI_var;
extern "C" void m11443 (t9 * __this , MethodInfo* method)
{
	static bool m11443_init;
	if (!m11443_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		t2199_TI_var = il2cpp_codegen_class_from_type(&t2199_0_0_0);
		t2200_TI_var = il2cpp_codegen_class_from_type(&t2200_0_0_0);
		m12174_MI_var = il2cpp_codegen_genericmethod_get_method(&m12174_GM);
		m12175_MI_var = il2cpp_codegen_genericmethod_get_method(&m12175_GM);
		m11443_init = true;
	}
	t2199 * V_0 = {0};
	t2200 * V_1 = {0};
	{
		t310  L_0 = {0};
		m11851(&L_0, ((int64_t)3155378975999999999LL), &m11851_MI);
		t272  L_1 = {0};
		m11441(&L_1, 0, L_0, &m11441_MI);
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2 = L_1;
		t310  L_2 = {0};
		m11851(&L_2, (((int64_t)0)), &m11851_MI);
		t272  L_3 = {0};
		m11441(&L_3, 0, L_2, &m11441_MI);
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3 = L_3;
		t221* L_4 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)9)));
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2642);
		*((t2**)(t2**)SZArrayLdElema(L_4, 0)) = (t2*)(t2*) &_stringLiteral2642;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2643);
		*((t2**)(t2**)SZArrayLdElema(L_5, 1)) = (t2*)(t2*) &_stringLiteral2643;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2644);
		*((t2**)(t2**)SZArrayLdElema(L_6, 2)) = (t2*)(t2*) &_stringLiteral2644;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2645);
		*((t2**)(t2**)SZArrayLdElema(L_7, 3)) = (t2*)(t2*) &_stringLiteral2645;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral2646);
		*((t2**)(t2**)SZArrayLdElema(L_8, 4)) = (t2*)(t2*) &_stringLiteral2646;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral2647);
		*((t2**)(t2**)SZArrayLdElema(L_9, 5)) = (t2*)(t2*) &_stringLiteral2647;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral2648);
		*((t2**)(t2**)SZArrayLdElema(L_10, 6)) = (t2*)(t2*) &_stringLiteral2648;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral2649);
		*((t2**)(t2**)SZArrayLdElema(L_11, 7)) = (t2*)(t2*) &_stringLiteral2649;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral2650);
		*((t2**)(t2**)SZArrayLdElema(L_12, 8)) = (t2*)(t2*) &_stringLiteral2650;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f4 = L_12;
		t221* L_13 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)10)));
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_13, 0)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_14, 1)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral2653);
		*((t2**)(t2**)SZArrayLdElema(L_15, 2)) = (t2*)(t2*) &_stringLiteral2653;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral2654);
		*((t2**)(t2**)SZArrayLdElema(L_16, 3)) = (t2*)(t2*) &_stringLiteral2654;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_17, 4)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_18, 5)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_19, 6)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral2658);
		*((t2**)(t2**)SZArrayLdElema(L_20, 7)) = (t2*)(t2*) &_stringLiteral2658;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral2659);
		*((t2**)(t2**)SZArrayLdElema(L_21, 8)) = (t2*)(t2*) &_stringLiteral2659;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral2660);
		*((t2**)(t2**)SZArrayLdElema(L_22, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2660;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f5 = L_22;
		t221* L_23 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)12)));
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_23, 0)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_24, 1)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral2653);
		*((t2**)(t2**)SZArrayLdElema(L_25, 2)) = (t2*)(t2*) &_stringLiteral2653;
		t221* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_26, 3)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral2662);
		*((t2**)(t2**)SZArrayLdElema(L_27, 4)) = (t2*)(t2*) &_stringLiteral2662;
		t221* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral2663);
		*((t2**)(t2**)SZArrayLdElema(L_28, 5)) = (t2*)(t2*) &_stringLiteral2663;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral2664);
		*((t2**)(t2**)SZArrayLdElema(L_29, 6)) = (t2*)(t2*) &_stringLiteral2664;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_30, 7)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_31, 8)) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral2667);
		*((t2**)(t2**)SZArrayLdElema(L_32, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2667;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_33, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2668;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_34, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2669;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f6 = L_34;
		t221* L_35 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)15)));
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_35, 0)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_36, 1)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral2653);
		*((t2**)(t2**)SZArrayLdElema(L_37, 2)) = (t2*)(t2*) &_stringLiteral2653;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_38, 3)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral2662);
		*((t2**)(t2**)SZArrayLdElema(L_39, 4)) = (t2*)(t2*) &_stringLiteral2662;
		t221* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_40, 5)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_41, 6)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_42, 7)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_43, 8)) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral2670);
		*((t2**)(t2**)SZArrayLdElema(L_44, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2670;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral2671);
		*((t2**)(t2**)SZArrayLdElema(L_45, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2671;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral2672);
		*((t2**)(t2**)SZArrayLdElema(L_46, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2672;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_47, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral2668;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral2673);
		*((t2**)(t2**)SZArrayLdElema(L_48, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral2673;
		t221* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_49, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral2669;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f7 = L_49;
		t221* L_50 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)15)));
		ArrayElementTypeCheck (L_50, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_50, 0)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_51, 1)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral2653);
		*((t2**)(t2**)SZArrayLdElema(L_52, 2)) = (t2*)(t2*) &_stringLiteral2653;
		t221* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_53, 3)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral2662);
		*((t2**)(t2**)SZArrayLdElema(L_54, 4)) = (t2*)(t2*) &_stringLiteral2662;
		t221* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t2*) &_stringLiteral2663);
		*((t2**)(t2**)SZArrayLdElema(L_55, 5)) = (t2*)(t2*) &_stringLiteral2663;
		t221* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral2664);
		*((t2**)(t2**)SZArrayLdElema(L_56, 6)) = (t2*)(t2*) &_stringLiteral2664;
		t221* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_57, 7)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_58, 8)) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t2*) &_stringLiteral2674);
		*((t2**)(t2**)SZArrayLdElema(L_59, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2674;
		t221* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_60, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2669;
		t221* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral2675);
		*((t2**)(t2**)SZArrayLdElema(L_61, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2675;
		t221* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t2*) &_stringLiteral2671);
		*((t2**)(t2**)SZArrayLdElema(L_62, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral2671;
		t221* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t2*) &_stringLiteral2672);
		*((t2**)(t2**)SZArrayLdElema(L_63, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral2672;
		t221* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_64, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral2668;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f8 = L_64;
		t221* L_65 = ((t221*)SZArrayNew(t221_TI_var, 3));
		ArrayElementTypeCheck (L_65, (t2*) &_stringLiteral2676);
		*((t2**)(t2**)SZArrayLdElema(L_65, 0)) = (t2*)(t2*) &_stringLiteral2676;
		t221* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t2*) &_stringLiteral2677);
		*((t2**)(t2**)SZArrayLdElema(L_66, 1)) = (t2*)(t2*) &_stringLiteral2677;
		t221* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t2*) &_stringLiteral2678);
		*((t2**)(t2**)SZArrayLdElema(L_67, 2)) = (t2*)(t2*) &_stringLiteral2678;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f9 = L_67;
		t221* L_68 = ((t221*)SZArrayNew(t221_TI_var, 3));
		ArrayElementTypeCheck (L_68, (t2*) &_stringLiteral2679);
		*((t2**)(t2**)SZArrayLdElema(L_68, 0)) = (t2*)(t2*) &_stringLiteral2679;
		t221* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t2*) &_stringLiteral2680);
		*((t2**)(t2**)SZArrayLdElema(L_69, 1)) = (t2*)(t2*) &_stringLiteral2680;
		t221* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t2*) &_stringLiteral2678);
		*((t2**)(t2**)SZArrayLdElema(L_70, 2)) = (t2*)(t2*) &_stringLiteral2678;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f10 = L_70;
		t1101* L_71 = ((t1101*)SZArrayNew(t1101_TI_var, ((int32_t)13)));
		m1160(NULL, (t121 *)(t121 *)L_71, LoadFieldToken(&t2178_f50_FieldInfo), &m1160_MI);
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f11 = L_71;
		t1101* L_72 = ((t1101*)SZArrayNew(t1101_TI_var, ((int32_t)13)));
		m1160(NULL, (t121 *)(t121 *)L_72, LoadFieldToken(&t2178_f51_FieldInfo), &m1160_MI);
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f12 = L_72;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		bool L_73 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f0;
		if (!L_73)
		{
			goto IL_02e6;
		}
	}
	{
		t2199 * L_74 = (t2199 *)il2cpp_codegen_object_new (t2199_TI_var);
		m12174(L_74, m12174_MI_var);
		V_0 = L_74;
		t2200 * L_75 = (t2200 *)il2cpp_codegen_object_new (t2200_TI_var);
		m12175(L_75, m12175_MI_var);
		V_1 = L_75;
	}

IL_02e6:
	{
		return;
	}
}
extern MethodInfo m11444_MI;
extern "C" bool m11444 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11445_MI;
extern "C" uint8_t m11445 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11446_MI;
extern "C" uint16_t m11446 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11447_MI;
extern "C" t272  m11447 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		return (*(t272 *)__this);
	}
}
extern MethodInfo m11448_MI;
extern "C" t910  m11448 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11449_MI;
extern "C" double m11449 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11450_MI;
extern "C" int16_t m11450 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11451_MI;
extern "C" int32_t m11451 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11452_MI;
extern "C" int64_t m11452 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11453_MI;
extern "C" int8_t m11453 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11454_MI;
extern "C" float m11454 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11455_MI;
extern "C" t9 * m11455 (t272 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1075, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t272_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_2) == ((t9*)(t126 *)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		t272  L_4 = (*(t272 *)__this);
		t9 * L_5 = Box(InitializedTypeInfo(&t272_TI), &L_4);
		return L_5;
	}

IL_0027:
	{
		t126 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_6) == ((t9*)(t126 *)L_7))))
		{
			goto IL_003c;
		}
	}
	{
		t9 * L_8 = p1;
		t2* L_9 = m11503(__this, L_8, &m11503_MI);
		return L_9;
	}

IL_003c:
	{
		t126 * L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_11 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_10) == ((t9*)(t126 *)L_11))))
		{
			goto IL_0055;
		}
	}
	{
		t272  L_12 = (*(t272 *)__this);
		t9 * L_13 = Box(InitializedTypeInfo(&t272_TI), &L_12);
		return L_13;
	}

IL_0055:
	{
		t2128 * L_14 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_14, &m11604_MI);
		il2cpp_codegen_raise_exception(L_14);
	}
}
extern MethodInfo m11456_MI;
extern "C" uint16_t m11456 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11457_MI;
extern "C" uint32_t m11457 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11458_MI;
extern "C" uint64_t m11458 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2128 * L_0 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11604(L_0, &m11604_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" int32_t m11459 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1101* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1101* G_B3_0 = {0};
	{
		V_1 = 0;
		V_2 = 1;
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_1 = m11485(NULL, L_0, &m11485_MI);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t1101* L_2 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f12;
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t1101* L_3 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f11;
		G_B3_0 = L_3;
	}

IL_0018:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_001b:
	{
		int32_t L_4 = V_1;
		t1101* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = p1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_11 = p2;
		int32_t L_12 = V_1;
		int32_t L_13 = p0;
		int32_t L_14 = p0;
		int32_t L_15 = p0;
		int32_t L_16 = p0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11-(int32_t)1))+(int32_t)L_12))+(int32_t)((int32_t)((int32_t)((int32_t)365)*(int32_t)((int32_t)((int32_t)L_13-(int32_t)1))))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14-(int32_t)1))/(int32_t)4))))-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15-(int32_t)1))/(int32_t)((int32_t)100)))))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16-(int32_t)1))/(int32_t)((int32_t)400)))));
	}
}
extern "C" int32_t m11460 (t272 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t1101* V_5 = {0};
	int32_t V_6 = 0;
	{
		V_4 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t1101* L_0 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f11;
		V_5 = L_0;
		t310 * L_1 = &(__this->f0);
		int32_t L_2 = m11856(L_1, &m11856_MI);
		V_6 = L_2;
		int32_t L_3 = V_6;
		V_0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)146097)));
		int32_t L_4 = V_6;
		int32_t L_5 = V_0;
		V_6 = ((int32_t)((int32_t)L_4-(int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)146097)))));
		int32_t L_6 = V_6;
		V_1 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)36524)));
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)4))))
		{
			goto IL_003b;
		}
	}
	{
		V_1 = 3;
	}

IL_003b:
	{
		int32_t L_8 = V_6;
		int32_t L_9 = V_1;
		V_6 = ((int32_t)((int32_t)L_8-(int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)36524)))));
		int32_t L_10 = V_6;
		V_2 = ((int32_t)((int32_t)L_10/(int32_t)((int32_t)1461)));
		int32_t L_11 = V_6;
		int32_t L_12 = V_2;
		V_6 = ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)1461)))));
		int32_t L_13 = V_6;
		V_3 = ((int32_t)((int32_t)L_13/(int32_t)((int32_t)365)));
		int32_t L_14 = V_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_006b;
		}
	}
	{
		V_3 = 3;
	}

IL_006b:
	{
		int32_t L_15 = p0;
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16*(int32_t)((int32_t)400)))+(int32_t)((int32_t)((int32_t)L_17*(int32_t)((int32_t)100)))))+(int32_t)((int32_t)((int32_t)L_18*(int32_t)4))))+(int32_t)L_19))+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_20 = V_6;
		int32_t L_21 = V_3;
		V_6 = ((int32_t)((int32_t)L_20-(int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)365)))));
		int32_t L_22 = p0;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_23 = V_6;
		return ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)3)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)24))))
		{
			goto IL_00ad;
		}
	}

IL_00a6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t1101* L_27 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f12;
		V_5 = L_27;
	}

IL_00ad:
	{
		goto IL_00be;
	}

IL_00af:
	{
		int32_t L_28 = V_6;
		t1101* L_29 = V_5;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = L_31;
		V_6 = ((int32_t)((int32_t)L_28-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_29, L_32))));
	}

IL_00be:
	{
		int32_t L_33 = V_6;
		t1101* L_34 = V_5;
		int32_t L_35 = V_4;
		int32_t L_36 = L_35;
		if ((((int32_t)L_33) >= ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_36)))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_37 = p0;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_38 = V_4;
		return L_38;
	}

IL_00ce:
	{
		int32_t L_39 = V_6;
		return ((int32_t)((int32_t)L_39+(int32_t)1));
	}
}
extern "C" int32_t m11461 (t272 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11460(__this, 2, &m11460_MI);
		return L_0;
	}
}
extern "C" int32_t m11462 (t272 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11460(__this, 0, &m11460_MI);
		return L_0;
	}
}
extern "C" int32_t m11463 (t272 * __this, MethodInfo* method)
{
	{
		t310 * L_0 = &(__this->f0);
		int32_t L_1 = m11856(L_0, &m11856_MI);
		return (int32_t)(((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)1))%(int32_t)7)));
	}
}
extern MethodInfo m11464_MI;
extern "C" int32_t m11464 (t272 * __this, MethodInfo* method)
{
	{
		t310 * L_0 = &(__this->f0);
		int32_t L_1 = m11857(L_0, &m11857_MI);
		return L_1;
	}
}
extern MethodInfo m11465_MI;
extern "C" int32_t m11465 (t272 * __this, MethodInfo* method)
{
	{
		t310 * L_0 = &(__this->f0);
		int32_t L_1 = m11859(L_0, &m11859_MI);
		return L_1;
	}
}
extern MethodInfo m11466_MI;
extern "C" int32_t m11466 (t272 * __this, MethodInfo* method)
{
	{
		t310 * L_0 = &(__this->f0);
		int32_t L_1 = m11860(L_0, &m11860_MI);
		return L_1;
	}
}
extern MethodInfo m11467_MI;
extern "C" int64_t m11467 (t9 * __this , MethodInfo* method)
{
	typedef int64_t (*m11467_ftn) ();
	static m11467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11467_ftn)il2cpp_codegen_resolve_icall ("System.DateTime::GetTimeMonotonic()");
	return _il2cpp_icall_func();
}
extern "C" int64_t m11468 (t9 * __this , MethodInfo* method)
{
	typedef int64_t (*m11468_ftn) ();
	static m11468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11468_ftn)il2cpp_codegen_resolve_icall ("System.DateTime::GetNow()");
	return _il2cpp_icall_func();
}
extern "C" t272  m1132 (t9 * __this , MethodInfo* method)
{
	int64_t V_0 = 0;
	t272  V_1 = {0};
	t272  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int64_t L_0 = m11468(NULL, &m11468_MI);
		V_0 = L_0;
		int64_t L_1 = V_0;
		m11438((&V_1), L_1, &m11438_MI);
		int64_t L_2 = V_0;
		int64_t L_3 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f14;
		if ((((int64_t)((int64_t)((int64_t)L_2-(int64_t)L_3))) <= ((int64_t)(((int64_t)((int32_t)600000000))))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_4 = m11890(NULL, &m11890_MI);
		t272  L_5 = V_1;
		t310  L_6 = m11895(L_4, L_5, &m11895_MI);
		t310  L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t310_TI), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f13 = L_8;
		int64_t L_9 = V_0;
		((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f14 = L_9;
	}

IL_0038:
	{
		t272  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t9 * L_11 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f13;
		t272  L_12 = m11505(NULL, L_10, ((*(t310 *)((t310 *)UnBox (L_11, InitializedTypeInfo(&t310_TI))))), &m11505_MI);
		V_2 = L_12;
		(&V_2)->f1 = 2;
		t272  L_13 = V_2;
		return L_13;
	}
}
extern "C" int64_t m7021 (t272 * __this, MethodInfo* method)
{
	{
		t310 * L_0 = &(__this->f0);
		int64_t L_1 = m11861(L_0, &m11861_MI);
		return L_1;
	}
}
extern "C" t272  m11469 (t9 * __this , MethodInfo* method)
{
	t272  V_0 = {0};
	t272  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_0 = m1132(NULL, &m1132_MI);
		V_0 = L_0;
		int32_t L_1 = m11470((&V_0), &m11470_MI);
		int32_t L_2 = m11461((&V_0), &m11461_MI);
		int32_t L_3 = m11462((&V_0), &m11462_MI);
		m11439((&V_1), L_1, L_2, L_3, &m11439_MI);
		int32_t L_4 = ((&V_0)->f1);
		(&V_1)->f1 = L_4;
		t272  L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m6976_MI;
extern "C" t272  m6976 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int64_t L_0 = m11468(NULL, &m11468_MI);
		t272  L_1 = {0};
		m11442(&L_1, L_0, 1, &m11442_MI);
		return L_1;
	}
}
extern "C" int32_t m11470 (t272 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11460(__this, 3, &m11460_MI);
		return L_0;
	}
}
extern MethodInfo m11471_MI;
extern "C" int32_t m11471 (t272 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11472_MI;
extern "C" t272  m11472 (t272 * __this, t310  p0, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		int64_t L_0 = m11861((&p0), &m11861_MI);
		t272  L_1 = m11473(__this, L_0, &m11473_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		(&V_0)->f1 = L_2;
		t272  L_3 = V_0;
		return L_3;
	}
}
extern "C" t272  m11473 (t272 * __this, int64_t p0, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		int64_t L_0 = p0;
		t310 * L_1 = &(__this->f0);
		int64_t L_2 = m11861(L_1, &m11861_MI);
		if ((((int64_t)((int64_t)((int64_t)L_0+(int64_t)L_2))) > ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_0029;
		}
	}
	{
		int64_t L_3 = p0;
		t310 * L_4 = &(__this->f0);
		int64_t L_5 = m11861(L_4, &m11861_MI);
		if ((((int64_t)((int64_t)((int64_t)L_3+(int64_t)L_5))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_002f;
		}
	}

IL_0029:
	{
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_6, &m5940_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int64_t L_7 = p0;
		t310 * L_8 = &(__this->f0);
		int64_t L_9 = m11861(L_8, &m11861_MI);
		m11438((&V_0), ((int64_t)((int64_t)L_7+(int64_t)L_9)), &m11438_MI);
		int32_t L_10 = (__this->f1);
		(&V_0)->f1 = L_10;
		t272  L_11 = V_0;
		return L_11;
	}
}
extern "C" t272  m5794 (t272 * __this, double p0, MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		double L_0 = p0;
		if ((((double)((double)((double)L_0*(double)(10000.0)))) > ((double)(9.2233720368547758E+18))))
		{
			goto IL_002c;
		}
	}
	{
		double L_1 = p0;
		if ((!(((double)((double)((double)L_1*(double)(10000.0)))) < ((double)(-9.2233720368547758E+18)))))
		{
			goto IL_0032;
		}
	}

IL_002c:
	{
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_2, &m5940_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0032:
	{
		double L_3 = p0;
		double L_4 = round(((double)((double)L_3*(double)(10000.0))));
		V_0 = (((int64_t)L_4));
		int64_t L_5 = V_0;
		t272  L_6 = m11473(__this, L_5, &m11473_MI);
		return L_6;
	}
}
extern "C" t272  m7018 (t272 * __this, double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		t272  L_1 = m5794(__this, ((double)((double)L_0*(double)(1000.0))), &m5794_MI);
		return L_1;
	}
}
extern "C" int32_t m11474 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11885(NULL, L_0, L_1, &m11885_MI);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (-1);
	}

IL_0017:
	{
		t310  L_3 = ((&p0)->f0);
		t310  L_4 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_5 = m11882(NULL, L_3, L_4, &m11882_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
extern MethodInfo m11475_MI;
extern "C" int32_t m11475 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t272_TI))))
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2681, &m7888_MI);
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, L_2, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t9 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_5 = m11474(NULL, (*(t272 *)__this), ((*(t272 *)((t272 *)UnBox (L_4, InitializedTypeInfo(&t272_TI))))), &m11474_MI);
		return L_5;
	}
}
extern MethodInfo m11476_MI;
extern "C" int32_t m11476 (t272 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_1 = m11474(NULL, (*(t272 *)__this), L_0, &m11474_MI);
		return L_1;
	}
}
extern MethodInfo m11477_MI;
extern "C" bool m11477 (t272 * __this, t272  p0, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11881(NULL, L_0, L_1, &m11881_MI);
		return L_2;
	}
}
extern MethodInfo m11478_MI;
extern "C" int64_t m11478 (t272 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	t272  V_1 = {0};
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_003b;
	}

IL_0011:
	{
		int64_t L_3 = m7021(__this, &m7021_MI);
		return ((int64_t)((int64_t)L_3|(int64_t)((int64_t)4611686018427387904LL)));
	}

IL_0022:
	{
		t272  L_4 = m4446(__this, &m4446_MI);
		V_1 = L_4;
		int64_t L_5 = m7021((&V_1), &m7021_MI);
		return ((int64_t)((int64_t)L_5|(int64_t)((int64_t)std::numeric_limits<int64_t>::min())));
	}

IL_003b:
	{
		int64_t L_6 = m7021(__this, &m7021_MI);
		return L_6;
	}
}
extern MethodInfo m11479_MI;
extern "C" t272  m11479 (t9 * __this , int64_t p0, MethodInfo* method)
{
	uint64_t V_0 = 0;
	t272  V_1 = {0};
	{
		int64_t L_0 = p0;
		V_0 = ((int64_t)((uint64_t)L_0>>((int32_t)62)));
		uint64_t L_1 = V_0;
		if ((((int64_t)L_1) == ((int64_t)(((uint64_t)(((uint32_t)0)))))))
		{
			goto IL_0023;
		}
	}
	{
		uint64_t L_2 = V_0;
		if ((((int64_t)L_2) == ((int64_t)(((uint64_t)(((uint32_t)1)))))))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_002b;
	}

IL_0011:
	{
		int64_t L_3 = p0;
		t272  L_4 = {0};
		m11442(&L_4, ((int64_t)((int64_t)L_3^(int64_t)((int64_t)4611686018427387904LL))), 1, &m11442_MI);
		return L_4;
	}

IL_0023:
	{
		int64_t L_5 = p0;
		t272  L_6 = {0};
		m11442(&L_6, L_5, 0, &m11442_MI);
		return L_6;
	}

IL_002b:
	{
		int64_t L_7 = p0;
		m11442((&V_1), ((int64_t)((int64_t)L_7&(int64_t)((int64_t)4611686018427387903LL))), 1, &m11442_MI);
		t272  L_8 = m5859((&V_1), &m5859_MI);
		return L_8;
	}
}
extern MethodInfo m11480_MI;
extern "C" t272  m11480 (t9 * __this , t272  p0, int32_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = m7021((&p0), &m7021_MI);
		int32_t L_1 = p1;
		t272  L_2 = {0};
		m11442(&L_2, L_0, L_1, &m11442_MI);
		return L_2;
	}
}
extern "C" int32_t m11481 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	t1101* V_0 = {0};
	t1101* G_B9_0 = {0};
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = p1;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)12))))
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_2, &m5940_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		int32_t L_3 = p0;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_4 = p0;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)9999))))
		{
			goto IL_0021;
		}
	}

IL_001b:
	{
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_5, &m5940_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0021:
	{
		int32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_7 = m11485(NULL, L_6, &m11485_MI);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t1101* L_8 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f12;
		G_B9_0 = L_8;
		goto IL_0035;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t1101* L_9 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f11;
		G_B9_0 = L_9;
	}

IL_0035:
	{
		V_0 = G_B9_0;
		t1101* L_10 = V_0;
		int32_t L_11 = p1;
		int32_t L_12 = L_11;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12));
	}
}
extern MethodInfo m11482_MI;
extern "C" bool m11482 (t272 * __this, t9 * p0, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t272_TI))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t272 *)((t272 *)UnBox (L_1, InitializedTypeInfo(&t272_TI)))));
		t310  L_2 = ((&V_0)->f0);
		t310  L_3 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_4 = m11881(NULL, L_2, L_3, &m11881_MI);
		return L_4;
	}
}
extern "C" void m11483 (t272 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_3, (t2*) &_stringLiteral2682, (t2*) &_stringLiteral2683, &m5761_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		return;
	}
}
extern MethodInfo m11484_MI;
extern "C" int32_t m11484 (t272 * __this, MethodInfo* method)
{
	{
		t310 * L_0 = &(__this->f0);
		int64_t L_1 = m11861(L_0, &m11861_MI);
		return (((int32_t)L_1));
	}
}
extern "C" bool m11485 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)9999))))
		{
			goto IL_0012;
		}
	}

IL_000c:
	{
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_2, &m5940_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0012:
	{
		int32_t L_3 = p0;
		if (((int32_t)((int32_t)L_3%(int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = p0;
		if (((int32_t)((int32_t)L_4%(int32_t)((int32_t)100))))
		{
			goto IL_0029;
		}
	}

IL_001d:
	{
		int32_t L_5 = p0;
		G_B7_0 = ((((int32_t)((int32_t)((int32_t)L_5%(int32_t)((int32_t)400)))) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B7_0 = 1;
	}

IL_002a:
	{
		return G_B7_0;
	}
}
extern "C" t272  m11486 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_2 = m11487(NULL, L_0, L_1, 7, &m11487_MI);
		return L_2;
	}
}
extern "C" t272  m11487 (t9 * __this , t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	t272  V_0 = {0};
	t923  V_1 = {0};
	t138 * V_2 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1077, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_2 = (t138 *)NULL;
		t2* L_2 = p0;
		t9 * L_3 = p1;
		int32_t L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_5 = m11488(NULL, L_2, L_3, L_4, (&V_0), (&V_1), 1, (&V_2), &m11488_MI);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		t138 * L_6 = V_2;
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0023:
	{
		t272  L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" bool m11488 (t9 * __this , t2* p0, t9 * p1, int32_t p2, t272 * p3, t923 * p4, bool p5, t138 ** p6, MethodInfo* method)
{
	static bool m11488_init;
	if (!m11488_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11488_init = true;
	}
	t1710 * V_0 = {0};
	t221* V_1 = {0};
	bool V_2 = false;
	int32_t V_3 = 0;
	t2* V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	t221* V_10 = {0};
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	t2* V_14 = {0};
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	t2* V_18 = {0};
	t221* G_B29_0 = {0};
	{
		t923 * L_0 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		m11512(L_0, (((int64_t)0)), L_1, &m11512_MI);
		t2* L_2 = p0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m2763(L_3, &m2763_MI);
		if (L_4)
		{
			goto IL_0037;
		}
	}

IL_0019:
	{
		bool L_5 = p5;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		t138 ** L_6 = p6;
		t897 * L_7 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_7, (t2*) &_stringLiteral2684, &m4354_MI);
		*((t9 **)(L_6)) = (t9 *)L_7;
	}

IL_002a:
	{
		t272 * L_8 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_9 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		*L_8 = L_9;
		return 0;
	}

IL_0037:
	{
		t9 * L_10 = p1;
		if (L_10)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_11 = m7011(NULL, &m7011_MI);
		p1 = L_11;
	}

IL_0043:
	{
		t9 * L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_13 = m8724(NULL, L_12, &m8724_MI);
		V_0 = L_13;
		t1710 * L_14 = V_0;
		bool L_15 = p5;
		t138 ** L_16 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_17 = m11489(NULL, L_14, L_15, L_16, &m11489_MI);
		V_1 = L_17;
		t221* L_18 = V_1;
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		t272 * L_19 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_20 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		*L_19 = L_20;
		return 0;
	}

IL_0065:
	{
		V_2 = 0;
		V_3 = 0;
		goto IL_00ce;
	}

IL_006b:
	{
		t221* L_21 = V_1;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_4 = (*(t2**)(t2**)SZArrayLdElema(L_21, L_23));
		V_5 = 0;
		t2* L_24 = p0;
		t2* L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_26 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t272 * L_27 = p3;
		t923 * L_28 = p4;
		t1710 * L_29 = V_0;
		int32_t L_30 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_31 = m11497(NULL, L_24, L_25, L_26, 0, L_27, L_28, L_29, L_30, 1, (&V_5), (&V_2), &m11497_MI);
		if (!L_31)
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		bool L_32 = V_5;
		if (L_32)
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00ca;
	}

IL_0095:
	{
		V_6 = 0;
		goto IL_00bf;
	}

IL_009a:
	{
		t2* L_33 = p0;
		t2* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_35 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f4;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		t272 * L_38 = p3;
		t923 * L_39 = p4;
		t1710 * L_40 = V_0;
		int32_t L_41 = p2;
		bool L_42 = m11497(NULL, L_33, L_34, (*(t2**)(t2**)SZArrayLdElema(L_35, L_37)), 0, L_38, L_39, L_40, L_41, 1, (&V_5), (&V_2), &m11497_MI);
		if (!L_42)
		{
			goto IL_00b9;
		}
	}
	{
		return 1;
	}

IL_00b9:
	{
		int32_t L_43 = V_6;
		V_6 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00bf:
	{
		int32_t L_44 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_45 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f4;
		if ((((int32_t)L_44) < ((int32_t)(((int32_t)(((t121 *)L_45)->max_length))))))
		{
			goto IL_009a;
		}
	}

IL_00ca:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_47 = V_3;
		t221* L_48 = V_1;
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)(((t121 *)L_48)->max_length))))))
		{
			goto IL_006b;
		}
	}
	{
		t1710 * L_49 = V_0;
		t2* L_50 = m8744(L_49, &m8744_MI);
		int32_t L_51 = m2834(L_50, ((int32_t)100), &m2834_MI);
		V_7 = L_51;
		t1710 * L_52 = V_0;
		t2* L_53 = m8744(L_52, &m8744_MI);
		int32_t L_54 = m2834(L_53, ((int32_t)77), &m2834_MI);
		V_8 = L_54;
		int32_t L_55 = V_7;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_56 = V_8;
		if ((!(((uint32_t)L_56) == ((uint32_t)(-1)))))
		{
			goto IL_012e;
		}
	}

IL_00fc:
	{
		t272 * L_57 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_58 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		*L_57 = L_58;
		bool L_59 = p5;
		if (!L_59)
		{
			goto IL_012c;
		}
	}
	{
		t138 ** L_60 = p6;
		t158* L_61 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t1710 * L_62 = V_0;
		t2* L_63 = m8744(L_62, &m8744_MI);
		ArrayElementTypeCheck (L_61, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_61, 0)) = (t9 *)L_63;
		t2* L_64 = m7889(NULL, (t2*) &_stringLiteral2685, L_61, &m7889_MI);
		t897 * L_65 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_65, L_64, &m4354_MI);
		*((t9 **)(L_60)) = (t9 *)L_65;
	}

IL_012c:
	{
		return 0;
	}

IL_012e:
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_8;
		V_9 = ((((int32_t)L_66) < ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_9;
		if (!L_68)
		{
			goto IL_0141;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_69 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f10;
		G_B29_0 = L_69;
		goto IL_0146;
	}

IL_0141:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_70 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f9;
		G_B29_0 = L_70;
	}

IL_0146:
	{
		V_10 = G_B29_0;
		V_11 = 0;
		goto IL_0175;
	}

IL_014d:
	{
		V_12 = 0;
		t2* L_71 = p0;
		t221* L_72 = V_10;
		int32_t L_73 = V_11;
		int32_t L_74 = L_73;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_75 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t272 * L_76 = p3;
		t923 * L_77 = p4;
		t1710 * L_78 = V_0;
		int32_t L_79 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_80 = m11497(NULL, L_71, (*(t2**)(t2**)SZArrayLdElema(L_72, L_74)), L_75, 0, L_76, L_77, L_78, L_79, 1, (&V_12), (&V_2), &m11497_MI);
		if (!L_80)
		{
			goto IL_016f;
		}
	}
	{
		return 1;
	}

IL_016f:
	{
		int32_t L_81 = V_11;
		V_11 = ((int32_t)((int32_t)L_81+(int32_t)1));
	}

IL_0175:
	{
		int32_t L_82 = V_11;
		t221* L_83 = V_10;
		if ((((int32_t)L_82) < ((int32_t)(((int32_t)(((t121 *)L_83)->max_length))))))
		{
			goto IL_014d;
		}
	}
	{
		V_13 = 0;
		goto IL_0233;
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_84 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f4;
		int32_t L_85 = V_13;
		int32_t L_86 = L_85;
		V_14 = (*(t2**)(t2**)SZArrayLdElema(L_84, L_86));
		V_15 = 0;
		t2* L_87 = p0;
		t2* L_88 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_89 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t272 * L_90 = p3;
		t923 * L_91 = p4;
		t1710 * L_92 = V_0;
		int32_t L_93 = p2;
		bool L_94 = m11497(NULL, L_87, L_88, L_89, 0, L_90, L_91, L_92, L_93, 0, (&V_15), (&V_2), &m11497_MI);
		if (!L_94)
		{
			goto IL_01ae;
		}
	}
	{
		return 1;
	}

IL_01ae:
	{
		bool L_95 = V_15;
		if (L_95)
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_022d;
	}

IL_01b7:
	{
		V_16 = 0;
		goto IL_01de;
	}

IL_01bc:
	{
		t2* L_96 = p0;
		t2* L_97 = V_14;
		t221* L_98 = V_10;
		int32_t L_99 = V_16;
		int32_t L_100 = L_99;
		t272 * L_101 = p3;
		t923 * L_102 = p4;
		t1710 * L_103 = V_0;
		int32_t L_104 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_105 = m11497(NULL, L_96, L_97, (*(t2**)(t2**)SZArrayLdElema(L_98, L_100)), 0, L_101, L_102, L_103, L_104, 0, (&V_15), (&V_2), &m11497_MI);
		if (!L_105)
		{
			goto IL_01d8;
		}
	}
	{
		return 1;
	}

IL_01d8:
	{
		int32_t L_106 = V_16;
		V_16 = ((int32_t)((int32_t)L_106+(int32_t)1));
	}

IL_01de:
	{
		int32_t L_107 = V_16;
		t221* L_108 = V_10;
		if ((((int32_t)L_107) < ((int32_t)(((int32_t)(((t121 *)L_108)->max_length))))))
		{
			goto IL_01bc;
		}
	}
	{
		V_17 = 0;
		goto IL_0226;
	}

IL_01eb:
	{
		t221* L_109 = V_1;
		int32_t L_110 = V_17;
		int32_t L_111 = L_110;
		V_18 = (*(t2**)(t2**)SZArrayLdElema(L_109, L_111));
		t2* L_112 = V_18;
		t2* L_113 = V_18;
		int32_t L_114 = m2763(L_113, &m2763_MI);
		uint16_t L_115 = m2778(L_112, ((int32_t)((int32_t)L_114-(int32_t)1)), &m2778_MI);
		if ((!(((uint32_t)L_115) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0207;
		}
	}
	{
		goto IL_0220;
	}

IL_0207:
	{
		t2* L_116 = p0;
		t2* L_117 = V_14;
		t2* L_118 = V_18;
		t272 * L_119 = p3;
		t923 * L_120 = p4;
		t1710 * L_121 = V_0;
		int32_t L_122 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_123 = m11497(NULL, L_116, L_117, L_118, 0, L_119, L_120, L_121, L_122, 0, (&V_15), (&V_2), &m11497_MI);
		if (!L_123)
		{
			goto IL_0220;
		}
	}
	{
		return 1;
	}

IL_0220:
	{
		int32_t L_124 = V_17;
		V_17 = ((int32_t)((int32_t)L_124+(int32_t)1));
	}

IL_0226:
	{
		int32_t L_125 = V_17;
		t221* L_126 = V_1;
		if ((((int32_t)L_125) < ((int32_t)(((int32_t)(((t121 *)L_126)->max_length))))))
		{
			goto IL_01eb;
		}
	}

IL_022d:
	{
		int32_t L_127 = V_13;
		V_13 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_0233:
	{
		int32_t L_128 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_129 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f4;
		if ((((int32_t)L_128) < ((int32_t)(((int32_t)(((t121 *)L_129)->max_length))))))
		{
			goto IL_0185;
		}
	}
	{
		t2* L_130 = p0;
		t1710 * L_131 = V_0;
		t221* L_132 = m8755(L_131, &m8755_MI);
		t1710 * L_133 = V_0;
		int32_t L_134 = p2;
		t272 * L_135 = p3;
		bool L_136 = p5;
		t138 ** L_137 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_138 = m11500(NULL, L_130, L_132, L_133, L_134, L_135, 0, (&V_2), L_136, L_137, &m11500_MI);
		if (!L_138)
		{
			goto IL_025b;
		}
	}
	{
		return 1;
	}

IL_025b:
	{
		bool L_139 = p5;
		if (L_139)
		{
			goto IL_0261;
		}
	}
	{
		return 0;
	}

IL_0261:
	{
		t138 ** L_140 = p6;
		t897 * L_141 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_141, (t2*) &_stringLiteral2684, &m4354_MI);
		*((t9 **)(L_140)) = (t9 *)L_141;
		return 0;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t221* m11489 (t9 * __this , t1710 * p0, bool p1, t138 ** p2, MethodInfo* method)
{
	static bool m11489_init;
	if (!m11489_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11489_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t1710 * L_0 = p0;
		t2* L_1 = m8741(L_0, &m8741_MI);
		int32_t L_2 = m2834(L_1, ((int32_t)100), &m2834_MI);
		V_0 = L_2;
		t1710 * L_3 = p0;
		t2* L_4 = m8741(L_3, &m8741_MI);
		int32_t L_5 = m2834(L_4, ((int32_t)77), &m2834_MI);
		V_1 = L_5;
		t1710 * L_6 = p0;
		t2* L_7 = m8741(L_6, &m8741_MI);
		int32_t L_8 = m2834(L_7, ((int32_t)121), &m2834_MI);
		V_2 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_005b;
		}
	}

IL_0036:
	{
		bool L_12 = p1;
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		t138 ** L_13 = p2;
		t158* L_14 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t1710 * L_15 = p0;
		t2* L_16 = m8741(L_15, &m8741_MI);
		ArrayElementTypeCheck (L_14, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_14, 0)) = (t9 *)L_16;
		t2* L_17 = m7889(NULL, (t2*) &_stringLiteral2686, L_14, &m7889_MI);
		t897 * L_18 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_18, L_17, &m4354_MI);
		*((t9 **)(L_13)) = (t9 *)L_18;
	}

IL_0059:
	{
		return (t221*)NULL;
	}

IL_005b:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_23 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f6;
		return L_23;
	}

IL_0069:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_0073;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_26 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f5;
		return L_26;
	}

IL_0073:
	{
		bool L_27 = p1;
		if (!L_27)
		{
			goto IL_0096;
		}
	}
	{
		t138 ** L_28 = p2;
		t158* L_29 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t1710 * L_30 = p0;
		t2* L_31 = m8741(L_30, &m8741_MI);
		ArrayElementTypeCheck (L_29, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_29, 0)) = (t9 *)L_31;
		t2* L_32 = m7889(NULL, (t2*) &_stringLiteral2687, L_29, &m7889_MI);
		t897 * L_33 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_33, L_32, &m4354_MI);
		*((t9 **)(L_28)) = (t9 *)L_33;
	}

IL_0096:
	{
		return (t221*)NULL;
	}

IL_0098:
	{
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_00a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_36 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f7;
		return L_36;
	}

IL_00a2:
	{
		int32_t L_37 = V_0;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_00ac;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t221* L_39 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f8;
		return L_39;
	}

IL_00ac:
	{
		bool L_40 = p1;
		if (!L_40)
		{
			goto IL_00cf;
		}
	}
	{
		t138 ** L_41 = p2;
		t158* L_42 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t1710 * L_43 = p0;
		t2* L_44 = m8741(L_43, &m8741_MI);
		ArrayElementTypeCheck (L_42, L_44);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 0)) = (t9 *)L_44;
		t2* L_45 = m7889(NULL, (t2*) &_stringLiteral2688, L_42, &m7889_MI);
		t897 * L_46 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_46, L_45, &m4354_MI);
		*((t9 **)(L_41)) = (t9 *)L_46;
	}

IL_00cf:
	{
		return (t221*)NULL;
	}
}
extern "C" int32_t m11490 (t9 * __this , t2* p0, int32_t p1, int32_t p2, int32_t p3, bool p4, bool p5, int32_t* p6, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		V_0 = 0;
		bool L_0 = p5;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		p4 = 0;
	}

IL_000b:
	{
		bool L_1 = p4;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		V_2 = 0;
		int32_t L_2 = p1;
		V_1 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		t2* L_3 = p0;
		int32_t L_4 = V_1;
		uint16_t L_5 = m2778(L_3, L_4, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_6 = m5967(NULL, L_5, &m5967_MI);
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_003c;
	}

IL_0025:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		t2* L_10 = p0;
		int32_t L_11 = m2763(L_10, &m2763_MI);
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = V_1;
		int32_t L_13 = p3;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)L_13+(int32_t)L_14)))))
		{
			goto IL_0015;
		}
	}

IL_003c:
	{
		int32_t L_15 = V_2;
		p3 = L_15;
	}

IL_0041:
	{
		int32_t L_16 = p3;
		int32_t L_17 = p2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t* L_18 = p6;
		*((int32_t*)(L_18)) = (int32_t)(-1);
		return 0;
	}

IL_004b:
	{
		t2* L_19 = p0;
		int32_t L_20 = m2763(L_19, &m2763_MI);
		int32_t L_21 = p1;
		int32_t L_22 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_20-(int32_t)L_21))) >= ((int32_t)L_22)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t* L_23 = p6;
		*((int32_t*)(L_23)) = (int32_t)(-1);
		return 0;
	}

IL_005c:
	{
		int32_t L_24 = p1;
		V_1 = L_24;
		goto IL_0085;
	}

IL_0060:
	{
		t2* L_25 = p0;
		int32_t L_26 = V_1;
		uint16_t L_27 = m2778(L_25, L_26, &m2778_MI);
		V_3 = L_27;
		uint16_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_29 = m5967(NULL, L_28, &m5967_MI);
		if (L_29)
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_30 = p6;
		*((int32_t*)(L_30)) = (int32_t)(-1);
		return 0;
	}

IL_0076:
	{
		int32_t L_31 = V_0;
		uint16_t L_32 = V_3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_31*(int32_t)((int32_t)10)))+(int32_t)(((uint8_t)((int32_t)((int32_t)L_32-(int32_t)((int32_t)48)))))));
		int32_t L_33 = V_1;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_0085:
	{
		int32_t L_34 = V_1;
		int32_t L_35 = p3;
		int32_t L_36 = p1;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)L_35+(int32_t)L_36)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_37 = p6;
		int32_t L_38 = p3;
		*((int32_t*)(L_37)) = (int32_t)L_38;
		int32_t L_39 = V_0;
		return L_39;
	}
}
extern "C" int32_t m11491 (t9 * __this , t2* p0, int32_t p1, t221* p2, t221* p3, bool p4, int32_t* p5, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t221* L_0 = p2;
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))-(int32_t)1));
		goto IL_009b;
	}

IL_000b:
	{
		bool L_1 = p4;
		if (L_1)
		{
			goto IL_005b;
		}
	}
	{
		t221* L_2 = p3;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = m2763((*(t2**)(t2**)SZArrayLdElema(L_2, L_4)), &m2763_MI);
		t221* L_6 = p2;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		int32_t L_9 = m2763((*(t2**)(t2**)SZArrayLdElema(L_6, L_8)), &m2763_MI);
		if ((((int32_t)L_5) <= ((int32_t)L_9)))
		{
			goto IL_005b;
		}
	}
	{
		t221* L_10 = p3;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = m2763((*(t2**)(t2**)SZArrayLdElema(L_10, L_12)), &m2763_MI);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		t2* L_14 = p0;
		int32_t L_15 = p1;
		t221* L_16 = p3;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		int32_t* L_19 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_20 = m11492(NULL, L_14, L_15, 0, (*(t2**)(t2**)SZArrayLdElema(L_16, L_18)), L_19, &m11492_MI);
		if (!L_20)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_21 = V_0;
		return L_21;
	}

IL_003d:
	{
		t221* L_22 = p2;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		int32_t L_25 = m2763((*(t2**)(t2**)SZArrayLdElema(L_22, L_24)), &m2763_MI);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		t2* L_26 = p0;
		int32_t L_27 = p1;
		t221* L_28 = p2;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		int32_t* L_31 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_32 = m11492(NULL, L_26, L_27, 0, (*(t2**)(t2**)SZArrayLdElema(L_28, L_30)), L_31, &m11492_MI);
		if (!L_32)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_33 = V_0;
		return L_33;
	}

IL_0059:
	{
		goto IL_0097;
	}

IL_005b:
	{
		t221* L_34 = p2;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		int32_t L_37 = m2763((*(t2**)(t2**)SZArrayLdElema(L_34, L_36)), &m2763_MI);
		if ((((int32_t)L_37) <= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		t2* L_38 = p0;
		int32_t L_39 = p1;
		t221* L_40 = p2;
		int32_t L_41 = V_0;
		int32_t L_42 = L_41;
		int32_t* L_43 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_44 = m11492(NULL, L_38, L_39, 0, (*(t2**)(t2**)SZArrayLdElema(L_40, L_42)), L_43, &m11492_MI);
		if (!L_44)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_45 = V_0;
		return L_45;
	}

IL_0077:
	{
		bool L_46 = p4;
		if (L_46)
		{
			goto IL_0097;
		}
	}
	{
		t221* L_47 = p3;
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		int32_t L_50 = m2763((*(t2**)(t2**)SZArrayLdElema(L_47, L_49)), &m2763_MI);
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		t2* L_51 = p0;
		int32_t L_52 = p1;
		t221* L_53 = p3;
		int32_t L_54 = V_0;
		int32_t L_55 = L_54;
		int32_t* L_56 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_57 = m11492(NULL, L_51, L_52, 0, (*(t2**)(t2**)SZArrayLdElema(L_53, L_55)), L_56, &m11492_MI);
		if (!L_57)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_58 = V_0;
		return L_58;
	}

IL_0097:
	{
		int32_t L_59 = V_0;
		V_0 = ((int32_t)((int32_t)L_59-(int32_t)1));
	}

IL_009b:
	{
		int32_t L_60 = V_0;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_61 = p5;
		*((int32_t*)(L_61)) = (int32_t)(-1);
		return (-1);
	}
}
extern "C" bool m11492 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t* p4, MethodInfo* method)
{
	{
		int32_t L_0 = p2;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		t2* L_1 = p3;
		int32_t L_2 = m2763(L_1, &m2763_MI);
		p2 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t2* L_5 = p0;
		int32_t L_6 = m2763(L_5, &m2763_MI);
		if ((((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))) > ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = p1;
		t2* L_9 = p3;
		int32_t L_10 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_11 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_12 = m7080(NULL, L_7, L_8, L_9, 0, L_10, 1, L_11, &m7080_MI);
		if (L_12)
		{
			goto IL_0031;
		}
	}
	{
		int32_t* L_13 = p4;
		int32_t L_14 = p2;
		*((int32_t*)(L_13)) = (int32_t)L_14;
		return 1;
	}

IL_0031:
	{
		int32_t* L_15 = p4;
		*((int32_t*)(L_15)) = (int32_t)(-1);
		return 0;
	}
}
extern "C" bool m11493 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t1710 * p3, bool p4, int32_t* p5, int32_t* p6, MethodInfo* method)
{
	t1710 * V_0 = {0};
	{
		int32_t* L_0 = p5;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		int32_t* L_1 = p6;
		if ((((int32_t)(*((int32_t*)L_1))) == ((int32_t)(-1))))
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		t2* L_2 = p0;
		int32_t L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_4 = m11496(NULL, L_2, L_3, &m11496_MI);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		t1710 * L_5 = p3;
		t2* L_6 = m8736(L_5, &m8736_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_8 = m2777(NULL, L_6, L_7, &m2777_MI);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		bool L_9 = p4;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		int32_t* L_10 = p6;
		*((int32_t*)(L_10)) = (int32_t)0;
	}

IL_0031:
	{
		int32_t* L_11 = p5;
		*((int32_t*)(L_11)) = (int32_t)0;
		return 1;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_12 = m8748(NULL, &m8748_MI);
		V_0 = L_12;
		bool L_13 = p4;
		if (L_13)
		{
			goto IL_0053;
		}
	}
	{
		t2* L_14 = p0;
		int32_t L_15 = p1;
		int32_t L_16 = p2;
		t1710 * L_17 = V_0;
		t2* L_18 = m8737(L_17, &m8737_MI);
		int32_t* L_19 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_20 = m11492(NULL, L_14, L_15, L_16, L_18, L_19, &m11492_MI);
		if (L_20)
		{
			goto IL_0077;
		}
	}

IL_0053:
	{
		t1710 * L_21 = p3;
		t2* L_22 = m8737(L_21, &m8737_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_24 = m2777(NULL, L_22, L_23, &m2777_MI);
		if (!L_24)
		{
			goto IL_007d;
		}
	}
	{
		t2* L_25 = p0;
		int32_t L_26 = p1;
		int32_t L_27 = p2;
		t1710 * L_28 = p3;
		t2* L_29 = m8737(L_28, &m8737_MI);
		int32_t* L_30 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_31 = m11492(NULL, L_25, L_26, L_27, L_29, L_30, &m11492_MI);
		if (!L_31)
		{
			goto IL_007d;
		}
	}

IL_0077:
	{
		int32_t* L_32 = p6;
		*((int32_t*)(L_32)) = (int32_t)1;
		goto IL_00b6;
	}

IL_007d:
	{
		bool L_33 = p4;
		if (L_33)
		{
			goto IL_0093;
		}
	}
	{
		t2* L_34 = p0;
		int32_t L_35 = p1;
		int32_t L_36 = p2;
		t1710 * L_37 = V_0;
		t2* L_38 = m8736(L_37, &m8736_MI);
		int32_t* L_39 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_40 = m11492(NULL, L_34, L_35, L_36, L_38, L_39, &m11492_MI);
		if (L_40)
		{
			goto IL_00a5;
		}
	}

IL_0093:
	{
		t2* L_41 = p0;
		int32_t L_42 = p1;
		int32_t L_43 = p2;
		t1710 * L_44 = p3;
		t2* L_45 = m8736(L_44, &m8736_MI);
		int32_t* L_46 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_47 = m11492(NULL, L_41, L_42, L_43, L_45, L_46, &m11492_MI);
		if (!L_47)
		{
			goto IL_00b4;
		}
	}

IL_00a5:
	{
		bool L_48 = p4;
		if (L_48)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t* L_49 = p5;
		if (!(*((int32_t*)L_49)))
		{
			goto IL_00b2;
		}
	}

IL_00ae:
	{
		int32_t* L_50 = p6;
		*((int32_t*)(L_50)) = (int32_t)0;
	}

IL_00b2:
	{
		goto IL_00b6;
	}

IL_00b4:
	{
		return 0;
	}

IL_00b6:
	{
		return 1;
	}
}
extern "C" bool m11494 (t9 * __this , t2* p0, int32_t p1, t1710 * p2, bool p3, int32_t* p4, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t1710 * L_2 = p2;
		t2* L_3 = m8739(L_2, &m8739_MI);
		int32_t* L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_5 = m11492(NULL, L_0, L_1, 0, L_3, L_4, &m11492_MI);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		bool L_6 = p3;
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = p1;
		int32_t* L_9 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_10 = m11492(NULL, L_7, L_8, 0, (t2*) &_stringLiteral339, L_9, &m11492_MI);
		G_B4_0 = ((int32_t)(L_10));
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = 0;
	}

IL_0027:
	{
		G_B6_0 = G_B4_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 1;
	}

IL_002a:
	{
		return G_B6_0;
	}
}
extern "C" bool m11495 (t9 * __this , t2* p0, int32_t p1, t1710 * p2, bool p3, int32_t* p4, MethodInfo* method)
{
	{
		int32_t* L_0 = p4;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		bool L_1 = p3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		t2* L_2 = p0;
		int32_t L_3 = p1;
		uint16_t L_4 = m2778(L_2, L_3, &m2778_MI);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		t2* L_5 = p0;
		int32_t L_6 = p1;
		t1710 * L_7 = p2;
		bool L_8 = p3;
		int32_t* L_9 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_10 = m11494(NULL, L_5, L_6, L_7, L_8, L_9, &m11494_MI);
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = p1;
		uint16_t L_13 = m2778(L_11, L_12, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_14 = m5967(NULL, L_13, &m5967_MI);
		if (L_14)
		{
			goto IL_003d;
		}
	}
	{
		t2* L_15 = p0;
		int32_t L_16 = p1;
		uint16_t L_17 = m2778(L_15, L_16, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_18 = m2829(NULL, L_17, &m2829_MI);
		if (!L_18)
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		return 0;
	}

IL_003f:
	{
		int32_t* L_19 = p4;
		*((int32_t*)(L_19)) = (int32_t)1;
		return 1;
	}
}
extern "C" bool m11496 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p1;
		t2* L_1 = p0;
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = p1;
		uint16_t L_5 = m2778(L_3, L_4, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_6 = m2829(NULL, L_5, &m2829_MI);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
extern "C" bool m11497 (t9 * __this , t2* p0, t2* p1, t2* p2, bool p3, t272 * p4, t923 * p5, t1710 * p6, int32_t p7, bool p8, bool* p9, bool* p10, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	t2* V_5 = {0};
	bool V_6 = false;
	t1710 * V_7 = {0};
	t2* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	double V_19 = 0.0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	double V_31 = 0.0;
	bool V_32 = false;
	int64_t V_33 = 0;
	bool V_34 = false;
	uint16_t V_35 = 0x0;
	t272  V_36 = {0};
	t272  V_37 = {0};
	t272  V_38 = {0};
	t272  V_39 = {0};
	t310  V_40 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B173_0 = 0;
	t2* G_B173_1 = {0};
	int32_t G_B172_0 = 0;
	t2* G_B172_1 = {0};
	int32_t G_B174_0 = 0;
	int32_t G_B174_1 = 0;
	t2* G_B174_2 = {0};
	int32_t G_B183_0 = 0;
	int32_t G_B182_0 = 0;
	int32_t G_B184_0 = 0;
	int32_t G_B184_1 = 0;
	int32_t G_B231_0 = 0;
	t2* G_B231_1 = {0};
	int32_t G_B230_0 = 0;
	t2* G_B230_1 = {0};
	int32_t G_B232_0 = 0;
	int32_t G_B232_1 = 0;
	t2* G_B232_2 = {0};
	int32_t G_B413_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		t923 * L_0 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		m11512(L_0, (((int64_t)0)), L_1, &m11512_MI);
		bool L_2 = p3;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t2* L_3 = p2;
		G_B3_0 = ((((int32_t)((((t9*)(t2*)L_3) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_3 = G_B3_0;
		bool* L_4 = p9;
		*((int8_t*)(L_4)) = (int8_t)0;
		V_4 = 0;
		t2* L_5 = p1;
		V_5 = L_5;
		V_6 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_6 = m8748(NULL, &m8748_MI);
		V_7 = L_6;
		t2* L_7 = V_5;
		int32_t L_8 = m2763(L_7, &m2763_MI);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		t2* L_9 = V_5;
		uint16_t L_10 = m2778(L_9, 0, &m2778_MI);
		t1710 * L_11 = p6;
		t2* L_12 = m11529(NULL, L_10, L_11, (&V_0), (&V_1), &m11529_MI);
		V_5 = L_12;
	}

IL_0055:
	{
		t272 * L_13 = p4;
		m11438(L_13, (((int64_t)0)), &m11438_MI);
		t2* L_14 = V_5;
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		return 0;
	}

IL_0064:
	{
		t2* L_15 = p0;
		if (L_15)
		{
			goto IL_0069;
		}
	}
	{
		return 0;
	}

IL_0069:
	{
		int32_t L_16 = p7;
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		t2* L_17 = V_5;
		t2* L_18 = m6028(L_17, (t318*)(t318*)NULL, &m6028_MI);
		V_5 = L_18;
		t2* L_19 = p0;
		t2* L_20 = m6028(L_19, (t318*)(t318*)NULL, &m6028_MI);
		p0 = L_20;
	}

IL_0084:
	{
		int32_t L_21 = p7;
		if (!((int32_t)((int32_t)L_21&(int32_t)2)))
		{
			goto IL_009f;
		}
	}
	{
		t2* L_22 = V_5;
		t2* L_23 = m5847(L_22, (t318*)(t318*)NULL, &m5847_MI);
		V_5 = L_23;
		t2* L_24 = p0;
		t2* L_25 = m5847(L_24, (t318*)(t318*)NULL, &m5847_MI);
		p0 = L_25;
	}

IL_009f:
	{
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_00a8;
		}
	}
	{
		t1710 * L_27 = V_7;
		p6 = L_27;
	}

IL_00a8:
	{
		int32_t L_28 = p7;
		if (!((int32_t)((int32_t)L_28&(int32_t)4)))
		{
			goto IL_00b0;
		}
	}
	{
		V_2 = 1;
	}

IL_00b0:
	{
		t2* L_29 = V_5;
		V_8 = L_29;
		t2* L_30 = V_5;
		int32_t L_31 = m2763(L_30, &m2763_MI);
		V_9 = L_31;
		V_10 = 0;
		V_11 = 0;
		int32_t L_32 = V_9;
		if (L_32)
		{
			goto IL_00c9;
		}
	}
	{
		return 0;
	}

IL_00c9:
	{
		V_12 = (-1);
		V_13 = (-1);
		V_14 = (-1);
		V_15 = (-1);
		V_16 = (-1);
		V_17 = (-1);
		V_18 = (-1);
		V_19 = (-1.0);
		V_20 = (-1);
		V_21 = (-1);
		V_22 = (-1);
		V_23 = (-1);
		V_24 = 1;
		goto IL_0c67;
	}

IL_00fd:
	{
		int32_t L_33 = V_4;
		t2* L_34 = p0;
		int32_t L_35 = m2763(L_34, &m2763_MI);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_35))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_0c6c;
	}

IL_010c:
	{
		V_25 = 0;
		bool L_36 = V_3;
		if (!L_36)
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_37 = V_10;
		int32_t L_38 = V_11;
		if (((int32_t)((int32_t)L_37+(int32_t)L_38)))
		{
			goto IL_023a;
		}
	}
	{
		t2* L_39 = p0;
		int32_t L_40 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_41 = m11496(NULL, L_39, L_40, &m11496_MI);
		V_26 = L_41;
		bool L_42 = V_26;
		if (!L_42)
		{
			goto IL_016f;
		}
	}
	{
		t2* L_43 = p0;
		int32_t L_44 = V_4;
		uint16_t L_45 = m2778(L_43, L_44, &m2778_MI);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_013e;
		}
	}
	{
		V_25 = 1;
		goto IL_014f;
	}

IL_013e:
	{
		t2* L_46 = p0;
		int32_t L_47 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		m11492(NULL, L_46, L_47, 0, (t2*) &_stringLiteral2689, (&V_25), &m11492_MI);
	}

IL_014f:
	{
		int32_t L_48 = V_25;
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_016f;
		}
	}
	{
		t2* L_49 = p0;
		int32_t L_50 = V_4;
		int32_t L_51 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_52 = m11496(NULL, L_49, ((int32_t)((int32_t)L_50+(int32_t)L_51)), &m11496_MI);
		if (L_52)
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_53 = V_4;
		int32_t L_54 = V_25;
		V_4 = ((int32_t)((int32_t)L_53+(int32_t)L_54));
		V_0 = 1;
		goto IL_0c67;
	}

IL_016f:
	{
		bool L_55 = V_6;
		if (L_55)
		{
			goto IL_01a8;
		}
	}
	{
		t2* L_56 = p0;
		int32_t L_57 = V_4;
		t1710 * L_58 = p6;
		bool L_59 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_60 = m11493(NULL, L_56, L_57, 0, L_58, L_59, (&V_25), (&V_20), &m11493_MI);
		if (!L_60)
		{
			goto IL_01a8;
		}
	}
	{
		t2* L_61 = p0;
		int32_t L_62 = V_4;
		int32_t L_63 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_64 = m11496(NULL, L_61, ((int32_t)((int32_t)L_62+(int32_t)L_63)), &m11496_MI);
		if (!L_64)
		{
			goto IL_0197;
		}
	}
	{
		V_20 = (-1);
		goto IL_01a8;
	}

IL_0197:
	{
		int32_t L_65 = V_25;
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = V_25;
		V_4 = ((int32_t)((int32_t)L_66+(int32_t)L_67));
		goto IL_0c67;
	}

IL_01a8:
	{
		bool L_68 = V_6;
		if (L_68)
		{
			goto IL_0211;
		}
	}
	{
		int32_t L_69 = V_13;
		if ((!(((uint32_t)L_69) == ((uint32_t)(-1)))))
		{
			goto IL_0211;
		}
	}
	{
		bool L_70 = V_26;
		if (!L_70)
		{
			goto IL_0211;
		}
	}
	{
		t2* L_71 = p0;
		int32_t L_72 = V_4;
		t1710 * L_73 = p6;
		t221* L_74 = m8734(L_73, &m8734_MI);
		t1710 * L_75 = V_7;
		t221* L_76 = m8734(L_75, &m8734_MI);
		bool L_77 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_78 = m11491(NULL, L_71, L_72, L_74, L_76, L_77, (&V_25), &m11491_MI);
		V_13 = L_78;
		int32_t L_79 = V_13;
		if ((!(((uint32_t)L_79) == ((uint32_t)(-1)))))
		{
			goto IL_01f0;
		}
	}
	{
		t2* L_80 = p0;
		int32_t L_81 = V_4;
		t1710 * L_82 = p6;
		t221* L_83 = m8732(L_82, &m8732_MI);
		t1710 * L_84 = V_7;
		t221* L_85 = m8732(L_84, &m8732_MI);
		bool L_86 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_87 = m11491(NULL, L_80, L_81, L_83, L_85, L_86, (&V_25), &m11491_MI);
		V_13 = L_87;
	}

IL_01f0:
	{
		int32_t L_88 = V_13;
		if ((((int32_t)L_88) == ((int32_t)(-1))))
		{
			goto IL_020e;
		}
	}
	{
		t2* L_89 = p0;
		int32_t L_90 = V_4;
		int32_t L_91 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_92 = m11496(NULL, L_89, ((int32_t)((int32_t)L_90+(int32_t)L_91)), &m11496_MI);
		if (L_92)
		{
			goto IL_020e;
		}
	}
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_25;
		V_4 = ((int32_t)((int32_t)L_93+(int32_t)L_94));
		goto IL_0c67;
	}

IL_020e:
	{
		V_13 = (-1);
	}

IL_0211:
	{
		t2* L_95 = p0;
		int32_t L_96 = V_4;
		uint16_t L_97 = m2778(L_95, L_96, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_98 = m5968(NULL, L_97, &m5968_MI);
		if (L_98)
		{
			goto IL_022c;
		}
	}
	{
		t2* L_99 = p0;
		int32_t L_100 = V_4;
		uint16_t L_101 = m2778(L_99, L_100, &m2778_MI);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0237;
		}
	}

IL_022c:
	{
		int32_t L_102 = V_4;
		V_4 = ((int32_t)((int32_t)L_102+(int32_t)1));
		goto IL_0c67;
	}

IL_0237:
	{
		V_25 = 0;
	}

IL_023a:
	{
		int32_t L_103 = V_10;
		int32_t L_104 = V_11;
		int32_t L_105 = V_9;
		if ((((int32_t)((int32_t)((int32_t)L_103+(int32_t)L_104))) < ((int32_t)L_105)))
		{
			goto IL_02a9;
		}
	}
	{
		bool L_106 = V_3;
		if (!L_106)
		{
			goto IL_02a4;
		}
	}
	{
		int32_t L_107 = V_11;
		if (L_107)
		{
			goto IL_02a4;
		}
	}
	{
		bool L_108 = V_24;
		if (!L_108)
		{
			goto IL_0262;
		}
	}
	{
		t2* L_109 = p1;
		t2* L_110 = p1;
		int32_t L_111 = m2763(L_110, &m2763_MI);
		uint16_t L_112 = m2778(L_109, ((int32_t)((int32_t)L_111-(int32_t)1)), &m2778_MI);
		G_B56_0 = ((((int32_t)L_112) == ((int32_t)((int32_t)84)))? 1 : 0);
		goto IL_0263;
	}

IL_0262:
	{
		G_B56_0 = 0;
	}

IL_0263:
	{
		V_6 = G_B56_0;
		bool L_113 = V_24;
		if (L_113)
		{
			goto IL_027c;
		}
	}
	{
		t2* L_114 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_115 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_116 = m331(NULL, L_114, L_115, &m331_MI);
		if (!L_116)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_0c6c;
	}

IL_027c:
	{
		V_10 = 0;
		bool L_117 = V_24;
		if (!L_117)
		{
			goto IL_0288;
		}
	}
	{
		t2* L_118 = p2;
		V_5 = L_118;
		goto IL_028f;
	}

IL_0288:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_119 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_5 = L_119;
	}

IL_028f:
	{
		t2* L_120 = V_5;
		V_8 = L_120;
		t2* L_121 = V_8;
		int32_t L_122 = m2763(L_121, &m2763_MI);
		V_9 = L_122;
		V_24 = 0;
		goto IL_0c67;
	}

IL_02a4:
	{
		goto IL_0c6c;
	}

IL_02a9:
	{
		V_27 = 1;
		t2* L_123 = V_8;
		int32_t L_124 = V_10;
		uint16_t L_125 = m2778(L_123, L_124, &m2778_MI);
		if ((!(((uint32_t)L_125) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0318;
		}
	}
	{
		V_11 = 1;
		goto IL_02fe;
	}

IL_02be:
	{
		t2* L_126 = V_8;
		int32_t L_127 = V_10;
		int32_t L_128 = V_11;
		uint16_t L_129 = m2778(L_126, ((int32_t)((int32_t)L_127+(int32_t)L_128)), &m2778_MI);
		if ((!(((uint32_t)L_129) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_02d0;
		}
	}
	{
		goto IL_0307;
	}

IL_02d0:
	{
		int32_t L_130 = V_4;
		t2* L_131 = p0;
		int32_t L_132 = m2763(L_131, &m2763_MI);
		if ((((int32_t)L_130) == ((int32_t)L_132)))
		{
			goto IL_02f0;
		}
	}
	{
		t2* L_133 = p0;
		int32_t L_134 = V_4;
		uint16_t L_135 = m2778(L_133, L_134, &m2778_MI);
		t2* L_136 = V_8;
		int32_t L_137 = V_10;
		int32_t L_138 = V_11;
		uint16_t L_139 = m2778(L_136, ((int32_t)((int32_t)L_137+(int32_t)L_138)), &m2778_MI);
		if ((((int32_t)L_135) == ((int32_t)L_139)))
		{
			goto IL_02f2;
		}
	}

IL_02f0:
	{
		return 0;
	}

IL_02f2:
	{
		int32_t L_140 = V_4;
		V_4 = ((int32_t)((int32_t)L_140+(int32_t)1));
		int32_t L_141 = V_11;
		V_11 = ((int32_t)((int32_t)L_141+(int32_t)1));
	}

IL_02fe:
	{
		int32_t L_142 = V_10;
		int32_t L_143 = V_11;
		int32_t L_144 = V_9;
		if ((((int32_t)((int32_t)((int32_t)L_142+(int32_t)L_143))) < ((int32_t)L_144)))
		{
			goto IL_02be;
		}
	}

IL_0307:
	{
		int32_t L_145 = V_10;
		int32_t L_146 = V_11;
		V_10 = ((int32_t)((int32_t)L_145+(int32_t)((int32_t)((int32_t)L_146+(int32_t)1))));
		V_11 = 0;
		goto IL_0c67;
	}

IL_0318:
	{
		t2* L_147 = V_8;
		int32_t L_148 = V_10;
		uint16_t L_149 = m2778(L_147, L_148, &m2778_MI);
		if ((!(((uint32_t)L_149) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0384;
		}
	}
	{
		V_11 = 1;
		goto IL_036a;
	}

IL_032a:
	{
		t2* L_150 = V_8;
		int32_t L_151 = V_10;
		int32_t L_152 = V_11;
		uint16_t L_153 = m2778(L_150, ((int32_t)((int32_t)L_151+(int32_t)L_152)), &m2778_MI);
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_033c;
		}
	}
	{
		goto IL_0373;
	}

IL_033c:
	{
		int32_t L_154 = V_4;
		t2* L_155 = p0;
		int32_t L_156 = m2763(L_155, &m2763_MI);
		if ((((int32_t)L_154) == ((int32_t)L_156)))
		{
			goto IL_035c;
		}
	}
	{
		t2* L_157 = p0;
		int32_t L_158 = V_4;
		uint16_t L_159 = m2778(L_157, L_158, &m2778_MI);
		t2* L_160 = V_8;
		int32_t L_161 = V_10;
		int32_t L_162 = V_11;
		uint16_t L_163 = m2778(L_160, ((int32_t)((int32_t)L_161+(int32_t)L_162)), &m2778_MI);
		if ((((int32_t)L_159) == ((int32_t)L_163)))
		{
			goto IL_035e;
		}
	}

IL_035c:
	{
		return 0;
	}

IL_035e:
	{
		int32_t L_164 = V_4;
		V_4 = ((int32_t)((int32_t)L_164+(int32_t)1));
		int32_t L_165 = V_11;
		V_11 = ((int32_t)((int32_t)L_165+(int32_t)1));
	}

IL_036a:
	{
		int32_t L_166 = V_10;
		int32_t L_167 = V_11;
		int32_t L_168 = V_9;
		if ((((int32_t)((int32_t)((int32_t)L_166+(int32_t)L_167))) < ((int32_t)L_168)))
		{
			goto IL_032a;
		}
	}

IL_0373:
	{
		int32_t L_169 = V_10;
		int32_t L_170 = V_11;
		V_10 = ((int32_t)((int32_t)L_169+(int32_t)((int32_t)((int32_t)L_170+(int32_t)1))));
		V_11 = 0;
		goto IL_0c67;
	}

IL_0384:
	{
		t2* L_171 = V_8;
		int32_t L_172 = V_10;
		uint16_t L_173 = m2778(L_171, L_172, &m2778_MI);
		if ((!(((uint32_t)L_173) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_03cb;
		}
	}
	{
		int32_t L_174 = V_10;
		int32_t L_175 = V_11;
		V_10 = ((int32_t)((int32_t)L_174+(int32_t)((int32_t)((int32_t)L_175+(int32_t)1))));
		V_11 = 0;
		int32_t L_176 = V_10;
		int32_t L_177 = V_9;
		if ((((int32_t)L_176) < ((int32_t)L_177)))
		{
			goto IL_03a5;
		}
	}
	{
		return 0;
	}

IL_03a5:
	{
		t2* L_178 = p0;
		int32_t L_179 = V_4;
		uint16_t L_180 = m2778(L_178, L_179, &m2778_MI);
		t2* L_181 = V_8;
		int32_t L_182 = V_10;
		uint16_t L_183 = m2778(L_181, L_182, &m2778_MI);
		if ((((int32_t)L_180) == ((int32_t)L_183)))
		{
			goto IL_03ba;
		}
	}
	{
		return 0;
	}

IL_03ba:
	{
		int32_t L_184 = V_4;
		V_4 = ((int32_t)((int32_t)L_184+(int32_t)1));
		int32_t L_185 = V_10;
		V_10 = ((int32_t)((int32_t)L_185+(int32_t)1));
		goto IL_0c67;
	}

IL_03cb:
	{
		t2* L_186 = V_8;
		int32_t L_187 = V_10;
		uint16_t L_188 = m2778(L_186, L_187, &m2778_MI);
		if ((!(((uint32_t)L_188) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_03e3;
		}
	}
	{
		int32_t L_189 = V_10;
		V_10 = ((int32_t)((int32_t)L_189+(int32_t)1));
		goto IL_0c67;
	}

IL_03e3:
	{
		t2* L_190 = p0;
		int32_t L_191 = V_4;
		uint16_t L_192 = m2778(L_190, L_191, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_193 = m5968(NULL, L_192, &m5968_MI);
		if (L_193)
		{
			goto IL_0424;
		}
	}
	{
		t2* L_194 = p0;
		int32_t L_195 = V_4;
		uint16_t L_196 = m2778(L_194, L_195, &m2778_MI);
		if ((!(((uint32_t)L_196) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_04fd;
		}
	}
	{
		bool L_197 = p3;
		if (L_197)
		{
			goto IL_0411;
		}
	}
	{
		t2* L_198 = V_8;
		int32_t L_199 = V_10;
		uint16_t L_200 = m2778(L_198, L_199, &m2778_MI);
		if ((((int32_t)L_200) == ((int32_t)((int32_t)47))))
		{
			goto IL_0424;
		}
	}

IL_0411:
	{
		t2* L_201 = V_8;
		int32_t L_202 = V_10;
		uint16_t L_203 = m2778(L_201, L_202, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_204 = m5968(NULL, L_203, &m5968_MI);
		if (!L_204)
		{
			goto IL_04fd;
		}
	}

IL_0424:
	{
		int32_t L_205 = V_4;
		V_4 = ((int32_t)((int32_t)L_205+(int32_t)1));
		V_11 = 0;
		bool L_206 = p3;
		if (!L_206)
		{
			goto IL_0453;
		}
	}
	{
		int32_t L_207 = p7;
		if (((int32_t)((int32_t)L_207&(int32_t)4)))
		{
			goto IL_0453;
		}
	}
	{
		t2* L_208 = V_8;
		int32_t L_209 = V_10;
		uint16_t L_210 = m2778(L_208, L_209, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_211 = m5968(NULL, L_210, &m5968_MI);
		if (L_211)
		{
			goto IL_0448;
		}
	}
	{
		return 0;
	}

IL_0448:
	{
		int32_t L_212 = V_10;
		V_10 = ((int32_t)((int32_t)L_212+(int32_t)1));
		goto IL_0c67;
	}

IL_0453:
	{
		int32_t L_213 = V_4;
		V_28 = L_213;
		goto IL_047e;
	}

IL_0459:
	{
		t2* L_214 = p0;
		int32_t L_215 = V_28;
		uint16_t L_216 = m2778(L_214, L_215, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_217 = m5968(NULL, L_216, &m5968_MI);
		if (L_217)
		{
			goto IL_0474;
		}
	}
	{
		t2* L_218 = p0;
		int32_t L_219 = V_28;
		uint16_t L_220 = m2778(L_218, L_219, &m2778_MI);
		if ((!(((uint32_t)L_220) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_047c;
		}
	}

IL_0474:
	{
		int32_t L_221 = V_28;
		V_28 = ((int32_t)((int32_t)L_221+(int32_t)1));
		goto IL_047e;
	}

IL_047c:
	{
		goto IL_0488;
	}

IL_047e:
	{
		int32_t L_222 = V_28;
		t2* L_223 = p0;
		int32_t L_224 = m2763(L_223, &m2763_MI);
		if ((((int32_t)L_222) < ((int32_t)L_224)))
		{
			goto IL_0459;
		}
	}

IL_0488:
	{
		int32_t L_225 = V_28;
		V_4 = L_225;
		int32_t L_226 = V_10;
		V_28 = L_226;
		goto IL_04b9;
	}

IL_0492:
	{
		t2* L_227 = V_8;
		int32_t L_228 = V_28;
		uint16_t L_229 = m2778(L_227, L_228, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_230 = m5968(NULL, L_229, &m5968_MI);
		if (L_230)
		{
			goto IL_04af;
		}
	}
	{
		t2* L_231 = V_8;
		int32_t L_232 = V_28;
		uint16_t L_233 = m2778(L_231, L_232, &m2778_MI);
		if ((!(((uint32_t)L_233) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_04b7;
		}
	}

IL_04af:
	{
		int32_t L_234 = V_28;
		V_28 = ((int32_t)((int32_t)L_234+(int32_t)1));
		goto IL_04b9;
	}

IL_04b7:
	{
		goto IL_04c4;
	}

IL_04b9:
	{
		int32_t L_235 = V_28;
		t2* L_236 = V_8;
		int32_t L_237 = m2763(L_236, &m2763_MI);
		if ((((int32_t)L_235) < ((int32_t)L_237)))
		{
			goto IL_0492;
		}
	}

IL_04c4:
	{
		int32_t L_238 = V_28;
		V_10 = L_238;
		bool L_239 = p3;
		if (L_239)
		{
			goto IL_04f8;
		}
	}
	{
		int32_t L_240 = V_10;
		t2* L_241 = V_8;
		int32_t L_242 = m2763(L_241, &m2763_MI);
		if ((((int32_t)L_240) >= ((int32_t)L_242)))
		{
			goto IL_04f8;
		}
	}
	{
		t2* L_243 = V_8;
		int32_t L_244 = V_10;
		uint16_t L_245 = m2778(L_243, L_244, &m2778_MI);
		if ((!(((uint32_t)L_245) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_04f8;
		}
	}
	{
		t2* L_246 = p0;
		int32_t L_247 = V_4;
		t1710 * L_248 = p6;
		bool L_249 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_250 = m11495(NULL, L_246, L_247, L_248, L_249, (&V_25), &m11495_MI);
		if (L_250)
		{
			goto IL_04f8;
		}
	}
	{
		int32_t L_251 = V_10;
		V_10 = ((int32_t)((int32_t)L_251+(int32_t)1));
	}

IL_04f8:
	{
		goto IL_0c67;
	}

IL_04fd:
	{
		int32_t L_252 = V_10;
		int32_t L_253 = V_11;
		int32_t L_254 = V_9;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_252+(int32_t)L_253))+(int32_t)1))) >= ((int32_t)L_254)))
		{
			goto IL_052f;
		}
	}
	{
		t2* L_255 = V_8;
		int32_t L_256 = V_10;
		int32_t L_257 = V_11;
		uint16_t L_258 = m2778(L_255, ((int32_t)((int32_t)((int32_t)((int32_t)L_256+(int32_t)L_257))+(int32_t)1)), &m2778_MI);
		t2* L_259 = V_8;
		int32_t L_260 = V_10;
		int32_t L_261 = V_11;
		uint16_t L_262 = m2778(L_259, ((int32_t)((int32_t)L_260+(int32_t)L_261)), &m2778_MI);
		if ((!(((uint32_t)L_258) == ((uint32_t)L_262))))
		{
			goto IL_052f;
		}
	}
	{
		int32_t L_263 = V_11;
		V_11 = ((int32_t)((int32_t)L_263+(int32_t)1));
		goto IL_0c67;
	}

IL_052f:
	{
		t2* L_264 = V_8;
		int32_t L_265 = V_10;
		uint16_t L_266 = m2778(L_264, L_265, &m2778_MI);
		V_35 = L_266;
		uint16_t L_267 = V_35;
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 0)
		{
			goto IL_08f1;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 1)
		{
			goto IL_0b26;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 2)
		{
			goto IL_083b;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 3)
		{
			goto IL_0564;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 4)
		{
			goto IL_0564;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 5)
		{
			goto IL_0a3c;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 6)
		{
			goto IL_0564;
		}
		if (((int32_t)((int32_t)L_267-(int32_t)((int32_t)70))) == 7)
		{
			goto IL_065a;
		}
	}

IL_0564:
	{
		uint16_t L_268 = V_35;
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 0)
		{
			goto IL_08b7;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 1)
		{
			goto IL_0941;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 2)
		{
			goto IL_058e;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 3)
		{
			goto IL_058e;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 4)
		{
			goto IL_058e;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 5)
		{
			goto IL_058e;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 6)
		{
			goto IL_0749;
		}
		if (((int32_t)((int32_t)L_268-(int32_t)((int32_t)115))) == 7)
		{
			goto IL_0962;
		}
	}

IL_058e:
	{
		uint16_t L_269 = V_35;
		if (((int32_t)((int32_t)L_269-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_05d5;
		}
		if (((int32_t)((int32_t)L_269-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_05ac;
		}
		if (((int32_t)((int32_t)L_269-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_08f6;
		}
		if (((int32_t)((int32_t)L_269-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_05ac;
		}
		if (((int32_t)((int32_t)L_269-(int32_t)((int32_t)100))) == 4)
		{
			goto IL_07f8;
		}
	}

IL_05ac:
	{
		uint16_t L_270 = V_35;
		if ((((int32_t)L_270) == ((int32_t)((int32_t)47))))
		{
			goto IL_0ba7;
		}
	}
	{
		uint16_t L_271 = V_35;
		if ((((int32_t)L_271) == ((int32_t)((int32_t)58))))
		{
			goto IL_0b94;
		}
	}
	{
		uint16_t L_272 = V_35;
		if ((((int32_t)L_272) == ((int32_t)((int32_t)90))))
		{
			goto IL_0b0b;
		}
	}
	{
		uint16_t L_273 = V_35;
		if ((((int32_t)L_273) == ((int32_t)((int32_t)109))))
		{
			goto IL_087d;
		}
	}
	{
		goto IL_0bbd;
	}

IL_05d5:
	{
		int32_t L_274 = V_11;
		if ((((int32_t)L_274) >= ((int32_t)2)))
		{
			goto IL_05df;
		}
	}
	{
		int32_t L_275 = V_12;
		if ((!(((uint32_t)L_275) == ((uint32_t)(-1)))))
		{
			goto IL_05e9;
		}
	}

IL_05df:
	{
		int32_t L_276 = V_11;
		if ((((int32_t)L_276) < ((int32_t)2)))
		{
			goto IL_05eb;
		}
	}
	{
		int32_t L_277 = V_13;
		if ((((int32_t)L_277) == ((int32_t)(-1))))
		{
			goto IL_05eb;
		}
	}

IL_05e9:
	{
		return 0;
	}

IL_05eb:
	{
		int32_t L_278 = V_11;
		if (L_278)
		{
			goto IL_0601;
		}
	}
	{
		t2* L_279 = p0;
		int32_t L_280 = V_4;
		bool L_281 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_282 = m11490(NULL, L_279, L_280, 1, 2, 0, L_281, (&V_25), &m11490_MI);
		V_12 = L_282;
		goto IL_0655;
	}

IL_0601:
	{
		int32_t L_283 = V_11;
		if ((!(((uint32_t)L_283) == ((uint32_t)1))))
		{
			goto IL_0618;
		}
	}
	{
		t2* L_284 = p0;
		int32_t L_285 = V_4;
		bool L_286 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_287 = m11490(NULL, L_284, L_285, 1, 2, 1, L_286, (&V_25), &m11490_MI);
		V_12 = L_287;
		goto IL_0655;
	}

IL_0618:
	{
		int32_t L_288 = V_11;
		if ((!(((uint32_t)L_288) == ((uint32_t)2))))
		{
			goto IL_063a;
		}
	}
	{
		t2* L_289 = p0;
		int32_t L_290 = V_4;
		t1710 * L_291 = p6;
		t221* L_292 = m8732(L_291, &m8732_MI);
		t1710 * L_293 = V_7;
		t221* L_294 = m8732(L_293, &m8732_MI);
		bool L_295 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_296 = m11491(NULL, L_289, L_290, L_292, L_294, L_295, (&V_25), &m11491_MI);
		V_13 = L_296;
		goto IL_0655;
	}

IL_063a:
	{
		t2* L_297 = p0;
		int32_t L_298 = V_4;
		t1710 * L_299 = p6;
		t221* L_300 = m8734(L_299, &m8734_MI);
		t1710 * L_301 = V_7;
		t221* L_302 = m8734(L_301, &m8734_MI);
		bool L_303 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_304 = m11491(NULL, L_297, L_298, L_300, L_302, L_303, (&V_25), &m11491_MI);
		V_13 = L_304;
	}

IL_0655:
	{
		goto IL_0bda;
	}

IL_065a:
	{
		int32_t L_305 = V_14;
		if ((((int32_t)L_305) == ((int32_t)(-1))))
		{
			goto IL_0661;
		}
	}
	{
		return 0;
	}

IL_0661:
	{
		bool L_306 = V_3;
		if (!L_306)
		{
			goto IL_06d6;
		}
	}
	{
		V_25 = (-1);
		int32_t L_307 = V_11;
		if (!L_307)
		{
			goto IL_0673;
		}
	}
	{
		int32_t L_308 = V_11;
		if ((!(((uint32_t)L_308) == ((uint32_t)3))))
		{
			goto IL_0683;
		}
	}

IL_0673:
	{
		t2* L_309 = p0;
		int32_t L_310 = V_4;
		bool L_311 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_312 = m11490(NULL, L_309, L_310, 1, 2, 0, L_311, (&V_25), &m11490_MI);
		V_14 = L_312;
	}

IL_0683:
	{
		int32_t L_313 = V_11;
		if ((((int32_t)L_313) <= ((int32_t)1)))
		{
			goto IL_06aa;
		}
	}
	{
		int32_t L_314 = V_25;
		if ((!(((uint32_t)L_314) == ((uint32_t)(-1)))))
		{
			goto IL_06aa;
		}
	}
	{
		t2* L_315 = p0;
		int32_t L_316 = V_4;
		t1710 * L_317 = p6;
		t221* L_318 = m8735(L_317, &m8735_MI);
		t1710 * L_319 = V_7;
		t221* L_320 = m8735(L_319, &m8735_MI);
		bool L_321 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_322 = m11491(NULL, L_315, L_316, L_318, L_320, L_321, (&V_25), &m11491_MI);
		V_14 = ((int32_t)((int32_t)L_322+(int32_t)1));
	}

IL_06aa:
	{
		int32_t L_323 = V_11;
		if ((((int32_t)L_323) <= ((int32_t)1)))
		{
			goto IL_06d1;
		}
	}
	{
		int32_t L_324 = V_25;
		if ((!(((uint32_t)L_324) == ((uint32_t)(-1)))))
		{
			goto IL_06d1;
		}
	}
	{
		t2* L_325 = p0;
		int32_t L_326 = V_4;
		t1710 * L_327 = p6;
		t221* L_328 = m8733(L_327, &m8733_MI);
		t1710 * L_329 = V_7;
		t221* L_330 = m8733(L_329, &m8733_MI);
		bool L_331 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_332 = m11491(NULL, L_325, L_326, L_328, L_330, L_331, (&V_25), &m11491_MI);
		V_14 = ((int32_t)((int32_t)L_332+(int32_t)1));
	}

IL_06d1:
	{
		goto IL_0bda;
	}

IL_06d6:
	{
		int32_t L_333 = V_11;
		if (L_333)
		{
			goto IL_06ec;
		}
	}
	{
		t2* L_334 = p0;
		int32_t L_335 = V_4;
		bool L_336 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_337 = m11490(NULL, L_334, L_335, 1, 2, 0, L_336, (&V_25), &m11490_MI);
		V_14 = L_337;
		goto IL_0744;
	}

IL_06ec:
	{
		int32_t L_338 = V_11;
		if ((!(((uint32_t)L_338) == ((uint32_t)1))))
		{
			goto IL_0703;
		}
	}
	{
		t2* L_339 = p0;
		int32_t L_340 = V_4;
		bool L_341 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_342 = m11490(NULL, L_339, L_340, 1, 2, 1, L_341, (&V_25), &m11490_MI);
		V_14 = L_342;
		goto IL_0744;
	}

IL_0703:
	{
		int32_t L_343 = V_11;
		if ((!(((uint32_t)L_343) == ((uint32_t)2))))
		{
			goto IL_0727;
		}
	}
	{
		t2* L_344 = p0;
		int32_t L_345 = V_4;
		t1710 * L_346 = p6;
		t221* L_347 = m8733(L_346, &m8733_MI);
		t1710 * L_348 = V_7;
		t221* L_349 = m8733(L_348, &m8733_MI);
		bool L_350 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_351 = m11491(NULL, L_344, L_345, L_347, L_349, L_350, (&V_25), &m11491_MI);
		V_14 = ((int32_t)((int32_t)L_351+(int32_t)1));
		goto IL_0744;
	}

IL_0727:
	{
		t2* L_352 = p0;
		int32_t L_353 = V_4;
		t1710 * L_354 = p6;
		t221* L_355 = m8735(L_354, &m8735_MI);
		t1710 * L_356 = V_7;
		t221* L_357 = m8735(L_356, &m8735_MI);
		bool L_358 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_359 = m11491(NULL, L_352, L_353, L_355, L_357, L_358, (&V_25), &m11491_MI);
		V_14 = ((int32_t)((int32_t)L_359+(int32_t)1));
	}

IL_0744:
	{
		goto IL_0bda;
	}

IL_0749:
	{
		int32_t L_360 = V_15;
		if ((((int32_t)L_360) == ((int32_t)(-1))))
		{
			goto IL_0750;
		}
	}
	{
		return 0;
	}

IL_0750:
	{
		int32_t L_361 = V_11;
		if (L_361)
		{
			goto IL_0769;
		}
	}
	{
		t2* L_362 = p0;
		int32_t L_363 = V_4;
		bool L_364 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_365 = m11490(NULL, L_362, L_363, 1, 2, 0, L_364, (&V_25), &m11490_MI);
		V_15 = L_365;
		goto IL_07d7;
	}

IL_0769:
	{
		int32_t L_366 = V_11;
		if ((((int32_t)L_366) >= ((int32_t)3)))
		{
			goto IL_0780;
		}
	}
	{
		t2* L_367 = p0;
		int32_t L_368 = V_4;
		bool L_369 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_370 = m11490(NULL, L_367, L_368, 1, 2, 1, L_369, (&V_25), &m11490_MI);
		V_15 = L_370;
		goto IL_07d7;
	}

IL_0780:
	{
		t2* L_371 = p0;
		int32_t L_372 = V_4;
		bool L_373 = p3;
		G_B172_0 = L_372;
		G_B172_1 = L_371;
		if (!L_373)
		{
			G_B173_0 = L_372;
			G_B173_1 = L_371;
			goto IL_0789;
		}
	}
	{
		G_B174_0 = 4;
		G_B174_1 = G_B172_0;
		G_B174_2 = G_B172_1;
		goto IL_078a;
	}

IL_0789:
	{
		G_B174_0 = 3;
		G_B174_1 = G_B173_0;
		G_B174_2 = G_B173_1;
	}

IL_078a:
	{
		bool L_374 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_375 = m11490(NULL, G_B174_2, G_B174_1, G_B174_0, 4, 0, L_374, (&V_25), &m11490_MI);
		V_15 = L_375;
		int32_t L_376 = V_15;
		if ((((int32_t)L_376) < ((int32_t)((int32_t)1000))))
		{
			goto IL_07d4;
		}
	}
	{
		int32_t L_377 = V_25;
		if ((!(((uint32_t)L_377) == ((uint32_t)4))))
		{
			goto IL_07d4;
		}
	}
	{
		bool* L_378 = p10;
		if ((*((int8_t*)L_378)))
		{
			goto IL_07d4;
		}
	}
	{
		t2* L_379 = p0;
		int32_t L_380 = m2763(L_379, &m2763_MI);
		int32_t L_381 = V_4;
		if ((((int32_t)L_380) <= ((int32_t)((int32_t)((int32_t)4+(int32_t)L_381)))))
		{
			goto IL_07d4;
		}
	}
	{
		V_29 = 0;
		t2* L_382 = p0;
		int32_t L_383 = V_4;
		bool L_384 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_385 = m11490(NULL, L_382, L_383, 5, 5, 0, L_384, (&V_29), &m11490_MI);
		V_30 = L_385;
		bool* L_386 = p10;
		int32_t L_387 = V_30;
		*((int8_t*)(L_386)) = (int8_t)((((int32_t)L_387) > ((int32_t)((int32_t)9999)))? 1 : 0);
	}

IL_07d4:
	{
		V_11 = 3;
	}

IL_07d7:
	{
		int32_t L_388 = V_25;
		if ((((int32_t)L_388) > ((int32_t)2)))
		{
			goto IL_07f3;
		}
	}
	{
		int32_t L_389 = V_15;
		int32_t L_390 = V_15;
		G_B182_0 = L_389;
		if ((((int32_t)L_390) >= ((int32_t)((int32_t)30))))
		{
			G_B183_0 = L_389;
			goto IL_07eb;
		}
	}
	{
		G_B184_0 = ((int32_t)2000);
		G_B184_1 = G_B182_0;
		goto IL_07f0;
	}

IL_07eb:
	{
		G_B184_0 = ((int32_t)1900);
		G_B184_1 = G_B183_0;
	}

IL_07f0:
	{
		V_15 = ((int32_t)((int32_t)G_B184_1+(int32_t)G_B184_0));
	}

IL_07f3:
	{
		goto IL_0bda;
	}

IL_07f8:
	{
		int32_t L_391 = V_16;
		if ((((int32_t)L_391) == ((int32_t)(-1))))
		{
			goto IL_07ff;
		}
	}
	{
		return 0;
	}

IL_07ff:
	{
		int32_t L_392 = V_11;
		if (L_392)
		{
			goto IL_0815;
		}
	}
	{
		t2* L_393 = p0;
		int32_t L_394 = V_4;
		bool L_395 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_396 = m11490(NULL, L_393, L_394, 1, 2, 0, L_395, (&V_25), &m11490_MI);
		V_16 = L_396;
		goto IL_0825;
	}

IL_0815:
	{
		t2* L_397 = p0;
		int32_t L_398 = V_4;
		bool L_399 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_400 = m11490(NULL, L_397, L_398, 1, 2, 1, L_399, (&V_25), &m11490_MI);
		V_16 = L_400;
	}

IL_0825:
	{
		int32_t L_401 = V_16;
		if ((((int32_t)L_401) <= ((int32_t)((int32_t)12))))
		{
			goto IL_082d;
		}
	}
	{
		return 0;
	}

IL_082d:
	{
		int32_t L_402 = V_16;
		if ((!(((uint32_t)L_402) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0836;
		}
	}
	{
		V_16 = 0;
	}

IL_0836:
	{
		goto IL_0bda;
	}

IL_083b:
	{
		int32_t L_403 = V_16;
		if ((!(((uint32_t)L_403) == ((uint32_t)(-1)))))
		{
			goto IL_0848;
		}
	}
	{
		bool L_404 = V_3;
		if (L_404)
		{
			goto IL_084a;
		}
	}
	{
		int32_t L_405 = V_20;
		if ((((int32_t)L_405) < ((int32_t)0)))
		{
			goto IL_084a;
		}
	}

IL_0848:
	{
		return 0;
	}

IL_084a:
	{
		int32_t L_406 = V_11;
		if (L_406)
		{
			goto IL_0860;
		}
	}
	{
		t2* L_407 = p0;
		int32_t L_408 = V_4;
		bool L_409 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_410 = m11490(NULL, L_407, L_408, 1, 2, 0, L_409, (&V_25), &m11490_MI);
		V_16 = L_410;
		goto IL_0870;
	}

IL_0860:
	{
		t2* L_411 = p0;
		int32_t L_412 = V_4;
		bool L_413 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_414 = m11490(NULL, L_411, L_412, 1, 2, 1, L_413, (&V_25), &m11490_MI);
		V_16 = L_414;
	}

IL_0870:
	{
		int32_t L_415 = V_16;
		if ((((int32_t)L_415) < ((int32_t)((int32_t)24))))
		{
			goto IL_0878;
		}
	}
	{
		return 0;
	}

IL_0878:
	{
		goto IL_0bda;
	}

IL_087d:
	{
		int32_t L_416 = V_17;
		if ((((int32_t)L_416) == ((int32_t)(-1))))
		{
			goto IL_0884;
		}
	}
	{
		return 0;
	}

IL_0884:
	{
		int32_t L_417 = V_11;
		if (L_417)
		{
			goto IL_089a;
		}
	}
	{
		t2* L_418 = p0;
		int32_t L_419 = V_4;
		bool L_420 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_421 = m11490(NULL, L_418, L_419, 1, 2, 0, L_420, (&V_25), &m11490_MI);
		V_17 = L_421;
		goto IL_08aa;
	}

IL_089a:
	{
		t2* L_422 = p0;
		int32_t L_423 = V_4;
		bool L_424 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_425 = m11490(NULL, L_422, L_423, 1, 2, 1, L_424, (&V_25), &m11490_MI);
		V_17 = L_425;
	}

IL_08aa:
	{
		int32_t L_426 = V_17;
		if ((((int32_t)L_426) < ((int32_t)((int32_t)60))))
		{
			goto IL_08b2;
		}
	}
	{
		return 0;
	}

IL_08b2:
	{
		goto IL_0bda;
	}

IL_08b7:
	{
		int32_t L_427 = V_18;
		if ((((int32_t)L_427) == ((int32_t)(-1))))
		{
			goto IL_08be;
		}
	}
	{
		return 0;
	}

IL_08be:
	{
		int32_t L_428 = V_11;
		if (L_428)
		{
			goto IL_08d4;
		}
	}
	{
		t2* L_429 = p0;
		int32_t L_430 = V_4;
		bool L_431 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_432 = m11490(NULL, L_429, L_430, 1, 2, 0, L_431, (&V_25), &m11490_MI);
		V_18 = L_432;
		goto IL_08e4;
	}

IL_08d4:
	{
		t2* L_433 = p0;
		int32_t L_434 = V_4;
		bool L_435 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_436 = m11490(NULL, L_433, L_434, 1, 2, 1, L_435, (&V_25), &m11490_MI);
		V_18 = L_436;
	}

IL_08e4:
	{
		int32_t L_437 = V_18;
		if ((((int32_t)L_437) < ((int32_t)((int32_t)60))))
		{
			goto IL_08ec;
		}
	}
	{
		return 0;
	}

IL_08ec:
	{
		goto IL_0bda;
	}

IL_08f1:
	{
		V_27 = 0;
		goto IL_08f6;
	}

IL_08f6:
	{
		int32_t L_438 = V_11;
		if ((((int32_t)L_438) > ((int32_t)6)))
		{
			goto IL_0908;
		}
	}
	{
		double L_439 = V_19;
		if ((((double)L_439) == ((double)(-1.0))))
		{
			goto IL_090a;
		}
	}

IL_0908:
	{
		return 0;
	}

IL_090a:
	{
		t2* L_440 = p0;
		int32_t L_441 = V_4;
		int32_t L_442 = V_11;
		bool L_443 = V_27;
		bool L_444 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_445 = m11490(NULL, L_440, L_441, 0, ((int32_t)((int32_t)L_442+(int32_t)1)), L_443, L_444, (&V_25), &m11490_MI);
		V_31 = (((double)L_445));
		int32_t L_446 = V_25;
		if ((!(((uint32_t)L_446) == ((uint32_t)(-1)))))
		{
			goto IL_0926;
		}
	}
	{
		return 0;
	}

IL_0926:
	{
		double L_447 = V_31;
		int32_t L_448 = V_25;
		double L_449 = pow((10.0), (((double)L_448)));
		V_19 = ((double)((double)L_447/(double)L_449));
		goto IL_0bda;
	}

IL_0941:
	{
		t2* L_450 = p0;
		int32_t L_451 = V_4;
		int32_t L_452 = V_11;
		G_B230_0 = L_451;
		G_B230_1 = L_450;
		if ((((int32_t)L_452) <= ((int32_t)0)))
		{
			G_B231_0 = L_451;
			G_B231_1 = L_450;
			goto IL_094c;
		}
	}
	{
		G_B232_0 = 0;
		G_B232_1 = G_B230_0;
		G_B232_2 = G_B230_1;
		goto IL_094d;
	}

IL_094c:
	{
		G_B232_0 = 1;
		G_B232_1 = G_B231_0;
		G_B232_2 = G_B231_1;
	}

IL_094d:
	{
		t1710 * L_453 = p6;
		bool L_454 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_455 = m11493(NULL, G_B232_2, G_B232_1, G_B232_0, L_453, L_454, (&V_25), (&V_20), &m11493_MI);
		if (L_455)
		{
			goto IL_095d;
		}
	}
	{
		return 0;
	}

IL_095d:
	{
		goto IL_0bda;
	}

IL_0962:
	{
		int32_t L_456 = V_21;
		if ((((int32_t)L_456) == ((int32_t)(-1))))
		{
			goto IL_0969;
		}
	}
	{
		return 0;
	}

IL_0969:
	{
		t2* L_457 = p0;
		int32_t L_458 = V_4;
		uint16_t L_459 = m2778(L_457, L_458, &m2778_MI);
		if ((!(((uint32_t)L_459) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_097a;
		}
	}
	{
		V_21 = 0;
		goto IL_098d;
	}

IL_097a:
	{
		t2* L_460 = p0;
		int32_t L_461 = V_4;
		uint16_t L_462 = m2778(L_460, L_461, &m2778_MI);
		if ((!(((uint32_t)L_462) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_098b;
		}
	}
	{
		V_21 = 1;
		goto IL_098d;
	}

IL_098b:
	{
		return 0;
	}

IL_098d:
	{
		int32_t L_463 = V_4;
		V_4 = ((int32_t)((int32_t)L_463+(int32_t)1));
		int32_t L_464 = V_11;
		if (L_464)
		{
			goto IL_09ac;
		}
	}
	{
		t2* L_465 = p0;
		int32_t L_466 = V_4;
		bool L_467 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_468 = m11490(NULL, L_465, L_466, 1, 2, 0, L_467, (&V_25), &m11490_MI);
		V_22 = L_468;
		goto IL_0a37;
	}

IL_09ac:
	{
		int32_t L_469 = V_11;
		if ((!(((uint32_t)L_469) == ((uint32_t)1))))
		{
			goto IL_09c6;
		}
	}
	{
		t2* L_470 = p0;
		int32_t L_471 = V_4;
		bool L_472 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_473 = m11490(NULL, L_470, L_471, 1, 2, 1, L_472, (&V_25), &m11490_MI);
		V_22 = L_473;
		goto IL_0a37;
	}

IL_09c6:
	{
		t2* L_474 = p0;
		int32_t L_475 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_476 = m11490(NULL, L_474, L_475, 1, 2, 1, 1, (&V_25), &m11490_MI);
		V_22 = L_476;
		int32_t L_477 = V_4;
		int32_t L_478 = V_25;
		V_4 = ((int32_t)((int32_t)L_477+(int32_t)L_478));
		int32_t L_479 = V_25;
		if ((((int32_t)L_479) >= ((int32_t)0)))
		{
			goto IL_09e4;
		}
	}
	{
		return 0;
	}

IL_09e4:
	{
		V_25 = 0;
		int32_t L_480 = V_4;
		t2* L_481 = p0;
		int32_t L_482 = m2763(L_481, &m2763_MI);
		if ((((int32_t)L_480) >= ((int32_t)L_482)))
		{
			goto IL_0a00;
		}
	}
	{
		t2* L_483 = p0;
		int32_t L_484 = V_4;
		uint16_t L_485 = m2778(L_483, L_484, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_486 = m5967(NULL, L_485, &m5967_MI);
		if (L_486)
		{
			goto IL_0a0f;
		}
	}

IL_0a00:
	{
		t2* L_487 = p0;
		int32_t L_488 = V_4;
		t1710 * L_489 = p6;
		bool L_490 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_491 = m11494(NULL, L_487, L_488, L_489, L_490, (&V_25), &m11494_MI);
		if (!L_491)
		{
			goto IL_0a2f;
		}
	}

IL_0a0f:
	{
		int32_t L_492 = V_4;
		int32_t L_493 = V_25;
		V_4 = ((int32_t)((int32_t)L_492+(int32_t)L_493));
		t2* L_494 = p0;
		int32_t L_495 = V_4;
		bool L_496 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_497 = m11490(NULL, L_494, L_495, 1, 2, 1, L_496, (&V_25), &m11490_MI);
		V_23 = L_497;
		int32_t L_498 = V_25;
		if ((((int32_t)L_498) >= ((int32_t)0)))
		{
			goto IL_0a2d;
		}
	}
	{
		return 0;
	}

IL_0a2d:
	{
		goto IL_0a37;
	}

IL_0a2f:
	{
		bool L_499 = V_3;
		if (L_499)
		{
			goto IL_0a34;
		}
	}
	{
		return 0;
	}

IL_0a34:
	{
		V_25 = 0;
	}

IL_0a37:
	{
		goto IL_0bda;
	}

IL_0a3c:
	{
		t2* L_500 = p0;
		int32_t L_501 = V_4;
		uint16_t L_502 = m2778(L_500, L_501, &m2778_MI);
		if ((!(((uint32_t)L_502) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0a55;
		}
	}
	{
		int32_t L_503 = V_4;
		V_4 = ((int32_t)((int32_t)L_503+(int32_t)1));
		V_0 = 1;
		goto IL_0b06;
	}

IL_0a55:
	{
		t2* L_504 = p0;
		int32_t L_505 = V_4;
		uint16_t L_506 = m2778(L_504, L_505, &m2778_MI);
		if ((((int32_t)L_506) == ((int32_t)((int32_t)43))))
		{
			goto IL_0a70;
		}
	}
	{
		t2* L_507 = p0;
		int32_t L_508 = V_4;
		uint16_t L_509 = m2778(L_507, L_508, &m2778_MI);
		if ((!(((uint32_t)L_509) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0b06;
		}
	}

IL_0a70:
	{
		int32_t L_510 = V_21;
		if ((((int32_t)L_510) == ((int32_t)(-1))))
		{
			goto IL_0a77;
		}
	}
	{
		return 0;
	}

IL_0a77:
	{
		t2* L_511 = p0;
		int32_t L_512 = V_4;
		uint16_t L_513 = m2778(L_511, L_512, &m2778_MI);
		if ((!(((uint32_t)L_513) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0a88;
		}
	}
	{
		V_21 = 0;
		goto IL_0a97;
	}

IL_0a88:
	{
		t2* L_514 = p0;
		int32_t L_515 = V_4;
		uint16_t L_516 = m2778(L_514, L_515, &m2778_MI);
		if ((!(((uint32_t)L_516) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0a97;
		}
	}
	{
		V_21 = 1;
	}

IL_0a97:
	{
		int32_t L_517 = V_4;
		V_4 = ((int32_t)((int32_t)L_517+(int32_t)1));
		t2* L_518 = p0;
		int32_t L_519 = V_4;
		bool L_520 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_521 = m11490(NULL, L_518, L_519, 0, 2, 1, L_520, (&V_25), &m11490_MI);
		V_22 = L_521;
		int32_t L_522 = V_4;
		int32_t L_523 = V_25;
		V_4 = ((int32_t)((int32_t)L_522+(int32_t)L_523));
		int32_t L_524 = V_25;
		if ((((int32_t)L_524) >= ((int32_t)0)))
		{
			goto IL_0abb;
		}
	}
	{
		return 0;
	}

IL_0abb:
	{
		t2* L_525 = p0;
		int32_t L_526 = V_4;
		uint16_t L_527 = m2778(L_525, L_526, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_528 = m5967(NULL, L_527, &m5967_MI);
		if (!L_528)
		{
			goto IL_0acf;
		}
	}
	{
		V_25 = 0;
		goto IL_0ae5;
	}

IL_0acf:
	{
		t2* L_529 = p0;
		int32_t L_530 = V_4;
		t1710 * L_531 = p6;
		t2* L_532 = m8739(L_531, &m8739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_533 = m11492(NULL, L_529, L_530, 0, L_532, (&V_25), &m11492_MI);
		if (L_533)
		{
			goto IL_0ae5;
		}
	}
	{
		return 0;
	}

IL_0ae5:
	{
		int32_t L_534 = V_4;
		int32_t L_535 = V_25;
		V_4 = ((int32_t)((int32_t)L_534+(int32_t)L_535));
		t2* L_536 = p0;
		int32_t L_537 = V_4;
		bool L_538 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_539 = m11490(NULL, L_536, L_537, 0, 2, 1, L_538, (&V_25), &m11490_MI);
		V_23 = L_539;
		V_11 = 2;
		int32_t L_540 = V_25;
		if ((((int32_t)L_540) >= ((int32_t)0)))
		{
			goto IL_0b06;
		}
	}
	{
		return 0;
	}

IL_0b06:
	{
		goto IL_0bda;
	}

IL_0b0b:
	{
		t2* L_541 = p0;
		int32_t L_542 = V_4;
		uint16_t L_543 = m2778(L_541, L_542, &m2778_MI);
		if ((((int32_t)L_543) == ((int32_t)((int32_t)90))))
		{
			goto IL_0b19;
		}
	}
	{
		return 0;
	}

IL_0b19:
	{
		V_11 = 0;
		V_25 = 1;
		V_0 = 1;
		goto IL_0bda;
	}

IL_0b26:
	{
		t2* L_544 = p0;
		int32_t L_545 = V_4;
		uint16_t L_546 = m2778(L_544, L_545, &m2778_MI);
		if ((((int32_t)L_546) == ((int32_t)((int32_t)71))))
		{
			goto IL_0b34;
		}
	}
	{
		return 0;
	}

IL_0b34:
	{
		int32_t L_547 = V_10;
		int32_t L_548 = V_9;
		if ((((int32_t)((int32_t)((int32_t)L_547+(int32_t)2))) >= ((int32_t)L_548)))
		{
			goto IL_0b8c;
		}
	}
	{
		int32_t L_549 = V_4;
		t2* L_550 = p0;
		int32_t L_551 = m2763(L_550, &m2763_MI);
		if ((((int32_t)((int32_t)((int32_t)L_549+(int32_t)2))) >= ((int32_t)L_551)))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_552 = V_8;
		int32_t L_553 = V_10;
		uint16_t L_554 = m2778(L_552, ((int32_t)((int32_t)L_553+(int32_t)1)), &m2778_MI);
		if ((!(((uint32_t)L_554) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_555 = p0;
		int32_t L_556 = V_4;
		uint16_t L_557 = m2778(L_555, ((int32_t)((int32_t)L_556+(int32_t)1)), &m2778_MI);
		if ((!(((uint32_t)L_557) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_558 = V_8;
		int32_t L_559 = V_10;
		uint16_t L_560 = m2778(L_558, ((int32_t)((int32_t)L_559+(int32_t)2)), &m2778_MI);
		if ((!(((uint32_t)L_560) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_561 = p0;
		int32_t L_562 = V_4;
		uint16_t L_563 = m2778(L_561, ((int32_t)((int32_t)L_562+(int32_t)2)), &m2778_MI);
		if ((!(((uint32_t)L_563) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0b8c;
		}
	}
	{
		V_0 = 1;
		V_11 = 2;
		V_25 = 3;
		goto IL_0b92;
	}

IL_0b8c:
	{
		V_11 = 0;
		V_25 = 1;
	}

IL_0b92:
	{
		goto IL_0bda;
	}

IL_0b94:
	{
		t2* L_564 = p0;
		int32_t L_565 = V_4;
		t1710 * L_566 = p6;
		bool L_567 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_568 = m11494(NULL, L_564, L_565, L_566, L_567, (&V_25), &m11494_MI);
		if (L_568)
		{
			goto IL_0ba5;
		}
	}
	{
		return 0;
	}

IL_0ba5:
	{
		goto IL_0bda;
	}

IL_0ba7:
	{
		t2* L_569 = p0;
		int32_t L_570 = V_4;
		t1710 * L_571 = p6;
		bool L_572 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_573 = m11495(NULL, L_569, L_570, L_571, L_572, (&V_25), &m11495_MI);
		if (L_573)
		{
			goto IL_0bb8;
		}
	}
	{
		return 0;
	}

IL_0bb8:
	{
		V_11 = 0;
		goto IL_0bda;
	}

IL_0bbd:
	{
		t2* L_574 = p0;
		int32_t L_575 = V_4;
		uint16_t L_576 = m2778(L_574, L_575, &m2778_MI);
		t2* L_577 = V_8;
		int32_t L_578 = V_10;
		uint16_t L_579 = m2778(L_577, L_578, &m2778_MI);
		if ((((int32_t)L_576) == ((int32_t)L_579)))
		{
			goto IL_0bd2;
		}
	}
	{
		return 0;
	}

IL_0bd2:
	{
		V_11 = 0;
		V_25 = 1;
		goto IL_0bda;
	}

IL_0bda:
	{
		int32_t L_580 = V_25;
		if ((((int32_t)L_580) >= ((int32_t)0)))
		{
			goto IL_0be1;
		}
	}
	{
		return 0;
	}

IL_0be1:
	{
		int32_t L_581 = V_4;
		int32_t L_582 = V_25;
		V_4 = ((int32_t)((int32_t)L_581+(int32_t)L_582));
		bool L_583 = p3;
		if (L_583)
		{
			goto IL_0c5b;
		}
	}
	{
		bool L_584 = V_3;
		if (L_584)
		{
			goto IL_0c5b;
		}
	}
	{
		t2* L_585 = V_8;
		int32_t L_586 = V_10;
		uint16_t L_587 = m2778(L_585, L_586, &m2778_MI);
		V_35 = L_587;
		uint16_t L_588 = V_35;
		if ((((int32_t)L_588) == ((int32_t)((int32_t)70))))
		{
			goto IL_0c1f;
		}
	}
	{
		uint16_t L_589 = V_35;
		if ((((int32_t)L_589) == ((int32_t)((int32_t)102))))
		{
			goto IL_0c1f;
		}
	}
	{
		uint16_t L_590 = V_35;
		if ((((int32_t)L_590) == ((int32_t)((int32_t)109))))
		{
			goto IL_0c1f;
		}
	}
	{
		uint16_t L_591 = V_35;
		if ((((int32_t)L_591) == ((int32_t)((int32_t)115))))
		{
			goto IL_0c1f;
		}
	}
	{
		uint16_t L_592 = V_35;
		if ((((int32_t)L_592) == ((int32_t)((int32_t)122))))
		{
			goto IL_0c1f;
		}
	}
	{
		goto IL_0c5b;
	}

IL_0c1f:
	{
		t2* L_593 = p0;
		int32_t L_594 = m2763(L_593, &m2763_MI);
		int32_t L_595 = V_4;
		if ((((int32_t)L_594) <= ((int32_t)L_595)))
		{
			goto IL_0c59;
		}
	}
	{
		t2* L_596 = p0;
		int32_t L_597 = V_4;
		uint16_t L_598 = m2778(L_596, L_597, &m2778_MI);
		if ((!(((uint32_t)L_598) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0c59;
		}
	}
	{
		int32_t L_599 = V_10;
		t2* L_600 = V_8;
		int32_t L_601 = m2763(L_600, &m2763_MI);
		if ((((int32_t)((int32_t)((int32_t)L_599+(int32_t)1))) == ((int32_t)L_601)))
		{
			goto IL_0c51;
		}
	}
	{
		t2* L_602 = V_8;
		int32_t L_603 = V_10;
		uint16_t L_604 = m2778(L_602, ((int32_t)((int32_t)L_603+(int32_t)1)), &m2778_MI);
		if ((((int32_t)L_604) == ((int32_t)((int32_t)90))))
		{
			goto IL_0c59;
		}
	}

IL_0c51:
	{
		V_0 = 1;
		int32_t L_605 = V_4;
		V_4 = ((int32_t)((int32_t)L_605+(int32_t)1));
	}

IL_0c59:
	{
		goto IL_0c5b;
	}

IL_0c5b:
	{
		int32_t L_606 = V_10;
		int32_t L_607 = V_11;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_606+(int32_t)L_607))+(int32_t)1));
		V_11 = 0;
	}

IL_0c67:
	{
		goto IL_00fd;
	}

IL_0c6c:
	{
		int32_t L_608 = V_10;
		int32_t L_609 = V_9;
		if ((((int32_t)((int32_t)((int32_t)L_608+(int32_t)1))) >= ((int32_t)L_609)))
		{
			goto IL_0cb1;
		}
	}
	{
		t2* L_610 = V_8;
		int32_t L_611 = V_10;
		uint16_t L_612 = m2778(L_610, L_611, &m2778_MI);
		if ((!(((uint32_t)L_612) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0cb1;
		}
	}
	{
		t2* L_613 = V_8;
		int32_t L_614 = V_10;
		uint16_t L_615 = m2778(L_613, ((int32_t)((int32_t)L_614+(int32_t)1)), &m2778_MI);
		if ((!(((uint32_t)L_615) == ((uint32_t)((int32_t)70)))))
		{
			goto IL_0cb1;
		}
	}
	{
		int32_t L_616 = V_10;
		V_10 = ((int32_t)((int32_t)L_616+(int32_t)1));
		goto IL_0c9e;
	}

IL_0c98:
	{
		int32_t L_617 = V_10;
		V_10 = ((int32_t)((int32_t)L_617+(int32_t)1));
	}

IL_0c9e:
	{
		int32_t L_618 = V_10;
		int32_t L_619 = V_9;
		if ((((int32_t)L_618) >= ((int32_t)L_619)))
		{
			goto IL_0cb1;
		}
	}
	{
		t2* L_620 = V_8;
		int32_t L_621 = V_10;
		uint16_t L_622 = m2778(L_620, L_621, &m2778_MI);
		if ((((int32_t)L_622) == ((int32_t)((int32_t)70))))
		{
			goto IL_0c98;
		}
	}

IL_0cb1:
	{
		goto IL_0cb9;
	}

IL_0cb3:
	{
		int32_t L_623 = V_10;
		V_10 = ((int32_t)((int32_t)L_623+(int32_t)1));
	}

IL_0cb9:
	{
		int32_t L_624 = V_10;
		int32_t L_625 = V_9;
		if ((((int32_t)L_624) >= ((int32_t)L_625)))
		{
			goto IL_0ccc;
		}
	}
	{
		t2* L_626 = V_8;
		int32_t L_627 = V_10;
		uint16_t L_628 = m2778(L_626, L_627, &m2778_MI);
		if ((((int32_t)L_628) == ((int32_t)((int32_t)75))))
		{
			goto IL_0cb3;
		}
	}

IL_0ccc:
	{
		int32_t L_629 = V_10;
		int32_t L_630 = V_9;
		if ((((int32_t)L_629) >= ((int32_t)L_630)))
		{
			goto IL_0cd4;
		}
	}
	{
		return 0;
	}

IL_0cd4:
	{
		t2* L_631 = p0;
		int32_t L_632 = m2763(L_631, &m2763_MI);
		int32_t L_633 = V_4;
		if ((((int32_t)L_632) <= ((int32_t)L_633)))
		{
			goto IL_0d2e;
		}
	}
	{
		int32_t L_634 = V_4;
		if (L_634)
		{
			goto IL_0ce4;
		}
	}
	{
		return 0;
	}

IL_0ce4:
	{
		t2* L_635 = p0;
		int32_t L_636 = V_4;
		uint16_t L_637 = m2778(L_635, L_636, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_638 = m5967(NULL, L_637, &m5967_MI);
		if (!L_638)
		{
			goto IL_0d06;
		}
	}
	{
		t2* L_639 = p0;
		int32_t L_640 = V_4;
		uint16_t L_641 = m2778(L_639, ((int32_t)((int32_t)L_640-(int32_t)1)), &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_642 = m5967(NULL, L_641, &m5967_MI);
		if (!L_642)
		{
			goto IL_0d06;
		}
	}
	{
		return 0;
	}

IL_0d06:
	{
		t2* L_643 = p0;
		int32_t L_644 = V_4;
		uint16_t L_645 = m2778(L_643, L_644, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_646 = m2829(NULL, L_645, &m2829_MI);
		if (!L_646)
		{
			goto IL_0d28;
		}
	}
	{
		t2* L_647 = p0;
		int32_t L_648 = V_4;
		uint16_t L_649 = m2778(L_647, ((int32_t)((int32_t)L_648-(int32_t)1)), &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_650 = m2829(NULL, L_649, &m2829_MI);
		if (!L_650)
		{
			goto IL_0d28;
		}
	}
	{
		return 0;
	}

IL_0d28:
	{
		bool* L_651 = p9;
		*((int8_t*)(L_651)) = (int8_t)1;
		return 0;
	}

IL_0d2e:
	{
		int32_t L_652 = V_16;
		if ((!(((uint32_t)L_652) == ((uint32_t)(-1)))))
		{
			goto IL_0d36;
		}
	}
	{
		V_16 = 0;
	}

IL_0d36:
	{
		int32_t L_653 = V_17;
		if ((!(((uint32_t)L_653) == ((uint32_t)(-1)))))
		{
			goto IL_0d3e;
		}
	}
	{
		V_17 = 0;
	}

IL_0d3e:
	{
		int32_t L_654 = V_18;
		if ((!(((uint32_t)L_654) == ((uint32_t)(-1)))))
		{
			goto IL_0d46;
		}
	}
	{
		V_18 = 0;
	}

IL_0d46:
	{
		double L_655 = V_19;
		if ((!(((double)L_655) == ((double)(-1.0)))))
		{
			goto IL_0d5e;
		}
	}
	{
		V_19 = (0.0);
	}

IL_0d5e:
	{
		int32_t L_656 = V_12;
		if ((!(((uint32_t)L_656) == ((uint32_t)(-1)))))
		{
			goto IL_0dae;
		}
	}
	{
		int32_t L_657 = V_14;
		if ((!(((uint32_t)L_657) == ((uint32_t)(-1)))))
		{
			goto IL_0dae;
		}
	}
	{
		int32_t L_658 = V_15;
		if ((!(((uint32_t)L_658) == ((uint32_t)(-1)))))
		{
			goto IL_0dae;
		}
	}
	{
		int32_t L_659 = p7;
		if (!((int32_t)((int32_t)L_659&(int32_t)8)))
		{
			goto IL_0d7e;
		}
	}
	{
		V_12 = 1;
		V_14 = 1;
		V_15 = 1;
		goto IL_0dae;
	}

IL_0d7e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_660 = m11469(NULL, &m11469_MI);
		V_36 = L_660;
		int32_t L_661 = m11462((&V_36), &m11462_MI);
		V_12 = L_661;
		t272  L_662 = m11469(NULL, &m11469_MI);
		V_37 = L_662;
		int32_t L_663 = m11461((&V_37), &m11461_MI);
		V_14 = L_663;
		t272  L_664 = m11469(NULL, &m11469_MI);
		V_38 = L_664;
		int32_t L_665 = m11470((&V_38), &m11470_MI);
		V_15 = L_665;
	}

IL_0dae:
	{
		int32_t L_666 = V_12;
		if ((!(((uint32_t)L_666) == ((uint32_t)(-1)))))
		{
			goto IL_0db6;
		}
	}
	{
		V_12 = 1;
	}

IL_0db6:
	{
		int32_t L_667 = V_14;
		if ((!(((uint32_t)L_667) == ((uint32_t)(-1)))))
		{
			goto IL_0dbe;
		}
	}
	{
		V_14 = 1;
	}

IL_0dbe:
	{
		int32_t L_668 = V_15;
		if ((!(((uint32_t)L_668) == ((uint32_t)(-1)))))
		{
			goto IL_0dde;
		}
	}
	{
		int32_t L_669 = p7;
		if (!((int32_t)((int32_t)L_669&(int32_t)8)))
		{
			goto IL_0dce;
		}
	}
	{
		V_15 = 1;
		goto IL_0dde;
	}

IL_0dce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_670 = m11469(NULL, &m11469_MI);
		V_39 = L_670;
		int32_t L_671 = m11470((&V_39), &m11470_MI);
		V_15 = L_671;
	}

IL_0dde:
	{
		int32_t L_672 = V_20;
		if (L_672)
		{
			goto IL_0deb;
		}
	}
	{
		int32_t L_673 = V_16;
		if ((!(((uint32_t)L_673) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0deb;
		}
	}
	{
		V_16 = 0;
	}

IL_0deb:
	{
		int32_t L_674 = V_20;
		if ((!(((uint32_t)L_674) == ((uint32_t)1))))
		{
			goto IL_0e00;
		}
	}
	{
		bool L_675 = V_3;
		if (!L_675)
		{
			goto IL_0df9;
		}
	}
	{
		int32_t L_676 = V_16;
		if ((((int32_t)L_676) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0e00;
		}
	}

IL_0df9:
	{
		int32_t L_677 = V_16;
		V_16 = ((int32_t)((int32_t)L_677+(int32_t)((int32_t)12)));
	}

IL_0e00:
	{
		int32_t L_678 = V_15;
		if ((((int32_t)L_678) < ((int32_t)1)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_679 = V_15;
		if ((((int32_t)L_679) > ((int32_t)((int32_t)9999))))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_680 = V_14;
		if ((((int32_t)L_680) < ((int32_t)1)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_681 = V_14;
		if ((((int32_t)L_681) > ((int32_t)((int32_t)12))))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_682 = V_12;
		if ((((int32_t)L_682) < ((int32_t)1)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_683 = V_12;
		int32_t L_684 = V_15;
		int32_t L_685 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int32_t L_686 = m11481(NULL, L_684, L_685, &m11481_MI);
		if ((((int32_t)L_683) > ((int32_t)L_686)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_687 = V_16;
		if ((((int32_t)L_687) < ((int32_t)0)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_688 = V_16;
		if ((((int32_t)L_688) > ((int32_t)((int32_t)23))))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_689 = V_17;
		if ((((int32_t)L_689) < ((int32_t)0)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_690 = V_17;
		if ((((int32_t)L_690) > ((int32_t)((int32_t)59))))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_691 = V_18;
		if ((((int32_t)L_691) < ((int32_t)0)))
		{
			goto IL_0e4c;
		}
	}
	{
		int32_t L_692 = V_18;
		if ((((int32_t)L_692) <= ((int32_t)((int32_t)59))))
		{
			goto IL_0e4e;
		}
	}

IL_0e4c:
	{
		return 0;
	}

IL_0e4e:
	{
		t272 * L_693 = p4;
		int32_t L_694 = V_15;
		int32_t L_695 = V_14;
		int32_t L_696 = V_12;
		int32_t L_697 = V_16;
		int32_t L_698 = V_17;
		int32_t L_699 = V_18;
		m11440(L_693, L_694, L_695, L_696, L_697, L_698, L_699, 0, &m11440_MI);
		t272 * L_700 = p4;
		t272 * L_701 = p4;
		double L_702 = V_19;
		t272  L_703 = m7018(L_701, L_702, &m7018_MI);
		*L_700 = L_703;
		int32_t L_704 = V_13;
		if ((((int32_t)L_704) == ((int32_t)(-1))))
		{
			goto IL_0e84;
		}
	}
	{
		int32_t L_705 = V_13;
		t272 * L_706 = p4;
		int32_t L_707 = m11463(L_706, &m11463_MI);
		if ((((int32_t)L_705) == ((int32_t)L_707)))
		{
			goto IL_0e84;
		}
	}
	{
		return 0;
	}

IL_0e84:
	{
		int32_t L_708 = V_21;
		if ((!(((uint32_t)L_708) == ((uint32_t)(-1)))))
		{
			goto IL_0eb1;
		}
	}
	{
		t272 * L_709 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_710 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		bool L_711 = m11507(NULL, (*(t272 *)L_709), L_710, &m11507_MI);
		if (!L_711)
		{
			goto IL_0eaf;
		}
	}

IL_0e9c:
	try
	{ // begin try (depth: 1)
		t923 * L_712 = p5;
		t272 * L_713 = p4;
		m11510(L_712, (*(t272 *)L_713), &m11510_MI);
		goto IL_0eaf;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_0eac;
		throw e;
	}

CATCH_0eac:
	{ // begin catch(System.Object)
		goto IL_0eaf;
	} // end catch (depth: 1)

IL_0eaf:
	{
		goto IL_0eed;
	}

IL_0eb1:
	{
		int32_t L_714 = V_23;
		if ((!(((uint32_t)L_714) == ((uint32_t)(-1)))))
		{
			goto IL_0eb9;
		}
	}
	{
		V_23 = 0;
	}

IL_0eb9:
	{
		int32_t L_715 = V_22;
		if ((!(((uint32_t)L_715) == ((uint32_t)(-1)))))
		{
			goto IL_0ec1;
		}
	}
	{
		V_22 = 0;
	}

IL_0ec1:
	{
		int32_t L_716 = V_21;
		if ((!(((uint32_t)L_716) == ((uint32_t)1))))
		{
			goto IL_0ed0;
		}
	}
	{
		int32_t L_717 = V_22;
		V_22 = ((-L_717));
		int32_t L_718 = V_23;
		V_23 = ((-L_718));
	}

IL_0ed0:
	try
	{ // begin try (depth: 1)
		t923 * L_719 = p5;
		t272 * L_720 = p4;
		int32_t L_721 = V_22;
		int32_t L_722 = V_23;
		t310  L_723 = {0};
		m11852(&L_723, L_721, L_722, 0, &m11852_MI);
		m11511(L_719, (*(t272 *)L_720), L_723, &m11511_MI);
		goto IL_0eed;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_0eea;
		throw e;
	}

CATCH_0eea:
	{ // begin catch(System.Object)
		goto IL_0eed;
	} // end catch (depth: 1)

IL_0eed:
	{
		int32_t L_724 = p7;
		V_32 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_724&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_725 = V_21;
		if ((((int32_t)L_725) == ((int32_t)(-1))))
		{
			goto IL_0f62;
		}
	}
	{
		t272 * L_726 = p4;
		t310  L_727 = (L_726->f0);
		t923 * L_728 = p5;
		t310  L_729 = m11524(L_728, &m11524_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_730 = m11887(NULL, L_727, L_729, &m11887_MI);
		V_40 = L_730;
		int64_t L_731 = m11861((&V_40), &m11861_MI);
		V_33 = L_731;
		int64_t L_732 = V_33;
		if ((((int64_t)L_732) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0f31;
		}
	}
	{
		int64_t L_733 = V_33;
		V_33 = ((int64_t)((int64_t)L_733+(int64_t)((int64_t)864000000000LL)));
	}

IL_0f31:
	{
		t272 * L_734 = p4;
		int64_t L_735 = V_33;
		t310  L_736 = {0};
		m11851(&L_736, L_735, &m11851_MI);
		m11441(L_734, 0, L_736, &m11441_MI);
		t272 * L_737 = p4;
		L_737->f1 = 1;
		int32_t L_738 = p7;
		if (!((int32_t)((int32_t)L_738&(int32_t)((int32_t)128))))
		{
			goto IL_0f60;
		}
	}
	{
		t272 * L_739 = p4;
		t272 * L_740 = p4;
		t272  L_741 = m5859(L_740, &m5859_MI);
		*L_739 = L_741;
	}

IL_0f60:
	{
		goto IL_0f85;
	}

IL_0f62:
	{
		bool L_742 = V_0;
		if (L_742)
		{
			goto IL_0f6c;
		}
	}
	{
		int32_t L_743 = p7;
		if (!((int32_t)((int32_t)L_743&(int32_t)((int32_t)64))))
		{
			goto IL_0f76;
		}
	}

IL_0f6c:
	{
		t272 * L_744 = p4;
		L_744->f1 = 1;
		goto IL_0f85;
	}

IL_0f76:
	{
		int32_t L_745 = p7;
		if (!((int32_t)((int32_t)L_745&(int32_t)((int32_t)32))))
		{
			goto IL_0f85;
		}
	}
	{
		t272 * L_746 = p4;
		L_746->f1 = 2;
	}

IL_0f85:
	{
		bool L_747 = V_32;
		if (L_747)
		{
			goto IL_0f96;
		}
	}
	{
		int32_t L_748 = p7;
		G_B413_0 = ((((int32_t)((int32_t)((int32_t)L_748&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		goto IL_0f97;
	}

IL_0f96:
	{
		G_B413_0 = 0;
	}

IL_0f97:
	{
		V_34 = G_B413_0;
		t272 * L_749 = p4;
		int32_t L_750 = (L_749->f1);
		if (!L_750)
		{
			goto IL_0fc8;
		}
	}
	{
		bool L_751 = V_32;
		if (!L_751)
		{
			goto IL_0fb6;
		}
	}
	{
		t272 * L_752 = p4;
		t272 * L_753 = p4;
		t272  L_754 = m4446(L_753, &m4446_MI);
		*L_752 = L_754;
		goto IL_0fc8;
	}

IL_0fb6:
	{
		bool L_755 = V_34;
		if (!L_755)
		{
			goto IL_0fc8;
		}
	}
	{
		t272 * L_756 = p4;
		t272 * L_757 = p4;
		t272  L_758 = m5859(L_757, &m5859_MI);
		*L_756 = L_758;
	}

IL_0fc8:
	{
		return 1;
	}
}
extern MethodInfo m6935_MI;
extern TypeInfo* t221_TI_var;
extern "C" t272  m6935 (t9 * __this , t2* p0, t2* p1, t9 * p2, int32_t p3, MethodInfo* method)
{
	static bool m6935_init;
	if (!m6935_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m6935_init = true;
	}
	t221* V_0 = {0};
	{
		t2* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1135, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_0 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t221* L_2 = V_0;
		t2* L_3 = p1;
		ArrayElementTypeCheck (L_2, L_3);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)L_3;
		t2* L_4 = p0;
		t221* L_5 = V_0;
		t9 * L_6 = p2;
		int32_t L_7 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_8 = m11498(NULL, L_4, L_5, L_6, L_7, &m11498_MI);
		return L_8;
	}
}
extern "C" t272  m11498 (t9 * __this , t2* p0, t221* p1, t9 * p2, int32_t p3, MethodInfo* method)
{
	t1710 * V_0 = {0};
	t272  V_1 = {0};
	bool V_2 = false;
	t138 * V_3 = {0};
	{
		t9 * L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_1 = m8724(NULL, L_0, &m8724_MI);
		V_0 = L_1;
		int32_t L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		m11499(NULL, L_2, &m11499_MI);
		t2* L_3 = p0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral1077, &m339_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001b:
	{
		t221* L_5 = p1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		t132 * L_6 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_6, (t2*) &_stringLiteral2690, &m339_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		t221* L_7 = p1;
		if ((((int32_t)(((t121 *)L_7)->max_length))))
		{
			goto IL_0039;
		}
	}
	{
		t897 * L_8 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_8, (t2*) &_stringLiteral1544, &m4354_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		V_2 = 0;
		V_3 = (t138 *)NULL;
		t2* L_9 = p0;
		t221* L_10 = p1;
		t1710 * L_11 = V_0;
		int32_t L_12 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_13 = m11500(NULL, L_9, L_10, L_11, L_12, (&V_1), 1, (&V_2), 1, (&V_3), &m11500_MI);
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		t138 * L_14 = V_3;
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0052:
	{
		t272  L_15 = V_1;
		return L_15;
	}
}
extern "C" void m11499 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)128))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_1 = p0;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)16))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = p0;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = p0;
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)64))))
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_4, (t2*) &_stringLiteral2691, (t2*) &_stringLiteral1166, &m5761_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002b:
	{
		int32_t L_5 = p0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)64))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = p0;
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)32))))
		{
			goto IL_0047;
		}
	}
	{
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_7, (t2*) &_stringLiteral2692, (t2*) &_stringLiteral1166, &m5761_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0047:
	{
		return;
	}
}
extern "C" bool m11500 (t9 * __this , t2* p0, t221* p1, t1710 * p2, int32_t p3, t272 * p4, bool p5, bool* p6, bool p7, t138 ** p8, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	t272  V_2 = {0};
	t2* V_3 = {0};
	t923  V_4 = {0};
	{
		V_1 = 0;
		V_0 = 0;
		goto IL_0043;
	}

IL_0006:
	{
		t221* L_0 = p1;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_3 = (*(t2**)(t2**)SZArrayLdElema(L_0, L_2));
		t2* L_3 = V_3;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		t2* L_4 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_6 = m331(NULL, L_4, L_5, &m331_MI);
		if (!L_6)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		goto IL_0049;
	}

IL_001c:
	{
		t2* L_7 = p0;
		t221* L_8 = p1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		bool L_11 = p5;
		t1710 * L_12 = p2;
		int32_t L_13 = p3;
		bool* L_14 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_15 = m11497(NULL, L_7, (*(t2**)(t2**)SZArrayLdElema(L_8, L_10)), (t2*)NULL, L_11, (&V_2), (&V_4), L_12, L_13, 0, (&V_1), L_14, &m11497_MI);
		if (!L_15)
		{
			goto IL_003f;
		}
	}
	{
		t272 * L_16 = p4;
		t272  L_17 = V_2;
		*L_16 = L_17;
		return 1;
	}

IL_003f:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_19 = V_0;
		t221* L_20 = p1;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		bool L_21 = p7;
		if (!L_21)
		{
			goto IL_005a;
		}
	}
	{
		t138 ** L_22 = p8;
		t897 * L_23 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_23, (t2*) &_stringLiteral2693, &m4354_MI);
		*((t9 **)(L_22)) = (t9 *)L_23;
	}

IL_005a:
	{
		t272 * L_24 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_25 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		*L_24 = L_25;
		return 0;
	}
}
extern MethodInfo m11501_MI;
extern "C" t272  m11501 (t272 * __this, t310  p0, MethodInfo* method)
{
	t310  V_0 = {0};
	t272  V_1 = {0};
	{
		t310 * L_0 = &(__this->f0);
		int64_t L_1 = m11861(L_0, &m11861_MI);
		t310  L_2 = {0};
		m11851(&L_2, L_1, &m11851_MI);
		t310  L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_4 = m11887(NULL, L_2, L_3, &m11887_MI);
		V_0 = L_4;
		t310  L_5 = V_0;
		m11441((&V_1), 1, L_5, &m11441_MI);
		int32_t L_6 = (__this->f1);
		(&V_1)->f1 = L_6;
		t272  L_7 = V_1;
		return L_7;
	}
}
extern MethodInfo m1130_MI;
extern "C" t2* m1130 (t272 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11504(__this, (t2*) &_stringLiteral353, &m11504_MI);
		return L_0;
	}
}
extern MethodInfo m11502_MI;
extern "C" t2* m11502 (t272 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4447(__this, (t2*) &_stringLiteral1169, (t9 *)NULL, &m4447_MI);
		return L_0;
	}
}
extern "C" t2* m11503 (t272 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = m4447(__this, (t2*)NULL, L_0, &m4447_MI);
		return L_1;
	}
}
extern "C" t2* m11504 (t272 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4447(__this, L_0, (t9 *)NULL, &m4447_MI);
		return L_1;
	}
}
extern "C" t2* m4447 (t272 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1710 * V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	uint16_t V_3 = 0x0;
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_1 = m8724(NULL, L_0, &m8724_MI);
		V_0 = L_1;
		t2* L_2 = p0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_5 = m331(NULL, L_3, L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_0020;
		}
	}

IL_0017:
	{
		p0 = (t2*) &_stringLiteral1169;
	}

IL_0020:
	{
		V_1 = 0;
		V_2 = 0;
		t2* L_6 = p0;
		int32_t L_7 = m2763(L_6, &m2763_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		t2* L_8 = p0;
		uint16_t L_9 = m2778(L_8, 0, &m2778_MI);
		V_3 = L_9;
		uint16_t L_10 = V_3;
		t1710 * L_11 = V_0;
		t2* L_12 = m11529(NULL, L_10, L_11, (&V_1), (&V_2), &m11529_MI);
		p0 = L_12;
		uint16_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_0057;
		}
	}
	{
		t272  L_14 = m4446(__this, &m4446_MI);
		t2* L_15 = p0;
		t1710 * L_16 = V_0;
		t2* L_17 = m11531(NULL, L_14, L_15, L_16, &m11531_MI);
		return L_17;
	}

IL_0057:
	{
		t2* L_18 = p0;
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		t897 * L_19 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_19, (t2*) &_stringLiteral2694, &m4354_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0065:
	{
		t2* L_20 = p0;
		t1710 * L_21 = V_0;
		t2* L_22 = m11531(NULL, (*(t272 *)__this), L_20, L_21, &m11531_MI);
		return L_22;
	}
}
extern "C" t272  m5859 (t272 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_0 = m11890(NULL, &m11890_MI);
		t272  L_1 = (t272 )VirtFuncInvoker1< t272 , t272  >::Invoke(&m11893_MI, L_0, (*(t272 *)__this));
		return L_1;
	}
}
extern "C" t272  m4446 (t272 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_0 = m11890(NULL, &m11890_MI);
		t272  L_1 = (t272 )VirtFuncInvoker1< t272 , t272  >::Invoke(&m11894_MI, L_0, (*(t272 *)__this));
		return L_1;
	}
}
extern "C" t272  m11505 (t9 * __this , t272  p0, t310  p1, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_2 = m11880(NULL, L_0, L_1, &m11880_MI);
		m11441((&V_0), 1, L_2, &m11441_MI);
		int32_t L_3 = ((&p0)->f1);
		(&V_0)->f1 = L_3;
		t272  L_4 = V_0;
		return L_4;
	}
}
extern MethodInfo m11506_MI;
extern "C" bool m11506 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11881(NULL, L_0, L_1, &m11881_MI);
		return L_2;
	}
}
extern MethodInfo m5895_MI;
extern "C" bool m5895 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11882(NULL, L_0, L_1, &m11882_MI);
		return L_2;
	}
}
extern MethodInfo m5795_MI;
extern "C" bool m5795 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11883(NULL, L_0, L_1, &m11883_MI);
		return L_2;
	}
}
extern "C" bool m11507 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11884(NULL, L_0, L_1, &m11884_MI);
		return L_2;
	}
}
extern MethodInfo m5894_MI;
extern "C" bool m5894 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11885(NULL, L_0, L_1, &m11885_MI);
		return L_2;
	}
}
extern MethodInfo m5893_MI;
extern "C" bool m5893 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_2 = m11886(NULL, L_0, L_1, &m11886_MI);
		return L_2;
	}
}
extern MethodInfo m11508_MI;
extern "C" t310  m11508 (t9 * __this , t272  p0, t272  p1, MethodInfo* method)
{
	t310  V_0 = {0};
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_2 = m11887(NULL, L_0, L_1, &m11887_MI);
		V_0 = L_2;
		int64_t L_3 = m11861((&V_0), &m11861_MI);
		t310  L_4 = {0};
		m11851(&L_4, L_3, &m11851_MI);
		return L_4;
	}
}
extern MethodInfo m11509_MI;
extern "C" t272  m11509 (t9 * __this , t272  p0, t310  p1, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		t310  L_0 = ((&p0)->f0);
		t310  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_2 = m11887(NULL, L_0, L_1, &m11887_MI);
		m11441((&V_0), 1, L_2, &m11441_MI);
		int32_t L_3 = ((&p0)->f1);
		(&V_0)->f1 = L_3;
		t272  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2109_TI;
#include "t2109MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t923_TI;

#include "t2201.h"
#include "t2202.h"
#include "t2111.h"
extern TypeInfo t2201_TI;
extern TypeInfo t2202_TI;
extern TypeInfo t2111_TI;
#include "t2201MD.h"
#include "t2202MD.h"
#include "t2111MD.h"
extern Il2CppType t2201_0_0_0;
extern Il2CppType t2202_0_0_0;
extern Il2CppType t2111_0_0_0;
extern MethodInfo m12176_MI;
extern MethodInfo m11525_MI;
extern MethodInfo m5773_MI;
extern MethodInfo m10374_MI;
extern MethodInfo m11873_MI;
extern MethodInfo m12177_MI;
extern MethodInfo m12178_MI;
extern MethodInfo m11518_MI;
extern MethodInfo m10371_MI;
extern MethodInfo m11865_MI;
extern MethodInfo m10370_MI;
extern MethodInfo m11876_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m8743_MI;
extern MethodInfo m11530_MI;
extern MethodInfo m12179_MI;
extern MethodInfo m11532_MI;
extern MethodInfo m11523_MI;
extern Il2CppGenericMethod m12177_GM;
extern Il2CppGenericMethod m12178_GM;
extern Il2CppGenericMethod m12179_GM;


extern "C" void m11510 (t923 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_2 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		__this->f3 = L_2;
		goto IL_002f;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_3 = m11890(NULL, &m11890_MI);
		t272  L_4 = p0;
		t310  L_5 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, L_3, L_4);
		__this->f3 = L_5;
	}

IL_002f:
	{
		t272  L_6 = m11525(__this, &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_7 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		bool L_8 = m5894(NULL, L_6, L_7, &m5894_MI);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		t272  L_9 = m11525(__this, &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_10 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		bool L_11 = m5895(NULL, L_9, L_10, &m5895_MI);
		if (!L_11)
		{
			goto IL_005e;
		}
	}

IL_0053:
	{
		t909 * L_12 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_12, (t2*) &_stringLiteral2695, &m5763_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005e:
	{
		return;
	}
}
extern "C" void m11511 (t923 * __this, t272  p0, t310  p1, MethodInfo* method)
{
	{
		int32_t L_0 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		t310  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_2 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		bool L_3 = m11884(NULL, L_1, L_2, &m11884_MI);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral2696, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		int32_t L_5 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004a;
		}
	}
	{
		t310  L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_7 = m11890(NULL, &m11890_MI);
		t272  L_8 = p0;
		t310  L_9 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, L_7, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_10 = m11884(NULL, L_6, L_9, &m11884_MI);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_11, (t2*) &_stringLiteral2697, &m2949_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004a:
	{
		int64_t L_12 = m11861((&p1), &m11861_MI);
		if (!((int64_t)((int64_t)L_12%(int64_t)(((int64_t)((int32_t)600000000))))))
		{
			goto IL_0065;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_13, (t2*) &_stringLiteral2698, &m2949_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0065:
	{
		t310  L_14 = p1;
		t310  L_15 = {0};
		m11852(&L_15, ((int32_t)-14), 0, 0, &m11852_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_16 = m11885(NULL, L_14, L_15, &m11885_MI);
		if (L_16)
		{
			goto IL_0087;
		}
	}
	{
		t310  L_17 = p1;
		t310  L_18 = {0};
		m11852(&L_18, ((int32_t)14), 0, 0, &m11852_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		bool L_19 = m11882(NULL, L_17, L_18, &m11882_MI);
		if (!L_19)
		{
			goto IL_0092;
		}
	}

IL_0087:
	{
		t909 * L_20 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_20, (t2*) &_stringLiteral2699, &m5763_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0092:
	{
		t272  L_21 = p0;
		__this->f2 = L_21;
		t310  L_22 = p1;
		__this->f3 = L_22;
		t272  L_23 = m11525(__this, &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_24 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		bool L_25 = m5894(NULL, L_23, L_24, &m5894_MI);
		if (L_25)
		{
			goto IL_00c4;
		}
	}
	{
		t272  L_26 = m11525(__this, &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_27 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		bool L_28 = m5895(NULL, L_26, L_27, &m5895_MI);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}

IL_00c4:
	{
		t909 * L_29 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_29, (t2*) &_stringLiteral2700, &m5763_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00cf:
	{
		return;
	}
}
extern "C" void m11512 (t923 * __this, int64_t p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		t272  L_1 = {0};
		m11438(&L_1, L_0, &m11438_MI);
		t310  L_2 = p1;
		m11511(__this, L_1, L_2, &m11511_MI);
		return;
	}
}
extern MethodInfo m11513_MI;
extern "C" void m11513 (t923 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t272  V_0 = {0};
	int16_t V_1 = 0;
	{
		t1106 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t272_0_0_0), &m329_MI);
		t9 * L_2 = m5773(L_0, (t2*) &_stringLiteral2701, L_1, &m5773_MI);
		V_0 = ((*(t272 *)((t272 *)UnBox (L_2, InitializedTypeInfo(&t272_TI)))));
		t1106 * L_3 = p0;
		int16_t L_4 = m10374(L_3, (t2*) &_stringLiteral2702, &m10374_MI);
		V_1 = L_4;
		int16_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_6 = m11873(NULL, (((double)L_5)), &m11873_MI);
		__this->f3 = L_6;
		t310  L_7 = (__this->f3);
		t272  L_8 = m11472((&V_0), L_7, &m11472_MI);
		__this->f2 = L_8;
		return;
	}
}
extern MethodInfo m11514_MI;
extern TypeInfo* t2201_TI_var;
extern TypeInfo* t2202_TI_var;
extern MethodInfo* m12177_MI_var;
extern MethodInfo* m12178_MI_var;
extern "C" void m11514 (t9 * __this , MethodInfo* method)
{
	static bool m11514_init;
	if (!m11514_init)
	{
		t2201_TI_var = il2cpp_codegen_class_from_type(&t2201_0_0_0);
		t2202_TI_var = il2cpp_codegen_class_from_type(&t2202_0_0_0);
		m12177_MI_var = il2cpp_codegen_genericmethod_get_method(&m12177_GM);
		m12178_MI_var = il2cpp_codegen_genericmethod_get_method(&m12178_GM);
		m11514_init = true;
	}
	t2201 * V_0 = {0};
	t2202 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_0 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		t923  L_2 = {0};
		m11511(&L_2, L_0, L_1, &m11511_MI);
		((t923_SFs*)InitializedTypeInfo(&t923_TI)->static_fields)->f0 = L_2;
		t272  L_3 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		t310  L_4 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		t923  L_5 = {0};
		m11511(&L_5, L_3, L_4, &m11511_MI);
		((t923_SFs*)InitializedTypeInfo(&t923_TI)->static_fields)->f1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		bool L_6 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		t2201 * L_7 = (t2201 *)il2cpp_codegen_object_new (t2201_TI_var);
		m12177(L_7, m12177_MI_var);
		V_0 = L_7;
		t2202 * L_8 = (t2202 *)il2cpp_codegen_object_new (t2202_TI_var);
		m12178(L_8, m12178_MI_var);
		V_1 = L_8;
	}

IL_003b:
	{
		return;
	}
}
extern MethodInfo m11515_MI;
extern "C" int32_t m11515 (t923 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = m11518(__this, ((*(t923 *)((t923 *)UnBox (L_0, InitializedTypeInfo(&t923_TI))))), &m11518_MI);
		return L_1;
	}
}
extern MethodInfo m11516_MI;
extern "C" void m11516 (t923 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t272  V_0 = {0};
	t272  V_1 = {0};
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t272 * L_2 = &(__this->f2);
		int64_t L_3 = m7021(L_2, &m7021_MI);
		m11438((&V_1), L_3, &m11438_MI);
		t310  L_4 = (__this->f3);
		t272  L_5 = m11501((&V_1), L_4, &m11501_MI);
		V_0 = L_5;
		t1106 * L_6 = p0;
		t272  L_7 = V_0;
		m10371(L_6, (t2*) &_stringLiteral2701, L_7, &m10371_MI);
		t1106 * L_8 = p0;
		t310 * L_9 = &(__this->f3);
		double L_10 = m11865(L_9, &m11865_MI);
		m10370(L_8, (t2*) &_stringLiteral2702, (((int16_t)L_10)), &m10370_MI);
		return;
	}
}
extern MethodInfo m11517_MI;
extern "C" void m11517 (t923 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" int32_t m11518 (t923 * __this, t923  p0, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		t272  L_0 = m11525(__this, &m11525_MI);
		V_0 = L_0;
		t272  L_1 = m11525((&p0), &m11525_MI);
		int32_t L_2 = m11476((&V_0), L_1, &m11476_MI);
		return L_2;
	}
}
extern MethodInfo m11519_MI;
extern "C" bool m11519 (t923 * __this, t923  p0, MethodInfo* method)
{
	{
		t272  L_0 = m11525(__this, &m11525_MI);
		t272  L_1 = m11525((&p0), &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_2 = m11506(NULL, L_0, L_1, &m11506_MI);
		return L_2;
	}
}
extern MethodInfo m11520_MI;
extern "C" bool m11520 (t923 * __this, t9 * p0, MethodInfo* method)
{
	t923  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t923_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t272  L_1 = m11525(__this, &m11525_MI);
		t9 * L_2 = p0;
		V_0 = ((*(t923 *)((t923 *)UnBox (L_2, InitializedTypeInfo(&t923_TI)))));
		t272  L_3 = m11525((&V_0), &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_4 = m11506(NULL, L_1, L_3, &m11506_MI);
		return L_4;
	}

IL_0022:
	{
		return 0;
	}
}
extern MethodInfo m11521_MI;
extern "C" int32_t m11521 (t923 * __this, MethodInfo* method)
{
	{
		t272 * L_0 = &(__this->f2);
		int32_t L_1 = m11484(L_0, &m11484_MI);
		t310 * L_2 = &(__this->f3);
		int32_t L_3 = m11876(L_2, &m11876_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern MethodInfo m11522_MI;
extern "C" t2* m11522 (t923 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4449(__this, (t2*)NULL, (t9 *)NULL, &m4449_MI);
		return L_0;
	}
}
extern MethodInfo* m12179_MI_var;
extern "C" t2* m4449 (t923 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4449_init;
	if (!m4449_init)
	{
		m12179_MI_var = il2cpp_codegen_genericmethod_get_method(&m12179_GM);
		m4449_init = true;
	}
	t1710 * V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	uint16_t V_3 = 0x0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t2* G_B12_0 = {0};
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_1 = m8724(NULL, L_0, &m8724_MI);
		V_0 = L_1;
		t2* L_2 = p0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_5 = m331(NULL, L_3, L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_0036;
		}
	}

IL_0017:
	{
		t1710 * L_6 = V_0;
		t2* L_7 = m8741(L_6, &m8741_MI);
		t1710 * L_8 = V_0;
		t2* L_9 = m8743(L_8, &m8743_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m4485(NULL, L_7, (t2*) &_stringLiteral163, L_9, (t2*) &_stringLiteral2703, &m4485_MI);
		p0 = L_10;
	}

IL_0036:
	{
		V_1 = 0;
		V_2 = 0;
		t2* L_11 = p0;
		int32_t L_12 = m2763(L_11, &m2763_MI);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		t2* L_13 = p0;
		uint16_t L_14 = m2778(L_13, 0, &m2778_MI);
		V_3 = L_14;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		uint16_t L_15 = V_3;
		t1710 * L_16 = V_0;
		t2* L_17 = m11530(NULL, L_15, L_16, (&V_1), (&V_2), 1, &m11530_MI);
		p0 = L_17;
		goto IL_0065;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_005d;
		throw e;
	}

CATCH_005d:
	{ // begin catch(System.Object)
		p0 = (t2*)NULL;
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		t2* L_18 = p0;
		if (L_18)
		{
			goto IL_0073;
		}
	}
	{
		t897 * L_19 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_19, (t2*) &_stringLiteral2694, &m4354_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0073:
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_008f;
		}
	}
	{
		t272  L_21 = m11525(__this, &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_22 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		t2111  L_23 = {0};
		m12179(&L_23, L_22, m12179_MI_var);
		t2* L_24 = p0;
		t1710 * L_25 = V_0;
		t2* L_26 = m11532(NULL, L_21, L_23, L_24, L_25, &m11532_MI);
		G_B12_0 = L_26;
		goto IL_00a7;
	}

IL_008f:
	{
		t272  L_27 = m11523(__this, &m11523_MI);
		t310  L_28 = m11524(__this, &m11524_MI);
		t2111  L_29 = {0};
		m12179(&L_29, L_28, m12179_MI_var);
		t2* L_30 = p0;
		t1710 * L_31 = V_0;
		t2* L_32 = m11532(NULL, L_27, L_29, L_30, L_31, &m11532_MI);
		G_B12_0 = L_32;
	}

IL_00a7:
	{
		return G_B12_0;
	}
}
extern MethodInfo m4448_MI;
extern "C" t923  m4448 (t923 * __this, MethodInfo* method)
{
	{
		t272  L_0 = m11525(__this, &m11525_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		t923  L_2 = {0};
		m11511(&L_2, L_0, L_1, &m11511_MI);
		return L_2;
	}
}
extern "C" t272  m11523 (t923 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_1 = m11480(NULL, L_0, 0, &m11480_MI);
		return L_1;
	}
}
extern "C" t310  m11524 (t923 * __this, MethodInfo* method)
{
	{
		t310  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t272  m11525 (t923 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f2);
		t310  L_1 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_2 = m11509(NULL, L_0, L_1, &m11509_MI);
		t272  L_3 = m11480(NULL, L_2, 1, &m11480_MI);
		return L_3;
	}
}
#include "t2110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2110_TI;

#include "t1705.h"
extern TypeInfo t1705_TI;
extern TypeInfo t1706_TI;
#include "t1705MD.h"
extern MethodInfo m7366_MI;
extern MethodInfo m8740_MI;
extern MethodInfo m8742_MI;
extern MethodInfo m399_MI;
extern MethodInfo m8746_MI;
extern MethodInfo m8752_MI;
extern MethodInfo m8751_MI;
extern MethodInfo m8753_MI;
extern MethodInfo m8754_MI;
extern MethodInfo m8745_MI;
extern MethodInfo m11526_MI;
extern MethodInfo m11527_MI;
extern MethodInfo m10932_MI;
extern MethodInfo m11609_MI;
extern MethodInfo m5856_MI;
extern MethodInfo m5939_MI;
extern MethodInfo m8749_MI;
extern MethodInfo m12180_MI;
extern MethodInfo m12181_MI;
extern MethodInfo m8759_MI;
extern MethodInfo m8758_MI;
extern MethodInfo m12182_MI;
extern MethodInfo m8729_MI;
extern MethodInfo m8731_MI;
extern MethodInfo m12183_MI;
extern MethodInfo m12184_MI;
extern MethodInfo m8730_MI;
extern MethodInfo m8738_MI;
extern MethodInfo m11528_MI;
extern Il2CppGenericMethod m12185_GM;
extern Il2CppGenericMethod m12186_GM;


extern "C" int32_t m11526 (t9 * __this , t2* p0, int32_t p1, uint16_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		V_0 = L_1;
		int32_t L_2 = p1;
		V_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0011:
	{
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001f;
		}
	}
	{
		t2* L_6 = p0;
		int32_t L_7 = V_1;
		uint16_t L_8 = m2778(L_6, L_7, &m2778_MI);
		uint16_t L_9 = p2;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}

IL_001f:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = p1;
		return ((int32_t)((int32_t)L_10-(int32_t)L_11));
	}
}
extern "C" void m11527 (t9 * __this , t328 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	uint16_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		if ((uint64_t)(uint32_t)((int32_t)16) * (uint64_t)(uint32_t)2 > (uint64_t)(uint32_t)4294967295U)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		int8_t* L_0 = (int8_t*) alloca(((int32_t)((int32_t)((int32_t)16)*(int32_t)2)));
		memset(L_0,0,((int32_t)((int32_t)((int32_t)16)*(int32_t)2)));
		V_0 = (uint16_t*)(L_0);
		V_1 = ((int32_t)16);
	}

IL_000a:
	{
		uint16_t* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = ((int32_t)((int32_t)L_2-(int32_t)1));
		V_1 = L_3;
		int32_t L_4 = p1;
		*((int16_t*)(((intptr_t)((intptr_t)L_1+(int32_t)((int32_t)((int32_t)L_3*(int32_t)2)))))) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)+(int32_t)((int32_t)((int32_t)L_4%(int32_t)((int32_t)10)))))));
		int32_t L_5 = p1;
		p1 = ((int32_t)((int32_t)L_5/(int32_t)((int32_t)10)));
		int32_t L_6 = p2;
		p2 = ((int32_t)((int32_t)L_6-(int32_t)1));
		int32_t L_7 = p1;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		goto IL_003d;
	}

IL_0031:
	{
		uint16_t* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		V_1 = L_10;
		*((int16_t*)(((intptr_t)((intptr_t)L_8+(int32_t)((int32_t)((int32_t)L_10*(int32_t)2)))))) = (int16_t)((int32_t)48);
	}

IL_003d:
	{
		int32_t L_11 = p2;
		int32_t L_12 = L_11;
		p2 = ((int32_t)((int32_t)L_12-(int32_t)1));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		t328 * L_13 = p0;
		uint16_t* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_17 = m7434(L_17, (uint16_t*)(uint16_t*)L_14, L_15, ((int32_t)((int32_t)((int32_t)16)-(int32_t)L_16)), &m7366_MI);
		m1207(L_13, L_17, &m1207_MI);
		return;
	}
}
extern "C" int32_t m11528 (t9 * __this , t2* p0, int32_t p1, t328 * p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		V_0 = L_1;
		int32_t L_2 = p1;
		V_1 = L_2;
		t2* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = L_4;
		p1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		uint16_t L_6 = m2778(L_3, L_5, &m2778_MI);
		V_2 = L_6;
		goto IL_0064;
	}

IL_001a:
	{
		t2* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = L_8;
		p1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint16_t L_10 = m2778(L_7, L_9, &m2778_MI);
		V_3 = L_10;
		uint16_t L_11 = V_3;
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_13 = p1;
		int32_t L_14 = V_1;
		return ((int32_t)((int32_t)L_13-(int32_t)L_14));
	}

IL_0031:
	{
		uint16_t L_15 = V_3;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_16 = p1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0045;
		}
	}
	{
		t897 * L_18 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_18, (t2*) &_stringLiteral2704, &m4354_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0045:
	{
		t328 * L_19 = p2;
		t2* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = L_21;
		p1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		uint16_t L_23 = m2778(L_20, L_22, &m2778_MI);
		m2797(L_19, L_23, &m2797_MI);
		goto IL_0064;
	}

IL_005c:
	{
		t328 * L_24 = p2;
		uint16_t L_25 = V_3;
		m2797(L_24, L_25, &m2797_MI);
	}

IL_0064:
	{
		int32_t L_26 = p1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_001a;
		}
	}
	{
		t897 * L_28 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_28, (t2*) &_stringLiteral2704, &m4354_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" t2* m11529 (t9 * __this , uint16_t p0, t1710 * p1, bool* p2, bool* p3, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		t1710 * L_1 = p1;
		bool* L_2 = p2;
		bool* L_3 = p3;
		t2* L_4 = m11530(NULL, L_0, L_1, L_2, L_3, 0, &m11530_MI);
		return L_4;
	}
}
extern "C" t2* m11530 (t9 * __this , uint16_t p0, t1710 * p1, bool* p2, bool* p3, bool p4, MethodInfo* method)
{
	t2* V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		bool* L_0 = p2;
		*((int8_t*)(L_0)) = (int8_t)0;
		bool* L_1 = p3;
		*((int8_t*)(L_1)) = (int8_t)0;
		uint16_t L_2 = p0;
		V_1 = L_2;
		uint16_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 0)
		{
			goto IL_0129;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 1)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 2)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 4)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 5)
		{
			goto IL_0144;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 6)
		{
			goto IL_0157;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 7)
		{
			goto IL_0163;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 8)
		{
			goto IL_0175;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 9)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 10)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 11)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)109))) == 12)
		{
			goto IL_019c;
		}
	}

IL_0045:
	{
		uint16_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 0)
		{
			goto IL_0129;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 1)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 2)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 3)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 4)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 5)
		{
			goto IL_0144;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 6)
		{
			goto IL_0072;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 7)
		{
			goto IL_016c;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)77))) == 8)
		{
			goto IL_0188;
		}
	}

IL_0072:
	{
		uint16_t L_5 = V_1;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)68))) == 0)
		{
			goto IL_00bd;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)68))) == 1)
		{
			goto IL_008b;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)68))) == 2)
		{
			goto IL_00e5;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)68))) == 3)
		{
			goto IL_010d;
		}
	}

IL_008b:
	{
		uint16_t L_6 = V_1;
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_00b1;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_00f1;
		}
	}

IL_00a4:
	{
		uint16_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)89))))
		{
			goto IL_019c;
		}
	}
	{
		goto IL_01a5;
	}

IL_00b1:
	{
		t1710 * L_8 = p1;
		t2* L_9 = m8741(L_8, &m8741_MI);
		V_0 = L_9;
		goto IL_01a9;
	}

IL_00bd:
	{
		t1710 * L_10 = p1;
		t2* L_11 = m8740(L_10, &m8740_MI);
		V_0 = L_11;
		goto IL_01a9;
	}

IL_00c9:
	{
		t1710 * L_12 = p1;
		t2* L_13 = m8740(L_12, &m8740_MI);
		t1710 * L_14 = p1;
		t2* L_15 = m8742(L_14, &m8742_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m399(NULL, L_13, (t2*) &_stringLiteral163, L_15, &m399_MI);
		V_0 = L_16;
		goto IL_01a9;
	}

IL_00e5:
	{
		t1710 * L_17 = p1;
		t2* L_18 = m8746(L_17, &m8746_MI);
		V_0 = L_18;
		goto IL_01a9;
	}

IL_00f1:
	{
		t1710 * L_19 = p1;
		t2* L_20 = m8741(L_19, &m8741_MI);
		t1710 * L_21 = p1;
		t2* L_22 = m8742(L_21, &m8742_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m399(NULL, L_20, (t2*) &_stringLiteral163, L_22, &m399_MI);
		V_0 = L_23;
		goto IL_01a9;
	}

IL_010d:
	{
		t1710 * L_24 = p1;
		t2* L_25 = m8741(L_24, &m8741_MI);
		t1710 * L_26 = p1;
		t2* L_27 = m8743(L_26, &m8743_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_28 = m399(NULL, L_25, (t2*) &_stringLiteral163, L_27, &m399_MI);
		V_0 = L_28;
		goto IL_01a9;
	}

IL_0129:
	{
		t1710 * L_29 = p1;
		t2* L_30 = m8744(L_29, &m8744_MI);
		V_0 = L_30;
		goto IL_01a9;
	}

IL_0135:
	{
		t1710 * L_31 = p1;
		t2* L_32 = m8752(L_31, &m8752_MI);
		V_0 = L_32;
		bool* L_33 = p3;
		*((int8_t*)(L_33)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0144:
	{
		t1710 * L_34 = p1;
		t2* L_35 = m8751(L_34, &m8751_MI);
		V_0 = L_35;
		bool L_36 = p4;
		if (!L_36)
		{
			goto IL_0152;
		}
	}
	{
		bool* L_37 = p2;
		*((int8_t*)(L_37)) = (int8_t)1;
	}

IL_0152:
	{
		bool* L_38 = p3;
		*((int8_t*)(L_38)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0157:
	{
		t1710 * L_39 = p1;
		t2* L_40 = m8753(L_39, &m8753_MI);
		V_0 = L_40;
		bool* L_41 = p3;
		*((int8_t*)(L_41)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0163:
	{
		t1710 * L_42 = p1;
		t2* L_43 = m8742(L_42, &m8742_MI);
		V_0 = L_43;
		goto IL_01a9;
	}

IL_016c:
	{
		t1710 * L_44 = p1;
		t2* L_45 = m8743(L_44, &m8743_MI);
		V_0 = L_45;
		goto IL_01a9;
	}

IL_0175:
	{
		t1710 * L_46 = p1;
		t2* L_47 = m8754(L_46, &m8754_MI);
		V_0 = L_47;
		bool L_48 = p4;
		if (!L_48)
		{
			goto IL_0183;
		}
	}
	{
		bool* L_49 = p2;
		*((int8_t*)(L_49)) = (int8_t)1;
	}

IL_0183:
	{
		bool* L_50 = p3;
		*((int8_t*)(L_50)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0188:
	{
		bool L_51 = p4;
		if (!L_51)
		{
			goto IL_0190;
		}
	}
	{
		V_0 = (t2*)NULL;
		goto IL_019a;
	}

IL_0190:
	{
		t1710 * L_52 = p1;
		t2* L_53 = m8746(L_52, &m8746_MI);
		V_0 = L_53;
		bool* L_54 = p2;
		*((int8_t*)(L_54)) = (int8_t)1;
	}

IL_019a:
	{
		goto IL_01a9;
	}

IL_019c:
	{
		t1710 * L_55 = p1;
		t2* L_56 = m8745(L_55, &m8745_MI);
		V_0 = L_56;
		goto IL_01a9;
	}

IL_01a5:
	{
		V_0 = (t2*)NULL;
		goto IL_01a9;
	}

IL_01a9:
	{
		t2* L_57 = V_0;
		return L_57;
	}
}
extern TypeInfo* t2111_TI_var;
extern "C" t2* m11531 (t9 * __this , t272  p0, t2* p1, t1710 * p2, MethodInfo* method)
{
	static bool m11531_init;
	if (!m11531_init)
	{
		t2111_TI_var = il2cpp_codegen_class_from_type(&t2111_0_0_0);
		m11531_init = true;
	}
	t2111  V_0 = {0};
	{
		t272  L_0 = p0;
		Initobj (t2111_TI_var, (&V_0));
		t2111  L_1 = V_0;
		t2* L_2 = p1;
		t1710 * L_3 = p2;
		t2* L_4 = m11532(NULL, L_0, L_1, L_2, L_3, &m11532_MI);
		return L_4;
	}
}
extern MethodInfo* m12185_MI_var;
extern MethodInfo* m12186_MI_var;
extern "C" t2* m11532 (t9 * __this , t272  p0, t2111  p1, t2* p2, t1710 * p3, MethodInfo* method)
{
	static bool m11532_init;
	if (!m11532_init)
	{
		m12185_MI_var = il2cpp_codegen_genericmethod_get_method(&m12185_GM);
		m12186_MI_var = il2cpp_codegen_genericmethod_get_method(&m12186_GM);
		m11532_init = true;
	}
	t328 * V_0 = {0};
	t1710 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint16_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	t2* V_9 = {0};
	t310  V_10 = {0};
	int32_t V_11 = 0;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t G_B17_0 = 0;
	t328 * G_B17_1 = {0};
	int32_t G_B16_0 = 0;
	t328 * G_B16_1 = {0};
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	t328 * G_B18_2 = {0};
	int32_t G_B21_0 = 0;
	t328 * G_B21_1 = {0};
	int32_t G_B20_0 = 0;
	t328 * G_B20_1 = {0};
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	t328 * G_B22_2 = {0};
	int32_t G_B25_0 = 0;
	t328 * G_B25_1 = {0};
	int32_t G_B24_0 = 0;
	t328 * G_B24_1 = {0};
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	t328 * G_B26_2 = {0};
	int32_t G_B29_0 = 0;
	t328 * G_B29_1 = {0};
	int32_t G_B28_0 = 0;
	t328 * G_B28_1 = {0};
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	t328 * G_B30_2 = {0};
	t2* G_B47_0 = {0};
	t310  G_B56_0 = {0};
	t310  G_B71_0 = {0};
	int32_t G_B81_0 = 0;
	t328 * G_B81_1 = {0};
	int32_t G_B80_0 = 0;
	t328 * G_B80_1 = {0};
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	t328 * G_B82_2 = {0};
	{
		t2* L_0 = p2;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		t328 * L_2 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_2, ((int32_t)((int32_t)L_1+(int32_t)((int32_t)10))), &m4396_MI);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_3 = m8748(NULL, &m8748_MI);
		V_1 = L_3;
		t2* L_4 = p2;
		t1710 * L_5 = V_1;
		t2* L_6 = m8751(L_5, &m8751_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_7 = m331(NULL, L_4, L_6, &m331_MI);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		t1710 * L_8 = V_1;
		p3 = L_8;
		goto IL_003d;
	}

IL_002a:
	{
		t2* L_9 = p2;
		t1710 * L_10 = V_1;
		t2* L_11 = m8754(L_10, &m8754_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_12 = m331(NULL, L_9, L_11, &m331_MI);
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		t1710 * L_13 = V_1;
		p3 = L_13;
	}

IL_003d:
	{
		V_2 = 0;
		goto IL_0614;
	}

IL_0044:
	{
		V_4 = 0;
		t2* L_14 = p2;
		int32_t L_15 = V_2;
		uint16_t L_16 = m2778(L_14, L_15, &m2778_MI);
		V_5 = L_16;
		uint16_t L_17 = V_5;
		V_12 = L_17;
		uint16_t L_18 = V_12;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_0457;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_01c0;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_054c;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 4)
		{
			goto IL_011c;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 5)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 6)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 7)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 8)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)100))) == 9)
		{
			goto IL_0173;
		}
	}

IL_0086:
	{
		uint16_t L_19 = V_12;
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 0)
		{
			goto IL_01bb;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 1)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 2)
		{
			goto IL_014f;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 3)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 4)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 5)
		{
			goto IL_039c;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 6)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)70))) == 7)
		{
			goto IL_04be;
		}
	}

IL_00b0:
	{
		uint16_t L_20 = V_12;
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 0)
		{
			goto IL_0197;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 1)
		{
			goto IL_0269;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 2)
		{
			goto IL_00da;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 3)
		{
			goto IL_00da;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 4)
		{
			goto IL_00da;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 5)
		{
			goto IL_00da;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 6)
		{
			goto IL_050e;
		}
		if (((int32_t)((int32_t)L_20-(int32_t)((int32_t)115))) == 7)
		{
			goto IL_02bb;
		}
	}

IL_00da:
	{
		uint16_t L_21 = V_12;
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_059c;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_00fc;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_00fc;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_05a7;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_00fc;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_059c;
		}
	}

IL_00fc:
	{
		uint16_t L_22 = V_12;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)47))))
		{
			goto IL_0588;
		}
	}
	{
		uint16_t L_23 = V_12;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)58))))
		{
			goto IL_0574;
		}
	}
	{
		uint16_t L_24 = V_12;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)92))))
		{
			goto IL_05d9;
		}
	}
	{
		goto IL_0603;
	}

IL_011c:
	{
		t2* L_25 = p2;
		int32_t L_26 = V_2;
		uint16_t L_27 = V_5;
		int32_t L_28 = m11526(NULL, L_25, L_26, L_27, &m11526_MI);
		V_3 = L_28;
		int32_t L_29 = m11464((&p0), &m11464_MI);
		V_6 = ((int32_t)((int32_t)L_29%(int32_t)((int32_t)12)));
		int32_t L_30 = V_6;
		if (L_30)
		{
			goto IL_013a;
		}
	}
	{
		V_6 = ((int32_t)12);
	}

IL_013a:
	{
		t328 * L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = V_3;
		G_B16_0 = L_32;
		G_B16_1 = L_31;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			G_B17_0 = L_32;
			G_B17_1 = L_31;
			goto IL_0144;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_0145;
	}

IL_0144:
	{
		G_B18_0 = 2;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_0145:
	{
		m11527(NULL, G_B18_2, G_B18_1, G_B18_0, &m11527_MI);
		goto IL_0610;
	}

IL_014f:
	{
		t2* L_34 = p2;
		int32_t L_35 = V_2;
		uint16_t L_36 = V_5;
		int32_t L_37 = m11526(NULL, L_34, L_35, L_36, &m11526_MI);
		V_3 = L_37;
		t328 * L_38 = V_0;
		int32_t L_39 = m11464((&p0), &m11464_MI);
		int32_t L_40 = V_3;
		G_B20_0 = L_39;
		G_B20_1 = L_38;
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			G_B21_0 = L_39;
			G_B21_1 = L_38;
			goto IL_0168;
		}
	}
	{
		G_B22_0 = 1;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_0169;
	}

IL_0168:
	{
		G_B22_0 = 2;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_0169:
	{
		m11527(NULL, G_B22_2, G_B22_1, G_B22_0, &m11527_MI);
		goto IL_0610;
	}

IL_0173:
	{
		t2* L_41 = p2;
		int32_t L_42 = V_2;
		uint16_t L_43 = V_5;
		int32_t L_44 = m11526(NULL, L_41, L_42, L_43, &m11526_MI);
		V_3 = L_44;
		t328 * L_45 = V_0;
		int32_t L_46 = m11465((&p0), &m11465_MI);
		int32_t L_47 = V_3;
		G_B24_0 = L_46;
		G_B24_1 = L_45;
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			G_B25_0 = L_46;
			G_B25_1 = L_45;
			goto IL_018c;
		}
	}
	{
		G_B26_0 = 1;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_018d;
	}

IL_018c:
	{
		G_B26_0 = 2;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_018d:
	{
		m11527(NULL, G_B26_2, G_B26_1, G_B26_0, &m11527_MI);
		goto IL_0610;
	}

IL_0197:
	{
		t2* L_48 = p2;
		int32_t L_49 = V_2;
		uint16_t L_50 = V_5;
		int32_t L_51 = m11526(NULL, L_48, L_49, L_50, &m11526_MI);
		V_3 = L_51;
		t328 * L_52 = V_0;
		int32_t L_53 = m11466((&p0), &m11466_MI);
		int32_t L_54 = V_3;
		G_B28_0 = L_53;
		G_B28_1 = L_52;
		if ((!(((uint32_t)L_54) == ((uint32_t)1))))
		{
			G_B29_0 = L_53;
			G_B29_1 = L_52;
			goto IL_01b0;
		}
	}
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_01b1;
	}

IL_01b0:
	{
		G_B30_0 = 2;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_01b1:
	{
		m11527(NULL, G_B30_2, G_B30_1, G_B30_0, &m11527_MI);
		goto IL_0610;
	}

IL_01bb:
	{
		V_4 = 1;
		goto IL_01c0;
	}

IL_01c0:
	{
		t2* L_55 = p2;
		int32_t L_56 = V_2;
		uint16_t L_57 = V_5;
		int32_t L_58 = m11526(NULL, L_55, L_56, L_57, &m11526_MI);
		V_3 = L_58;
		int32_t L_59 = V_3;
		if ((((int32_t)L_59) <= ((int32_t)7)))
		{
			goto IL_01d9;
		}
	}
	{
		t897 * L_60 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_60, (t2*) &_stringLiteral2705, &m4354_MI);
		il2cpp_codegen_raise_exception(L_60);
	}

IL_01d9:
	{
		int64_t L_61 = m7021((&p0), &m7021_MI);
		int32_t L_62 = V_3;
		double L_63 = pow((10.0), (((double)((int32_t)((int32_t)7-(int32_t)L_62)))));
		V_7 = (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_61%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)L_63))))));
		t328 * L_64 = V_0;
		int32_t L_65 = m5926(L_64, &m5926_MI);
		V_8 = L_65;
		t328 * L_66 = V_0;
		int32_t L_67 = V_7;
		int32_t L_68 = V_3;
		m11527(NULL, L_66, L_67, L_68, &m11527_MI);
		bool L_69 = V_4;
		if (!L_69)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_0223;
	}

IL_0215:
	{
		t328 * L_70 = V_0;
		t328 * L_71 = L_70;
		int32_t L_72 = m5926(L_71, &m5926_MI);
		m6031(L_71, ((int32_t)((int32_t)L_72-(int32_t)1)), &m6031_MI);
	}

IL_0223:
	{
		t328 * L_73 = V_0;
		int32_t L_74 = m5926(L_73, &m5926_MI);
		int32_t L_75 = V_8;
		if ((((int32_t)L_74) <= ((int32_t)L_75)))
		{
			goto IL_023f;
		}
	}
	{
		t328 * L_76 = V_0;
		t328 * L_77 = V_0;
		int32_t L_78 = m5926(L_77, &m5926_MI);
		uint16_t L_79 = m10932(L_76, ((int32_t)((int32_t)L_78-(int32_t)1)), &m10932_MI);
		if ((((int32_t)L_79) == ((int32_t)((int32_t)48))))
		{
			goto IL_0215;
		}
	}

IL_023f:
	{
		int32_t L_80 = V_7;
		if (L_80)
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_81 = V_8;
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_0264;
		}
	}
	{
		t328 * L_82 = V_0;
		int32_t L_83 = V_8;
		uint16_t L_84 = m10932(L_82, ((int32_t)((int32_t)L_83-(int32_t)1)), &m10932_MI);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0264;
		}
	}
	{
		t328 * L_85 = V_0;
		t328 * L_86 = L_85;
		int32_t L_87 = m5926(L_86, &m5926_MI);
		m6031(L_86, ((int32_t)((int32_t)L_87-(int32_t)1)), &m6031_MI);
	}

IL_0264:
	{
		goto IL_0610;
	}

IL_0269:
	{
		t2* L_88 = p2;
		int32_t L_89 = V_2;
		uint16_t L_90 = V_5;
		int32_t L_91 = m11526(NULL, L_88, L_89, L_90, &m11526_MI);
		V_3 = L_91;
		int32_t L_92 = m11464((&p0), &m11464_MI);
		if ((((int32_t)L_92) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0286;
		}
	}
	{
		t1710 * L_93 = p3;
		t2* L_94 = m8736(L_93, &m8736_MI);
		G_B47_0 = L_94;
		goto IL_028c;
	}

IL_0286:
	{
		t1710 * L_95 = p3;
		t2* L_96 = m8737(L_95, &m8737_MI);
		G_B47_0 = L_96;
	}

IL_028c:
	{
		V_9 = G_B47_0;
		int32_t L_97 = V_3;
		if ((!(((uint32_t)L_97) == ((uint32_t)1))))
		{
			goto IL_02ad;
		}
	}
	{
		t2* L_98 = V_9;
		int32_t L_99 = m2763(L_98, &m2763_MI);
		if ((((int32_t)L_99) < ((int32_t)1)))
		{
			goto IL_02ab;
		}
	}
	{
		t328 * L_100 = V_0;
		t2* L_101 = V_9;
		uint16_t L_102 = m2778(L_101, 0, &m2778_MI);
		m2797(L_100, L_102, &m2797_MI);
	}

IL_02ab:
	{
		goto IL_02b6;
	}

IL_02ad:
	{
		t328 * L_103 = V_0;
		t2* L_104 = V_9;
		m1207(L_103, L_104, &m1207_MI);
	}

IL_02b6:
	{
		goto IL_0610;
	}

IL_02bb:
	{
		t2* L_105 = p2;
		int32_t L_106 = V_2;
		uint16_t L_107 = V_5;
		int32_t L_108 = m11526(NULL, L_105, L_106, L_107, &m11526_MI);
		V_3 = L_108;
		bool L_109 = m12185((&p1), m12185_MI_var);
		if (!L_109)
		{
			goto IL_02d7;
		}
	}
	{
		t310  L_110 = m12186((&p1), m12186_MI_var);
		G_B56_0 = L_110;
		goto IL_02e2;
	}

IL_02d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_111 = m11890(NULL, &m11890_MI);
		t272  L_112 = p0;
		t310  L_113 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, L_111, L_112);
		G_B56_0 = L_113;
	}

IL_02e2:
	{
		V_10 = G_B56_0;
		int64_t L_114 = m11861((&V_10), &m11861_MI);
		if ((((int64_t)L_114) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_02fa;
		}
	}
	{
		t328 * L_115 = V_0;
		m2797(L_115, ((int32_t)43), &m2797_MI);
		goto IL_0303;
	}

IL_02fa:
	{
		t328 * L_116 = V_0;
		m2797(L_116, ((int32_t)45), &m2797_MI);
	}

IL_0303:
	{
		int32_t L_117 = V_3;
		V_13 = L_117;
		int32_t L_118 = V_13;
		if ((((int32_t)L_118) == ((int32_t)1)))
		{
			goto IL_0312;
		}
	}
	{
		int32_t L_119 = V_13;
		if ((((int32_t)L_119) == ((int32_t)2)))
		{
			goto IL_0327;
		}
	}
	{
		goto IL_034a;
	}

IL_0312:
	{
		t328 * L_120 = V_0;
		int32_t L_121 = m11857((&V_10), &m11857_MI);
		int32_t L_122 = abs(L_121);
		m5856(L_120, L_122, &m5856_MI);
		goto IL_0397;
	}

IL_0327:
	{
		t328 * L_123 = V_0;
		int32_t L_124 = m11857((&V_10), &m11857_MI);
		int32_t L_125 = abs(L_124);
		V_14 = L_125;
		t2* L_126 = m5939((&V_14), (t2*) &_stringLiteral2706, &m5939_MI);
		m1207(L_123, L_126, &m1207_MI);
		goto IL_0397;
	}

IL_034a:
	{
		t328 * L_127 = V_0;
		int32_t L_128 = m11857((&V_10), &m11857_MI);
		int32_t L_129 = abs(L_128);
		V_15 = L_129;
		t2* L_130 = m5939((&V_15), (t2*) &_stringLiteral2706, &m5939_MI);
		m1207(L_127, L_130, &m1207_MI);
		t328 * L_131 = V_0;
		m2797(L_131, ((int32_t)58), &m2797_MI);
		t328 * L_132 = V_0;
		int32_t L_133 = m11859((&V_10), &m11859_MI);
		int32_t L_134 = abs(L_133);
		V_16 = L_134;
		t2* L_135 = m5939((&V_16), (t2*) &_stringLiteral2706, &m5939_MI);
		m1207(L_132, L_135, &m1207_MI);
		goto IL_0397;
	}

IL_0397:
	{
		goto IL_0610;
	}

IL_039c:
	{
		V_3 = 1;
		bool L_136 = m12185((&p1), m12185_MI_var);
		if (L_136)
		{
			goto IL_03b4;
		}
	}
	{
		int32_t L_137 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_137) == ((uint32_t)2))))
		{
			goto IL_043f;
		}
	}

IL_03b4:
	{
		bool L_138 = m12185((&p1), m12185_MI_var);
		if (!L_138)
		{
			goto IL_03c6;
		}
	}
	{
		t310  L_139 = m12186((&p1), m12186_MI_var);
		G_B71_0 = L_139;
		goto IL_03d1;
	}

IL_03c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_140 = m11890(NULL, &m11890_MI);
		t272  L_141 = p0;
		t310  L_142 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, L_140, L_141);
		G_B71_0 = L_142;
	}

IL_03d1:
	{
		V_10 = G_B71_0;
		int64_t L_143 = m11861((&V_10), &m11861_MI);
		if ((((int64_t)L_143) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_03e9;
		}
	}
	{
		t328 * L_144 = V_0;
		m2797(L_144, ((int32_t)43), &m2797_MI);
		goto IL_03f2;
	}

IL_03e9:
	{
		t328 * L_145 = V_0;
		m2797(L_145, ((int32_t)45), &m2797_MI);
	}

IL_03f2:
	{
		t328 * L_146 = V_0;
		int32_t L_147 = m11857((&V_10), &m11857_MI);
		int32_t L_148 = abs(L_147);
		V_13 = L_148;
		t2* L_149 = m5939((&V_13), (t2*) &_stringLiteral2706, &m5939_MI);
		m1207(L_146, L_149, &m1207_MI);
		t328 * L_150 = V_0;
		m2797(L_150, ((int32_t)58), &m2797_MI);
		t328 * L_151 = V_0;
		int32_t L_152 = m11859((&V_10), &m11859_MI);
		int32_t L_153 = abs(L_152);
		V_17 = L_153;
		t2* L_154 = m5939((&V_17), (t2*) &_stringLiteral2706, &m5939_MI);
		m1207(L_151, L_154, &m1207_MI);
		goto IL_0452;
	}

IL_043f:
	{
		int32_t L_155 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_155) == ((uint32_t)1))))
		{
			goto IL_0452;
		}
	}
	{
		t328 * L_156 = V_0;
		m2797(L_156, ((int32_t)90), &m2797_MI);
	}

IL_0452:
	{
		goto IL_0610;
	}

IL_0457:
	{
		t2* L_157 = p2;
		int32_t L_158 = V_2;
		uint16_t L_159 = V_5;
		int32_t L_160 = m11526(NULL, L_157, L_158, L_159, &m11526_MI);
		V_3 = L_160;
		int32_t L_161 = V_3;
		if ((((int32_t)L_161) > ((int32_t)2)))
		{
			goto IL_0481;
		}
	}
	{
		t328 * L_162 = V_0;
		t1710 * L_163 = p3;
		t1705 * L_164 = m8749(L_163, &m8749_MI);
		t272  L_165 = p0;
		int32_t L_166 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12180_MI, L_164, L_165);
		int32_t L_167 = V_3;
		G_B80_0 = L_166;
		G_B80_1 = L_162;
		if ((!(((uint32_t)L_167) == ((uint32_t)1))))
		{
			G_B81_0 = L_166;
			G_B81_1 = L_162;
			goto IL_0479;
		}
	}
	{
		G_B82_0 = 1;
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		goto IL_047a;
	}

IL_0479:
	{
		G_B82_0 = 2;
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
	}

IL_047a:
	{
		m11527(NULL, G_B82_2, G_B82_1, G_B82_0, &m11527_MI);
		goto IL_04b9;
	}

IL_0481:
	{
		int32_t L_168 = V_3;
		if ((!(((uint32_t)L_168) == ((uint32_t)3))))
		{
			goto IL_04a0;
		}
	}
	{
		t328 * L_169 = V_0;
		t1710 * L_170 = p3;
		t1710 * L_171 = p3;
		t1705 * L_172 = m8749(L_171, &m8749_MI);
		t272  L_173 = p0;
		int32_t L_174 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12181_MI, L_172, L_173);
		t2* L_175 = m8759(L_170, L_174, &m8759_MI);
		m1207(L_169, L_175, &m1207_MI);
		goto IL_04b9;
	}

IL_04a0:
	{
		t328 * L_176 = V_0;
		t1710 * L_177 = p3;
		t1710 * L_178 = p3;
		t1705 * L_179 = m8749(L_178, &m8749_MI);
		t272  L_180 = p0;
		int32_t L_181 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12181_MI, L_179, L_180);
		t2* L_182 = m8758(L_177, L_181, &m8758_MI);
		m1207(L_176, L_182, &m1207_MI);
	}

IL_04b9:
	{
		goto IL_0610;
	}

IL_04be:
	{
		t2* L_183 = p2;
		int32_t L_184 = V_2;
		uint16_t L_185 = V_5;
		int32_t L_186 = m11526(NULL, L_183, L_184, L_185, &m11526_MI);
		V_3 = L_186;
		t1710 * L_187 = p3;
		t1705 * L_188 = m8749(L_187, &m8749_MI);
		t272  L_189 = p0;
		int32_t L_190 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12182_MI, L_188, L_189);
		V_11 = L_190;
		int32_t L_191 = V_3;
		if ((((int32_t)L_191) > ((int32_t)2)))
		{
			goto IL_04e5;
		}
	}
	{
		t328 * L_192 = V_0;
		int32_t L_193 = V_11;
		int32_t L_194 = V_3;
		m11527(NULL, L_192, L_193, L_194, &m11527_MI);
		goto IL_0509;
	}

IL_04e5:
	{
		int32_t L_195 = V_3;
		if ((!(((uint32_t)L_195) == ((uint32_t)3))))
		{
			goto IL_04fa;
		}
	}
	{
		t328 * L_196 = V_0;
		t1710 * L_197 = p3;
		int32_t L_198 = V_11;
		t2* L_199 = m8729(L_197, L_198, &m8729_MI);
		m1207(L_196, L_199, &m1207_MI);
		goto IL_0509;
	}

IL_04fa:
	{
		t328 * L_200 = V_0;
		t1710 * L_201 = p3;
		int32_t L_202 = V_11;
		t2* L_203 = m8731(L_201, L_202, &m8731_MI);
		m1207(L_200, L_203, &m1207_MI);
	}

IL_0509:
	{
		goto IL_0610;
	}

IL_050e:
	{
		t2* L_204 = p2;
		int32_t L_205 = V_2;
		uint16_t L_206 = V_5;
		int32_t L_207 = m11526(NULL, L_204, L_205, L_206, &m11526_MI);
		V_3 = L_207;
		int32_t L_208 = V_3;
		if ((((int32_t)L_208) > ((int32_t)2)))
		{
			goto IL_0534;
		}
	}
	{
		t328 * L_209 = V_0;
		t1710 * L_210 = p3;
		t1705 * L_211 = m8749(L_210, &m8749_MI);
		t272  L_212 = p0;
		int32_t L_213 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12183_MI, L_211, L_212);
		int32_t L_214 = V_3;
		m11527(NULL, L_209, ((int32_t)((int32_t)L_213%(int32_t)((int32_t)100))), L_214, &m11527_MI);
		goto IL_0547;
	}

IL_0534:
	{
		t328 * L_215 = V_0;
		t1710 * L_216 = p3;
		t1705 * L_217 = m8749(L_216, &m8749_MI);
		t272  L_218 = p0;
		int32_t L_219 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12183_MI, L_217, L_218);
		int32_t L_220 = V_3;
		m11527(NULL, L_215, L_219, L_220, &m11527_MI);
	}

IL_0547:
	{
		goto IL_0610;
	}

IL_054c:
	{
		t2* L_221 = p2;
		int32_t L_222 = V_2;
		uint16_t L_223 = V_5;
		int32_t L_224 = m11526(NULL, L_221, L_222, L_223, &m11526_MI);
		V_3 = L_224;
		t328 * L_225 = V_0;
		t1710 * L_226 = p3;
		t1710 * L_227 = p3;
		t1705 * L_228 = m8749(L_227, &m8749_MI);
		t272  L_229 = p0;
		int32_t L_230 = (int32_t)VirtFuncInvoker1< int32_t, t272  >::Invoke(&m12184_MI, L_228, L_229);
		t2* L_231 = m8730(L_226, L_230, &m8730_MI);
		m1207(L_225, L_231, &m1207_MI);
		goto IL_0610;
	}

IL_0574:
	{
		t328 * L_232 = V_0;
		t1710 * L_233 = p3;
		t2* L_234 = m8739(L_233, &m8739_MI);
		m1207(L_232, L_234, &m1207_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_0588:
	{
		t328 * L_235 = V_0;
		t1710 * L_236 = p3;
		t2* L_237 = m8738(L_236, &m8738_MI);
		m1207(L_235, L_237, &m1207_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_059c:
	{
		t2* L_238 = p2;
		int32_t L_239 = V_2;
		t328 * L_240 = V_0;
		int32_t L_241 = m11528(NULL, L_238, L_239, L_240, &m11528_MI);
		V_3 = L_241;
		goto IL_0610;
	}

IL_05a7:
	{
		int32_t L_242 = V_2;
		t2* L_243 = p2;
		int32_t L_244 = m2763(L_243, &m2763_MI);
		if ((((int32_t)L_242) < ((int32_t)((int32_t)((int32_t)L_244-(int32_t)1)))))
		{
			goto IL_05bd;
		}
	}
	{
		t897 * L_245 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_245, (t2*) &_stringLiteral2707, &m4354_MI);
		il2cpp_codegen_raise_exception(L_245);
	}

IL_05bd:
	{
		t2* L_246 = p2;
		int32_t L_247 = V_2;
		uint16_t L_248 = m2778(L_246, ((int32_t)((int32_t)L_247+(int32_t)1)), &m2778_MI);
		if ((!(((uint32_t)L_248) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_05d5;
		}
	}
	{
		t897 * L_249 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_249, (t2*) &_stringLiteral2708, &m4354_MI);
		il2cpp_codegen_raise_exception(L_249);
	}

IL_05d5:
	{
		V_3 = 1;
		goto IL_0610;
	}

IL_05d9:
	{
		int32_t L_250 = V_2;
		t2* L_251 = p2;
		int32_t L_252 = m2763(L_251, &m2763_MI);
		if ((((int32_t)L_250) < ((int32_t)((int32_t)((int32_t)L_252-(int32_t)1)))))
		{
			goto IL_05ef;
		}
	}
	{
		t897 * L_253 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_253, (t2*) &_stringLiteral2709, &m4354_MI);
		il2cpp_codegen_raise_exception(L_253);
	}

IL_05ef:
	{
		t328 * L_254 = V_0;
		t2* L_255 = p2;
		int32_t L_256 = V_2;
		uint16_t L_257 = m2778(L_255, ((int32_t)((int32_t)L_256+(int32_t)1)), &m2778_MI);
		m2797(L_254, L_257, &m2797_MI);
		V_3 = 2;
		goto IL_0610;
	}

IL_0603:
	{
		t328 * L_258 = V_0;
		uint16_t L_259 = V_5;
		m2797(L_258, L_259, &m2797_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_0610:
	{
		int32_t L_260 = V_2;
		int32_t L_261 = V_3;
		V_2 = ((int32_t)((int32_t)L_260+(int32_t)L_261));
	}

IL_0614:
	{
		int32_t L_262 = V_2;
		t2* L_263 = p2;
		int32_t L_264 = m2763(L_263, &m2763_MI);
		if ((((int32_t)L_262) < ((int32_t)L_264)))
		{
			goto IL_0044;
		}
	}
	{
		t328 * L_265 = V_0;
		t2* L_266 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_265);
		return L_266;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1706MD.h"



#include "t1568.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1568_TI;
#include "t1568MD.h"



#include "t2112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2112_TI;
#include "t2112MD.h"

#include "t297.h"
#include "t835.h"
#include "t567.h"
#include "t1932.h"
extern TypeInfo t1351_TI;
extern TypeInfo t567_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1932_TI;
#include "t1351MD.h"
#include "t297MD.h"
#include "t567MD.h"
#include "t1933MD.h"
#include "t1932MD.h"
extern MethodInfo m5813_MI;
extern MethodInfo m9493_MI;
extern MethodInfo m4504_MI;
extern MethodInfo m4494_MI;
extern MethodInfo m4433_MI;
extern MethodInfo m9504_MI;
extern MethodInfo m5814_MI;
extern MethodInfo m10134_MI;
extern MethodInfo m7820_MI;
extern MethodInfo m10130_MI;
extern MethodInfo m7653_MI;
extern MethodInfo m7656_MI;


extern MethodInfo m11533_MI;
extern "C" void m11533 (t2112 * __this, t297 * p0, t2* p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t297 * L_0 = p0;
		t126 * L_1 = m2550(L_0, &m2550_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		__this->f0 = L_2;
		t297 * L_3 = p0;
		t126 * L_4 = m2550(L_3, &m2550_MI);
		t1351 * L_5 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_4);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_5);
		__this->f1 = L_6;
		t2* L_7 = p1;
		__this->f2 = L_7;
		t297 * L_8 = p0;
		t835 * L_9 = m4504(L_8, &m4504_MI);
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_9);
		t1351 * L_11 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_10);
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_11);
		__this->f3 = L_12;
		t297 * L_13 = p0;
		t835 * L_14 = m4504(L_13, &m4504_MI);
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_14);
		t2* L_16 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_15);
		__this->f4 = L_16;
		t297 * L_17 = p0;
		t835 * L_18 = m4504(L_17, &m4504_MI);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_18);
		__this->f5 = L_19;
		return;
	}
}
extern MethodInfo m11534_MI;
extern "C" t297 * m11534 (t2112 * __this, t1106 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1351 * V_1 = {0};
	t126 * V_2 = {0};
	t297 * V_3 = {0};
	t1351 * V_4 = {0};
	t126 * V_5 = {0};
	t1351 * V_6 = {0};
	t126 * V_7 = {0};
	{
		V_0 = NULL;
		t9 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		t1106 * L_1 = p0;
		t9 * L_2 = (__this->f2);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_5 = m5773(L_1, L_3, L_4, &m5773_MI);
		V_0 = L_5;
	}

IL_0026:
	{
		t2* L_6 = (__this->f1);
		t1351 * L_7 = m9504(NULL, L_6, &m9504_MI);
		V_1 = L_7;
		t1351 * L_8 = V_1;
		t2* L_9 = (__this->f0);
		t126 * L_10 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5814_MI, L_8, L_9);
		V_2 = L_10;
		t9 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		bool L_13 = m10134(NULL, L_12, &m10134_MI);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		t2* L_14 = (__this->f3);
		t1351 * L_15 = m9504(NULL, L_14, &m9504_MI);
		V_4 = L_15;
		t1351 * L_16 = V_4;
		t2* L_17 = (__this->f4);
		t126 * L_18 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5814_MI, L_16, L_17);
		V_5 = L_18;
		t126 * L_19 = V_5;
		t9 * L_20 = V_0;
		bool L_21 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7820_MI, L_19, L_20);
		if (L_21)
		{
			goto IL_007b;
		}
	}
	{
		t1932 * L_22 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_22, (t2*) &_stringLiteral2711, &m10130_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007b:
	{
		t126 * L_23 = V_2;
		t9 * L_24 = V_0;
		t2* L_25 = (__this->f5);
		t297 * L_26 = m7653(NULL, L_23, L_24, L_25, &m7653_MI);
		V_3 = L_26;
		goto IL_00b6;
	}

IL_008b:
	{
		t2* L_27 = (__this->f3);
		t1351 * L_28 = m9504(NULL, L_27, &m9504_MI);
		V_6 = L_28;
		t1351 * L_29 = V_6;
		t2* L_30 = (__this->f4);
		t126 * L_31 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5814_MI, L_29, L_30);
		V_7 = L_31;
		t126 * L_32 = V_2;
		t126 * L_33 = V_7;
		t2* L_34 = (__this->f5);
		t297 * L_35 = m7656(NULL, L_32, L_33, L_34, &m7656_MI);
		V_3 = L_35;
	}

IL_00b6:
	{
		t297 * L_36 = V_3;
		return L_36;
	}
}
#include "t2113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2113_TI;
#include "t2113MD.h"

extern TypeInfo t1567_TI;
extern TypeInfo t297_TI;
extern Il2CppType t2112_0_0_0;
extern Il2CppType t1567_0_0_0;
extern Il2CppType t2113_0_0_0;
extern MethodInfo m7663_MI;
extern MethodInfo m7662_MI;
extern MethodInfo m4505_MI;
extern MethodInfo m10368_MI;


extern MethodInfo m11535_MI;
extern TypeInfo* t1567_TI_var;
extern "C" void m11535 (t2113 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	static bool m11535_init;
	if (!m11535_init)
	{
		t1567_TI_var = il2cpp_codegen_class_from_type(&t1567_0_0_0);
		m11535_init = true;
	}
	t2112 * V_0 = {0};
	int32_t V_1 = 0;
	t2112 * V_2 = {0};
	t1567* V_3 = {0};
	int32_t V_4 = 0;
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t2112_0_0_0), &m329_MI);
		t9 * L_2 = m5773(L_0, (t2*) &_stringLiteral2710, L_1, &m5773_MI);
		V_0 = ((t2112 *)Castclass(L_2, InitializedTypeInfo(&t2112_TI)));
		V_1 = 0;
		t2112 * L_3 = V_0;
		V_2 = L_3;
		goto IL_0032;
	}

IL_0027:
	{
		t2112 * L_4 = V_2;
		t2112 * L_5 = (L_4->f6);
		V_2 = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		t2112 * L_7 = V_2;
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		t2112 * L_9 = V_0;
		t1106 * L_10 = p0;
		t297 * L_11 = m11534(L_9, L_10, &m11534_MI);
		__this->f0 = L_11;
		goto IL_007f;
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_3 = ((t1567*)SZArrayNew(t1567_TI_var, L_12));
		t2112 * L_13 = V_0;
		V_2 = L_13;
		V_4 = 0;
		goto IL_006e;
	}

IL_0056:
	{
		t1567* L_14 = V_3;
		int32_t L_15 = V_4;
		t2112 * L_16 = V_2;
		t1106 * L_17 = p0;
		t297 * L_18 = m11534(L_16, L_17, &m11534_MI);
		ArrayElementTypeCheck (L_14, L_18);
		*((t297 **)(t297 **)SZArrayLdElema(L_14, L_15)) = (t297 *)L_18;
		t2112 * L_19 = V_2;
		t2112 * L_20 = (L_19->f6);
		V_2 = L_20;
		int32_t L_21 = V_4;
		V_4 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		t1567* L_24 = V_3;
		t297 * L_25 = m7663(NULL, L_24, &m7663_MI);
		__this->f0 = L_25;
	}

IL_007f:
	{
		return;
	}
}
extern MethodInfo m11536_MI;
extern "C" void m11536 (t9 * __this , t297 * p0, t1106 * p1, t1107  p2, MethodInfo* method)
{
	t1567* V_0 = {0};
	t2112 * V_1 = {0};
	int32_t V_2 = 0;
	t297 * V_3 = {0};
	t2* V_4 = {0};
	t2112 * V_5 = {0};
	t2* G_B4_0 = {0};
	{
		t297 * L_0 = p0;
		t1567* L_1 = (t1567*)VirtFuncInvoker0< t1567* >::Invoke(&m7662_MI, L_0);
		V_0 = L_1;
		V_1 = (t2112 *)NULL;
		V_2 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		t1567* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_3 = (*(t297 **)(t297 **)SZArrayLdElema(L_2, L_4));
		t297 * L_5 = V_3;
		t9 * L_6 = m4505(L_5, &m4505_MI);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t125_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m511(NULL, (t2*) &_stringLiteral391, L_9, &m511_MI);
		G_B4_0 = L_10;
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = ((t2*)(NULL));
	}

IL_002c:
	{
		V_4 = G_B4_0;
		t297 * L_11 = V_3;
		t2* L_12 = V_4;
		t2112 * L_13 = (t2112 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2112_TI));
		m11533(L_13, L_11, L_12, &m11533_MI);
		V_5 = L_13;
		t2112 * L_14 = V_1;
		if (L_14)
		{
			goto IL_004a;
		}
	}
	{
		t1106 * L_15 = p1;
		t2112 * L_16 = V_5;
		m5785(L_15, (t2*) &_stringLiteral2710, L_16, &m5785_MI);
		goto IL_0052;
	}

IL_004a:
	{
		t2112 * L_17 = V_1;
		t2112 * L_18 = V_5;
		L_17->f6 = L_18;
	}

IL_0052:
	{
		t2112 * L_19 = V_5;
		V_1 = L_19;
		t297 * L_20 = V_3;
		t9 * L_21 = m4505(L_20, &m4505_MI);
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		t1106 * L_22 = p1;
		t2* L_23 = V_4;
		t297 * L_24 = V_3;
		t9 * L_25 = m4505(L_24, &m4505_MI);
		m5785(L_22, L_23, L_25, &m5785_MI);
	}

IL_006b:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_27 = V_2;
		t1567* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		t1106 * L_29 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t2113_0_0_0), &m329_MI);
		m10368(L_29, L_30, &m10368_MI);
		return;
	}
}
extern MethodInfo m11537_MI;
extern "C" void m11537 (t2113 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11538_MI;
extern "C" t9 * m11538 (t2113 * __this, t1107  p0, MethodInfo* method)
{
	{
		t297 * L_0 = (__this->f0);
		return L_0;
	}
}
#include "t2114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2114_TI;
#include "t2114MD.h"



extern MethodInfo m11539_MI;
extern "C" void m11539 (t2114 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2712, &m7888_MI);
		m6928(__this, L_0, &m6928_MI);
		m4499(__this, ((int32_t)-2147352558), &m4499_MI);
		return;
	}
}
extern MethodInfo m11540_MI;
extern "C" void m11540 (t2114 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11192(__this, L_0, L_1, &m11192_MI);
		return;
	}
}
#include "t2115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2115_TI;
#include "t2115MD.h"

#include "t2116MD.h"
extern MethodInfo m11908_MI;
extern MethodInfo m11909_MI;


extern MethodInfo m11541_MI;
extern "C" void m11541 (t2115 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2713, &m7888_MI);
		m11908(__this, L_0, &m11908_MI);
		m4499(__this, ((int32_t)-2146233052), &m4499_MI);
		return;
	}
}
extern MethodInfo m11542_MI;
extern "C" void m11542 (t2115 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11909(__this, L_0, L_1, &m11909_MI);
		return;
	}
}
#include "t2117.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2117_TI;
#include "t2117MD.h"



extern MethodInfo m11543_MI;
extern "C" void m11543 (t2117 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2714, &m7888_MI);
		m11908(__this, L_0, &m11908_MI);
		m4499(__this, ((int32_t)-2146233053), &m4499_MI);
		return;
	}
}
extern MethodInfo m11544_MI;
extern "C" void m11544 (t2117 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11909(__this, L_0, L_1, &m11909_MI);
		return;
	}
}
#include "t2118.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2118_TI;
#include "t2118MD.h"



extern MethodInfo m11545_MI;
extern "C" void m11545 (t2118 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11546_MI;
extern "C" int32_t m11546 (t2118 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int8_t V_0 = 0x0;
	int8_t V_1 = 0x0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int8_t*)((int8_t*)UnBox (L_0, InitializedTypeInfo(&t186_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int8_t*)((int8_t*)UnBox (L_1, InitializedTypeInfo(&t186_TI)))));
		int8_t L_2 = V_0;
		int8_t L_3 = V_1;
		return ((int32_t)((int32_t)(((uint8_t)L_2))-(int32_t)(((uint8_t)L_3))));
	}
}
extern MethodInfo m11547_MI;
extern "C" int32_t m11547 (t2118 * __this, int8_t p0, int8_t p1, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		int8_t L_1 = p1;
		return ((int32_t)((int32_t)(((uint8_t)L_0))-(int32_t)(((uint8_t)L_1))));
	}
}
#include "t2119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2119_TI;
#include "t2119MD.h"



extern MethodInfo m11548_MI;
extern "C" void m11548 (t2119 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11549_MI;
extern "C" int32_t m11549 (t2119 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int16_t*)((int16_t*)UnBox (L_0, InitializedTypeInfo(&t341_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int16_t*)((int16_t*)UnBox (L_1, InitializedTypeInfo(&t341_TI)))));
		int16_t L_2 = V_0;
		int16_t L_3 = V_1;
		return ((int32_t)((int32_t)(((uint16_t)L_2))-(int32_t)(((uint16_t)L_3))));
	}
}
extern MethodInfo m11550_MI;
extern "C" int32_t m11550 (t2119 * __this, int16_t p0, int16_t p1, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		int16_t L_1 = p1;
		return ((int32_t)((int32_t)(((uint16_t)L_0))-(int32_t)(((uint16_t)L_1))));
	}
}
#include "t2120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2120_TI;
#include "t2120MD.h"



extern MethodInfo m11551_MI;
extern "C" void m11551 (t2120 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11552_MI;
extern "C" int32_t m11552 (t2120 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_0, InitializedTypeInfo(&t125_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int32_t*)((int32_t*)UnBox (L_1, InitializedTypeInfo(&t125_TI)))));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		return (-1);
	}

IL_001a:
	{
		return 1;
	}
}
extern MethodInfo m11553_MI;
extern "C" int32_t m11553 (t2120 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_2 = p0;
		int32_t L_3 = p1;
		if ((!(((uint32_t)L_2) < ((uint32_t)L_3))))
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		return 1;
	}
}
#include "t2121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2121_TI;
#include "t2121MD.h"



extern MethodInfo m11554_MI;
extern "C" void m11554 (t2121 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11555_MI;
extern "C" int32_t m11555 (t2121 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_0, InitializedTypeInfo(&t303_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int64_t*)((int64_t*)UnBox (L_1, InitializedTypeInfo(&t303_TI)))));
		int64_t L_2 = V_0;
		int64_t L_3 = V_1;
		if ((!(((uint64_t)L_2) == ((uint64_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_1;
		if ((!(((uint64_t)L_4) < ((uint64_t)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		return (-1);
	}

IL_001a:
	{
		return 1;
	}
}
extern MethodInfo m11556_MI;
extern "C" int32_t m11556 (t2121 * __this, int64_t p0, int64_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		int64_t L_1 = p1;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int64_t L_2 = p0;
		int64_t L_3 = p1;
		if ((!(((uint64_t)L_2) < ((uint64_t)L_3))))
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		return 1;
	}
}
#include "t2122.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2122_TI;
#include "t2122MD.h"

#include "t1164.h"
extern TypeInfo t1164_TI;
extern TypeInfo t317_TI;
extern TypeInfo t1418_TI;
extern TypeInfo t2013_TI;
extern TypeInfo t2180_TI;
extern TypeInfo t2068_TI;
extern TypeInfo t1571_TI;
#include "t1164MD.h"
#include "t121MD.h"
extern Il2CppType t317_0_0_0;
extern Il2CppType t1418_0_0_0;
extern Il2CppType t2013_0_0_0;
extern Il2CppType t2180_0_0_0;
extern Il2CppType t2068_0_0_0;
extern Il2CppType t1571_0_0_0;
extern MethodInfo m5953_MI;
extern MethodInfo m11560_MI;
extern MethodInfo m5809_MI;
extern MethodInfo m5777_MI;
extern MethodInfo m5961_MI;
extern MethodInfo m11559_MI;
extern MethodInfo m7767_MI;
extern MethodInfo m5960_MI;
extern MethodInfo m11557_MI;


extern "C" void m11557 (t2122 * __this, t2122  p0, MethodInfo* method)
{
	{
		t126 * L_0 = ((&p0)->f0);
		__this->f0 = L_0;
		t121 * L_1 = ((&p0)->f1);
		__this->f1 = L_1;
		t221* L_2 = ((&p0)->f2);
		__this->f2 = L_2;
		t1164 * L_3 = ((&p0)->f3);
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m11558_MI;
extern "C" void m11558 (t9 * __this , MethodInfo* method)
{
	{
		t2118 * L_0 = (t2118 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2118_TI));
		m11545(L_0, &m11545_MI);
		((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f7 = L_0;
		t2119 * L_1 = (t2119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2119_TI));
		m11548(L_1, &m11548_MI);
		((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f8 = L_1;
		t2120 * L_2 = (t2120 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2120_TI));
		m11551(L_2, &m11551_MI);
		((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f9 = L_2;
		t2121 * L_3 = (t2121 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2121_TI));
		m11554(L_3, &m11554_MI);
		((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f10 = L_3;
		t9 * L_4 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_4, &m336_MI);
		((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f6 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_5 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_5, &m5953_MI);
		((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f5 = L_5;
		return;
	}
}
extern "C" void m11559 (t9 * __this , t126 * p0, t2122 * p1, MethodInfo* method)
{
	typedef void (*m11559_ftn) (t126 *, t2122 *);
	static m11559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11559_ftn)il2cpp_codegen_resolve_icall ("System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1164 * m11560 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t1164 * L_0 = ((t2122_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2122_TI)))->f4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_1 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_1, &m5953_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		((t2122_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2122_TI)))->f4 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t1164 * L_2 = ((t2122_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2122_TI)))->f4;
		return L_2;
	}
}
extern MethodInfo m11561_MI;
extern TypeInfo* t737_TI_var;
extern TypeInfo* t317_TI_var;
extern TypeInfo* t1418_TI_var;
extern TypeInfo* t2013_TI_var;
extern TypeInfo* t1101_TI_var;
extern TypeInfo* t2180_TI_var;
extern TypeInfo* t2068_TI_var;
extern TypeInfo* t1571_TI_var;
extern "C" void m11561 (t9 * __this , t126 * p0, t2122 * p1, MethodInfo* method)
{
	static bool m11561_init;
	if (!m11561_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		t317_TI_var = il2cpp_codegen_class_from_type(&t317_0_0_0);
		t1418_TI_var = il2cpp_codegen_class_from_type(&t1418_0_0_0);
		t2013_TI_var = il2cpp_codegen_class_from_type(&t2013_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		t2180_TI_var = il2cpp_codegen_class_from_type(&t2180_0_0_0);
		t2068_TI_var = il2cpp_codegen_class_from_type(&t2068_0_0_0);
		t1571_TI_var = il2cpp_codegen_class_from_type(&t1571_0_0_0);
		m11561_init = true;
	}
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	int32_t V_3 = 0;
	t2122  V_4 = {0};
	t9 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t1164 * L_0 = m11560(NULL, &m11560_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5809_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t2122 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t1164 * L_4 = ((t2122_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2122_TI)))->f4;
		t126 * L_5 = p0;
		t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_4, L_5);
		*L_3 = ((*(t2122 *)((t2122 *)UnBox (L_6, InitializedTypeInfo(&t2122_TI)))));
		return;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t9 * L_7 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f6;
		V_0 = L_7;
		t9 * L_8 = V_0;
		m1115(NULL, L_8, &m1115_MI);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
			t1164 * L_9 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f5;
			t126 * L_10 = p0;
			bool L_11 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5809_MI, L_9, L_10);
			if (!L_11)
			{
				goto IL_0066;
			}
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
			t1164 * L_12 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f5;
			t126 * L_13 = p0;
			t9 * L_14 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_12, L_13);
			V_1 = L_14;
			t1164 * L_15 = ((t2122_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2122_TI)))->f4;
			t126 * L_16 = p0;
			t9 * L_17 = V_1;
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5961_MI, L_15, L_16, L_17);
			t2122 * L_18 = p1;
			t9 * L_19 = V_1;
			*L_18 = ((*(t2122 *)((t2122 *)UnBox (L_19, InitializedTypeInfo(&t2122_TI)))));
			IL2CPP_LEAVE(0x198, FINALLY_0068);
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		t9 * L_20 = V_0;
		m1117(NULL, L_20, &m1117_MI);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x198, IL_0198)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006f:
	{
		t126 * L_21 = p0;
		t2122 * L_22 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		m11559(NULL, L_21, L_22, &m11559_MI);
		V_2 = (t9 *)NULL;
		t2122 * L_23 = p1;
		t121 * L_24 = (L_23->f1);
		if (((t737*)IsInst(L_24, t737_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2122 * L_25 = p1;
		t121 * L_26 = (L_25->f1);
		if (((t317*)IsInst(L_26, t317_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2122 * L_27 = p1;
		t121 * L_28 = (L_27->f1);
		if (((t1418*)IsInst(L_28, t1418_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2122 * L_29 = p1;
		t121 * L_30 = (L_29->f1);
		if (((t2013*)IsInst(L_30, t2013_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2122 * L_31 = p1;
		t121 * L_32 = (L_31->f1);
		if (!((t1101*)IsInst(L_32, t1101_TI_var)))
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t2120 * L_33 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f9;
		V_2 = L_33;
		goto IL_0104;
	}

IL_00c7:
	{
		t2122 * L_34 = p1;
		t121 * L_35 = (L_34->f1);
		if (!((t2180*)IsInst(L_35, t2180_TI_var)))
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t2119 * L_36 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f8;
		V_2 = L_36;
		goto IL_0104;
	}

IL_00dc:
	{
		t2122 * L_37 = p1;
		t121 * L_38 = (L_37->f1);
		if (!((t2068*)IsInst(L_38, t2068_TI_var)))
		{
			goto IL_00f1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t2118 * L_39 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f7;
		V_2 = L_39;
		goto IL_0104;
	}

IL_00f1:
	{
		t2122 * L_40 = p1;
		t121 * L_41 = (L_40->f1);
		if (!((t1571*)IsInst(L_41, t1571_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t2121 * L_42 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f10;
		V_2 = L_42;
	}

IL_0104:
	{
		t2122 * L_43 = p1;
		t121 * L_44 = (L_43->f1);
		t2122 * L_45 = p1;
		t221* L_46 = (L_45->f2);
		t9 * L_47 = V_2;
		m7767(NULL, L_44, (t121 *)(t121 *)L_46, L_47, &m7767_MI);
		t2122 * L_48 = p1;
		t221* L_49 = (L_48->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_49)->max_length)))) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0161;
		}
	}
	{
		t2122 * L_50 = p1;
		t2122 * L_51 = p1;
		t221* L_52 = (L_51->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_53 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5960(L_53, (((int32_t)(((t121 *)L_52)->max_length))), &m5960_MI);
		L_50->f3 = L_53;
		V_3 = 0;
		goto IL_0156;
	}

IL_0139:
	{
		t2122 * L_54 = p1;
		t1164 * L_55 = (L_54->f3);
		t2122 * L_56 = p1;
		t221* L_57 = (L_56->f2);
		int32_t L_58 = V_3;
		int32_t L_59 = L_58;
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		t9 * L_62 = Box(InitializedTypeInfo(&t125_TI), &L_61);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5961_MI, L_55, (*(t2**)(t2**)SZArrayLdElema(L_57, L_59)), L_62);
		int32_t L_63 = V_3;
		V_3 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0156:
	{
		int32_t L_64 = V_3;
		t2122 * L_65 = p1;
		t221* L_66 = (L_65->f2);
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)(((t121 *)L_66)->max_length))))))
		{
			goto IL_0139;
		}
	}

IL_0161:
	{
		t2122 * L_67 = p1;
		m11557((&V_4), (*(t2122 *)L_67), &m11557_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t9 * L_68 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f6;
		V_5 = L_68;
		t9 * L_69 = V_5;
		m1115(NULL, L_69, &m1115_MI);
	}

IL_017c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		t1164 * L_70 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f5;
		t126 * L_71 = p0;
		t2122  L_72 = V_4;
		t2122  L_73 = L_72;
		t9 * L_74 = Box(InitializedTypeInfo(&t2122_TI), &L_73);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5961_MI, L_70, L_71, L_74);
		IL2CPP_LEAVE(0x198, FINALLY_0190);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0190;
	}

FINALLY_0190:
	{ // begin finally (depth: 1)
		t9 * L_75 = V_5;
		m1117(NULL, L_75, &m1117_MI);
		IL2CPP_END_FINALLY(400)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(400)
	{
		IL2CPP_JUMP_TBL(0x198, IL_0198)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0198:
	{
		return;
	}
}
#include "t1545.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1545_TI;
#include "t1545MD.h"



#include "t899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t899_TI;

#include "t2124.h"
#include "t2123.h"
#include "t1202.h"
#include "t1725.h"
extern TypeInfo t2123_TI;
extern TypeInfo t304_TI;
extern TypeInfo t1725_TI;
extern TypeInfo t318_TI;
extern TypeInfo t137_TI;
#include "t1202MD.h"
#include "t2123MD.h"
#include "t304MD.h"
#include "t307MD.h"
#include "t1725MD.h"
extern Il2CppType t318_0_0_0;
extern MethodInfo m11564_MI;
extern MethodInfo m11935_MI;
extern MethodInfo m11563_MI;
extern MethodInfo m11815_MI;
extern MethodInfo m11566_MI;
extern MethodInfo m11567_MI;
extern MethodInfo m11569_MI;
extern MethodInfo m1124_MI;
extern MethodInfo m1125_MI;
extern MethodInfo m9044_MI;
extern MethodInfo m4312_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m2805_MI;
extern MethodInfo m4313_MI;
extern MethodInfo m4321_MI;
extern MethodInfo m9055_MI;
extern MethodInfo m365_MI;
extern MethodInfo m11571_MI;
extern MethodInfo m11568_MI;


extern MethodInfo m11562_MI;
extern "C" bool m11562 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m11562_ftn) ();
	static m11562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11562_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_SocketSecurityEnabled()");
	return _il2cpp_icall_func();
}
extern "C" t2* m5845 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m5845_ftn) ();
	static m5845_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5845_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_NewLine()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m11563 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m11563_ftn) ();
	static m11563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11563_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_Platform()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11564 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m11564_ftn) ();
	static m11564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11564_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetOSVersionString()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11565_MI;
extern "C" t2123 * m11565 (t9 * __this , MethodInfo* method)
{
	t1202 * V_0 = {0};
	int32_t V_1 = {0};
	{
		t2123 * L_0 = ((t899_SFs*)InitializedTypeInfo(&t899_TI)->static_fields)->f0;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		t2* L_1 = m11564(NULL, &m11564_MI);
		t1202 * L_2 = m11935(NULL, L_1, &m11935_MI);
		V_0 = L_2;
		int32_t L_3 = m11563(NULL, &m11563_MI);
		V_1 = L_3;
		int32_t L_4 = V_1;
		t1202 * L_5 = V_0;
		t2123 * L_6 = (t2123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2123_TI));
		m11815(L_6, L_4, L_5, &m11815_MI);
		((t899_SFs*)InitializedTypeInfo(&t899_TI)->static_fields)->f0 = L_6;
	}

IL_0024:
	{
		t2123 * L_7 = ((t899_SFs*)InitializedTypeInfo(&t899_TI)->static_fields)->f0;
		return L_7;
	}
}
extern MethodInfo m4365_MI;
extern "C" int32_t m4365 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m4365_ftn) ();
	static m4365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4365_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_TickCount()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11566 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t2* (*m11566_ftn) (t2*);
	static m11566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11566_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetEnvironmentVariable(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m7017_MI;
extern "C" t2* m7017 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m11566(NULL, L_0, &m11566_MI);
		return L_1;
	}
}
extern "C" t2* m11567 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t2* (*m11567_ftn) (int32_t);
	static m11567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11567_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetWindowsFolderPath(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6993_MI;
extern "C" t2* m6993 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		V_0 = (t2*)NULL;
		bool L_0 = m11570(NULL, &m11570_MI);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = p0;
		t2* L_2 = m11567(NULL, L_1, &m11567_MI);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_3 = p0;
		t2* L_4 = m11569(NULL, L_3, &m11569_MI);
		V_0 = L_4;
	}

IL_0019:
	{
		t2* L_5 = V_0;
		return L_5;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" t2* m11568 (t9 * __this , t2* p0, t2* p1, t2* p2, t2* p3, MethodInfo* method)
{
	static bool m11568_init;
	if (!m11568_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m11568_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	t1725 * V_2 = {0};
	t2* V_3 = {0};
	int32_t V_4 = 0;
	t2* V_5 = {0};
	bool V_6 = false;
	t2* V_7 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t2* G_B16_0 = {0};
	{
		t2* L_0 = p2;
		t2* L_1 = m11566(NULL, L_0, &m11566_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t2* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_5 = m2777(NULL, L_3, L_4, &m2777_MI);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		t2* L_6 = V_0;
		return L_6;
	}

IL_0019:
	{
		t2* L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_8 = m1124(NULL, L_7, (t2*) &_stringLiteral2715, &m1124_MI);
		V_1 = L_8;
		t2* L_9 = V_1;
		bool L_10 = m1125(NULL, L_9, &m1125_MI);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		t2* L_11 = p1;
		t2* L_12 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_13 = m1124(NULL, L_11, L_12, &m1124_MI);
		return L_13;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			t2* L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1725_TI));
			t1725 * L_15 = (t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1725_TI));
			m9044(L_15, L_14, &m9044_MI);
			V_2 = L_15;
		}

IL_003c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00cc;
			}

IL_0041:
			{
				t2* L_16 = V_3;
				t2* L_17 = m4312(L_16, &m4312_MI);
				V_3 = L_17;
				t2* L_18 = V_3;
				int32_t L_19 = m2834(L_18, ((int32_t)61), &m2834_MI);
				V_4 = L_19;
				int32_t L_20 = V_4;
				if ((((int32_t)L_20) <= ((int32_t)8)))
				{
					goto IL_00cc;
				}
			}

IL_005a:
			{
				t2* L_21 = V_3;
				int32_t L_22 = V_4;
				t2* L_23 = m2779(L_21, 0, L_22, &m2779_MI);
				t2* L_24 = p2;
				IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
				bool L_25 = m331(NULL, L_23, L_24, &m331_MI);
				if (!L_25)
				{
					goto IL_00cc;
				}
			}

IL_006b:
			{
				t2* L_26 = V_3;
				int32_t L_27 = V_4;
				t2* L_28 = m2805(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)), &m2805_MI);
				t318* L_29 = ((t318*)SZArrayNew(t318_TI_var, 1));
				*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)34);
				t2* L_30 = m4313(L_28, L_29, &m4313_MI);
				V_5 = L_30;
				V_6 = 0;
				t2* L_31 = V_5;
				bool L_32 = m4321(L_31, (t2*) &_stringLiteral2716, &m4321_MI);
				if (!L_32)
				{
					goto IL_00a7;
				}
			}

IL_0098:
			{
				V_6 = 1;
				t2* L_33 = V_5;
				t2* L_34 = m2805(L_33, 6, &m2805_MI);
				V_5 = L_34;
				goto IL_00b8;
			}

IL_00a7:
			{
				t2* L_35 = V_5;
				bool L_36 = m4321(L_35, (t2*) &_stringLiteral746, &m4321_MI);
				if (L_36)
				{
					goto IL_00b8;
				}
			}

IL_00b5:
			{
				V_6 = 1;
			}

IL_00b8:
			{
				bool L_37 = V_6;
				if (!L_37)
				{
					goto IL_00c6;
				}
			}

IL_00bc:
			{
				t2* L_38 = p1;
				t2* L_39 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
				t2* L_40 = m1124(NULL, L_38, L_39, &m1124_MI);
				G_B16_0 = L_40;
				goto IL_00c8;
			}

IL_00c6:
			{
				t2* L_41 = V_5;
				G_B16_0 = L_41;
			}

IL_00c8:
			{
				V_7 = G_B16_0;
				IL2CPP_LEAVE(0xF2, FINALLY_00db);
			}

IL_00cc:
			{
				t1725 * L_42 = V_2;
				t2* L_43 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9055_MI, L_42);
				t2* L_44 = L_43;
				V_3 = L_44;
				if (L_44)
				{
					goto IL_0041;
				}
			}

IL_00d9:
			{
				IL2CPP_LEAVE(0xE5, FINALLY_00db);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t138 *)e.ex;
			goto FINALLY_00db;
		}

FINALLY_00db:
		{ // begin finally (depth: 2)
			{
				t1725 * L_45 = V_2;
				if (!L_45)
				{
					goto IL_00e4;
				}
			}

IL_00de:
			{
				t1725 * L_46 = V_2;
				InterfaceActionInvoker0::Invoke(&m365_MI, L_46);
			}

IL_00e4:
			{
				IL2CPP_END_FINALLY(219)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(219)
		{
			IL2CPP_JUMP_TBL(0xF2, IL_00f2)
			IL2CPP_JUMP_TBL(0xE5, IL_00e5)
			IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
		}

IL_00e5:
		{
			goto IL_00ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1726_TI, e.ex->object.klass))
			goto CATCH_00e7;
		throw e;
	}

CATCH_00e7:
	{ // begin catch(System.IO.FileNotFoundException)
		goto IL_00ea;
	} // end catch (depth: 1)

IL_00ea:
	{
		t2* L_47 = p1;
		t2* L_48 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_49 = m1124(NULL, L_47, L_48, &m1124_MI);
		return L_49;
	}

IL_00f2:
	{
		t2* L_50 = V_7;
		return L_50;
	}
}
extern "C" t2* m11569 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = {0};
	{
		t2* L_0 = m11571(NULL, &m11571_MI);
		V_0 = L_0;
		t2* L_1 = m11566(NULL, (t2*) &_stringLiteral2717, &m11566_MI);
		V_1 = L_1;
		t2* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		t2* L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_5 = m331(NULL, L_3, L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_0021:
	{
		t2* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_7 = m1124(NULL, L_6, (t2*) &_stringLiteral2718, &m1124_MI);
		V_1 = L_7;
		t2* L_8 = V_1;
		t2* L_9 = m1124(NULL, L_8, (t2*) &_stringLiteral1623, &m1124_MI);
		V_1 = L_9;
	}

IL_0039:
	{
		t2* L_10 = m11566(NULL, (t2*) &_stringLiteral2719, &m11566_MI);
		V_2 = L_10;
		t2* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		t2* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_13 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_14 = m331(NULL, L_12, L_13, &m331_MI);
		if (!L_14)
		{
			goto IL_0060;
		}
	}

IL_0054:
	{
		t2* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_16 = m1124(NULL, L_15, (t2*) &_stringLiteral2720, &m1124_MI);
		V_2 = L_16;
	}

IL_0060:
	{
		int32_t L_17 = p0;
		V_3 = L_17;
		int32_t L_18 = V_3;
		if (L_18 == 0)
		{
			goto IL_0130;
		}
		if (L_18 == 1)
		{
			goto IL_0172;
		}
		if (L_18 == 2)
		{
			goto IL_0166;
		}
		if (L_18 == 3)
		{
			goto IL_0172;
		}
		if (L_18 == 4)
		{
			goto IL_0172;
		}
		if (L_18 == 5)
		{
			goto IL_0120;
		}
		if (L_18 == 6)
		{
			goto IL_0166;
		}
		if (L_18 == 7)
		{
			goto IL_0166;
		}
		if (L_18 == 8)
		{
			goto IL_0166;
		}
		if (L_18 == 9)
		{
			goto IL_0166;
		}
		if (L_18 == 10)
		{
			goto IL_0172;
		}
		if (L_18 == 11)
		{
			goto IL_0166;
		}
		if (L_18 == 12)
		{
			goto IL_0172;
		}
		if (L_18 == 13)
		{
			goto IL_0142;
		}
		if (L_18 == 14)
		{
			goto IL_0172;
		}
		if (L_18 == 15)
		{
			goto IL_0172;
		}
		if (L_18 == 16)
		{
			goto IL_0130;
		}
		if (L_18 == 17)
		{
			goto IL_011a;
		}
		if (L_18 == 18)
		{
			goto IL_0172;
		}
		if (L_18 == 19)
		{
			goto IL_0172;
		}
		if (L_18 == 20)
		{
			goto IL_0172;
		}
		if (L_18 == 21)
		{
			goto IL_0166;
		}
		if (L_18 == 22)
		{
			goto IL_0172;
		}
		if (L_18 == 23)
		{
			goto IL_0172;
		}
		if (L_18 == 24)
		{
			goto IL_0172;
		}
		if (L_18 == 25)
		{
			goto IL_0172;
		}
		if (L_18 == 26)
		{
			goto IL_012c;
		}
		if (L_18 == 27)
		{
			goto IL_0172;
		}
		if (L_18 == 28)
		{
			goto IL_012e;
		}
		if (L_18 == 29)
		{
			goto IL_0172;
		}
		if (L_18 == 30)
		{
			goto IL_0172;
		}
		if (L_18 == 31)
		{
			goto IL_0172;
		}
		if (L_18 == 32)
		{
			goto IL_0166;
		}
		if (L_18 == 33)
		{
			goto IL_0166;
		}
		if (L_18 == 34)
		{
			goto IL_0166;
		}
		if (L_18 == 35)
		{
			goto IL_016c;
		}
		if (L_18 == 36)
		{
			goto IL_0172;
		}
		if (L_18 == 37)
		{
			goto IL_0166;
		}
		if (L_18 == 38)
		{
			goto IL_0166;
		}
		if (L_18 == 39)
		{
			goto IL_0154;
		}
		if (L_18 == 40)
		{
			goto IL_0172;
		}
		if (L_18 == 41)
		{
			goto IL_0172;
		}
		if (L_18 == 42)
		{
			goto IL_0172;
		}
		if (L_18 == 43)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_0172;
	}

IL_011a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_19;
	}

IL_0120:
	{
		t2* L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_21 = m1124(NULL, L_20, (t2*) &_stringLiteral2721, &m1124_MI);
		return L_21;
	}

IL_012c:
	{
		t2* L_22 = V_2;
		return L_22;
	}

IL_012e:
	{
		t2* L_23 = V_1;
		return L_23;
	}

IL_0130:
	{
		t2* L_24 = V_2;
		t2* L_25 = V_0;
		t2* L_26 = m11568(NULL, L_24, L_25, (t2*) &_stringLiteral2722, (t2*) &_stringLiteral2723, &m11568_MI);
		return L_26;
	}

IL_0142:
	{
		t2* L_27 = V_2;
		t2* L_28 = V_0;
		t2* L_29 = m11568(NULL, L_27, L_28, (t2*) &_stringLiteral2724, (t2*) &_stringLiteral2725, &m11568_MI);
		return L_29;
	}

IL_0154:
	{
		t2* L_30 = V_2;
		t2* L_31 = V_0;
		t2* L_32 = m11568(NULL, L_30, L_31, (t2*) &_stringLiteral2726, (t2*) &_stringLiteral2727, &m11568_MI);
		return L_32;
	}

IL_0166:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_33;
	}

IL_016c:
	{
		return (t2*) &_stringLiteral2728;
	}

IL_0172:
	{
		t570 * L_34 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_34, (t2*) &_stringLiteral2729, &m2949_MI);
		il2cpp_codegen_raise_exception(L_34);
	}
}
extern "C" bool m11570 (t9 * __this , MethodInfo* method)
{
	{
		int32_t L_0 = m11563(NULL, &m11563_MI);
		return ((((int32_t)L_0) < ((int32_t)4))? 1 : 0);
	}
}
extern "C" t2* m11571 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m11571_ftn) ();
	static m11571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11571_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetHome()");
	return _il2cpp_icall_func();
}
#include "t1442.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1442_TI;
#include "t1442MD.h"

extern MethodInfo m11572_MI;


extern "C" void m11572 (t1442 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11573_MI;
extern "C" void m11573 (t9 * __this , MethodInfo* method)
{
	{
		t1442 * L_0 = (t1442 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1442_TI));
		m11572(L_0, &m11572_MI);
		((t1442_SFs*)InitializedTypeInfo(&t1442_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t2125.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2125_TI;
#include "t2125MD.h"



extern MethodInfo m11574_MI;
extern "C" void m11574 (t2125 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2730, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m11575_MI;
extern "C" void m11575 (t2125 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m11576_MI;
extern "C" void m11576 (t2125 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2126_TI;
#include "t2126MD.h"

#include "t2127MD.h"
extern MethodInfo m11615_MI;
extern MethodInfo m11616_MI;


extern MethodInfo m11577_MI;
extern "C" void m11577 (t2126 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2731, &m7888_MI);
		m11615(__this, L_0, &m11615_MI);
		m4499(__this, ((int32_t)-2146233081), &m4499_MI);
		return;
	}
}
extern MethodInfo m11578_MI;
extern "C" void m11578 (t2126 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11615(__this, L_0, &m11615_MI);
		m4499(__this, ((int32_t)-2146233081), &m4499_MI);
		return;
	}
}
extern MethodInfo m11579_MI;
extern "C" void m11579 (t2126 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11616(__this, L_0, L_1, &m11616_MI);
		return;
	}
}
#include "t622.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t622_TI;
#include "t622MD.h"

#include "t732MD.h"
extern MethodInfo m4306_MI;


extern MethodInfo m3031_MI;
extern "C" void m3031 (t622 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11580_MI;
extern "C" void m11580 (t897 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2732, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233033), &m4499_MI);
		return;
	}
}
extern "C" void m4354 (t897 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233033), &m4499_MI);
		return;
	}
}
extern MethodInfo m6033_MI;
extern "C" void m6033 (t897 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t1532.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1532_TI;



extern "C" void m6937 (t9 * __this , t9 * p0, MethodInfo* method)
{
	typedef void (*m6937_ftn) (t9 *);
	static m6937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6937_ftn)il2cpp_codegen_resolve_icall ("System.GC::SuppressFinalize(System.Object)");
	_il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif

#include "t2203.h"
#include "t2204.h"
#include "t1419.h"
#include "t2002.h"
extern TypeInfo t2203_TI;
extern TypeInfo t2204_TI;
extern TypeInfo t1419_TI;
extern TypeInfo t2002_TI;
#include "t1661MD.h"
#include "t2203MD.h"
#include "t2204MD.h"
#include "t1419MD.h"
#include "t2002MD.h"
extern Il2CppType t2203_0_0_0;
extern Il2CppType t2204_0_0_0;
extern MethodInfo m11586_MI;
extern MethodInfo m8327_MI;
extern MethodInfo m8326_MI;
extern MethodInfo m11582_MI;
extern MethodInfo m12187_MI;
extern MethodInfo m12188_MI;
extern MethodInfo m590_MI;
extern MethodInfo m11584_MI;
extern MethodInfo m11585_MI;
extern MethodInfo m11590_MI;
extern MethodInfo m11587_MI;
extern MethodInfo m6929_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m11581_MI;
extern MethodInfo m10550_MI;
extern MethodInfo m11593_MI;
extern MethodInfo m11596_MI;
extern MethodInfo m11597_MI;
extern MethodInfo m11598_MI;
extern MethodInfo m11599_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m4450_MI;
extern Il2CppGenericMethod m12187_GM;
extern Il2CppGenericMethod m12188_GM;


extern "C" void m11581 (t924 * __this, t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11586(NULL, L_0, ((int32_t)16), &m11586_MI);
		t737* L_1 = p0;
		int32_t L_2 = m8327(NULL, L_1, 0, &m8327_MI);
		__this->f0 = L_2;
		t737* L_3 = p0;
		int16_t L_4 = m8326(NULL, L_3, 4, &m8326_MI);
		__this->f1 = L_4;
		t737* L_5 = p0;
		int16_t L_6 = m8326(NULL, L_5, 6, &m8326_MI);
		__this->f2 = L_6;
		t737* L_7 = p0;
		int32_t L_8 = 8;
		__this->f3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8));
		t737* L_9 = p0;
		int32_t L_10 = ((int32_t)9);
		__this->f4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		t737* L_11 = p0;
		int32_t L_12 = ((int32_t)10);
		__this->f5 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		t737* L_13 = p0;
		int32_t L_14 = ((int32_t)11);
		__this->f6 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14));
		t737* L_15 = p0;
		int32_t L_16 = ((int32_t)12);
		__this->f7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		t737* L_17 = p0;
		int32_t L_18 = ((int32_t)13);
		__this->f8 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_18));
		t737* L_19 = p0;
		int32_t L_20 = ((int32_t)14);
		__this->f9 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_20));
		t737* L_21 = p0;
		int32_t L_22 = ((int32_t)15);
		__this->f10 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_22));
		return;
	}
}
extern "C" void m11582 (t924 * __this, int32_t p0, int16_t p1, int16_t p2, uint8_t p3, uint8_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint8_t p8, uint8_t p9, uint8_t p10, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int16_t L_1 = p1;
		__this->f1 = L_1;
		int16_t L_2 = p2;
		__this->f2 = L_2;
		uint8_t L_3 = p3;
		__this->f3 = L_3;
		uint8_t L_4 = p4;
		__this->f4 = L_4;
		uint8_t L_5 = p5;
		__this->f5 = L_5;
		uint8_t L_6 = p6;
		__this->f6 = L_6;
		uint8_t L_7 = p7;
		__this->f7 = L_7;
		uint8_t L_8 = p8;
		__this->f8 = L_8;
		uint8_t L_9 = p9;
		__this->f9 = L_9;
		uint8_t L_10 = p10;
		__this->f10 = L_10;
		return;
	}
}
extern MethodInfo m11583_MI;
extern TypeInfo* t2203_TI_var;
extern TypeInfo* t2204_TI_var;
extern MethodInfo* m12187_MI_var;
extern MethodInfo* m12188_MI_var;
extern "C" void m11583 (t9 * __this , MethodInfo* method)
{
	static bool m11583_init;
	if (!m11583_init)
	{
		t2203_TI_var = il2cpp_codegen_class_from_type(&t2203_0_0_0);
		t2204_TI_var = il2cpp_codegen_class_from_type(&t2204_0_0_0);
		m12187_MI_var = il2cpp_codegen_genericmethod_get_method(&m12187_GM);
		m12188_MI_var = il2cpp_codegen_genericmethod_get_method(&m12188_GM);
		m11583_init = true;
	}
	t2203 * V_0 = {0};
	t2204 * V_1 = {0};
	{
		t924  L_0 = {0};
		m11582(&L_0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &m11582_MI);
		((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f11 = L_0;
		t9 * L_1 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_1, &m336_MI);
		((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f12 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		bool L_2 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		t2203 * L_3 = (t2203 *)il2cpp_codegen_object_new (t2203_TI_var);
		m12187(L_3, m12187_MI_var);
		V_0 = L_3;
		t2204 * L_4 = (t2204 *)il2cpp_codegen_object_new (t2204_TI_var);
		m12188(L_4, m12188_MI_var);
		V_1 = L_4;
	}

IL_0032:
	{
		return;
	}
}
extern "C" void m11584 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2733, &m7888_MI);
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, L_1, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m11585 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2734, &m7888_MI);
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m590(NULL, L_2, L_5, &m590_MI);
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, L_6, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		return;
	}
}
extern "C" void m11586 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11584(NULL, (t9 *)(t9 *)L_0, &m11584_MI);
		t737* L_1 = p0;
		int32_t L_2 = p1;
		m11585(NULL, L_1, L_2, &m11585_MI);
		return;
	}
}
extern "C" int32_t m11587 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		return 1;
	}
}
extern MethodInfo m11588_MI;
extern "C" int32_t m11588 (t924 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t924_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2735, &m7888_MI);
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_3, (t2*) &_stringLiteral607, L_2, &m5761_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t9 * L_4 = p0;
		int32_t L_5 = m11590(__this, ((*(t924 *)((t924 *)UnBox (L_4, InitializedTypeInfo(&t924_TI))))), &m11590_MI);
		return L_5;
	}
}
extern MethodInfo m11589_MI;
extern "C" bool m11589 (t924 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t924_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t9 * L_1 = p0;
		int32_t L_2 = m11590(__this, ((*(t924 *)((t924 *)UnBox (L_1, InitializedTypeInfo(&t924_TI))))), &m11590_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return 0;
	}
}
extern "C" int32_t m11590 (t924 * __this, t924  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = ((&p0)->f0);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = (__this->f0);
		int32_t L_3 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_4 = m11587(NULL, L_2, L_3, &m11587_MI);
		return L_4;
	}

IL_0022:
	{
		int16_t L_5 = (__this->f1);
		int16_t L_6 = ((&p0)->f1);
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0044;
		}
	}
	{
		int16_t L_7 = (__this->f1);
		int16_t L_8 = ((&p0)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_9 = m11587(NULL, L_7, L_8, &m11587_MI);
		return L_9;
	}

IL_0044:
	{
		int16_t L_10 = (__this->f2);
		int16_t L_11 = ((&p0)->f2);
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		int16_t L_12 = (__this->f2);
		int16_t L_13 = ((&p0)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_14 = m11587(NULL, L_12, L_13, &m11587_MI);
		return L_14;
	}

IL_0066:
	{
		uint8_t L_15 = (__this->f3);
		uint8_t L_16 = ((&p0)->f3);
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0088;
		}
	}
	{
		uint8_t L_17 = (__this->f3);
		uint8_t L_18 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_19 = m11587(NULL, L_17, L_18, &m11587_MI);
		return L_19;
	}

IL_0088:
	{
		uint8_t L_20 = (__this->f4);
		uint8_t L_21 = ((&p0)->f4);
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_00aa;
		}
	}
	{
		uint8_t L_22 = (__this->f4);
		uint8_t L_23 = ((&p0)->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_24 = m11587(NULL, L_22, L_23, &m11587_MI);
		return L_24;
	}

IL_00aa:
	{
		uint8_t L_25 = (__this->f5);
		uint8_t L_26 = ((&p0)->f5);
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cc;
		}
	}
	{
		uint8_t L_27 = (__this->f5);
		uint8_t L_28 = ((&p0)->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_29 = m11587(NULL, L_27, L_28, &m11587_MI);
		return L_29;
	}

IL_00cc:
	{
		uint8_t L_30 = (__this->f6);
		uint8_t L_31 = ((&p0)->f6);
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_00ee;
		}
	}
	{
		uint8_t L_32 = (__this->f6);
		uint8_t L_33 = ((&p0)->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_34 = m11587(NULL, L_32, L_33, &m11587_MI);
		return L_34;
	}

IL_00ee:
	{
		uint8_t L_35 = (__this->f7);
		uint8_t L_36 = ((&p0)->f7);
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_0110;
		}
	}
	{
		uint8_t L_37 = (__this->f7);
		uint8_t L_38 = ((&p0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_39 = m11587(NULL, L_37, L_38, &m11587_MI);
		return L_39;
	}

IL_0110:
	{
		uint8_t L_40 = (__this->f8);
		uint8_t L_41 = ((&p0)->f8);
		if ((((int32_t)L_40) == ((int32_t)L_41)))
		{
			goto IL_0132;
		}
	}
	{
		uint8_t L_42 = (__this->f8);
		uint8_t L_43 = ((&p0)->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_44 = m11587(NULL, L_42, L_43, &m11587_MI);
		return L_44;
	}

IL_0132:
	{
		uint8_t L_45 = (__this->f9);
		uint8_t L_46 = ((&p0)->f9);
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_0154;
		}
	}
	{
		uint8_t L_47 = (__this->f9);
		uint8_t L_48 = ((&p0)->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_49 = m11587(NULL, L_47, L_48, &m11587_MI);
		return L_49;
	}

IL_0154:
	{
		uint8_t L_50 = (__this->f10);
		uint8_t L_51 = ((&p0)->f10);
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_0176;
		}
	}
	{
		uint8_t L_52 = (__this->f10);
		uint8_t L_53 = ((&p0)->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		int32_t L_54 = m11587(NULL, L_52, L_53, &m11587_MI);
		return L_54;
	}

IL_0176:
	{
		return 0;
	}
}
extern MethodInfo m11591_MI;
extern "C" bool m11591 (t924 * __this, t924  p0, MethodInfo* method)
{
	{
		t924  L_0 = p0;
		int32_t L_1 = m11590(__this, L_0, &m11590_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11592_MI;
extern "C" int32_t m11592 (t924 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int16_t L_2 = (__this->f1);
		int16_t L_3 = (__this->f2);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)16)))|(int32_t)L_3))));
		int32_t L_4 = V_0;
		uint8_t L_5 = (__this->f3);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)24)))));
		int32_t L_6 = V_0;
		uint8_t L_7 = (__this->f4);
		V_0 = ((int32_t)((int32_t)L_6^(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)16)))));
		int32_t L_8 = V_0;
		uint8_t L_9 = (__this->f5);
		V_0 = ((int32_t)((int32_t)L_8^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))));
		int32_t L_10 = V_0;
		uint8_t L_11 = (__this->f6);
		V_0 = ((int32_t)((int32_t)L_10^(int32_t)L_11));
		int32_t L_12 = V_0;
		uint8_t L_13 = (__this->f7);
		V_0 = ((int32_t)((int32_t)L_12^(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)24)))));
		int32_t L_14 = V_0;
		uint8_t L_15 = (__this->f8);
		V_0 = ((int32_t)((int32_t)L_14^(int32_t)((int32_t)((int32_t)L_15<<(int32_t)((int32_t)16)))));
		int32_t L_16 = V_0;
		uint8_t L_17 = (__this->f9);
		V_0 = ((int32_t)((int32_t)L_16^(int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))));
		int32_t L_18 = V_0;
		uint8_t L_19 = (__this->f10);
		V_0 = ((int32_t)((int32_t)L_18^(int32_t)L_19));
		int32_t L_20 = V_0;
		return L_20;
	}
}
extern "C" uint16_t m11593 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = ((int32_t)((int32_t)((int32_t)48)+(int32_t)L_1));
		goto IL_0012;
	}

IL_000b:
	{
		int32_t L_2 = p0;
		G_B3_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)97)+(int32_t)L_2))-(int32_t)((int32_t)10)));
	}

IL_0012:
	{
		return (((uint16_t)G_B3_0));
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t924  m11594 (t9 * __this , MethodInfo* method)
{
	static bool m11594_init;
	if (!m11594_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m11594_init = true;
	}
	t737* V_0 = {0};
	t9 * V_1 = {0};
	t924  V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		t9 * L_0 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f12;
		V_1 = L_0;
		t9 * L_1 = V_1;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			t1419 * L_2 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f13;
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			t1419 * L_3 = m6929(NULL, &m6929_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f13 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			t1419 * L_4 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f13;
			t737* L_5 = V_0;
			VirtActionInvoker1< t737* >::Invoke(&m6930_MI, L_4, L_5);
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		t9 * L_6 = V_1;
		m1117(NULL, L_6, &m1117_MI);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0039:
	{
		t737* L_7 = V_0;
		m11581((&V_2), L_7, &m11581_MI);
		uint8_t L_8 = ((&V_2)->f3);
		(&V_2)->f3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		int16_t L_9 = ((&V_2)->f2);
		(&V_2)->f2 = (((int16_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_9))&(int64_t)(((int64_t)((int32_t)4095)))))|(int64_t)(((int64_t)((int32_t)16384)))))));
		t924  L_10 = V_2;
		return L_10;
	}
}
extern MethodInfo m11595_MI;
extern TypeInfo* t737_TI_var;
extern "C" t737* m11595 (t9 * __this , MethodInfo* method)
{
	static bool m11595_init;
	if (!m11595_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m11595_init = true;
	}
	t737* V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		t9 * L_0 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f12;
		V_1 = L_0;
		t9 * L_1 = V_1;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			t1419 * L_2 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f13;
			if (!L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			t1419 * L_3 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f13;
			((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f14 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			t1419 * L_4 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f14;
			if (L_4)
			{
				goto IL_0036;
			}
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2002_TI));
			t2002 * L_5 = (t2002 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2002_TI));
			m10550(L_5, &m10550_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f14 = L_5;
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
			t1419 * L_6 = ((t924_SFs*)InitializedTypeInfo(&t924_TI)->static_fields)->f14;
			t737* L_7 = V_0;
			VirtActionInvoker1< t737* >::Invoke(&m6930_MI, L_6, L_7);
			IL2CPP_LEAVE(0x4A, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		t9 * L_8 = V_1;
		m1117(NULL, L_8, &m1117_MI);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004a:
	{
		t737* L_9 = V_0;
		t737* L_10 = V_0;
		int32_t L_11 = 8;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		t737* L_12 = V_0;
		t737* L_13 = V_0;
		int32_t L_14 = 7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, 7)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14))&(int32_t)((int32_t)15)))|(int32_t)((int32_t)64)))));
		t737* L_15 = V_0;
		return L_15;
	}
}
extern "C" void m11596 (t9 * __this , t328 * p0, int32_t p1, MethodInfo* method)
{
	{
		t328 * L_0 = p0;
		int32_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		uint16_t L_2 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)28)))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_0, L_2, &m2797_MI);
		t328 * L_3 = p0;
		int32_t L_4 = p1;
		uint16_t L_5 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_3, L_5, &m2797_MI);
		t328 * L_6 = p0;
		int32_t L_7 = p1;
		uint16_t L_8 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)20)))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_6, L_8, &m2797_MI);
		t328 * L_9 = p0;
		int32_t L_10 = p1;
		uint16_t L_11 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_9, L_11, &m2797_MI);
		t328 * L_12 = p0;
		int32_t L_13 = p1;
		uint16_t L_14 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_13>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_12, L_14, &m2797_MI);
		t328 * L_15 = p0;
		int32_t L_16 = p1;
		uint16_t L_17 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_16>>(int32_t)8))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_15, L_17, &m2797_MI);
		t328 * L_18 = p0;
		int32_t L_19 = p1;
		uint16_t L_20 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_19>>(int32_t)4))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_18, L_20, &m2797_MI);
		t328 * L_21 = p0;
		int32_t L_22 = p1;
		uint16_t L_23 = m11593(NULL, ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_21, L_23, &m2797_MI);
		return;
	}
}
extern "C" void m11597 (t9 * __this , t328 * p0, int16_t p1, MethodInfo* method)
{
	{
		t328 * L_0 = p0;
		int16_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		uint16_t L_2 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_0, L_2, &m2797_MI);
		t328 * L_3 = p0;
		int16_t L_4 = p1;
		uint16_t L_5 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)8))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_3, L_5, &m2797_MI);
		t328 * L_6 = p0;
		int16_t L_7 = p1;
		uint16_t L_8 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)4))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_6, L_8, &m2797_MI);
		t328 * L_9 = p0;
		int16_t L_10 = p1;
		uint16_t L_11 = m11593(NULL, ((int32_t)((int32_t)L_10&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_9, L_11, &m2797_MI);
		return;
	}
}
extern "C" void m11598 (t9 * __this , t328 * p0, uint8_t p1, MethodInfo* method)
{
	{
		t328 * L_0 = p0;
		uint8_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		uint16_t L_2 = m11593(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)4))&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_0, L_2, &m2797_MI);
		t328 * L_3 = p0;
		uint8_t L_4 = p1;
		uint16_t L_5 = m11593(NULL, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)15))), &m11593_MI);
		m2797(L_3, L_5, &m2797_MI);
		return;
	}
}
extern "C" t2* m11599 (t924 * __this, bool p0, bool p1, bool p2, MethodInfo* method)
{
	t328 * V_0 = {0};
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_0, ((int32_t)40), &m4396_MI);
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t328 * L_2 = V_0;
		m2797(L_2, ((int32_t)40), &m2797_MI);
		goto IL_0022;
	}

IL_0016:
	{
		bool L_3 = p2;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t328 * L_4 = V_0;
		m2797(L_4, ((int32_t)123), &m2797_MI);
	}

IL_0022:
	{
		t328 * L_5 = V_0;
		int32_t L_6 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11596(NULL, L_5, L_6, &m11596_MI);
		bool L_7 = p0;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		t328 * L_8 = V_0;
		m2797(L_8, ((int32_t)45), &m2797_MI);
	}

IL_003a:
	{
		t328 * L_9 = V_0;
		int16_t L_10 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11597(NULL, L_9, L_10, &m11597_MI);
		bool L_11 = p0;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		t328 * L_12 = V_0;
		m2797(L_12, ((int32_t)45), &m2797_MI);
	}

IL_0052:
	{
		t328 * L_13 = V_0;
		int16_t L_14 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11597(NULL, L_13, L_14, &m11597_MI);
		bool L_15 = p0;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		t328 * L_16 = V_0;
		m2797(L_16, ((int32_t)45), &m2797_MI);
	}

IL_006a:
	{
		t328 * L_17 = V_0;
		uint8_t L_18 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11598(NULL, L_17, L_18, &m11598_MI);
		t328 * L_19 = V_0;
		uint8_t L_20 = (__this->f4);
		m11598(NULL, L_19, L_20, &m11598_MI);
		bool L_21 = p0;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		t328 * L_22 = V_0;
		m2797(L_22, ((int32_t)45), &m2797_MI);
	}

IL_008e:
	{
		t328 * L_23 = V_0;
		uint8_t L_24 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t924_TI));
		m11598(NULL, L_23, L_24, &m11598_MI);
		t328 * L_25 = V_0;
		uint8_t L_26 = (__this->f6);
		m11598(NULL, L_25, L_26, &m11598_MI);
		t328 * L_27 = V_0;
		uint8_t L_28 = (__this->f7);
		m11598(NULL, L_27, L_28, &m11598_MI);
		t328 * L_29 = V_0;
		uint8_t L_30 = (__this->f8);
		m11598(NULL, L_29, L_30, &m11598_MI);
		t328 * L_31 = V_0;
		uint8_t L_32 = (__this->f9);
		m11598(NULL, L_31, L_32, &m11598_MI);
		t328 * L_33 = V_0;
		uint8_t L_34 = (__this->f10);
		m11598(NULL, L_33, L_34, &m11598_MI);
		bool L_35 = p1;
		if (!L_35)
		{
			goto IL_00e4;
		}
	}
	{
		t328 * L_36 = V_0;
		m2797(L_36, ((int32_t)41), &m2797_MI);
		goto IL_00f0;
	}

IL_00e4:
	{
		bool L_37 = p2;
		if (!L_37)
		{
			goto IL_00f0;
		}
	}
	{
		t328 * L_38 = V_0;
		m2797(L_38, ((int32_t)125), &m2797_MI);
	}

IL_00f0:
	{
		t328 * L_39 = V_0;
		t2* L_40 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_39);
		return L_40;
	}
}
extern "C" t2* m11600 (t924 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11599(__this, 1, 0, 0, &m11599_MI);
		return L_0;
	}
}
extern "C" t2* m4450 (t924 * __this, t2* p0, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	t2* V_3 = {0};
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_1 = p0;
		t2* L_2 = m7415(L_1, &m7415_MI);
		V_3 = L_2;
		t2* L_3 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_3, (t2*) &_stringLiteral2736, &m331_MI);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = 1;
		goto IL_006d;
	}

IL_0021:
	{
		t2* L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m331(NULL, L_5, (t2*) &_stringLiteral2737, &m331_MI);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		V_1 = 1;
		goto IL_006d;
	}

IL_0032:
	{
		t2* L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_8 = m331(NULL, L_7, (t2*) &_stringLiteral2738, &m331_MI);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		V_0 = 0;
		goto IL_006d;
	}

IL_0043:
	{
		t2* L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_10 = m2777(NULL, L_9, (t2*) &_stringLiteral2739, &m2777_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_12 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_13 = m2777(NULL, L_11, L_12, &m2777_MI);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_14 = m7888(NULL, (t2*) &_stringLiteral2740, &m7888_MI);
		t897 * L_15 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_15, L_14, &m4354_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006d:
	{
		bool L_16 = V_0;
		bool L_17 = V_1;
		bool L_18 = V_2;
		t2* L_19 = m11599(__this, L_16, L_17, L_18, &m11599_MI);
		return L_19;
	}
}
extern MethodInfo m11601_MI;
extern "C" t2* m11601 (t924 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4450(__this, L_0, &m4450_MI);
		return L_1;
	}
}
#include "t890.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t890_TI;
#include "t890MD.h"



extern MethodInfo m11602_MI;
extern "C" void m11602 (t890 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2741, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m4293_MI;
extern "C" void m4293 (t890 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m11603_MI;
extern "C" void m11603 (t890 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m11604 (t2128 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2742, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467262), &m4499_MI);
		return;
	}
}
extern "C" void m11605 (t2128 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467262), &m4499_MI);
		return;
	}
}
extern MethodInfo m11606_MI;
extern "C" void m11606 (t2128 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m5762_MI;
extern "C" void m5762 (t1347 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2743, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233079), &m4499_MI);
		return;
	}
}
extern "C" void m5755 (t1347 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233079), &m4499_MI);
		return;
	}
}
extern MethodInfo m11607_MI;
extern "C" void m11607 (t1347 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11849(__this, L_0, L_1, &m11849_MI);
		m4499(__this, ((int32_t)-2146233079), &m4499_MI);
		return;
	}
}
extern MethodInfo m11608_MI;
extern "C" void m11608 (t1347 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2101.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2101_TI;
#include "t2101MD.h"



#include "t160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t160_TI;

extern MethodInfo m4303_MI;
extern MethodInfo m11613_MI;
extern MethodInfo m7534_MI;
extern MethodInfo m7560_MI;
extern MethodInfo m7584_MI;
extern MethodInfo m7562_MI;
extern MethodInfo m7561_MI;
extern MethodInfo m7559_MI;


extern MethodInfo m4300_MI;
extern "C" float m4300 (t9 * __this , float p0, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = p0;
		G_B3_0 = ((-L_1));
		goto IL_000d;
	}

IL_000c:
	{
		float L_2 = p0;
		G_B3_0 = L_2;
	}

IL_000d:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m11609 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2147483648)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2744, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = p0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = p0;
		G_B5_0 = ((-L_4));
		goto IL_0021;
	}

IL_0020:
	{
		int32_t L_5 = p0;
		G_B5_0 = L_5;
	}

IL_0021:
	{
		return G_B5_0;
	}
}
extern MethodInfo m11610_MI;
extern "C" int64_t m11610 (t9 * __this , int64_t p0, MethodInfo* method)
{
	int64_t G_B5_0 = 0;
	{
		int64_t L_0 = p0;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::min())))))
		{
			goto IL_001c;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2744, &m7888_MI);
		t2145 * L_2 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_2, L_1, &m11822_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001c:
	{
		int64_t L_3 = p0;
		if ((((int64_t)L_3) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0025;
		}
	}
	{
		int64_t L_4 = p0;
		G_B5_0 = ((-L_4));
		goto IL_0026;
	}

IL_0025:
	{
		int64_t L_5 = p0;
		G_B5_0 = L_5;
	}

IL_0026:
	{
		return G_B5_0;
	}
}
extern MethodInfo m4305_MI;
extern "C" double m4305 (t9 * __this , double p0, MethodInfo* method)
{
	double V_0 = 0.0;
	{
		double L_0 = p0;
		double L_1 = floor(L_0);
		V_0 = L_1;
		double L_2 = V_0;
		double L_3 = p0;
		if ((((double)L_2) == ((double)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		double L_4 = V_0;
		V_0 = ((double)((double)L_4+(double)(1.0)));
	}

IL_0017:
	{
		double L_5 = V_0;
		return L_5;
	}
}
extern "C" double m4303 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4303_ftn) (double);
	static m4303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4303_ftn)il2cpp_codegen_resolve_icall ("System.Math::Floor(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m495_MI;
extern "C" double m495 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	double V_0 = 0.0;
	double G_B7_0 = 0.0;
	{
		double L_0 = p1;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0016;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0016:
	{
		double L_1 = p0;
		double L_2 = p1;
		double L_3 = p0;
		double L_4 = p1;
		double L_5 = round(((double)((double)L_3/(double)L_4)));
		V_0 = ((double)((double)L_1-(double)((double)((double)L_2*(double)L_5))));
		double L_6 = V_0;
		if ((((double)L_6) == ((double)(0.0))))
		{
			goto IL_0031;
		}
	}
	{
		double L_7 = V_0;
		return L_7;
	}

IL_0031:
	{
		double L_8 = p0;
		if ((!(((double)L_8) > ((double)(0.0)))))
		{
			goto IL_0048;
		}
	}
	{
		G_B7_0 = (0.0);
		goto IL_0056;
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		double L_9 = m11200(NULL, ((int64_t)std::numeric_limits<int64_t>::min()), &m11200_MI);
		G_B7_0 = L_9;
	}

IL_0056:
	{
		return G_B7_0;
	}
}
extern MethodInfo m4302_MI;
extern "C" double m4302 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	double V_0 = 0.0;
	double G_B3_0 = 0.0;
	{
		double L_0 = p0;
		double L_1 = log(L_0);
		double L_2 = p1;
		double L_3 = log(L_2);
		V_0 = ((double)((double)L_1/(double)L_3));
		double L_4 = V_0;
		if ((!(((double)L_4) == ((double)(0.0)))))
		{
			goto IL_0025;
		}
	}
	{
		G_B3_0 = (0.0);
		goto IL_0026;
	}

IL_0025:
	{
		double L_5 = V_0;
		G_B3_0 = L_5;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
extern MethodInfo m6945_MI;
extern "C" int32_t m6945 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_2 = p0;
		G_B3_0 = L_2;
		goto IL_0008;
	}

IL_0007:
	{
		int32_t L_3 = p1;
		G_B3_0 = L_3;
	}

IL_0008:
	{
		return G_B3_0;
	}
}
extern MethodInfo m11611_MI;
extern "C" int32_t m11611 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_2 = p0;
		G_B3_0 = L_2;
		goto IL_0008;
	}

IL_0007:
	{
		int32_t L_3 = p1;
		G_B3_0 = L_3;
	}

IL_0008:
	{
		return G_B3_0;
	}
}
extern "C" t910  m11612 (t9 * __this , t910  p0, MethodInfo* method)
{
	t910  V_0 = {0};
	t910  V_1 = {0};
	{
		t910  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_1 = m7534(NULL, L_0, &m7534_MI);
		V_0 = L_1;
		t910  L_2 = p0;
		t910  L_3 = V_0;
		t910  L_4 = m7560(NULL, L_2, L_3, &m7560_MI);
		V_1 = L_4;
		t910  L_5 = V_1;
		t910  L_6 = {0};
		m7502(&L_6, 5, 0, 0, 0, 1, &m7502_MI);
		bool L_7 = m7584(NULL, L_5, L_6, &m7584_MI);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		t910  L_8 = {0};
		m7502(&L_8, ((int32_t)20), 0, 0, 0, 1, &m7502_MI);
		t910  L_9 = V_0;
		t910  L_10 = {0};
		m7502(&L_10, ((int32_t)20), 0, 0, 0, 1, &m7502_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_11 = m7562(NULL, L_9, L_10, &m7562_MI);
		t910  L_12 = V_0;
		t910  L_13 = {0};
		m7502(&L_13, ((int32_t)20), 0, 0, 0, 1, &m7502_MI);
		t910  L_14 = m7562(NULL, L_12, L_13, &m7562_MI);
		t910  L_15 = m7534(NULL, L_14, &m7534_MI);
		t910  L_16 = m7560(NULL, L_11, L_15, &m7560_MI);
		t910  L_17 = m7561(NULL, L_8, L_16, &m7561_MI);
		t910  L_18 = {0};
		m7503(&L_18, 0, &m7503_MI);
		bool L_19 = m7583(NULL, L_17, L_18, &m7583_MI);
		if (L_19)
		{
			goto IL_007c;
		}
	}

IL_006a:
	{
		t910  L_20 = V_1;
		t910  L_21 = {0};
		m7502(&L_21, 5, 0, 0, 0, 1, &m7502_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		bool L_22 = m7585(NULL, L_20, L_21, &m7585_MI);
		if (!L_22)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		t910  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t910  L_24 = m7559(NULL, L_23, &m7559_MI);
		V_0 = L_24;
	}

IL_0083:
	{
		t910  L_25 = V_0;
		return L_25;
	}
}
extern "C" double m4304 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4304_ftn) (double);
	static m4304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4304_ftn)il2cpp_codegen_resolve_icall ("System.Math::Round(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4296_MI;
extern "C" double m4296 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4296_ftn) (double);
	static m4296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4296_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sin(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4297_MI;
extern "C" double m4297 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4297_ftn) (double);
	static m4297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4297_ftn)il2cpp_codegen_resolve_icall ("System.Math::Cos(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4298_MI;
extern "C" double m4298 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	typedef double (*m4298_ftn) (double, double);
	static m4298_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4298_ftn)il2cpp_codegen_resolve_icall ("System.Math::Atan2(System.Double,System.Double)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" double m11613 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m11613_ftn) (double);
	static m11613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11613_ftn)il2cpp_codegen_resolve_icall ("System.Math::Log(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern "C" double m4301 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	typedef double (*m4301_ftn) (double, double);
	static m4301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4301_ftn)il2cpp_codegen_resolve_icall ("System.Math::Pow(System.Double,System.Double)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m4299_MI;
extern "C" double m4299 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4299_ftn) (double);
	static m4299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4299_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sqrt(System.Double)");
	return _il2cpp_icall_func(p0);
}
#include "t2127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2127_TI;



extern MethodInfo m11614_MI;
extern "C" void m11614 (t2127 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2745, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233062), &m4499_MI);
		return;
	}
}
extern "C" void m11615 (t2127 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233062), &m4499_MI);
		return;
	}
}
extern "C" void m11616 (t2127 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2129_TI;
#include "t2129MD.h"



extern MethodInfo m11617_MI;
extern "C" void m11617 (t2129 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2746, &m7888_MI);
		m11615(__this, L_0, &m11615_MI);
		m4499(__this, ((int32_t)-2146233072), &m4499_MI);
		return;
	}
}
extern MethodInfo m11618_MI;
extern "C" void m11618 (t2129 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11616(__this, L_0, L_1, &m11616_MI);
		return;
	}
}
#include "t2130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2130_TI;
#include "t2130MD.h"

#include "t2131.h"
extern TypeInfo t2131_TI;
#include "t2131MD.h"
extern MethodInfo m11628_MI;
extern MethodInfo m11624_MI;
extern MethodInfo m11625_MI;


extern MethodInfo m11619_MI;
extern "C" void m11619 (t2130 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2748, &m7888_MI);
		m11624(__this, L_0, &m11624_MI);
		m4499(__this, ((int32_t)-2146233071), &m4499_MI);
		return;
	}
}
extern MethodInfo m11620_MI;
extern "C" void m11620 (t2130 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11624(__this, L_0, &m11624_MI);
		m4499(__this, ((int32_t)-2146233071), &m4499_MI);
		return;
	}
}
extern MethodInfo m11621_MI;
extern "C" void m11621 (t2130 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11625(__this, L_0, L_1, &m11625_MI);
		return;
	}
}
extern MethodInfo m11622_MI;
extern "C" t2* m11622 (t2130 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = m11628(__this, &m11628_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2747, &m7888_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1251(NULL, L_3, L_4, L_5, &m1251_MI);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11623_MI;
extern "C" void m11623 (t2131 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2750, &m7888_MI);
		m11615(__this, L_0, &m11615_MI);
		m4499(__this, ((int32_t)-2146233070), &m4499_MI);
		return;
	}
}
extern "C" void m11624 (t2131 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11615(__this, L_0, &m11615_MI);
		m4499(__this, ((int32_t)-2146233070), &m4499_MI);
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m11625 (t2131 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	static bool m11625_init;
	if (!m11625_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m11625_init = true;
	}
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11616(__this, L_0, L_1, &m11616_MI);
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral2751, &m5782_MI);
		__this->f11 = L_3;
		t1106 * L_4 = p0;
		t2* L_5 = m5782(L_4, (t2*) &_stringLiteral2752, &m5782_MI);
		__this->f12 = L_5;
		t1106 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		t9 * L_8 = m5773(L_6, (t2*) &_stringLiteral2753, L_7, &m5773_MI);
		__this->f13 = ((t737*)Castclass(L_8, t737_TI_var));
		return;
	}
}
extern MethodInfo m11626_MI;
extern "C" void m11626 (t2131 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		m11614(__this, &m11614_MI);
		t2* L_0 = p0;
		__this->f11 = L_0;
		t2* L_1 = p1;
		__this->f12 = L_1;
		m4499(__this, ((int32_t)-2146233070), &m4499_MI);
		return;
	}
}
extern MethodInfo m11627_MI;
extern "C" void m11627 (t2131 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m4539(__this, L_0, L_1, &m4539_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5785(L_2, (t2*) &_stringLiteral2751, L_3, &m5785_MI);
		t1106 * L_4 = p0;
		t2* L_5 = (__this->f12);
		m5785(L_4, (t2*) &_stringLiteral2752, L_5, &m5785_MI);
		t1106 * L_6 = p0;
		t737* L_7 = (__this->f13);
		m5785(L_6, (t2*) &_stringLiteral2753, (t9 *)(t9 *)L_7, &m5785_MI);
		return;
	}
}
extern "C" t2* m11628 (t2131 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = m1131(__this, &m1131_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2749, &m7888_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1251(NULL, L_3, L_4, L_5, &m1251_MI);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11629_MI;
extern "C" void m11629 (t2132 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2755, &m7888_MI);
		m11624(__this, L_0, &m11624_MI);
		m4499(__this, ((int32_t)-2146233069), &m4499_MI);
		return;
	}
}
extern "C" void m11630 (t2132 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11624(__this, L_0, &m11624_MI);
		m4499(__this, ((int32_t)-2146233069), &m4499_MI);
		return;
	}
}
extern MethodInfo m11631_MI;
extern "C" void m11631 (t2132 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11625(__this, L_0, L_1, &m11625_MI);
		return;
	}
}
extern "C" void m11632 (t2132 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		m11626(__this, L_0, L_1, &m11626_MI);
		m4499(__this, ((int32_t)-2146233069), &m4499_MI);
		return;
	}
}
extern MethodInfo m11633_MI;
extern "C" t2* m11633 (t2132 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = m11628(__this, &m11628_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2754, &m7888_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1251(NULL, L_3, L_4, L_5, &m1251_MI);
		return L_6;
	}
}
#include "t2133.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2133_TI;
#include "t2133MD.h"



extern MethodInfo m11634_MI;
extern "C" void m11634 (t2133 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t2134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2134_TI;
#include "t2134MD.h"

#include "t1030.h"


extern MethodInfo m11635_MI;
extern "C" void m11635 (t2134 * __this, t1030 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1030 * L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m11636_MI;
extern "C" t1030 * m11636 (t2134 * __this, MethodInfo* method)
{
	{
		t1030 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11637_MI;
extern "C" int32_t m11637 (t2134 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#include "t2135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2135_TI;
#include "t2135MD.h"

#include "t1760.h"
#include "t1767.h"
#include "t837.h"
#include "t930.h"
#include "t732.h"
#include "t1804.h"
#include "t1176.h"
#include "t844.h"
#include "t1826.h"
extern TypeInfo t1030_TI;
extern TypeInfo t1760_TI;
extern TypeInfo t1767_TI;
extern TypeInfo t837_TI;
extern TypeInfo t930_TI;
extern TypeInfo t2136_TI;
extern TypeInfo t1804_TI;
extern TypeInfo t732_TI;
extern TypeInfo t1176_TI;
extern TypeInfo t121_TI;
extern TypeInfo t844_TI;
extern TypeInfo t835_TI;
extern TypeInfo t934_TI;
extern TypeInfo t1826_TI;
#include "t1030MD.h"
#include "t1767MD.h"
#include "t837MD.h"
#include "t930MD.h"
#include "t1804MD.h"
#include "t1176MD.h"
#include "t844MD.h"
#include "t835MD.h"
extern Il2CppType t1030_0_0_0;
extern Il2CppType t2135_0_0_0;
extern Il2CppType t732_0_0_0;
extern MethodInfo m4647_MI;
extern MethodInfo m9682_MI;
extern MethodInfo m9572_MI;
extern MethodInfo m9752_MI;
extern MethodInfo m7851_MI;
extern MethodInfo m4515_MI;
extern MethodInfo m11639_MI;
extern MethodInfo m12189_MI;
extern MethodInfo m11640_MI;
extern MethodInfo m11641_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m11644_MI;
extern MethodInfo m9487_MI;
extern MethodInfo m11642_MI;
extern MethodInfo m7737_MI;
extern MethodInfo m7801_MI;
extern MethodInfo m11650_MI;
extern MethodInfo m7147_MI;
extern MethodInfo m5923_MI;
extern MethodInfo m7146_MI;
extern MethodInfo m5779_MI;
extern MethodInfo m5778_MI;
extern MethodInfo m11649_MI;
extern MethodInfo m5764_MI;
extern MethodInfo m5919_MI;
extern MethodInfo m5788_MI;
extern MethodInfo m12190_MI;
extern MethodInfo m11647_MI;
extern MethodInfo m11646_MI;
extern MethodInfo m4469_MI;
extern MethodInfo m9587_MI;
extern MethodInfo m4470_MI;
extern MethodInfo m12191_MI;
extern MethodInfo m12061_MI;
extern MethodInfo m4466_MI;
extern MethodInfo m4441_MI;
extern MethodInfo m7831_MI;
extern MethodInfo m7830_MI;
extern MethodInfo m4472_MI;
extern MethodInfo m11648_MI;


extern MethodInfo m11638_MI;
extern "C" void m11638 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1030_0_0_0), &m329_MI);
		((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f1 = L_0;
		t1030 * L_1 = (t1030 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1030_TI));
		m4647(L_1, ((int32_t)32767), &m4647_MI);
		((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f2 = L_1;
		return;
	}
}
extern "C" bool m11639 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t126 *)IsInst(L_0, InitializedTypeInfo(&t126_TI)));
		t126 * L_1 = V_0;
		if (((t2139 *)IsInst(L_1, InitializedTypeInfo(&t2139_TI))))
		{
			goto IL_0017;
		}
	}
	{
		t126 * L_2 = V_0;
		if (!((t1760 *)IsInst(L_2, InitializedTypeInfo(&t1760_TI))))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		t9 * L_3 = p0;
		if (!((t126 *)IsInst(L_3, InitializedTypeInfo(&t126_TI))))
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t1351 * L_4 = ((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t1351 * L_6 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f0 = L_6;
	}

IL_003e:
	{
		t9 * L_7 = p0;
		t126 * L_8 = m2550(L_7, &m2550_MI);
		t1351 * L_9 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t1351 * L_10 = ((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f0;
		return ((((int32_t)((((t9*)(t1351 *)L_9) == ((t9*)(t1351 *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t158* m11640 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	typedef t158* (*m11640_ftn) (t9 *, t126 *, bool);
	static m11640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11640_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11641 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	static bool m11641_init;
	if (!m11641_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11641_init = true;
	}
	t158* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = (t158*)NULL;
		t9 * L_0 = p0;
		if (!((t1767 *)IsInst(L_0, InitializedTypeInfo(&t1767_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t9 * L_1 = p0;
		t158* L_2 = m9682(((t1767 *)Castclass(L_1, InitializedTypeInfo(&t1767_TI))), &m9682_MI);
		V_0 = L_2;
		goto IL_0058;
	}

IL_0018:
	{
		t9 * L_3 = p0;
		if (!((t837 *)IsInst(L_3, InitializedTypeInfo(&t837_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t9 * L_4 = p0;
		t158* L_5 = m9572(((t837 *)Castclass(L_4, InitializedTypeInfo(&t837_TI))), &m9572_MI);
		V_0 = L_5;
		goto IL_0058;
	}

IL_002e:
	{
		t9 * L_6 = p0;
		if (!((t930 *)IsInst(L_6, InitializedTypeInfo(&t930_TI))))
		{
			goto IL_0044;
		}
	}
	{
		t9 * L_7 = p0;
		t158* L_8 = m9752(((t930 *)Castclass(L_7, InitializedTypeInfo(&t930_TI))), &m9752_MI);
		V_0 = L_8;
		goto IL_0058;
	}

IL_0044:
	{
		t9 * L_9 = p0;
		if (!((t126 *)IsInst(L_9, InitializedTypeInfo(&t126_TI))))
		{
			goto IL_0058;
		}
	}
	{
		t9 * L_10 = p0;
		t158* L_11 = m7851(((t126 *)Castclass(L_10, InitializedTypeInfo(&t126_TI))), &m7851_MI);
		V_0 = L_11;
	}

IL_0058:
	{
		t126 * L_12 = p1;
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		t158* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		V_1 = 0;
		goto IL_008b;
	}

IL_0062:
	{
		t126 * L_14 = p1;
		t158* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		t126 * L_18 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_15, L_17)), &m2550_MI);
		bool L_19 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_14, L_18);
		if (!L_19)
		{
			goto IL_0087;
		}
	}
	{
		t158* L_20 = V_0;
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_20)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		t158* L_21 = V_0;
		return L_21;
	}

IL_007a:
	{
		t158* L_22 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t158* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		ArrayElementTypeCheck (L_22, (*(t9 **)(t9 **)SZArrayLdElema(L_23, L_25)));
		*((t9 **)(t9 **)SZArrayLdElema(L_22, 0)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_23, L_25));
		return L_22;
	}

IL_0087:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_27 = V_1;
		t158* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0062;
		}
	}
	{
		return ((t158*)SZArrayNew(t158_TI_var, 0));
	}

IL_0098:
	{
		t158* L_29 = V_0;
		return L_29;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11642 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	static bool m11642_init;
	if (!m11642_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11642_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	t158* V_2 = {0};
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_1 = m11639(NULL, L_0, &m11639_MI);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t9 * L_2 = p0;
		t126 * L_3 = p1;
		t158* L_4 = (t158*)InterfaceFuncInvoker2< t158*, t126 *, bool >::Invoke(&m12189_MI, L_2, L_3, 1);
		V_0 = L_4;
		goto IL_001c;
	}

IL_0013:
	{
		t9 * L_5 = p0;
		t126 * L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_7 = m11640(NULL, L_5, L_6, 0, &m11640_MI);
		V_0 = L_7;
	}

IL_001c:
	{
		t9 * L_8 = p0;
		t126 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_10 = m11641(NULL, L_8, L_9, &m11641_MI);
		V_1 = L_10;
		t158* L_11 = V_1;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		t158* L_12 = V_0;
		t158* L_13 = V_1;
		V_2 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))+(int32_t)(((int32_t)(((t121 *)L_13)->max_length)))))));
		t158* L_14 = V_0;
		t158* L_15 = V_2;
		t158* L_16 = V_0;
		m5982(NULL, (t121 *)(t121 *)L_14, (t121 *)(t121 *)L_15, (((int32_t)(((t121 *)L_16)->max_length))), &m5982_MI);
		t158* L_17 = V_1;
		t158* L_18 = V_2;
		t158* L_19 = V_0;
		t158* L_20 = V_1;
		m7752(NULL, (t121 *)(t121 *)L_17, 0, (t121 *)(t121 *)L_18, (((int32_t)(((t121 *)L_19)->max_length))), (((int32_t)(((t121 *)L_20)->max_length))), &m7752_MI);
		t158* L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		t158* L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m11643_MI;
extern "C" t732 * m11643 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	t158* V_0 = {0};
	t2* V_1 = {0};
	{
		t9 * L_0 = p0;
		t126 * L_1 = p1;
		bool L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_3 = m11644(NULL, L_0, L_1, L_2, &m11644_MI);
		V_0 = L_3;
		t158* L_4 = V_0;
		if ((((int32_t)(((t121 *)L_4)->max_length))))
		{
			goto IL_0010;
		}
	}
	{
		return (t732 *)NULL;
	}

IL_0010:
	{
		t158* L_5 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (t2*) &_stringLiteral2756;
		t2* L_6 = V_1;
		t9 * L_7 = p0;
		t126 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m1251(NULL, L_6, L_7, L_8, &m1251_MI);
		V_1 = L_9;
		t2* L_10 = V_1;
		t1804 * L_11 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9487(L_11, L_10, &m9487_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_002c:
	{
		t158* L_12 = V_0;
		int32_t L_13 = 0;
		return ((t732 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_12, L_13)), InitializedTypeInfo(&t732_TI)));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11644 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	static bool m11644_init;
	if (!m11644_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11644_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	t1030 * V_2 = {0};
	int32_t V_3 = 0;
	t1164 * V_4 = {0};
	t1176 * V_5 = {0};
	t9 * V_6 = {0};
	int32_t V_7 = 0;
	t9 * V_8 = {0};
	t158* V_9 = {0};
	int32_t V_10 = 0;
	t1030 * V_11 = {0};
	t126 * V_12 = {0};
	t2134 * V_13 = {0};
	t158* V_14 = {0};
	int32_t G_B23_0 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1408, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1072, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t126 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2135_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_4) == ((t9*)(t126 *)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		p1 = (t126 *)NULL;
	}

IL_002e:
	{
		t9 * L_6 = p0;
		t126 * L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_8 = m11642(NULL, L_6, L_7, &m11642_MI);
		V_1 = L_8;
		bool L_9 = p2;
		if (L_9)
		{
			goto IL_0092;
		}
	}
	{
		t158* L_10 = V_1;
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_10)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		t126 * L_11 = p1;
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		t126 * L_12 = p1;
		t158* L_13 = V_1;
		int32_t L_14 = 0;
		t126 * L_15 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_13, L_14)), &m2550_MI);
		bool L_16 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_12, L_15);
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		t126 * L_17 = p1;
		t121 * L_18 = m7737(NULL, L_17, 1, &m7737_MI);
		V_0 = ((t158*)Castclass(L_18, t158_TI_var));
		t158* L_19 = V_0;
		t158* L_20 = V_1;
		int32_t L_21 = 0;
		ArrayElementTypeCheck (L_19, (*(t9 **)(t9 **)SZArrayLdElema(L_20, L_21)));
		*((t9 **)(t9 **)SZArrayLdElema(L_19, 0)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_20, L_21));
		goto IL_0074;
	}

IL_0067:
	{
		t126 * L_22 = p1;
		t121 * L_23 = m7737(NULL, L_22, 0, &m7737_MI);
		V_0 = ((t158*)Castclass(L_23, t158_TI_var));
	}

IL_0074:
	{
		goto IL_0090;
	}

IL_0076:
	{
		t158* L_24 = V_1;
		int32_t L_25 = 0;
		t126 * L_26 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_24, L_25)), &m2550_MI);
		t121 * L_27 = m7737(NULL, L_26, 1, &m7737_MI);
		V_0 = ((t158*)Castclass(L_27, t158_TI_var));
		t158* L_28 = V_0;
		t158* L_29 = V_1;
		int32_t L_30 = 0;
		ArrayElementTypeCheck (L_28, (*(t9 **)(t9 **)SZArrayLdElema(L_29, L_30)));
		*((t9 **)(t9 **)SZArrayLdElema(L_28, 0)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_29, L_30));
	}

IL_0090:
	{
		t158* L_31 = V_0;
		return L_31;
	}

IL_0092:
	{
		t126 * L_32 = p1;
		if (!L_32)
		{
			goto IL_00b4;
		}
	}
	{
		t126 * L_33 = p1;
		bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7801_MI, L_33);
		if (!L_34)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_35 = p2;
		if (!L_35)
		{
			goto IL_00b4;
		}
	}
	{
		t126 * L_36 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t1030 * L_37 = m11650(NULL, L_36, &m11650_MI);
		V_2 = L_37;
		t1030 * L_38 = V_2;
		bool L_39 = m7147(L_38, &m7147_MI);
		if (L_39)
		{
			goto IL_00b4;
		}
	}
	{
		p2 = 0;
	}

IL_00b4:
	{
		t158* L_40 = V_1;
		if ((((int32_t)(((int32_t)(((t121 *)L_40)->max_length)))) >= ((int32_t)((int32_t)16))))
		{
			goto IL_00c0;
		}
	}
	{
		t158* L_41 = V_1;
		G_B23_0 = (((int32_t)(((t121 *)L_41)->max_length)));
		goto IL_00c2;
	}

IL_00c0:
	{
		G_B23_0 = ((int32_t)16);
	}

IL_00c2:
	{
		V_3 = G_B23_0;
		int32_t L_42 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_43 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5960(L_43, L_42, &m5960_MI);
		V_4 = L_43;
		int32_t L_44 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_45 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5923(L_45, L_44, &m5923_MI);
		V_5 = L_45;
		t9 * L_46 = p0;
		V_6 = L_46;
		V_7 = 0;
	}

IL_00d9:
	{
		t158* L_47 = V_1;
		V_9 = L_47;
		V_10 = 0;
		goto IL_017d;
	}

IL_00e4:
	{
		t158* L_48 = V_9;
		int32_t L_49 = V_10;
		int32_t L_50 = L_49;
		V_8 = (*(t9 **)(t9 **)SZArrayLdElema(L_48, L_50));
		t9 * L_51 = V_8;
		t126 * L_52 = m2550(L_51, &m2550_MI);
		V_12 = L_52;
		t126 * L_53 = p1;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		t126 * L_54 = p1;
		t126 * L_55 = V_12;
		bool L_56 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_54, L_55);
		if (L_56)
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0177;
	}

IL_0106:
	{
		t1164 * L_57 = V_4;
		t126 * L_58 = V_12;
		t9 * L_59 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_57, L_58);
		V_13 = ((t2134 *)Castclass(L_59, InitializedTypeInfo(&t2134_TI)));
		t2134 * L_60 = V_13;
		if (!L_60)
		{
			goto IL_0125;
		}
	}
	{
		t2134 * L_61 = V_13;
		t1030 * L_62 = m11636(L_61, &m11636_MI);
		V_11 = L_62;
		goto IL_012e;
	}

IL_0125:
	{
		t126 * L_63 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t1030 * L_64 = m11650(NULL, L_63, &m11650_MI);
		V_11 = L_64;
	}

IL_012e:
	{
		int32_t L_65 = V_7;
		if (!L_65)
		{
			goto IL_013b;
		}
	}
	{
		t1030 * L_66 = V_11;
		bool L_67 = m7147(L_66, &m7147_MI);
		if (!L_67)
		{
			goto IL_0161;
		}
	}

IL_013b:
	{
		t1030 * L_68 = V_11;
		bool L_69 = m7146(L_68, &m7146_MI);
		if (L_69)
		{
			goto IL_0157;
		}
	}
	{
		t2134 * L_70 = V_13;
		if (!L_70)
		{
			goto IL_0157;
		}
	}
	{
		t2134 * L_71 = V_13;
		if (!L_71)
		{
			goto IL_0161;
		}
	}
	{
		t2134 * L_72 = V_13;
		int32_t L_73 = m11637(L_72, &m11637_MI);
		int32_t L_74 = V_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)L_74))))
		{
			goto IL_0161;
		}
	}

IL_0157:
	{
		t1176 * L_75 = V_5;
		t9 * L_76 = V_8;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_75, L_76);
	}

IL_0161:
	{
		t2134 * L_77 = V_13;
		if (L_77)
		{
			goto IL_0177;
		}
	}
	{
		t1164 * L_78 = V_4;
		t126 * L_79 = V_12;
		t1030 * L_80 = V_11;
		int32_t L_81 = V_7;
		t2134 * L_82 = (t2134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2134_TI));
		m11635(L_82, L_80, L_81, &m11635_MI);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5778_MI, L_78, L_79, L_82);
	}

IL_0177:
	{
		int32_t L_83 = V_10;
		V_10 = ((int32_t)((int32_t)L_83+(int32_t)1));
	}

IL_017d:
	{
		int32_t L_84 = V_10;
		t158* L_85 = V_9;
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)(((t121 *)L_85)->max_length))))))
		{
			goto IL_00e4;
		}
	}
	{
		t9 * L_86 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t9 * L_87 = m11649(NULL, L_86, &m11649_MI);
		t9 * L_88 = L_87;
		V_6 = L_88;
		if (!L_88)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_89 = V_7;
		V_7 = ((int32_t)((int32_t)L_89+(int32_t)1));
		t9 * L_90 = V_6;
		t126 * L_91 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_92 = m11642(NULL, L_90, L_91, &m11642_MI);
		V_1 = L_92;
	}

IL_01a3:
	{
		bool L_93 = p2;
		if (!L_93)
		{
			goto IL_01ad;
		}
	}
	{
		t9 * L_94 = V_6;
		if (L_94)
		{
			goto IL_00d9;
		}
	}

IL_01ad:
	{
		V_14 = (t158*)NULL;
		t126 * L_95 = p1;
		if (!L_95)
		{
			goto IL_01bb;
		}
	}
	{
		t126 * L_96 = p1;
		bool L_97 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_96);
		if (!L_97)
		{
			goto IL_01da;
		}
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_98 = m329(NULL, LoadTypeToken(&t732_0_0_0), &m329_MI);
		t1176 * L_99 = V_5;
		int32_t L_100 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_99);
		t121 * L_101 = m7737(NULL, L_98, L_100, &m7737_MI);
		V_14 = ((t158*)Castclass(L_101, t158_TI_var));
		goto IL_01ee;
	}

IL_01da:
	{
		t126 * L_102 = p1;
		t1176 * L_103 = V_5;
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_103);
		t121 * L_105 = m7737(NULL, L_102, L_104, &m7737_MI);
		V_14 = ((t158*)IsInst(L_105, t158_TI_var));
	}

IL_01ee:
	{
		t1176 * L_106 = V_5;
		t158* L_107 = V_14;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5919_MI, L_106, (t121 *)(t121 *)L_107, 0);
		t158* L_108 = V_14;
		return L_108;
	}
}
extern MethodInfo m11645_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m11645 (t9 * __this , t9 * p0, bool p1, MethodInfo* method)
{
	static bool m11645_init;
	if (!m11645_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11645_init = true;
	}
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1408, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = p1;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_4 = m11642(NULL, L_3, (t126 *)NULL, &m11642_MI);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_4);
		return ((t158*)Castclass(L_5, t158_TI_var));
	}

IL_0023:
	{
		t9 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2135_0_0_0), &m329_MI);
		bool L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_9 = m11644(NULL, L_6, L_7, L_8, &m11644_MI);
		return L_9;
	}
}
extern "C" bool m11646 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	t158* V_0 = {0};
	int32_t V_1 = 0;
	t9 * V_2 = {0};
	{
		t126 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1072, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_3 = m11639(NULL, L_2, &m11639_MI);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t9 * L_4 = p0;
		t126 * L_5 = p1;
		bool L_6 = p2;
		bool L_7 = (bool)InterfaceFuncInvoker2< bool, t126 *, bool >::Invoke(&m12190_MI, L_4, L_5, L_6);
		return L_7;
	}

IL_001f:
	{
		t9 * L_8 = p0;
		t126 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_10 = m11647(NULL, L_8, L_9, &m11647_MI);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		return 1;
	}

IL_002a:
	{
		t9 * L_11 = p0;
		t126 * L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_13 = m11641(NULL, L_11, L_12, &m11641_MI);
		V_0 = L_13;
		t158* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		t126 * L_15 = p1;
		t158* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		t126 * L_19 = m2550((*(t9 **)(t9 **)SZArrayLdElema(L_16, L_18)), &m2550_MI);
		bool L_20 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_15, L_19);
		if (!L_20)
		{
			goto IL_004b;
		}
	}
	{
		return 1;
	}

IL_004b:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_22 = V_1;
		t158* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t121 *)L_23)->max_length))))))
		{
			goto IL_0039;
		}
	}

IL_0055:
	{
		bool L_24 = p2;
		if (!L_24)
		{
			goto IL_006b;
		}
	}
	{
		t9 * L_25 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t9 * L_26 = m11649(NULL, L_25, &m11649_MI);
		t9 * L_27 = L_26;
		V_2 = L_27;
		if (!L_27)
		{
			goto IL_006b;
		}
	}
	{
		t9 * L_28 = V_2;
		t126 * L_29 = p1;
		bool L_30 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_31 = m11646(NULL, L_28, L_29, L_30, &m11646_MI);
		return L_31;
	}

IL_006b:
	{
		return 0;
	}
}
extern "C" bool m11647 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	typedef bool (*m11647_ftn) (t9 *, t126 *);
	static m11647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11647_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t152_TI_var;
extern "C" t844 * m11648 (t9 * __this , t844 * p0, MethodInfo* method)
{
	static bool m11648_init;
	if (!m11648_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m11648_init = true;
	}
	t835 * V_0 = {0};
	t835 * V_1 = {0};
	t934* V_2 = {0};
	t152* V_3 = {0};
	int32_t V_4 = 0;
	{
		t844 * L_0 = p0;
		t835 * L_1 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4469_MI, L_0, 1);
		V_0 = L_1;
		t835 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		t835 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9587_MI, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0013:
	{
		t844 * L_5 = p0;
		t835 * L_6 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4470_MI, L_5, 1);
		V_0 = L_6;
	}

IL_001b:
	{
		t835 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		t835 * L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9587_MI, L_8);
		if (L_9)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (t844 *)NULL;
	}

IL_0028:
	{
		t835 * L_10 = V_0;
		t835 * L_11 = (t835 *)VirtFuncInvoker0< t835 * >::Invoke(&m12191_MI, L_10);
		V_1 = L_11;
		t835 * L_12 = V_1;
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		t835 * L_13 = V_1;
		t835 * L_14 = V_0;
		if ((((t9*)(t835 *)L_13) == ((t9*)(t835 *)L_14)))
		{
			goto IL_009f;
		}
	}
	{
		t844 * L_15 = p0;
		t934* L_16 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m12061_MI, L_15);
		V_2 = L_16;
		t934* L_17 = V_2;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		t934* L_18 = V_2;
		if ((((int32_t)(((int32_t)(((t121 *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		t934* L_19 = V_2;
		V_3 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_19)->max_length)))));
		V_4 = 0;
		goto IL_0067;
	}

IL_0054:
	{
		t152* L_20 = V_3;
		int32_t L_21 = V_4;
		t934* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = L_23;
		t126 * L_25 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_22, L_24)));
		ArrayElementTypeCheck (L_20, L_25);
		*((t126 **)(t126 **)SZArrayLdElema(L_20, L_21)) = (t126 *)L_25;
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_4;
		t152* L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0054;
		}
	}
	{
		t835 * L_29 = V_1;
		t126 * L_30 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_29);
		t844 * L_31 = p0;
		t2* L_32 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_31);
		t844 * L_33 = p0;
		t126 * L_34 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4441_MI, L_33);
		t152* L_35 = V_3;
		t844 * L_36 = (t844 *)VirtFuncInvoker3< t844 *, t2*, t126 *, t152* >::Invoke(&m7831_MI, L_30, L_32, L_34, L_35);
		return L_36;
	}

IL_0087:
	{
		t835 * L_37 = V_1;
		t126 * L_38 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_37);
		t844 * L_39 = p0;
		t2* L_40 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_39);
		t844 * L_41 = p0;
		t126 * L_42 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4441_MI, L_41);
		t844 * L_43 = (t844 *)VirtFuncInvoker2< t844 *, t2*, t126 * >::Invoke(&m7830_MI, L_38, L_40, L_42);
		return L_43;
	}

IL_009f:
	{
		return (t844 *)NULL;
	}
}
extern "C" t9 * m11649 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t835 * V_0 = {0};
	t835 * V_1 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (t9 *)NULL;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		if (!((t126 *)IsInst(L_1, InitializedTypeInfo(&t126_TI))))
		{
			goto IL_0019;
		}
	}
	{
		t9 * L_2 = p0;
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, ((t126 *)Castclass(L_2, InitializedTypeInfo(&t126_TI))));
		return L_3;
	}

IL_0019:
	{
		V_0 = (t835 *)NULL;
		t9 * L_4 = p0;
		if (!((t1826 *)IsInst(L_4, InitializedTypeInfo(&t1826_TI))))
		{
			goto IL_002f;
		}
	}
	{
		t9 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t844 * L_6 = m11648(NULL, ((t1826 *)Castclass(L_5, InitializedTypeInfo(&t1826_TI))), &m11648_MI);
		return L_6;
	}

IL_002f:
	{
		t9 * L_7 = p0;
		if (!((t1767 *)IsInst(L_7, InitializedTypeInfo(&t1767_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t9 * L_8 = p0;
		V_0 = ((t835 *)Castclass(L_8, InitializedTypeInfo(&t835_TI)));
	}

IL_003e:
	{
		t835 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		t835 * L_10 = V_0;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9587_MI, L_10);
		if (L_11)
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (t9 *)NULL;
	}

IL_004b:
	{
		t835 * L_12 = V_0;
		t835 * L_13 = (t835 *)VirtFuncInvoker0< t835 * >::Invoke(&m12191_MI, L_12);
		V_1 = L_13;
		t835 * L_14 = V_1;
		t835 * L_15 = V_0;
		if ((!(((t9*)(t835 *)L_14) == ((t9*)(t835 *)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		return (t9 *)NULL;
	}

IL_0058:
	{
		t835 * L_16 = V_1;
		return L_16;
	}
}
extern "C" t1030 * m11650 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t1030 * V_0 = {0};
	t158* V_1 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1030_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t1030 * L_2 = (t1030 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1030_TI));
		m4647(L_2, 4, &m4647_MI);
		return L_2;
	}

IL_0014:
	{
		V_0 = (t1030 *)NULL;
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t126 * L_4 = ((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f1;
		t158* L_5 = m11644(NULL, L_3, L_4, 0, &m11644_MI);
		V_1 = L_5;
		t158* L_6 = V_1;
		if ((((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0047;
		}
	}
	{
		t126 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		t126 * L_9 = p0;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t1030 * L_11 = m11650(NULL, L_10, &m11650_MI);
		V_0 = L_11;
	}

IL_003c:
	{
		t1030 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		t1030 * L_13 = V_0;
		return L_13;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t1030 * L_14 = ((t2135_SFs*)InitializedTypeInfo(&t2135_TI)->static_fields)->f2;
		return L_14;
	}

IL_0047:
	{
		t158* L_15 = V_1;
		if ((((int32_t)(((int32_t)(((t121 *)L_15)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		t897 * L_16 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_16, (t2*) &_stringLiteral2757, &m4354_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0058:
	{
		t158* L_17 = V_1;
		int32_t L_18 = 0;
		return ((t1030 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_17, L_18)), InitializedTypeInfo(&t1030_TI)));
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11651_MI;
extern "C" void m11651 (t9 * __this , MethodInfo* method)
{
	{
		return;
	}
}
#include "t2138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2138_TI;
#include "t2138MD.h"



extern MethodInfo m11652_MI;
extern "C" void m11652 (t2138 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1578.h"
#include "t1574.h"
#include "t1577.h"
#include "t1575.h"
#include "t673.h"
#include "t1816.h"
#include "t1797.h"
extern TypeInfo t935_TI;
extern TypeInfo t673_TI;
extern TypeInfo t1816_TI;
extern TypeInfo t1797_TI;
#include "t673MD.h"
#include "t1816MD.h"
extern Il2CppType t1812_0_0_0;
extern Il2CppType t673_0_0_0;
extern Il2CppType t344_0_0_0;
extern MethodInfo m11682_MI;
extern MethodInfo m11692_MI;
extern MethodInfo m11700_MI;
extern MethodInfo m7847_MI;
extern MethodInfo m11698_MI;
extern MethodInfo m7791_MI;
extern MethodInfo m11678_MI;
extern MethodInfo m11653_MI;
extern MethodInfo m11658_MI;
extern MethodInfo m9586_MI;
extern MethodInfo m9486_MI;
extern MethodInfo m11702_MI;
extern MethodInfo m11657_MI;
extern MethodInfo m11659_MI;
extern MethodInfo m11662_MI;
extern MethodInfo m11665_MI;
extern MethodInfo m9552_MI;
extern MethodInfo m11668_MI;
extern MethodInfo m12192_MI;
extern MethodInfo m11672_MI;
extern MethodInfo m11673_MI;
extern MethodInfo m11674_MI;
extern MethodInfo m7834_MI;
extern MethodInfo m7819_MI;
extern MethodInfo m12193_MI;
extern MethodInfo m11684_MI;
extern MethodInfo m12194_MI;
extern MethodInfo m7110_MI;
extern MethodInfo m7107_MI;
extern MethodInfo m7875_MI;
extern MethodInfo m4465_MI;
extern MethodInfo m9742_MI;
extern MethodInfo m7109_MI;
extern MethodInfo m11703_MI;
extern MethodInfo m11661_MI;
extern MethodInfo m4460_MI;
extern MethodInfo m4461_MI;
extern MethodInfo m11916_MI;
extern MethodInfo m7845_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m5760_MI;


extern "C" int32_t m11653 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef int32_t (*m11653_ftn) (t126 *);
	static m11653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11653_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_attributes(System.Type)");
	return _il2cpp_icall_func(p0);
}
extern "C" t833 * m11654 (t2139 * __this, MethodInfo* method)
{
	t833 * V_0 = {0};
	int32_t V_1 = {0};
	t833 * V_2 = {0};
	{
		V_0 = (t833 *)NULL;
		t2138 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		t2138 * L_1 = (t2138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2138_TI));
		m11652(L_1, &m11652_MI);
		__this->f8 = L_1;
	}

IL_0015:
	{
		t2138 * L_2 = (__this->f8);
		t833 * L_3 = (L_2->f1);
		t833 * L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		t2138 * L_5 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_6 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		t833 * L_7 = (t833 *)VirtFuncInvoker5< t833 *, int32_t, t939 *, int32_t, t152*, t941* >::Invoke(&m7839_MI, __this, ((int32_t)52), (t939 *)NULL, 3, L_6, (t941*)(t941*)NULL);
		t833 * L_8 = L_7;
		V_2 = L_8;
		L_5->f1 = L_8;
		t833 * L_9 = V_2;
		V_0 = L_9;
	}

IL_0043:
	{
		t833 * L_10 = V_0;
		return L_10;
	}
}
extern MethodInfo m11655_MI;
extern "C" int32_t m11655 (t2139 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11653(NULL, __this, &m11653_MI);
		return L_0;
	}
}
extern MethodInfo m11656_MI;
extern TypeInfo* t1812_TI_var;
extern "C" t833 * m11656 (t2139 * __this, int32_t p0, t939 * p1, int32_t p2, t152* p3, t941* p4, MethodInfo* method)
{
	static bool m11656_init;
	if (!m11656_init)
	{
		t1812_TI_var = il2cpp_codegen_class_from_type(&t1812_0_0_0);
		m11656_init = true;
	}
	t932* V_0 = {0};
	t833 * V_1 = {0};
	t1812* V_2 = {0};
	int32_t V_3 = 0;
	t833 * V_4 = {0};
	t932* V_5 = {0};
	int32_t V_6 = 0;
	t833 * V_7 = {0};
	t932* V_8 = {0};
	int32_t V_9 = 0;
	{
		int32_t L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		p0 = ((int32_t)20);
	}

IL_0009:
	{
		int32_t L_1 = p0;
		t932* L_2 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m11658_MI, __this, L_1);
		V_0 = L_2;
		V_1 = (t833 *)NULL;
		V_3 = 0;
		t932* L_3 = V_0;
		V_5 = L_3;
		V_6 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		t932* L_4 = V_5;
		int32_t L_5 = V_6;
		int32_t L_6 = L_5;
		V_4 = (*(t833 **)(t833 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		t833 * L_8 = V_4;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_8);
		int32_t L_10 = p2;
		int32_t L_11 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)L_10))) == ((int32_t)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_003d;
	}

IL_0036:
	{
		t833 * L_12 = V_4;
		V_1 = L_12;
		int32_t L_13 = V_3;
		V_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_6;
		V_6 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_15 = V_6;
		t932* L_16 = V_5;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_17 = V_3;
		if (L_17)
		{
			goto IL_0050;
		}
	}
	{
		return (t833 *)NULL;
	}

IL_0050:
	{
		t152* L_18 = p3;
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		t1804 * L_20 = (t1804 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1804_TI));
		m9486(L_20, &m9486_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_005e:
	{
		t833 * L_21 = V_1;
		t920 * L_22 = m11702(__this, L_21, &m11702_MI);
		return ((t833 *)Castclass(L_22, InitializedTypeInfo(&t833_TI)));
	}

IL_006b:
	{
		int32_t L_23 = V_3;
		V_2 = ((t1812*)SZArrayNew(t1812_TI_var, L_23));
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		t1812* L_25 = V_2;
		t833 * L_26 = V_1;
		ArrayElementTypeCheck (L_25, L_26);
		*((t920 **)(t920 **)SZArrayLdElema(L_25, 0)) = (t920 *)L_26;
		goto IL_00b6;
	}

IL_007c:
	{
		V_3 = 0;
		t932* L_27 = V_0;
		V_8 = L_27;
		V_9 = 0;
		goto IL_00ae;
	}

IL_0086:
	{
		t932* L_28 = V_8;
		int32_t L_29 = V_9;
		int32_t L_30 = L_29;
		V_7 = (*(t833 **)(t833 **)SZArrayLdElema(L_28, L_30));
		int32_t L_31 = p2;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		t833 * L_32 = V_7;
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_32);
		int32_t L_34 = p2;
		int32_t L_35 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_33&(int32_t)L_34))) == ((int32_t)L_35)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_00a8;
	}

IL_009f:
	{
		t1812* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		t833 * L_39 = V_7;
		ArrayElementTypeCheck (L_36, L_39);
		*((t920 **)(t920 **)SZArrayLdElema(L_36, L_38)) = (t920 *)L_39;
	}

IL_00a8:
	{
		int32_t L_40 = V_9;
		V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_41 = V_9;
		t932* L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((t121 *)L_42)->max_length))))))
		{
			goto IL_0086;
		}
	}

IL_00b6:
	{
		t939 * L_43 = p1;
		if (L_43)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_44 = m9549(NULL, &m9549_MI);
		p1 = L_44;
	}

IL_00c2:
	{
		t939 * L_45 = p1;
		int32_t L_46 = p0;
		t1812* L_47 = V_2;
		t152* L_48 = p3;
		t941* L_49 = p4;
		t920 * L_50 = (t920 *)VirtFuncInvoker4< t920 *, int32_t, t1812*, t152*, t941* >::Invoke(&m12055_MI, L_45, L_46, L_47, L_48, L_49);
		t920 * L_51 = m11702(__this, L_50, &m11702_MI);
		return ((t833 *)Castclass(L_51, InitializedTypeInfo(&t833_TI)));
	}
}
extern "C" t932* m11657 (t2139 * __this, int32_t p0, t126 * p1, MethodInfo* method)
{
	typedef t932* (*m11657_ftn) (t2139 *, int32_t, t126 *);
	static m11657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11657_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t932* m11658 (t2139 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t932* L_1 = m11657(__this, L_0, __this, &m11657_MI);
		return L_1;
	}
}
extern "C" t1575 * m11659 (t2139 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	typedef t1575 * (*m11659_ftn) (t2139 *, t2*, int32_t);
	static m11659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11659_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11660_MI;
extern "C" t1575 * m11660 (t2139 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = p1;
		t1575 * L_4 = m11659(__this, L_2, L_3, &m11659_MI);
		return L_4;
	}
}
extern "C" t837 * m11661 (t2139 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	typedef t837 * (*m11661_ftn) (t2139 *, t2*, int32_t);
	static m11661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11661_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetField(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t936* m11662 (t2139 * __this, int32_t p0, t126 * p1, MethodInfo* method)
{
	typedef t936* (*m11662_ftn) (t2139 *, int32_t, t126 *);
	static m11662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11662_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11663_MI;
extern "C" t936* m11663 (t2139 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t936* L_1 = m11662(__this, L_0, __this, &m11662_MI);
		return L_1;
	}
}
extern MethodInfo m11664_MI;
extern "C" t152* m11664 (t2139 * __this, MethodInfo* method)
{
	typedef t152* (*m11664_ftn) (t2139 *);
	static m11664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11664_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetInterfaces()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1576* m11665 (t2139 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	typedef t1576* (*m11665_ftn) (t2139 *, t2*, int32_t, bool, t126 *);
	static m11665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11665_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern MethodInfo m11666_MI;
extern "C" t1576* m11666 (t2139 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1576* L_1 = m11665(__this, (t2*)NULL, L_0, 0, __this, &m11665_MI);
		return L_1;
	}
}
extern MethodInfo m11667_MI;
extern TypeInfo* t1812_TI_var;
extern "C" t835 * m11667 (t2139 * __this, t2* p0, int32_t p1, t939 * p2, int32_t p3, t152* p4, t941* p5, MethodInfo* method)
{
	static bool m11667_init;
	if (!m11667_init)
	{
		t1812_TI_var = il2cpp_codegen_class_from_type(&t1812_0_0_0);
		m11667_init = true;
	}
	bool V_0 = false;
	t1576* V_1 = {0};
	t835 * V_2 = {0};
	t1812* V_3 = {0};
	int32_t V_4 = 0;
	t835 * V_5 = {0};
	t1576* V_6 = {0};
	int32_t V_7 = 0;
	t835 * V_8 = {0};
	t1576* V_9 = {0};
	int32_t V_10 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1576* L_4 = m11665(__this, L_1, L_2, L_3, __this, &m11665_MI);
		V_1 = L_4;
		V_2 = (t835 *)NULL;
		V_4 = 0;
		t1576* L_5 = V_1;
		V_6 = L_5;
		V_7 = 0;
		goto IL_004d;
	}

IL_0022:
	{
		t1576* L_6 = V_6;
		int32_t L_7 = V_7;
		int32_t L_8 = L_7;
		V_5 = (*(t835 **)(t835 **)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = p3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_003e;
		}
	}
	{
		t835 * L_10 = V_5;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_10);
		int32_t L_12 = p3;
		int32_t L_13 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_11&(int32_t)L_12))) == ((int32_t)L_13)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0047;
	}

IL_003e:
	{
		t835 * L_14 = V_5;
		V_2 = L_14;
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_17 = V_7;
		t1576* L_18 = V_6;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_19 = V_4;
		if (L_19)
		{
			goto IL_005b;
		}
	}
	{
		return (t835 *)NULL;
	}

IL_005b:
	{
		int32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		t152* L_21 = p4;
		if (L_21)
		{
			goto IL_0071;
		}
	}
	{
		t835 * L_22 = V_2;
		t920 * L_23 = m11702(__this, L_22, &m11702_MI);
		return ((t835 *)Castclass(L_23, InitializedTypeInfo(&t835_TI)));
	}

IL_0071:
	{
		int32_t L_24 = V_4;
		V_3 = ((t1812*)SZArrayNew(t1812_TI_var, L_24));
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1812* L_26 = V_3;
		t835 * L_27 = V_2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t920 **)(t920 **)SZArrayLdElema(L_26, 0)) = (t920 *)L_27;
		goto IL_00c4;
	}

IL_0084:
	{
		V_4 = 0;
		t1576* L_28 = V_1;
		V_9 = L_28;
		V_10 = 0;
		goto IL_00bc;
	}

IL_008f:
	{
		t1576* L_29 = V_9;
		int32_t L_30 = V_10;
		int32_t L_31 = L_30;
		V_8 = (*(t835 **)(t835 **)SZArrayLdElema(L_29, L_31));
		int32_t L_32 = p3;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_00ab;
		}
	}
	{
		t835 * L_33 = V_8;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9586_MI, L_33);
		int32_t L_35 = p3;
		int32_t L_36 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_34&(int32_t)L_35))) == ((int32_t)L_36)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00b6;
	}

IL_00ab:
	{
		t1812* L_37 = V_3;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
		t835 * L_40 = V_8;
		ArrayElementTypeCheck (L_37, L_40);
		*((t920 **)(t920 **)SZArrayLdElema(L_37, L_39)) = (t920 *)L_40;
	}

IL_00b6:
	{
		int32_t L_41 = V_10;
		V_10 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00bc:
	{
		int32_t L_42 = V_10;
		t1576* L_43 = V_9;
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)(((t121 *)L_43)->max_length))))))
		{
			goto IL_008f;
		}
	}

IL_00c4:
	{
		t152* L_44 = p4;
		if (L_44)
		{
			goto IL_00da;
		}
	}
	{
		t1812* L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t920 * L_46 = m9552(NULL, L_45, &m9552_MI);
		t920 * L_47 = m11702(__this, L_46, &m11702_MI);
		return ((t835 *)Castclass(L_47, InitializedTypeInfo(&t835_TI)));
	}

IL_00da:
	{
		t939 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_49 = m9549(NULL, &m9549_MI);
		p2 = L_49;
	}

IL_00e6:
	{
		t939 * L_50 = p2;
		int32_t L_51 = p1;
		t1812* L_52 = V_3;
		t152* L_53 = p4;
		t941* L_54 = p5;
		t920 * L_55 = (t920 *)VirtFuncInvoker4< t920 *, int32_t, t1812*, t152*, t941* >::Invoke(&m12055_MI, L_50, L_51, L_52, L_53, L_54);
		t920 * L_56 = m11702(__this, L_55, &m11702_MI);
		return ((t835 *)Castclass(L_56, InitializedTypeInfo(&t835_TI)));
	}
}
extern "C" t935* m11668 (t2139 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	typedef t935* (*m11668_ftn) (t2139 *, t2*, int32_t, bool, t126 *);
	static m11668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11668_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern MethodInfo m11669_MI;
extern "C" t935* m11669 (t2139 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t935* L_1 = m11668(__this, (t2*)NULL, L_0, 0, __this, &m11668_MI);
		return L_1;
	}
}
extern MethodInfo m11670_MI;
extern "C" t844 * m11670 (t2139 * __this, t2* p0, int32_t p1, t939 * p2, t126 * p3, t152* p4, t941* p5, MethodInfo* method)
{
	bool V_0 = false;
	t935* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t935* L_4 = m11668(__this, L_1, L_2, L_3, __this, &m11668_MI);
		V_1 = L_4;
		t935* L_5 = V_1;
		V_2 = (((int32_t)(((t121 *)L_5)->max_length)));
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		return (t844 *)NULL;
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		t152* L_8 = p4;
		if (!L_8)
		{
			goto IL_002c;
		}
	}
	{
		t152* L_9 = p4;
		if ((((int32_t)(((t121 *)L_9)->max_length))))
		{
			goto IL_0040;
		}
	}

IL_002c:
	{
		t126 * L_10 = p3;
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		t126 * L_11 = p3;
		t935* L_12 = V_1;
		int32_t L_13 = 0;
		t126 * L_14 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4441_MI, (*(t844 **)(t844 **)SZArrayLdElema(L_12, L_13)));
		if ((!(((t9*)(t126 *)L_11) == ((t9*)(t126 *)L_14))))
		{
			goto IL_0040;
		}
	}

IL_003c:
	{
		t935* L_15 = V_1;
		int32_t L_16 = 0;
		return (*(t844 **)(t844 **)SZArrayLdElema(L_15, L_16));
	}

IL_0040:
	{
		t939 * L_17 = p2;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_18 = m9549(NULL, &m9549_MI);
		p2 = L_18;
	}

IL_004c:
	{
		t939 * L_19 = p2;
		int32_t L_20 = p1;
		t935* L_21 = V_1;
		t126 * L_22 = p3;
		t152* L_23 = p4;
		t941* L_24 = p5;
		t844 * L_25 = (t844 *)VirtFuncInvoker5< t844 *, int32_t, t935*, t126 *, t152*, t941* >::Invoke(&m12192_MI, L_19, L_20, L_21, L_22, L_23, L_24);
		return L_25;
	}
}
extern MethodInfo m11671_MI;
extern "C" bool m11671 (t2139 * __this, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11672_MI, __this);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11673_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11674_MI, __this);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		return G_B4_0;
	}
}
extern "C" bool m11672 (t2139 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_0 = m7834(NULL, __this, &m7834_MI);
		return L_0;
	}
}
extern "C" bool m11673 (t2139 * __this, MethodInfo* method)
{
	typedef bool (*m11673_ftn) (t2139 *);
	static m11673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11673_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsByRefImpl()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m11674 (t2139 * __this, MethodInfo* method)
{
	typedef bool (*m11674_ftn) (t2139 *);
	static m11674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11674_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPointerImpl()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11675_MI;
extern "C" bool m11675 (t2139 * __this, MethodInfo* method)
{
	typedef bool (*m11675_ftn) (t2139 *);
	static m11675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11675_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPrimitiveImpl()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11676_MI;
extern "C" bool m11676 (t2139 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1105, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = m7819(__this, L_2, &m7819_MI);
		return L_3;
	}
}
extern MethodInfo m11677_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t1812_TI_var;
extern "C" t9 * m11677 (t2139 * __this, t2* p0, int32_t p1, t939 * p2, t9 * p3, t158* p4, t941* p5, t907 * p6, t221* p7, MethodInfo* method)
{
	static bool m11677_init;
	if (!m11677_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t1812_TI_var = il2cpp_codegen_class_from_type(&t1812_0_0_0);
		m11677_init = true;
	}
	t2* V_0 = {0};
	t932* V_1 = {0};
	t9 * V_2 = {0};
	t920 * V_3 = {0};
	t9 * V_4 = {0};
	t673 * V_5 = {0};
	bool V_6 = false;
	t2* V_7 = {0};
	bool V_8 = false;
	t1576* V_9 = {0};
	t9 * V_10 = {0};
	t920 * V_11 = {0};
	t934* V_12 = {0};
	int32_t V_13 = 0;
	bool V_14 = false;
	t9 * V_15 = {0};
	t837 * V_16 = {0};
	t837 * V_17 = {0};
	t935* V_18 = {0};
	t9 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	t1812* V_22 = {0};
	t920 * V_23 = {0};
	t920 * V_24 = {0};
	t934* V_25 = {0};
	bool V_26 = false;
	t9 * V_27 = {0};
	t935* V_28 = {0};
	t9 * V_29 = {0};
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	t1812* V_32 = {0};
	t920 * V_33 = {0};
	t920 * V_34 = {0};
	t934* V_35 = {0};
	bool V_36 = false;
	t9 * V_37 = {0};
	int32_t G_B56_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B111_0 = 0;
	{
		int32_t L_0 = p1;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)512))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = p1;
		if (!((int32_t)((int32_t)L_1&(int32_t)((int32_t)13312))))
		{
			goto IL_001d;
		}
	}
	{
		t570 * L_2 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_2, (t2*) &_stringLiteral2758, &m2949_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		goto IL_002d;
	}

IL_001f:
	{
		t2* L_3 = p0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral2, &m339_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002d:
	{
		int32_t L_5 = p1;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)1024))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_6 = p1;
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)2048))))
		{
			goto IL_004f;
		}
	}
	{
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_7, (t2*) &_stringLiteral2759, (t2*) &_stringLiteral2758, &m5761_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004f:
	{
		int32_t L_8 = p1;
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)4096))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_9 = p1;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)8192))))
		{
			goto IL_0071;
		}
	}
	{
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_10, (t2*) &_stringLiteral2760, (t2*) &_stringLiteral2758, &m5761_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0071:
	{
		int32_t L_11 = p1;
		if (!((int32_t)((int32_t)L_11&(int32_t)((int32_t)256))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_12 = p1;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)2048))))
		{
			goto IL_0093;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_13, (t2*) &_stringLiteral2761, (t2*) &_stringLiteral2758, &m5761_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0093:
	{
		int32_t L_14 = p1;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)8192))))
		{
			goto IL_00ac;
		}
	}
	{
		t570 * L_15 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_15, (t2*) &_stringLiteral2762, (t2*) &_stringLiteral2758, &m5761_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_00ac:
	{
		t221* L_16 = p7;
		if (!L_16)
		{
			goto IL_00c9;
		}
	}
	{
		t158* L_17 = p4;
		if (!L_17)
		{
			goto IL_00be;
		}
	}
	{
		t158* L_18 = p4;
		t221* L_19 = p7;
		if ((((int32_t)(((int32_t)(((t121 *)L_18)->max_length)))) >= ((int32_t)(((int32_t)(((t121 *)L_19)->max_length))))))
		{
			goto IL_00c9;
		}
	}

IL_00be:
	{
		t570 * L_20 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_20, (t2*) &_stringLiteral2763, &m2949_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_00c9:
	{
		int32_t L_21 = p1;
		if (((int32_t)((int32_t)L_21&(int32_t)((int32_t)16128))))
		{
			goto IL_00e2;
		}
	}
	{
		t570 * L_22 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_22, (t2*) &_stringLiteral2764, (t2*) &_stringLiteral2758, &m5761_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00e2:
	{
		int32_t L_23 = p1;
		if (((int32_t)((int32_t)L_23&(int32_t)((int32_t)48))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_24 = p1;
		p1 = ((int32_t)((int32_t)L_24|(int32_t)((int32_t)16)));
	}

IL_00f0:
	{
		int32_t L_25 = p1;
		if (((int32_t)((int32_t)L_25&(int32_t)((int32_t)12))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_26 = p1;
		p1 = ((int32_t)((int32_t)L_26|(int32_t)((int32_t)12)));
	}

IL_00fe:
	{
		t939 * L_27 = p2;
		if (L_27)
		{
			goto IL_010a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t939_TI));
		t939 * L_28 = m9549(NULL, &m9549_MI);
		p2 = L_28;
	}

IL_010a:
	{
		int32_t L_29 = p1;
		if (!((int32_t)((int32_t)L_29&(int32_t)((int32_t)512))))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_30 = p1;
		p1 = ((int32_t)((int32_t)L_30|(int32_t)2));
		int32_t L_31 = p1;
		t932* L_32 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m11658_MI, __this, L_31);
		V_1 = L_32;
		V_2 = NULL;
		t939 * L_33 = p2;
		int32_t L_34 = p1;
		t932* L_35 = V_1;
		t941* L_36 = p5;
		t907 * L_37 = p6;
		t221* L_38 = p7;
		t920 * L_39 = (t920 *)VirtFuncInvoker7< t920 *, int32_t, t1812*, t158**, t941*, t907 *, t221*, t9 ** >::Invoke(&m12193_MI, L_33, L_34, (t1812*)(t1812*)L_35, (&p4), L_36, L_37, L_38, (&V_2));
		V_3 = L_39;
		t920 * L_40 = V_3;
		if (L_40)
		{
			goto IL_0168;
		}
	}
	{
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, __this);
		if (!L_41)
		{
			goto IL_014d;
		}
	}
	{
		t158* L_42 = p4;
		if (L_42)
		{
			goto IL_014d;
		}
	}
	{
		t9 * L_43 = m11159(NULL, __this, &m11159_MI);
		return L_43;
	}

IL_014d:
	{
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11684_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_45 = m399(NULL, (t2*) &_stringLiteral2765, L_44, (t2*) &_stringLiteral1595, &m399_MI);
		t2132 * L_46 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11630(L_46, L_45, &m11630_MI);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0168:
	{
		t920 * L_47 = V_3;
		t9 * L_48 = p3;
		int32_t L_49 = p1;
		t939 * L_50 = p2;
		t158* L_51 = p4;
		t907 * L_52 = p6;
		t9 * L_53 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_47, L_48, L_49, L_50, L_51, L_52);
		V_4 = L_53;
		t939 * L_54 = p2;
		t9 * L_55 = V_2;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12194_MI, L_54, (&p4), L_55);
		t9 * L_56 = V_4;
		return L_56;
	}

IL_0184:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_58 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_59 = m331(NULL, L_57, L_58, &m331_MI);
		if (!L_59)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_60 = m329(NULL, LoadTypeToken(&t673_0_0_0), &m329_MI);
		bool L_61 = m7110(NULL, __this, L_60, &m7110_MI);
		if (!L_61)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_62 = m329(NULL, LoadTypeToken(&t673_0_0_0), &m329_MI);
		t732 * L_63 = m7107(NULL, __this, L_62, &m7107_MI);
		V_5 = ((t673 *)Castclass(L_63, InitializedTypeInfo(&t673_TI)));
		t673 * L_64 = V_5;
		t2* L_65 = m7875(L_64, &m7875_MI);
		p0 = L_65;
	}

IL_01c5:
	{
		int32_t L_66 = p1;
		V_6 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_66&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_7 = (t2*)NULL;
		V_8 = 0;
		int32_t L_67 = p1;
		if (!((int32_t)((int32_t)L_67&(int32_t)((int32_t)256))))
		{
			goto IL_02ea;
		}
	}
	{
		t2* L_68 = p0;
		int32_t L_69 = p1;
		bool L_70 = V_6;
		t1576* L_71 = m11665(__this, L_68, L_69, L_70, __this, &m11665_MI);
		V_9 = L_71;
		V_10 = NULL;
		t158* L_72 = p4;
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		p4 = ((t158*)SZArrayNew(t158_TI_var, 0));
	}

IL_0200:
	{
		t939 * L_73 = p2;
		int32_t L_74 = p1;
		t1576* L_75 = V_9;
		t941* L_76 = p5;
		t907 * L_77 = p6;
		t221* L_78 = p7;
		t920 * L_79 = (t920 *)VirtFuncInvoker7< t920 *, int32_t, t1812*, t158**, t941*, t907 *, t221*, t9 ** >::Invoke(&m12193_MI, L_73, L_74, (t1812*)(t1812*)L_75, (&p4), L_76, L_77, L_78, (&V_10));
		V_11 = L_79;
		t920 * L_80 = V_11;
		if (L_80)
		{
			goto IL_024b;
		}
	}
	{
		t1576* L_81 = V_9;
		if ((((int32_t)(((int32_t)(((t121 *)L_81)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0234;
		}
	}
	{
		t2* L_82 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_83 = m399(NULL, (t2*) &_stringLiteral2766, L_82, (t2*) &_stringLiteral2767, &m399_MI);
		V_7 = L_83;
		goto IL_0246;
	}

IL_0234:
	{
		t2* L_84 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_85 = m399(NULL, (t2*) &_stringLiteral2768, L_84, (t2*) &_stringLiteral135, &m399_MI);
		V_7 = L_85;
	}

IL_0246:
	{
		goto IL_02ea;
	}

IL_024b:
	{
		t920 * L_86 = V_11;
		t934* L_87 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_86);
		V_12 = L_87;
		V_13 = 0;
		goto IL_0292;
	}

IL_0259:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1816_TI));
		t1816 * L_88 = ((t1816_SFs*)InitializedTypeInfo(&t1816_TI)->static_fields)->f0;
		t158* L_89 = p4;
		int32_t L_90 = V_13;
		int32_t L_91 = L_90;
		if ((!(((t9*)(t1816 *)L_88) == ((t9*)(t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_89, L_91))))))
		{
			goto IL_028c;
		}
	}
	{
		t934* L_92 = V_12;
		int32_t L_93 = V_13;
		int32_t L_94 = L_93;
		int32_t L_95 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9742_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_92, L_94)));
		if ((((int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)4096)))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_028c;
		}
	}
	{
		t570 * L_96 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_96, (t2*) &_stringLiteral2769, (t2*) &_stringLiteral1329, &m5761_MI);
		il2cpp_codegen_raise_exception(L_96);
	}

IL_028c:
	{
		int32_t L_97 = V_13;
		V_13 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_0292:
	{
		int32_t L_98 = V_13;
		t934* L_99 = V_12;
		if ((((int32_t)L_98) < ((int32_t)(((int32_t)(((t121 *)L_99)->max_length))))))
		{
			goto IL_0259;
		}
	}
	{
		t934* L_100 = V_12;
		if ((((int32_t)(((int32_t)(((t121 *)L_100)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_02bb;
		}
	}
	{
		t934* L_101 = V_12;
		t934* L_102 = V_12;
		int32_t L_103 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_102)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_104 = m329(NULL, LoadTypeToken(&t344_0_0_0), &m329_MI);
		bool L_105 = m7109(NULL, (*(t930 **)(t930 **)SZArrayLdElema(L_101, L_103)), L_104, &m7109_MI);
		G_B56_0 = ((int32_t)(L_105));
		goto IL_02bc;
	}

IL_02bb:
	{
		G_B56_0 = 0;
	}

IL_02bc:
	{
		V_14 = G_B56_0;
		bool L_106 = V_14;
		if (!L_106)
		{
			goto IL_02cc;
		}
	}
	{
		t920 * L_107 = V_11;
		m11703(__this, (&p4), L_107, &m11703_MI);
	}

IL_02cc:
	{
		t920 * L_108 = V_11;
		t9 * L_109 = p3;
		int32_t L_110 = p1;
		t939 * L_111 = p2;
		t158* L_112 = p4;
		t907 * L_113 = p6;
		t9 * L_114 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_108, L_109, L_110, L_111, L_112, L_113);
		V_15 = L_114;
		t939 * L_115 = p2;
		t9 * L_116 = V_10;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12194_MI, L_115, (&p4), L_116);
		t9 * L_117 = V_15;
		return L_117;
	}

IL_02ea:
	{
		int32_t L_118 = p1;
		if (!((int32_t)((int32_t)L_118&(int32_t)((int32_t)1024))))
		{
			goto IL_0319;
		}
	}
	{
		t2* L_119 = p0;
		int32_t L_120 = p1;
		t837 * L_121 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m11661_MI, __this, L_119, L_120);
		V_16 = L_121;
		t837 * L_122 = V_16;
		if (!L_122)
		{
			goto IL_030b;
		}
	}
	{
		t837 * L_123 = V_16;
		t9 * L_124 = p3;
		t9 * L_125 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m4460_MI, L_123, L_124);
		return L_125;
	}

IL_030b:
	{
		int32_t L_126 = p1;
		if (((int32_t)((int32_t)L_126&(int32_t)((int32_t)4096))))
		{
			goto IL_0317;
		}
	}
	{
		V_8 = 1;
	}

IL_0317:
	{
		goto IL_0375;
	}

IL_0319:
	{
		int32_t L_127 = p1;
		if (!((int32_t)((int32_t)L_127&(int32_t)((int32_t)2048))))
		{
			goto IL_0375;
		}
	}
	{
		t2* L_128 = p0;
		int32_t L_129 = p1;
		t837 * L_130 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m11661_MI, __this, L_128, L_129);
		V_17 = L_130;
		t837 * L_131 = V_17;
		if (!L_131)
		{
			goto IL_0369;
		}
	}
	{
		t158* L_132 = p4;
		if (L_132)
		{
			goto IL_033f;
		}
	}
	{
		t132 * L_133 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_133, (t2*) &_stringLiteral2770, &m339_MI);
		il2cpp_codegen_raise_exception(L_133);
	}

IL_033f:
	{
		t158* L_134 = p4;
		if (!L_134)
		{
			goto IL_034a;
		}
	}
	{
		t158* L_135 = p4;
		if ((((int32_t)(((int32_t)(((t121 *)L_135)->max_length)))) == ((int32_t)1)))
		{
			goto IL_035a;
		}
	}

IL_034a:
	{
		t570 * L_136 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_136, (t2*) &_stringLiteral2771, (t2*) &_stringLiteral2758, &m5761_MI);
		il2cpp_codegen_raise_exception(L_136);
	}

IL_035a:
	{
		t837 * L_137 = V_17;
		t9 * L_138 = p3;
		t158* L_139 = p4;
		int32_t L_140 = 0;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m4461_MI, L_137, L_138, (*(t9 **)(t9 **)SZArrayLdElema(L_139, L_140)));
		return NULL;
	}

IL_0369:
	{
		int32_t L_141 = p1;
		if (((int32_t)((int32_t)L_141&(int32_t)((int32_t)8192))))
		{
			goto IL_0375;
		}
	}
	{
		V_8 = 1;
	}

IL_0375:
	{
		int32_t L_142 = p1;
		if (!((int32_t)((int32_t)L_142&(int32_t)((int32_t)4096))))
		{
			goto IL_0472;
		}
	}
	{
		t2* L_143 = p0;
		int32_t L_144 = p1;
		bool L_145 = V_6;
		t935* L_146 = m11668(__this, L_143, L_144, L_145, __this, &m11668_MI);
		V_18 = L_146;
		V_19 = NULL;
		V_21 = 0;
		V_20 = 0;
		goto IL_03b2;
	}

IL_0399:
	{
		t935* L_147 = V_18;
		int32_t L_148 = V_20;
		int32_t L_149 = L_148;
		t835 * L_150 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4469_MI, (*(t844 **)(t844 **)SZArrayLdElema(L_147, L_149)), 1);
		if (!L_150)
		{
			goto IL_03ac;
		}
	}
	{
		int32_t L_151 = V_21;
		V_21 = ((int32_t)((int32_t)L_151+(int32_t)1));
	}

IL_03ac:
	{
		int32_t L_152 = V_20;
		V_20 = ((int32_t)((int32_t)L_152+(int32_t)1));
	}

IL_03b2:
	{
		int32_t L_153 = V_20;
		t935* L_154 = V_18;
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)(((t121 *)L_154)->max_length))))))
		{
			goto IL_0399;
		}
	}
	{
		int32_t L_155 = V_21;
		V_22 = ((t1812*)SZArrayNew(t1812_TI_var, L_155));
		V_21 = 0;
		V_20 = 0;
		goto IL_03ee;
	}

IL_03cb:
	{
		t935* L_156 = V_18;
		int32_t L_157 = V_20;
		int32_t L_158 = L_157;
		t835 * L_159 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4469_MI, (*(t844 **)(t844 **)SZArrayLdElema(L_156, L_158)), 1);
		V_23 = L_159;
		t920 * L_160 = V_23;
		if (!L_160)
		{
			goto IL_03e8;
		}
	}
	{
		t1812* L_161 = V_22;
		int32_t L_162 = V_21;
		int32_t L_163 = L_162;
		V_21 = ((int32_t)((int32_t)L_163+(int32_t)1));
		t920 * L_164 = V_23;
		ArrayElementTypeCheck (L_161, L_164);
		*((t920 **)(t920 **)SZArrayLdElema(L_161, L_163)) = (t920 *)L_164;
	}

IL_03e8:
	{
		int32_t L_165 = V_20;
		V_20 = ((int32_t)((int32_t)L_165+(int32_t)1));
	}

IL_03ee:
	{
		int32_t L_166 = V_20;
		t935* L_167 = V_18;
		if ((((int32_t)L_166) < ((int32_t)(((int32_t)(((t121 *)L_167)->max_length))))))
		{
			goto IL_03cb;
		}
	}
	{
		t939 * L_168 = p2;
		int32_t L_169 = p1;
		t1812* L_170 = V_22;
		t941* L_171 = p5;
		t907 * L_172 = p6;
		t221* L_173 = p7;
		t920 * L_174 = (t920 *)VirtFuncInvoker7< t920 *, int32_t, t1812*, t158**, t941*, t907 *, t221*, t9 ** >::Invoke(&m12193_MI, L_168, L_169, L_170, (&p4), L_171, L_172, L_173, (&V_19));
		V_24 = L_174;
		t920 * L_175 = V_24;
		if (L_175)
		{
			goto IL_0414;
		}
	}
	{
		V_8 = 1;
		goto IL_046d;
	}

IL_0414:
	{
		t920 * L_176 = V_24;
		t934* L_177 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_176);
		V_25 = L_177;
		t934* L_178 = V_25;
		if ((((int32_t)(((int32_t)(((t121 *)L_178)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_043e;
		}
	}
	{
		t934* L_179 = V_25;
		t934* L_180 = V_25;
		int32_t L_181 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_180)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_182 = m329(NULL, LoadTypeToken(&t344_0_0_0), &m329_MI);
		bool L_183 = m7109(NULL, (*(t930 **)(t930 **)SZArrayLdElema(L_179, L_181)), L_182, &m7109_MI);
		G_B91_0 = ((int32_t)(L_183));
		goto IL_043f;
	}

IL_043e:
	{
		G_B91_0 = 0;
	}

IL_043f:
	{
		V_26 = G_B91_0;
		bool L_184 = V_26;
		if (!L_184)
		{
			goto IL_044f;
		}
	}
	{
		t920 * L_185 = V_24;
		m11703(__this, (&p4), L_185, &m11703_MI);
	}

IL_044f:
	{
		t920 * L_186 = V_24;
		t9 * L_187 = p3;
		int32_t L_188 = p1;
		t939 * L_189 = p2;
		t158* L_190 = p4;
		t907 * L_191 = p6;
		t9 * L_192 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_186, L_187, L_188, L_189, L_190, L_191);
		V_27 = L_192;
		t939 * L_193 = p2;
		t9 * L_194 = V_19;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12194_MI, L_193, (&p4), L_194);
		t9 * L_195 = V_27;
		return L_195;
	}

IL_046d:
	{
		goto IL_056a;
	}

IL_0472:
	{
		int32_t L_196 = p1;
		if (!((int32_t)((int32_t)L_196&(int32_t)((int32_t)8192))))
		{
			goto IL_056a;
		}
	}
	{
		t2* L_197 = p0;
		int32_t L_198 = p1;
		bool L_199 = V_6;
		t935* L_200 = m11668(__this, L_197, L_198, L_199, __this, &m11668_MI);
		V_28 = L_200;
		V_29 = NULL;
		V_31 = 0;
		V_30 = 0;
		goto IL_04af;
	}

IL_0496:
	{
		t935* L_201 = V_28;
		int32_t L_202 = V_30;
		int32_t L_203 = L_202;
		t835 * L_204 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4470_MI, (*(t844 **)(t844 **)SZArrayLdElema(L_201, L_203)), 1);
		if (!L_204)
		{
			goto IL_04a9;
		}
	}
	{
		int32_t L_205 = V_31;
		V_31 = ((int32_t)((int32_t)L_205+(int32_t)1));
	}

IL_04a9:
	{
		int32_t L_206 = V_30;
		V_30 = ((int32_t)((int32_t)L_206+(int32_t)1));
	}

IL_04af:
	{
		int32_t L_207 = V_30;
		t935* L_208 = V_28;
		if ((((int32_t)L_207) < ((int32_t)(((int32_t)(((t121 *)L_208)->max_length))))))
		{
			goto IL_0496;
		}
	}
	{
		int32_t L_209 = V_31;
		V_32 = ((t1812*)SZArrayNew(t1812_TI_var, L_209));
		V_31 = 0;
		V_30 = 0;
		goto IL_04eb;
	}

IL_04c8:
	{
		t935* L_210 = V_28;
		int32_t L_211 = V_30;
		int32_t L_212 = L_211;
		t835 * L_213 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4470_MI, (*(t844 **)(t844 **)SZArrayLdElema(L_210, L_212)), 1);
		V_33 = L_213;
		t920 * L_214 = V_33;
		if (!L_214)
		{
			goto IL_04e5;
		}
	}
	{
		t1812* L_215 = V_32;
		int32_t L_216 = V_31;
		int32_t L_217 = L_216;
		V_31 = ((int32_t)((int32_t)L_217+(int32_t)1));
		t920 * L_218 = V_33;
		ArrayElementTypeCheck (L_215, L_218);
		*((t920 **)(t920 **)SZArrayLdElema(L_215, L_217)) = (t920 *)L_218;
	}

IL_04e5:
	{
		int32_t L_219 = V_30;
		V_30 = ((int32_t)((int32_t)L_219+(int32_t)1));
	}

IL_04eb:
	{
		int32_t L_220 = V_30;
		t935* L_221 = V_28;
		if ((((int32_t)L_220) < ((int32_t)(((int32_t)(((t121 *)L_221)->max_length))))))
		{
			goto IL_04c8;
		}
	}
	{
		t939 * L_222 = p2;
		int32_t L_223 = p1;
		t1812* L_224 = V_32;
		t941* L_225 = p5;
		t907 * L_226 = p6;
		t221* L_227 = p7;
		t920 * L_228 = (t920 *)VirtFuncInvoker7< t920 *, int32_t, t1812*, t158**, t941*, t907 *, t221*, t9 ** >::Invoke(&m12193_MI, L_222, L_223, L_224, (&p4), L_225, L_226, L_227, (&V_29));
		V_34 = L_228;
		t920 * L_229 = V_34;
		if (L_229)
		{
			goto IL_0511;
		}
	}
	{
		V_8 = 1;
		goto IL_056a;
	}

IL_0511:
	{
		t920 * L_230 = V_34;
		t934* L_231 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_230);
		V_35 = L_231;
		t934* L_232 = V_35;
		if ((((int32_t)(((int32_t)(((t121 *)L_232)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_053b;
		}
	}
	{
		t934* L_233 = V_35;
		t934* L_234 = V_35;
		int32_t L_235 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_234)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_236 = m329(NULL, LoadTypeToken(&t344_0_0_0), &m329_MI);
		bool L_237 = m7109(NULL, (*(t930 **)(t930 **)SZArrayLdElema(L_233, L_235)), L_236, &m7109_MI);
		G_B111_0 = ((int32_t)(L_237));
		goto IL_053c;
	}

IL_053b:
	{
		G_B111_0 = 0;
	}

IL_053c:
	{
		V_36 = G_B111_0;
		bool L_238 = V_36;
		if (!L_238)
		{
			goto IL_054c;
		}
	}
	{
		t920 * L_239 = V_34;
		m11703(__this, (&p4), L_239, &m11703_MI);
	}

IL_054c:
	{
		t920 * L_240 = V_34;
		t9 * L_241 = p3;
		int32_t L_242 = p1;
		t939 * L_243 = p2;
		t158* L_244 = p4;
		t907 * L_245 = p6;
		t9 * L_246 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_240, L_241, L_242, L_243, L_244, L_245);
		V_37 = L_246;
		t939 * L_247 = p2;
		t9 * L_248 = V_29;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12194_MI, L_247, (&p4), L_248);
		t9 * L_249 = V_37;
		return L_249;
	}

IL_056a:
	{
		t2* L_250 = V_7;
		if (!L_250)
		{
			goto IL_0576;
		}
	}
	{
		t2* L_251 = V_7;
		t2132 * L_252 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11630(L_252, L_251, &m11630_MI);
		il2cpp_codegen_raise_exception(L_252);
	}

IL_0576:
	{
		bool L_253 = V_8;
		if (!L_253)
		{
			goto IL_0590;
		}
	}
	{
		t2* L_254 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_255 = m399(NULL, (t2*) &_stringLiteral2772, L_254, (t2*) &_stringLiteral135, &m399_MI);
		t2130 * L_256 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11620(L_256, L_255, &m11620_MI);
		il2cpp_codegen_raise_exception(L_256);
	}

IL_0590:
	{
		return NULL;
	}
}
extern "C" t126 * m11678 (t2139 * __this, MethodInfo* method)
{
	typedef t126 * (*m11678_ftn) (t2139 *);
	static m11678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11678_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetElementType()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11679_MI;
extern "C" t126 * m11679 (t2139 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m11680_MI;
extern "C" t1351 * m11680 (t2139 * __this, MethodInfo* method)
{
	typedef t1351 * (*m11680_ftn) (t2139 *);
	static m11680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11680_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Assembly()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11681_MI;
extern "C" t2* m11681 (t2139 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11682(__this, 1, 1, &m11682_MI);
		return L_0;
	}
}
extern "C" t2* m11682 (t2139 * __this, bool p0, bool p1, MethodInfo* method)
{
	typedef t2* (*m11682_ftn) (t2139 *, bool, bool);
	static m11682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11682_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::getFullName(System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11683_MI;
extern "C" t126 * m11683 (t2139 * __this, MethodInfo* method)
{
	typedef t126 * (*m11683_ftn) (t2139 *);
	static m11683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11683_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_BaseType()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m11684 (t2139 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	{
		t2138 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t2138 * L_1 = (t2138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2138_TI));
		m11652(L_1, &m11652_MI);
		__this->f8 = L_1;
	}

IL_0013:
	{
		t2138 * L_2 = (__this->f8);
		t2* L_3 = (L_2->f0);
		t2* L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2138 * L_5 = (__this->f8);
		t2* L_6 = m11682(__this, 1, 0, &m11682_MI);
		t2* L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t2* L_8 = V_1;
		V_0 = L_8;
	}

IL_0039:
	{
		t2* L_9 = V_0;
		return L_9;
	}
}
extern MethodInfo m11685_MI;
extern "C" bool m11685 (t2139 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m11686_MI;
extern "C" t158* m11686 (t2139 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_1 = m11645(NULL, __this, L_0, &m11645_MI);
		return L_1;
	}
}
extern MethodInfo m11687_MI;
extern "C" t158* m11687 (t2139 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1072, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_4 = m11644(NULL, __this, L_2, L_3, &m11644_MI);
		return L_4;
	}
}
extern MethodInfo m11688_MI;
extern "C" int32_t m11688 (t2139 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11692_MI, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11700_MI, __this);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(((int32_t)128));
	}

IL_0016:
	{
		return (int32_t)(((int32_t)32));
	}
}
extern MethodInfo m11689_MI;
extern "C" t2* m11689 (t2139 * __this, MethodInfo* method)
{
	typedef t2* (*m11689_ftn) (t2139 *);
	static m11689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11689_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Name()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11690_MI;
extern "C" t2* m11690 (t2139 * __this, MethodInfo* method)
{
	typedef t2* (*m11690_ftn) (t2139 *);
	static m11690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11690_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Namespace()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11691_MI;
extern "C" t1574 * m11691 (t2139 * __this, MethodInfo* method)
{
	typedef t1574 * (*m11691_ftn) (t2139 *);
	static m11691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11691_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Module()");
	return _il2cpp_icall_func(__this);
}
extern "C" t126 * m11692 (t2139 * __this, MethodInfo* method)
{
	typedef t126 * (*m11692_ftn) (t2139 *);
	static m11692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11692_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_DeclaringType()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11693_MI;
extern "C" t126 * m11693 (t2139 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11692_MI, __this);
		return L_0;
	}
}
extern MethodInfo m11694_MI;
extern "C" t127  m11694 (t2139 * __this, MethodInfo* method)
{
	{
		t127  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11695_MI;
extern "C" int32_t m11695 (t2139 * __this, MethodInfo* method)
{
	typedef int32_t (*m11695_ftn) (t2139 *);
	static m11695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11695_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetArrayRank()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11696_MI;
extern "C" void m11696 (t2139 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11916(NULL, __this, L_0, L_1, &m11916_MI);
		return;
	}
}
extern MethodInfo m11697_MI;
extern "C" t2* m11697 (t2139 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11682(__this, 0, 0, &m11682_MI);
		return L_0;
	}
}
extern "C" t152* m11698 (t2139 * __this, MethodInfo* method)
{
	typedef t152* (*m11698_ftn) (t2139 *);
	static m11698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11698_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11699_MI;
extern "C" bool m11699 (t2139 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11700_MI, __this);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7847_MI, __this);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11698_MI, __this);
		V_1 = L_2;
		V_2 = 0;
		goto IL_002f;
	}

IL_001d:
	{
		t152* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t126 **)(t126 **)SZArrayLdElema(L_3, L_5));
		t126 * L_6 = V_0;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_6);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		t152* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_001d;
		}
	}

IL_0035:
	{
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, __this);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11678_MI, __this);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7843_MI, L_12);
		return L_13;
	}

IL_0049:
	{
		return 0;
	}
}
extern "C" bool m11700 (t2139 * __this, MethodInfo* method)
{
	typedef bool (*m11700_ftn) (t2139 *);
	static m11700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11700_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11701_MI;
extern "C" t126 * m11701 (t2139 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t126 * L_0 = m7845(__this, &m7845_MI);
		V_0 = L_0;
		t126 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		t1347 * L_2 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_2, &m5762_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t126 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t920 * m11702 (t2139 * __this, t920 * p0, MethodInfo* method)
{
	{
		t920 * L_0 = p0;
		return L_0;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11703 (t2139 * __this, t158** p0, t920 * p1, MethodInfo* method)
{
	static bool m11703_init;
	if (!m11703_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11703_init = true;
	}
	t934* V_0 = {0};
	t158* V_1 = {0};
	t121 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t920 * L_0 = p1;
		t934* L_1 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_0);
		V_0 = L_1;
		t934* L_2 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		t934* L_3 = V_0;
		t934* L_4 = V_0;
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1));
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_3, L_5)));
		t126 * L_7 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_6);
		t158** L_8 = p0;
		t934* L_9 = V_0;
		t121 * L_10 = m7737(NULL, L_7, ((int32_t)((int32_t)(((int32_t)(((t121 *)(*((t158**)L_8)))->max_length)))-(int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)1)))), &m7737_MI);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_0038:
	{
		int32_t L_11 = V_4;
		t934* L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)1)))))
		{
			goto IL_004c;
		}
	}
	{
		t158* L_13 = V_1;
		int32_t L_14 = V_4;
		t158** L_15 = p0;
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		ArrayElementTypeCheck (L_13, (*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_15)), L_17)));
		*((t9 **)(t9 **)SZArrayLdElema(L_13, L_14)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_15)), L_17));
		goto IL_005c;
	}

IL_004c:
	{
		t121 * L_18 = V_2;
		t158** L_19 = p0;
		int32_t L_20 = V_4;
		int32_t L_21 = L_20;
		int32_t L_22 = V_3;
		m5760(L_18, (*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_19)), L_21)), L_22, &m5760_MI);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_25 = V_4;
		t158** L_26 = p0;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((t121 *)(*((t158**)L_26)))->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		t158* L_27 = V_1;
		t934* L_28 = V_0;
		t121 * L_29 = V_2;
		ArrayElementTypeCheck (L_27, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_28)->max_length)))-(int32_t)1)))) = (t9 *)L_29;
		t158** L_30 = p0;
		t158* L_31 = V_1;
		*((t9 **)(L_30)) = (t9 *)L_31;
		return;
	}
}
#include "t2140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2140_TI;
#include "t2140MD.h"



extern MethodInfo m11704_MI;
extern "C" void m11704 (t2140 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2773, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m11705_MI;
extern "C" void m11705 (t2140 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		return;
	}
}
extern MethodInfo m11706_MI;
extern "C" void m11706 (t2140 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2141_TI;
#include "t2141MD.h"



extern MethodInfo m11707_MI;
extern "C" void m11707 (t2141 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t1352.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1352_TI;
#include "t1352MD.h"



extern MethodInfo m11708_MI;
extern "C" void m11708 (t1352 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2774, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467263), &m4499_MI);
		return;
	}
}
extern MethodInfo m5815_MI;
extern "C" void m5815 (t1352 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467263), &m4499_MI);
		return;
	}
}
extern MethodInfo m11709_MI;
extern "C" void m11709 (t1352 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m561 (t169 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2775, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233067), &m4499_MI);
		return;
	}
}
extern "C" void m5776 (t169 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233067), &m4499_MI);
		return;
	}
}
extern MethodInfo m11710_MI;
extern "C" void m11710 (t169 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t885.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t885_TI;
#include "t885MD.h"



extern MethodInfo m11711_MI;
extern "C" void m11711 (t885 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2776, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467261), &m4499_MI);
		return;
	}
}
extern MethodInfo m4269_MI;
extern "C" void m4269 (t885 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147467261), &m4499_MI);
		return;
	}
}
extern MethodInfo m11712_MI;
extern "C" void m11712 (t885 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2142.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2142_TI;
#include "t2142MD.h"

#include "t1561MD.h"
extern MethodInfo m11713_MI;
extern MethodInfo m8794_MI;
extern MethodInfo m8793_MI;
extern MethodInfo m5781_MI;
extern MethodInfo m8792_MI;
extern MethodInfo m8803_MI;
extern MethodInfo m8804_MI;
extern MethodInfo m8790_MI;
extern MethodInfo m10941_MI;


extern "C" void m11713 (t2142 * __this, MethodInfo* method)
{
	{
		__this->f2 = (-1);
		__this->f10 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11714_MI;
extern TypeInfo* t1101_TI_var;
extern "C" void m11714 (t9 * __this , t2* p0, bool* p1, bool p2, int32_t* p3, int32_t* p4, MethodInfo* method)
{
	static bool m11714_init;
	if (!m11714_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m11714_init = true;
	}
	t1101* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		V_0 = ((t1101*)SZArrayNew(t1101_TI_var, 3));
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_007c;
	}

IL_0015:
	{
		t2* L_0 = p0;
		int32_t L_1 = V_4;
		uint16_t L_2 = m2778(L_0, L_1, &m2778_MI);
		V_5 = L_2;
		uint16_t L_3 = V_5;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		uint16_t L_5 = V_3;
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0033;
		}
	}
	{
		uint16_t L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		uint16_t L_8 = V_3;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		uint16_t L_9 = V_5;
		V_3 = L_9;
		goto IL_003d;
	}

IL_003b:
	{
		V_3 = 0;
	}

IL_003d:
	{
		goto IL_0076;
	}

IL_003f:
	{
		uint16_t L_10 = V_3;
		if (L_10)
		{
			goto IL_0076;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = V_4;
		uint16_t L_13 = m2778(L_11, L_12, &m2778_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		t2* L_15 = p0;
		int32_t L_16 = V_4;
		uint16_t L_17 = m2778(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), &m2778_MI);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)92))))
		{
			goto IL_0076;
		}
	}

IL_0060:
	{
		t1101* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
		int32_t L_21 = V_4;
		int32_t L_22 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)) = (int32_t)((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = V_4;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0086;
	}

IL_0076:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_26 = V_4;
		t2* L_27 = p0;
		int32_t L_28 = m2763(L_27, &m2763_MI);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0015;
		}
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		if (L_29)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_30 = p3;
		*((int32_t*)(L_30)) = (int32_t)0;
		int32_t* L_31 = p4;
		t2* L_32 = p0;
		int32_t L_33 = m2763(L_32, &m2763_MI);
		*((int32_t*)(L_31)) = (int32_t)L_33;
		return;
	}

IL_0096:
	{
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		bool* L_35 = p1;
		if ((*((int8_t*)L_35)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_36 = p2;
		if (!L_36)
		{
			goto IL_00ab;
		}
	}

IL_00a1:
	{
		int32_t* L_37 = p3;
		*((int32_t*)(L_37)) = (int32_t)0;
		int32_t* L_38 = p4;
		t1101* L_39 = V_0;
		int32_t L_40 = 0;
		*((int32_t*)(L_38)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_39, L_40));
		return;
	}

IL_00ab:
	{
		t1101* L_41 = V_0;
		int32_t L_42 = 0;
		t2* L_43 = p0;
		int32_t L_44 = m2763(L_43, &m2763_MI);
		if ((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_41, L_42))+(int32_t)1))) >= ((int32_t)L_44)))
		{
			goto IL_00cf;
		}
	}
	{
		bool* L_45 = p1;
		*((int8_t*)(L_45)) = (int8_t)1;
		int32_t* L_46 = p3;
		t1101* L_47 = V_0;
		int32_t L_48 = 0;
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48))+(int32_t)1));
		int32_t* L_49 = p4;
		t2* L_50 = p0;
		int32_t L_51 = m2763(L_50, &m2763_MI);
		int32_t* L_52 = p3;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51-(int32_t)(*((int32_t*)L_52))));
		return;
	}

IL_00cf:
	{
		int32_t* L_53 = p3;
		*((int32_t*)(L_53)) = (int32_t)0;
		int32_t* L_54 = p4;
		t1101* L_55 = V_0;
		int32_t L_56 = 0;
		*((int32_t*)(L_54)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56));
		return;
	}

IL_00d9:
	{
		int32_t L_57 = V_1;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_0127;
		}
	}
	{
		bool L_58 = p2;
		if (!L_58)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t* L_59 = p3;
		t1101* L_60 = V_0;
		int32_t L_61 = 0;
		t1101* L_62 = V_0;
		int32_t L_63 = 1;
		*((int32_t*)(L_59)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_60, L_61))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_62, L_63))))+(int32_t)2));
		int32_t* L_64 = p4;
		t2* L_65 = p0;
		int32_t L_66 = m2763(L_65, &m2763_MI);
		int32_t* L_67 = p3;
		*((int32_t*)(L_64)) = (int32_t)((int32_t)((int32_t)L_66-(int32_t)(*((int32_t*)L_67))));
		return;
	}

IL_00f8:
	{
		bool* L_68 = p1;
		if (!(*((int8_t*)L_68)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_69 = p3;
		*((int32_t*)(L_69)) = (int32_t)0;
		int32_t* L_70 = p4;
		t1101* L_71 = V_0;
		int32_t L_72 = 0;
		*((int32_t*)(L_70)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72));
		return;
	}

IL_0106:
	{
		t1101* L_73 = V_0;
		int32_t L_74 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_73, L_74))) <= ((int32_t)0)))
		{
			goto IL_011d;
		}
	}
	{
		bool* L_75 = p1;
		*((int8_t*)(L_75)) = (int8_t)1;
		int32_t* L_76 = p3;
		t1101* L_77 = V_0;
		int32_t L_78 = 0;
		*((int32_t*)(L_76)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_77, L_78))+(int32_t)1));
		int32_t* L_79 = p4;
		t1101* L_80 = V_0;
		int32_t L_81 = 1;
		*((int32_t*)(L_79)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_80, L_81));
		return;
	}

IL_011d:
	{
		int32_t* L_82 = p3;
		*((int32_t*)(L_82)) = (int32_t)0;
		int32_t* L_83 = p4;
		t1101* L_84 = V_0;
		int32_t L_85 = 0;
		*((int32_t*)(L_83)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_84, L_85));
		return;
	}

IL_0127:
	{
		int32_t L_86 = V_1;
		if ((!(((uint32_t)L_86) == ((uint32_t)3))))
		{
			goto IL_016f;
		}
	}
	{
		bool L_87 = p2;
		if (!L_87)
		{
			goto IL_0140;
		}
	}
	{
		int32_t* L_88 = p3;
		t1101* L_89 = V_0;
		int32_t L_90 = 0;
		t1101* L_91 = V_0;
		int32_t L_92 = 1;
		*((int32_t*)(L_88)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_89, L_90))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_91, L_92))))+(int32_t)2));
		int32_t* L_93 = p4;
		t1101* L_94 = V_0;
		int32_t L_95 = 2;
		*((int32_t*)(L_93)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_94, L_95));
		return;
	}

IL_0140:
	{
		bool* L_96 = p1;
		if (!(*((int8_t*)L_96)))
		{
			goto IL_014e;
		}
	}
	{
		int32_t* L_97 = p3;
		*((int32_t*)(L_97)) = (int32_t)0;
		int32_t* L_98 = p4;
		t1101* L_99 = V_0;
		int32_t L_100 = 0;
		*((int32_t*)(L_98)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100));
		return;
	}

IL_014e:
	{
		t1101* L_101 = V_0;
		int32_t L_102 = 1;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_101, L_102))) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}
	{
		bool* L_103 = p1;
		*((int8_t*)(L_103)) = (int8_t)1;
		int32_t* L_104 = p3;
		t1101* L_105 = V_0;
		int32_t L_106 = 0;
		*((int32_t*)(L_104)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_105, L_106))+(int32_t)1));
		int32_t* L_107 = p4;
		t1101* L_108 = V_0;
		int32_t L_109 = 1;
		*((int32_t*)(L_107)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_108, L_109));
		return;
	}

IL_0165:
	{
		int32_t* L_110 = p3;
		*((int32_t*)(L_110)) = (int32_t)0;
		int32_t* L_111 = p4;
		t1101* L_112 = V_0;
		int32_t L_113 = 0;
		*((int32_t*)(L_111)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_112, L_113));
		return;
	}

IL_016f:
	{
		t570 * L_114 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_114, &m11179_MI);
		il2cpp_codegen_raise_exception(L_114);
	}
}
extern MethodInfo m11715_MI;
extern "C" t2142 * m11715 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t1561 * p3, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	t2142 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0x0;
	uint16_t V_9 = 0x0;
	uint16_t V_10 = 0x0;
	{
		V_0 = 0;
		V_1 = 1;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		t2142 * L_0 = (t2142 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2142_TI));
		m11713(L_0, &m11713_MI);
		V_5 = L_0;
		V_6 = 0;
		int32_t L_1 = p1;
		V_7 = L_1;
		goto IL_028d;
	}

IL_001d:
	{
		t2* L_2 = p0;
		int32_t L_3 = V_7;
		uint16_t L_4 = m2778(L_2, L_3, &m2778_MI);
		V_8 = L_4;
		uint16_t L_5 = V_8;
		uint16_t L_6 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0037;
		}
	}
	{
		uint16_t L_7 = V_8;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		V_0 = 0;
		goto IL_0287;
	}

IL_0037:
	{
		uint16_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0287;
	}

IL_003f:
	{
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_10 = V_8;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_12 = V_8;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)35))))
		{
			goto IL_006f;
		}
	}
	{
		V_3 = 0;
		t2142 * L_13 = V_5;
		int32_t L_14 = (L_13->f2);
		V_1 = ((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		V_2 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0287;
	}

IL_006f:
	{
		uint16_t L_17 = V_8;
		V_10 = L_17;
		uint16_t L_18 = V_10;
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_00fb;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0095;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_024e;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_0095;
		}
		if (((int32_t)((int32_t)L_18-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_00e7;
		}
	}

IL_0095:
	{
		uint16_t L_19 = V_10;
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_0270;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0233;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_00b3;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_013b;
		}
	}

IL_00b3:
	{
		uint16_t L_20 = V_10;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_01be;
		}
	}
	{
		uint16_t L_21 = V_10;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)92))))
		{
			goto IL_00dc;
		}
	}
	{
		uint16_t L_22 = V_10;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_01be;
		}
	}
	{
		uint16_t L_23 = V_10;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)8240))))
		{
			goto IL_025f;
		}
	}
	{
		goto IL_0285;
	}

IL_00dc:
	{
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0287;
	}

IL_00e7:
	{
		uint16_t L_25 = V_8;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)34))))
		{
			goto IL_00f3;
		}
	}
	{
		uint16_t L_26 = V_8;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_00f6;
		}
	}

IL_00f3:
	{
		uint16_t L_27 = V_8;
		V_0 = L_27;
	}

IL_00f6:
	{
		goto IL_0287;
	}

IL_00fb:
	{
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_0113;
		}
	}
	{
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_0113;
		}
	}
	{
		t2142 * L_30 = V_5;
		t2142 * L_31 = L_30;
		int32_t L_32 = (L_31->f5);
		L_31->f5 = ((int32_t)((int32_t)L_32+(int32_t)1));
		goto IL_0139;
	}

IL_0113:
	{
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_0127;
		}
	}
	{
		t2142 * L_34 = V_5;
		t2142 * L_35 = L_34;
		int32_t L_36 = (L_35->f3);
		L_35->f3 = ((int32_t)((int32_t)L_36+(int32_t)1));
		goto IL_0139;
	}

IL_0127:
	{
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_0139;
		}
	}
	{
		t2142 * L_38 = V_5;
		t2142 * L_39 = L_38;
		int32_t L_40 = (L_39->f9);
		L_39->f9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_0139:
	{
		goto IL_013b;
	}

IL_013b:
	{
		uint16_t L_41 = V_8;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)35))))
		{
			goto IL_015c;
		}
	}
	{
		V_4 = 0;
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		t2142 * L_43 = V_5;
		L_43->f3 = 0;
		goto IL_015c;
	}

IL_0151:
	{
		bool L_44 = V_3;
		if (!L_44)
		{
			goto IL_015c;
		}
	}
	{
		t2142 * L_45 = V_5;
		L_45->f9 = 0;
	}

IL_015c:
	{
		t2142 * L_46 = V_5;
		int32_t L_47 = (L_46->f6);
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_016f;
		}
	}
	{
		t2142 * L_48 = V_5;
		int32_t L_49 = V_7;
		L_48->f6 = L_49;
	}

IL_016f:
	{
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_0193;
		}
	}
	{
		t2142 * L_51 = V_5;
		t2142 * L_52 = L_51;
		int32_t L_53 = (L_52->f4);
		L_52->f4 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		t2142 * L_55 = V_5;
		L_55->f0 = 1;
	}

IL_018e:
	{
		V_6 = 0;
		goto IL_01b9;
	}

IL_0193:
	{
		bool L_56 = V_2;
		if (!L_56)
		{
			goto IL_01a7;
		}
	}
	{
		t2142 * L_57 = V_5;
		t2142 * L_58 = L_57;
		int32_t L_59 = (L_58->f1);
		L_58->f1 = ((int32_t)((int32_t)L_59+(int32_t)1));
		goto IL_01b9;
	}

IL_01a7:
	{
		bool L_60 = V_3;
		if (!L_60)
		{
			goto IL_01b9;
		}
	}
	{
		t2142 * L_61 = V_5;
		t2142 * L_62 = L_61;
		int32_t L_63 = (L_62->f8);
		L_62->f8 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_01b9:
	{
		goto IL_0287;
	}

IL_01be:
	{
		t2142 * L_64 = V_5;
		bool L_65 = (L_64->f7);
		if (!L_65)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0287;
	}

IL_01cc:
	{
		t2142 * L_66 = V_5;
		L_66->f7 = 1;
		V_1 = 0;
		V_2 = 0;
		V_3 = 1;
		int32_t L_67 = V_7;
		int32_t L_68 = p1;
		int32_t L_69 = p2;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_67+(int32_t)1))-(int32_t)L_68))) >= ((int32_t)L_69)))
		{
			goto IL_0231;
		}
	}
	{
		t2* L_70 = p0;
		int32_t L_71 = V_7;
		uint16_t L_72 = m2778(L_70, ((int32_t)((int32_t)L_71+(int32_t)1)), &m2778_MI);
		V_9 = L_72;
		uint16_t L_73 = V_9;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_01fd;
		}
	}
	{
		t2142 * L_74 = V_5;
		L_74->f10 = 0;
	}

IL_01fd:
	{
		uint16_t L_75 = V_9;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)43))))
		{
			goto IL_0209;
		}
	}
	{
		uint16_t L_76 = V_9;
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0211;
		}
	}

IL_0209:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)((int32_t)L_77+(int32_t)1));
		goto IL_0231;
	}

IL_0211:
	{
		uint16_t L_78 = V_9;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)48))))
		{
			goto IL_0231;
		}
	}
	{
		uint16_t L_79 = V_9;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)35))))
		{
			goto IL_0231;
		}
	}
	{
		t2142 * L_80 = V_5;
		L_80->f7 = 0;
		t2142 * L_81 = V_5;
		int32_t L_82 = (L_81->f2);
		if ((((int32_t)L_82) >= ((int32_t)0)))
		{
			goto IL_0231;
		}
	}
	{
		V_1 = 1;
	}

IL_0231:
	{
		goto IL_0287;
	}

IL_0233:
	{
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		t2142 * L_83 = V_5;
		int32_t L_84 = (L_83->f2);
		if ((!(((uint32_t)L_84) == ((uint32_t)(-1)))))
		{
			goto IL_024c;
		}
	}
	{
		t2142 * L_85 = V_5;
		int32_t L_86 = V_7;
		L_85->f2 = L_86;
	}

IL_024c:
	{
		goto IL_0287;
	}

IL_024e:
	{
		t2142 * L_87 = V_5;
		t2142 * L_88 = L_87;
		int32_t L_89 = (L_88->f12);
		L_88->f12 = ((int32_t)((int32_t)L_89+(int32_t)1));
		goto IL_0287;
	}

IL_025f:
	{
		t2142 * L_90 = V_5;
		t2142 * L_91 = L_90;
		int32_t L_92 = (L_91->f13);
		L_91->f13 = ((int32_t)((int32_t)L_92+(int32_t)1));
		goto IL_0287;
	}

IL_0270:
	{
		bool L_93 = V_1;
		if (!L_93)
		{
			goto IL_0283;
		}
	}
	{
		t2142 * L_94 = V_5;
		int32_t L_95 = (L_94->f4);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_0283;
		}
	}
	{
		int32_t L_96 = V_6;
		V_6 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_0283:
	{
		goto IL_0287;
	}

IL_0285:
	{
		goto IL_0287;
	}

IL_0287:
	{
		int32_t L_97 = V_7;
		V_7 = ((int32_t)((int32_t)L_97+(int32_t)1));
	}

IL_028d:
	{
		int32_t L_98 = V_7;
		int32_t L_99 = p1;
		int32_t L_100 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_98-(int32_t)L_99))) < ((int32_t)L_100)))
		{
			goto IL_001d;
		}
	}
	{
		t2142 * L_101 = V_5;
		int32_t L_102 = (L_101->f8);
		if (L_102)
		{
			goto IL_02aa;
		}
	}
	{
		t2142 * L_103 = V_5;
		L_103->f7 = 0;
		goto IL_02b2;
	}

IL_02aa:
	{
		t2142 * L_104 = V_5;
		L_104->f5 = 0;
	}

IL_02b2:
	{
		t2142 * L_105 = V_5;
		int32_t L_106 = (L_105->f1);
		if (L_106)
		{
			goto IL_02c3;
		}
	}
	{
		t2142 * L_107 = V_5;
		L_107->f2 = (-1);
	}

IL_02c3:
	{
		t2142 * L_108 = V_5;
		t2142 * L_109 = L_108;
		int32_t L_110 = (L_109->f11);
		int32_t L_111 = V_6;
		L_109->f11 = ((int32_t)((int32_t)L_110+(int32_t)((int32_t)((int32_t)L_111*(int32_t)3))));
		t2142 * L_112 = V_5;
		return L_112;
	}
}
extern MethodInfo m11716_MI;
extern "C" t2* m11716 (t2142 * __this, t2* p0, int32_t p1, int32_t p2, t1561 * p3, bool p4, t328 * p5, t328 * p6, t328 * p7, MethodInfo* method)
{
	t328 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1101* V_7 = {0};
	t2* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	uint16_t V_17 = 0x0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	uint16_t V_21 = 0x0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		t1561 * L_1 = p3;
		t1101* L_2 = m8794(L_1, &m8794_MI);
		V_7 = L_2;
		t1561 * L_3 = p3;
		t2* L_4 = m8793(L_3, &m8793_MI);
		V_8 = L_4;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		bool L_5 = (__this->f0);
		if (!L_5)
		{
			goto IL_00e7;
		}
	}
	{
		t1101* L_6 = V_7;
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00e7;
		}
	}
	{
		t328 * L_7 = p5;
		int32_t L_8 = m5926(L_7, &m5926_MI);
		V_9 = L_8;
		V_14 = 0;
		goto IL_0073;
	}

IL_0059:
	{
		int32_t L_9 = V_10;
		t1101* L_10 = V_7;
		int32_t L_11 = V_14;
		int32_t L_12 = L_11;
		V_10 = ((int32_t)((int32_t)L_9+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12))));
		int32_t L_13 = V_10;
		int32_t L_14 = V_9;
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_15 = V_14;
		V_11 = L_15;
	}

IL_006d:
	{
		int32_t L_16 = V_14;
		V_14 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_17 = V_14;
		t1101* L_18 = V_7;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		t1101* L_19 = V_7;
		int32_t L_20 = V_11;
		int32_t L_21 = L_20;
		V_13 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21));
		int32_t L_22 = V_9;
		int32_t L_23 = V_10;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_24 = V_9;
		int32_t L_25 = V_10;
		G_B10_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 0;
	}

IL_0090:
	{
		V_15 = G_B10_0;
		int32_t L_26 = V_13;
		if (L_26)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_009e;
	}

IL_0098:
	{
		int32_t L_27 = V_11;
		V_11 = ((int32_t)((int32_t)L_27-(int32_t)1));
	}

IL_009e:
	{
		int32_t L_28 = V_11;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		t1101* L_29 = V_7;
		int32_t L_30 = V_11;
		int32_t L_31 = L_30;
		if (!(*(int32_t*)(int32_t*)SZArrayLdElema(L_29, L_31)))
		{
			goto IL_0098;
		}
	}

IL_00aa:
	{
		int32_t L_32 = V_15;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_33 = V_15;
		G_B18_0 = L_33;
		goto IL_00b8;
	}

IL_00b3:
	{
		t1101* L_34 = V_7;
		int32_t L_35 = V_11;
		int32_t L_36 = L_35;
		G_B18_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_36));
	}

IL_00b8:
	{
		V_13 = G_B18_0;
	}

IL_00ba:
	{
		int32_t L_37 = V_15;
		if (L_37)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_38 = V_13;
		V_12 = L_38;
		goto IL_00e5;
	}

IL_00c4:
	{
		int32_t L_39 = V_11;
		int32_t L_40 = V_15;
		int32_t L_41 = V_13;
		V_11 = ((int32_t)((int32_t)L_39+(int32_t)((int32_t)((int32_t)L_40/(int32_t)L_41))));
		int32_t L_42 = V_15;
		int32_t L_43 = V_13;
		V_12 = ((int32_t)((int32_t)L_42%(int32_t)L_43));
		int32_t L_44 = V_12;
		if (L_44)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_45 = V_13;
		V_12 = L_45;
		goto IL_00e5;
	}

IL_00df:
	{
		int32_t L_46 = V_11;
		V_11 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_00e5:
	{
		goto IL_00ee;
	}

IL_00e7:
	{
		__this->f0 = 0;
	}

IL_00ee:
	{
		int32_t L_47 = p1;
		V_16 = L_47;
		goto IL_03ce;
	}

IL_00f6:
	{
		t2* L_48 = p0;
		int32_t L_49 = V_16;
		uint16_t L_50 = m2778(L_48, L_49, &m2778_MI);
		V_17 = L_50;
		uint16_t L_51 = V_17;
		uint16_t L_52 = V_1;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0110;
		}
	}
	{
		uint16_t L_53 = V_17;
		if (!L_53)
		{
			goto IL_0110;
		}
	}
	{
		V_1 = 0;
		goto IL_03c8;
	}

IL_0110:
	{
		uint16_t L_54 = V_1;
		if (!L_54)
		{
			goto IL_0121;
		}
	}
	{
		t328 * L_55 = V_0;
		uint16_t L_56 = V_17;
		m2797(L_55, L_56, &m2797_MI);
		goto IL_03c8;
	}

IL_0121:
	{
		uint16_t L_57 = V_17;
		V_21 = L_57;
		uint16_t L_58 = V_21;
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_01af;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_01c3;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_039d;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_58-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_01af;
		}
	}

IL_0147:
	{
		uint16_t L_59 = V_21;
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_039b;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0348;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_59-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_01c5;
		}
	}

IL_0165:
	{
		uint16_t L_60 = V_21;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)69))))
		{
			goto IL_0297;
		}
	}
	{
		uint16_t L_61 = V_21;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)92))))
		{
			goto IL_018e;
		}
	}
	{
		uint16_t L_62 = V_21;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)101))))
		{
			goto IL_0297;
		}
	}
	{
		uint16_t L_63 = V_21;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)8240))))
		{
			goto IL_03ad;
		}
	}
	{
		goto IL_03bd;
	}

IL_018e:
	{
		int32_t L_64 = V_16;
		V_16 = ((int32_t)((int32_t)L_64+(int32_t)1));
		int32_t L_65 = V_16;
		int32_t L_66 = p1;
		int32_t L_67 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_65-(int32_t)L_66))) >= ((int32_t)L_67)))
		{
			goto IL_01aa;
		}
	}
	{
		t328 * L_68 = V_0;
		t2* L_69 = p0;
		int32_t L_70 = V_16;
		uint16_t L_71 = m2778(L_69, L_70, &m2778_MI);
		m2797(L_68, L_71, &m2797_MI);
	}

IL_01aa:
	{
		goto IL_03c8;
	}

IL_01af:
	{
		uint16_t L_72 = V_17;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)34))))
		{
			goto IL_01bb;
		}
	}
	{
		uint16_t L_73 = V_17;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_01be;
		}
	}

IL_01bb:
	{
		uint16_t L_74 = V_17;
		V_1 = L_74;
	}

IL_01be:
	{
		goto IL_03c8;
	}

IL_01c3:
	{
		goto IL_01c5;
	}

IL_01c5:
	{
		bool L_75 = V_2;
		if (!L_75)
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_76 = V_4;
		V_4 = ((int32_t)((int32_t)L_76+(int32_t)1));
		int32_t L_77 = (__this->f4);
		int32_t L_78 = V_4;
		t328 * L_79 = p5;
		int32_t L_80 = m5926(L_79, &m5926_MI);
		int32_t L_81 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_77-(int32_t)L_78))) < ((int32_t)((int32_t)((int32_t)L_80+(int32_t)L_81)))))
		{
			goto IL_01ef;
		}
	}
	{
		uint16_t L_82 = V_17;
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_025c;
		}
	}

IL_01ef:
	{
		goto IL_0247;
	}

IL_01f1:
	{
		t328 * L_83 = V_0;
		t328 * L_84 = p5;
		int32_t L_85 = V_5;
		int32_t L_86 = L_85;
		V_5 = ((int32_t)((int32_t)L_86+(int32_t)1));
		uint16_t L_87 = m10932(L_84, L_86, &m10932_MI);
		m2797(L_83, L_87, &m2797_MI);
		bool L_88 = (__this->f0);
		if (!L_88)
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_89 = V_9;
		int32_t L_90 = ((int32_t)((int32_t)L_89-(int32_t)1));
		V_9 = L_90;
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_0247;
		}
	}
	{
		int32_t L_91 = V_12;
		int32_t L_92 = ((int32_t)((int32_t)L_91-(int32_t)1));
		V_12 = L_92;
		if (L_92)
		{
			goto IL_0247;
		}
	}
	{
		t328 * L_93 = V_0;
		t2* L_94 = V_8;
		m1207(L_93, L_94, &m1207_MI);
		int32_t L_95 = V_11;
		int32_t L_96 = ((int32_t)((int32_t)L_95-(int32_t)1));
		V_11 = L_96;
		t1101* L_97 = V_7;
		if ((((int32_t)L_96) >= ((int32_t)(((int32_t)(((t121 *)L_97)->max_length))))))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_98 = V_11;
		if ((((int32_t)L_98) < ((int32_t)0)))
		{
			goto IL_0243;
		}
	}
	{
		t1101* L_99 = V_7;
		int32_t L_100 = V_11;
		int32_t L_101 = L_100;
		V_13 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_101));
	}

IL_0243:
	{
		int32_t L_102 = V_13;
		V_12 = L_102;
	}

IL_0247:
	{
		int32_t L_103 = (__this->f4);
		int32_t L_104 = V_4;
		int32_t L_105 = V_5;
		t328 * L_106 = p5;
		int32_t L_107 = m5926(L_106, &m5926_MI);
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_104))+(int32_t)L_105))) < ((int32_t)L_107)))
		{
			goto IL_01f1;
		}
	}

IL_025c:
	{
		goto IL_03c8;
	}

IL_0261:
	{
		bool L_108 = V_3;
		if (!L_108)
		{
			goto IL_0289;
		}
	}
	{
		int32_t L_109 = V_6;
		t328 * L_110 = p6;
		int32_t L_111 = m5926(L_110, &m5926_MI);
		if ((((int32_t)L_109) >= ((int32_t)L_111)))
		{
			goto IL_0284;
		}
	}
	{
		t328 * L_112 = V_0;
		t328 * L_113 = p6;
		int32_t L_114 = V_6;
		int32_t L_115 = L_114;
		V_6 = ((int32_t)((int32_t)L_115+(int32_t)1));
		uint16_t L_116 = m10932(L_113, L_115, &m10932_MI);
		m2797(L_112, L_116, &m2797_MI);
	}

IL_0284:
	{
		goto IL_03c8;
	}

IL_0289:
	{
		t328 * L_117 = V_0;
		uint16_t L_118 = V_17;
		m2797(L_117, L_118, &m2797_MI);
		goto IL_03c8;
	}

IL_0297:
	{
		t328 * L_119 = p7;
		if (!L_119)
		{
			goto IL_02a3;
		}
	}
	{
		bool L_120 = (__this->f7);
		if (L_120)
		{
			goto IL_02b1;
		}
	}

IL_02a3:
	{
		t328 * L_121 = V_0;
		uint16_t L_122 = V_17;
		m2797(L_121, L_122, &m2797_MI);
		goto IL_03c8;
	}

IL_02b1:
	{
		V_18 = 1;
		V_19 = 0;
		int32_t L_123 = V_16;
		V_20 = ((int32_t)((int32_t)L_123+(int32_t)1));
		goto IL_0301;
	}

IL_02bf:
	{
		t2* L_124 = p0;
		int32_t L_125 = V_20;
		uint16_t L_126 = m2778(L_124, L_125, &m2778_MI);
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_02d0;
		}
	}
	{
		V_19 = 1;
		goto IL_02fb;
	}

IL_02d0:
	{
		int32_t L_127 = V_20;
		int32_t L_128 = V_16;
		if ((!(((uint32_t)L_127) == ((uint32_t)((int32_t)((int32_t)L_128+(int32_t)1))))))
		{
			goto IL_02f2;
		}
	}
	{
		t2* L_129 = p0;
		int32_t L_130 = V_20;
		uint16_t L_131 = m2778(L_129, L_130, &m2778_MI);
		if ((((int32_t)L_131) == ((int32_t)((int32_t)43))))
		{
			goto IL_02f0;
		}
	}
	{
		t2* L_132 = p0;
		int32_t L_133 = V_20;
		uint16_t L_134 = m2778(L_132, L_133, &m2778_MI);
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_02f2;
		}
	}

IL_02f0:
	{
		goto IL_02fb;
	}

IL_02f2:
	{
		bool L_135 = V_19;
		if (L_135)
		{
			goto IL_02f9;
		}
	}
	{
		V_18 = 0;
	}

IL_02f9:
	{
		goto IL_0308;
	}

IL_02fb:
	{
		int32_t L_136 = V_20;
		V_20 = ((int32_t)((int32_t)L_136+(int32_t)1));
	}

IL_0301:
	{
		int32_t L_137 = V_20;
		int32_t L_138 = p1;
		int32_t L_139 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_137-(int32_t)L_138))) < ((int32_t)L_139)))
		{
			goto IL_02bf;
		}
	}

IL_0308:
	{
		bool L_140 = V_18;
		if (!L_140)
		{
			goto IL_033a;
		}
	}
	{
		int32_t L_141 = V_20;
		V_16 = ((int32_t)((int32_t)L_141-(int32_t)1));
		int32_t L_142 = (__this->f2);
		V_2 = ((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_2;
		V_3 = ((((int32_t)L_143) == ((int32_t)0))? 1 : 0);
		t328 * L_144 = V_0;
		uint16_t L_145 = V_17;
		m2797(L_144, L_145, &m2797_MI);
		t328 * L_146 = V_0;
		t328 * L_147 = p7;
		m5781(L_146, L_147, &m5781_MI);
		p7 = (t328 *)NULL;
		goto IL_0343;
	}

IL_033a:
	{
		t328 * L_148 = V_0;
		uint16_t L_149 = V_17;
		m2797(L_148, L_149, &m2797_MI);
	}

IL_0343:
	{
		goto IL_03c8;
	}

IL_0348:
	{
		int32_t L_150 = (__this->f2);
		int32_t L_151 = V_16;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_151))))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_152 = (__this->f1);
		if ((((int32_t)L_152) <= ((int32_t)0)))
		{
			goto IL_037d;
		}
	}
	{
		goto IL_0372;
	}

IL_035d:
	{
		t328 * L_153 = V_0;
		t328 * L_154 = p5;
		int32_t L_155 = V_5;
		int32_t L_156 = L_155;
		V_5 = ((int32_t)((int32_t)L_156+(int32_t)1));
		uint16_t L_157 = m10932(L_154, L_156, &m10932_MI);
		m2797(L_153, L_157, &m2797_MI);
	}

IL_0372:
	{
		int32_t L_158 = V_5;
		t328 * L_159 = p5;
		int32_t L_160 = m5926(L_159, &m5926_MI);
		if ((((int32_t)L_158) < ((int32_t)L_160)))
		{
			goto IL_035d;
		}
	}

IL_037d:
	{
		t328 * L_161 = p6;
		int32_t L_162 = m5926(L_161, &m5926_MI);
		if ((((int32_t)L_162) <= ((int32_t)0)))
		{
			goto IL_0395;
		}
	}
	{
		t328 * L_163 = V_0;
		t1561 * L_164 = p3;
		t2* L_165 = m8792(L_164, &m8792_MI);
		m1207(L_163, L_165, &m1207_MI);
	}

IL_0395:
	{
		V_2 = 0;
		V_3 = 1;
		goto IL_03c8;
	}

IL_039b:
	{
		goto IL_03c8;
	}

IL_039d:
	{
		t328 * L_166 = V_0;
		t1561 * L_167 = p3;
		t2* L_168 = m8803(L_167, &m8803_MI);
		m1207(L_166, L_168, &m1207_MI);
		goto IL_03c8;
	}

IL_03ad:
	{
		t328 * L_169 = V_0;
		t1561 * L_170 = p3;
		t2* L_171 = m8804(L_170, &m8804_MI);
		m1207(L_169, L_171, &m1207_MI);
		goto IL_03c8;
	}

IL_03bd:
	{
		t328 * L_172 = V_0;
		uint16_t L_173 = V_17;
		m2797(L_172, L_173, &m2797_MI);
		goto IL_03c8;
	}

IL_03c8:
	{
		int32_t L_174 = V_16;
		V_16 = ((int32_t)((int32_t)L_174+(int32_t)1));
	}

IL_03ce:
	{
		int32_t L_175 = V_16;
		int32_t L_176 = p1;
		int32_t L_177 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_175-(int32_t)L_176))) < ((int32_t)L_177)))
		{
			goto IL_00f6;
		}
	}
	{
		bool L_178 = p4;
		if (L_178)
		{
			goto IL_03eb;
		}
	}
	{
		t328 * L_179 = V_0;
		t1561 * L_180 = p3;
		t2* L_181 = m8790(L_180, &m8790_MI);
		m10941(L_179, 0, L_181, &m10941_MI);
	}

IL_03eb:
	{
		t328 * L_182 = V_0;
		t2* L_183 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_182);
		return L_183;
	}
}
#include "t2143.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2143_TI;
#include "t2143MD.h"

#include "t1878.h"
extern TypeInfo t1878_TI;
#include "t1878MD.h"
extern MethodInfo m8707_MI;
extern MethodInfo m11094_MI;
extern MethodInfo m11746_MI;
extern MethodInfo m11719_MI;
extern MethodInfo m11724_MI;
extern MethodInfo m11725_MI;
extern MethodInfo m11722_MI;
extern MethodInfo m11726_MI;
extern MethodInfo m11727_MI;
extern MethodInfo m11720_MI;
extern MethodInfo m11731_MI;
extern MethodInfo m11728_MI;
extern MethodInfo m11732_MI;
extern MethodInfo m11733_MI;
extern MethodInfo m11721_MI;
extern MethodInfo m11729_MI;
extern MethodInfo m11730_MI;
extern MethodInfo m11758_MI;
extern MethodInfo m7525_MI;
extern MethodInfo m11723_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m8809_MI;
extern MethodInfo m11754_MI;
extern MethodInfo m11756_MI;
extern MethodInfo m11755_MI;
extern MethodInfo m11757_MI;
extern MethodInfo m11759_MI;
extern MethodInfo m11083_MI;
extern MethodInfo m11717_MI;
extern MethodInfo m11760_MI;
extern MethodInfo m11734_MI;
extern MethodInfo m11781_MI;
extern MethodInfo m11761_MI;
extern MethodInfo m11735_MI;
extern MethodInfo m11737_MI;
extern MethodInfo m11736_MI;
extern MethodInfo m11738_MI;
extern MethodInfo m11745_MI;
extern MethodInfo m8788_MI;
extern MethodInfo m8805_MI;
extern MethodInfo m8789_MI;
extern MethodInfo m11788_MI;
extern MethodInfo m11782_MI;
extern MethodInfo m11787_MI;
extern MethodInfo m11739_MI;
extern MethodInfo m11767_MI;
extern MethodInfo m11780_MI;
extern MethodInfo m11768_MI;
extern MethodInfo m11769_MI;
extern MethodInfo m11770_MI;
extern MethodInfo m11789_MI;
extern MethodInfo m11740_MI;
extern MethodInfo m11744_MI;
extern MethodInfo m11805_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m11783_MI;
extern MethodInfo m11784_MI;
extern MethodInfo m11792_MI;
extern MethodInfo m11786_MI;
extern MethodInfo m11790_MI;
extern MethodInfo m11791_MI;
extern MethodInfo m11785_MI;
extern MethodInfo m11794_MI;
extern MethodInfo m8779_MI;
extern MethodInfo m11753_MI;
extern MethodInfo m11747_MI;
extern MethodInfo m8784_MI;
extern MethodInfo m8785_MI;
extern MethodInfo m11742_MI;
extern MethodInfo m8783_MI;
extern MethodInfo m8782_MI;
extern MethodInfo m8781_MI;
extern MethodInfo m11802_MI;
extern MethodInfo m8780_MI;
extern MethodInfo m11801_MI;
extern MethodInfo m11806_MI;
extern MethodInfo m8791_MI;
extern MethodInfo m11799_MI;
extern MethodInfo m11810_MI;
extern MethodInfo m11749_MI;
extern MethodInfo m11752_MI;
extern MethodInfo m11793_MI;
extern MethodInfo m8795_MI;
extern MethodInfo m8797_MI;
extern MethodInfo m11808_MI;
extern MethodInfo m8802_MI;
extern MethodInfo m8801_MI;
extern MethodInfo m8800_MI;
extern MethodInfo m8799_MI;
extern MethodInfo m8798_MI;
extern MethodInfo m11804_MI;
extern MethodInfo m11803_MI;
extern MethodInfo m11750_MI;
extern MethodInfo m11809_MI;
extern MethodInfo m11797_MI;
extern MethodInfo m11751_MI;
extern MethodInfo m11798_MI;
extern MethodInfo m11748_MI;
extern MethodInfo m11800_MI;
extern MethodInfo m10943_MI;
extern MethodInfo m10942_MI;
extern MethodInfo m8806_MI;
extern MethodInfo m11796_MI;
extern MethodInfo m10935_MI;
extern MethodInfo m11795_MI;
extern MethodInfo m10938_MI;
extern MethodInfo m11807_MI;
extern MethodInfo m11743_MI;
extern MethodInfo m10933_MI;
extern MethodInfo m7100_MI;


extern TypeInfo* t318_TI_var;
extern "C" void m11717 (t2143 * __this, t1878 * p0, MethodInfo* method)
{
	static bool m11717_init;
	if (!m11717_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m11717_init = true;
	}
	{
		m336(__this, &m336_MI);
		__this->f23 = ((t318*)SZArrayNew(t318_TI_var, 0));
		t1878 * L_0 = p0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		t1878 * L_1 = p0;
		__this->f6 = L_1;
		t1878 * L_2 = (__this->f6);
		t907 * L_3 = m11094(L_2, &m11094_MI);
		m11746(__this, L_3, &m11746_MI);
		return;
	}
}
extern MethodInfo m11718_MI;
extern "C" void m11718 (t9 * __this , MethodInfo* method)
{
	{
		m11719(NULL, (&((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f0), (&((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f1), (&((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f2), (&((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f3), (&((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f4), (&((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5), &m11719_MI);
		return;
	}
}
extern "C" void m11719 (t9 * __this , uint64_t** p0, int32_t** p1, uint16_t** p2, uint16_t** p3, int64_t** p4, int32_t** p5, MethodInfo* method)
{
	typedef void (*m11719_ftn) (uint64_t**, int32_t**, uint16_t**, uint16_t**, int64_t**, int32_t**);
	static m11719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11719_ftn)il2cpp_codegen_resolve_icall ("System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern "C" int64_t m11720 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int64_t* L_0 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f4;
		int32_t L_1 = p0;
		return (*((int64_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)8))))));
	}
}
extern "C" void m11721 (t2143 * __this, uint32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_1 = p0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_2 = p0;
		int32_t L_3 = V_0;
		p0 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)((int32_t)100000000)*(int32_t)L_3))));
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_5 = m11724(NULL, L_4, &m11724_MI);
		__this->f20 = L_5;
	}

IL_0029:
	{
		uint32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_7 = m11725(NULL, L_6, &m11725_MI);
		__this->f19 = L_7;
		return;
	}
}
extern "C" void m11722 (t2143 * __this, uint64_t p0, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_005b;
		}
	}
	{
		uint64_t L_1 = p0;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_1/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_2 = p0;
		int64_t L_3 = V_0;
		p0 = ((int64_t)((int64_t)L_2-(int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)100000000)))*(int64_t)L_3))));
		int64_t L_4 = V_0;
		if ((((int64_t)L_4) < ((int64_t)(((int64_t)((int32_t)100000000))))))
		{
			goto IL_004b;
		}
	}
	{
		int64_t L_5 = V_0;
		V_1 = (((int32_t)((int64_t)((int64_t)L_5/(int64_t)(((int64_t)((int32_t)100000000)))))));
		int64_t L_6 = V_0;
		int32_t L_7 = V_1;
		V_0 = ((int64_t)((int64_t)L_6-(int64_t)((int64_t)((int64_t)(((int64_t)L_7))*(int64_t)(((int64_t)((int32_t)100000000)))))));
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_9 = m11725(NULL, L_8, &m11725_MI);
		__this->f21 = L_9;
	}

IL_004b:
	{
		int64_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		int64_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_12 = m11725(NULL, (((int32_t)L_11)), &m11725_MI);
		__this->f20 = L_12;
	}

IL_005b:
	{
		uint64_t L_13 = p0;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		uint64_t L_14 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_15 = m11725(NULL, (((int32_t)L_14)), &m11725_MI);
		__this->f19 = L_15;
	}

IL_006b:
	{
		return;
	}
}
extern "C" void m11723 (t2143 * __this, uint32_t p0, uint64_t p1, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		uint32_t L_0 = p0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		uint64_t L_1 = p1;
		m11722(__this, L_1, &m11722_MI);
		return;
	}

IL_000b:
	{
		uint32_t L_2 = p0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_2/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_3 = p0;
		uint32_t L_4 = V_0;
		V_1 = (((uint64_t)(((uint32_t)((int32_t)((int32_t)L_3-(int32_t)((int32_t)((int32_t)L_4*(int32_t)((int32_t)100000000)))))))));
		uint64_t L_5 = p1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_5/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_6 = p1;
		uint64_t L_7 = V_2;
		uint64_t L_8 = V_1;
		V_3 = ((int64_t)((int64_t)((int64_t)((int64_t)L_6-(int64_t)((int64_t)((int64_t)L_7*(int64_t)(((int64_t)((int32_t)100000000)))))))+(int64_t)((int64_t)((int64_t)L_8*(int64_t)(((int64_t)((int32_t)9551616)))))));
		uint32_t L_9 = V_0;
		p0 = L_9;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_1;
		p1 = ((int64_t)((int64_t)L_10+(int64_t)((int64_t)((int64_t)L_11*(int64_t)((int64_t)184467440737LL)))));
		uint64_t L_12 = V_3;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_13 = V_3;
		uint64_t L_14 = V_2;
		V_3 = ((int64_t)((int64_t)L_13-(int64_t)((int64_t)((int64_t)L_14*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_15 = p1;
		uint64_t L_16 = V_2;
		p1 = ((int64_t)((int64_t)L_15+(int64_t)L_16));
		uint64_t L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_18 = m11725(NULL, (((int32_t)L_17)), &m11725_MI);
		__this->f19 = L_18;
		uint64_t L_19 = p1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_19/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_20 = p1;
		uint64_t L_21 = V_2;
		V_3 = ((int64_t)((int64_t)L_20-(int64_t)((int64_t)((int64_t)L_21*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_22 = V_2;
		p1 = L_22;
		uint32_t L_23 = p0;
		if (!L_23)
		{
			goto IL_00ce;
		}
	}
	{
		uint64_t L_24 = p1;
		uint32_t L_25 = p0;
		p1 = ((int64_t)((int64_t)L_24+(int64_t)((int64_t)((int64_t)(((uint64_t)L_25))*(int64_t)((int64_t)184467440737LL)))));
		uint64_t L_26 = V_3;
		uint32_t L_27 = p0;
		V_3 = ((int64_t)((int64_t)L_26+(int64_t)((int64_t)((int64_t)(((uint64_t)L_27))*(int64_t)(((int64_t)((int32_t)9551616)))))));
		uint64_t L_28 = V_3;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_28/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_29 = p1;
		uint64_t L_30 = V_2;
		p1 = ((int64_t)((int64_t)L_29+(int64_t)L_30));
		uint64_t L_31 = V_3;
		uint64_t L_32 = V_2;
		V_3 = ((int64_t)((int64_t)L_31-(int64_t)((int64_t)((int64_t)L_32*(int64_t)(((int64_t)((int32_t)100000000)))))));
	}

IL_00ce:
	{
		uint64_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_34 = m11725(NULL, (((int32_t)L_33)), &m11725_MI);
		__this->f20 = L_34;
		uint64_t L_35 = p1;
		if ((!(((uint64_t)L_35) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_0108;
		}
	}
	{
		uint64_t L_36 = p1;
		V_2 = ((int64_t)((uint64_t)(int64_t)L_36/(uint64_t)(int64_t)(((int64_t)((int32_t)100000000)))));
		uint64_t L_37 = p1;
		uint64_t L_38 = V_2;
		p1 = ((int64_t)((int64_t)L_37-(int64_t)((int64_t)((int64_t)L_38*(int64_t)(((int64_t)((int32_t)100000000)))))));
		uint64_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_40 = m11725(NULL, (((int32_t)L_39)), &m11725_MI);
		__this->f22 = L_40;
	}

IL_0108:
	{
		uint64_t L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_42 = m11725(NULL, (((int32_t)L_41)), &m11725_MI);
		__this->f21 = L_42;
		return;
	}
}
extern "C" uint32_t m11724 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t* L_1 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5;
		int32_t L_2 = p0;
		return (*((int32_t*)((intptr_t)((intptr_t)L_1+(int32_t)((int32_t)((int32_t)L_2*(int32_t)4))))));
	}

IL_0010:
	{
		int32_t L_3 = p0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t* L_4 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5;
		int32_t L_5 = V_0;
		int32_t* L_6 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5;
		int32_t L_7 = p0;
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))))<<(int32_t)8))|(int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_6+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)((int32_t)((int32_t)L_8*(int32_t)((int32_t)100)))))*(int32_t)4))))))));
	}
}
extern "C" uint32_t m11725 (t9 * __this , int32_t p0, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10000))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = p0;
		V_1 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)10000)));
		int32_t L_2 = p0;
		int32_t L_3 = V_1;
		p0 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)10000)))));
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_5 = m11724(NULL, L_4, &m11724_MI);
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)));
	}

IL_0029:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_8 = m11724(NULL, L_7, &m11724_MI);
		return ((int32_t)((int32_t)L_6|(int32_t)L_8));
	}
}
extern "C" int32_t m11726 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)16))))
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		return 2;
	}

IL_0011:
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_001b;
		}
	}
	{
		return 3;
	}

IL_001b:
	{
		return 4;
	}
}
extern "C" int32_t m11727 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)65536)))))
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_2 = m11726(NULL, L_1, &m11726_MI);
		return L_2;
	}

IL_000f:
	{
		uint32_t L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_4 = m11726(NULL, ((int32_t)((uint32_t)L_3>>((int32_t)16))), &m11726_MI);
		return ((int32_t)((int32_t)4+(int32_t)L_4));
	}
}
extern "C" int32_t m11728 (t2143 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f22);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_2 = m11727(NULL, L_1, &m11727_MI);
		return ((int32_t)((int32_t)L_2+(int32_t)((int32_t)24)));
	}

IL_0017:
	{
		uint32_t L_3 = (__this->f21);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_5 = m11727(NULL, L_4, &m11727_MI);
		return ((int32_t)((int32_t)L_5+(int32_t)((int32_t)16)));
	}

IL_002e:
	{
		uint32_t L_6 = (__this->f20);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_7 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_8 = m11727(NULL, L_7, &m11727_MI);
		return ((int32_t)((int32_t)L_8+(int32_t)8));
	}

IL_0044:
	{
		uint32_t L_9 = (__this->f19);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_11 = m11727(NULL, L_10, &m11727_MI);
		return L_11;
	}

IL_0058:
	{
		return 0;
	}
}
extern "C" int32_t m11729 (t9 * __this , int64_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)18);
		goto IL_0016;
	}

IL_0005:
	{
		int64_t L_0 = p0;
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int64_t L_2 = m11720(NULL, L_1, &m11720_MI);
		if ((((int64_t)L_0) < ((int64_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		return ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
extern "C" int32_t m11730 (t2143 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f13);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->f15);
		return ((int32_t)((int32_t)L_1+(int32_t)2));
	}

IL_0013:
	{
		int32_t L_2 = (__this->f14);
		int32_t L_3 = (__this->f15);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = (__this->f15);
		return L_4;
	}

IL_0028:
	{
		uint16_t L_5 = (__this->f13);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = (__this->f15);
		int32_t L_7 = (__this->f14);
		int32_t L_8 = m11611(NULL, ((int32_t)((int32_t)L_6+(int32_t)2)), L_7, &m11611_MI);
		return L_8;
	}

IL_0046:
	{
		uint16_t L_9 = (__this->f13);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = (__this->f15);
		int32_t L_11 = (__this->f14);
		int32_t L_12 = m11611(NULL, ((int32_t)((int32_t)L_10+(int32_t)2)), ((int32_t)((int32_t)L_11+(int32_t)1)), &m11611_MI);
		return L_12;
	}

IL_0066:
	{
		int32_t L_13 = (__this->f15);
		return L_13;
	}
}
extern "C" int32_t m11731 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0006:
	{
		t2* L_0 = p0;
		int32_t L_1 = V_1;
		uint16_t L_2 = m2778(L_0, L_1, &m2778_MI);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_2;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)10)))+(int32_t)L_4));
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)9))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0029;
		}
	}

IL_0026:
	{
		return ((int32_t)-2);
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		t2* L_10 = p0;
		int32_t L_11 = m2763(L_10, &m2763_MI);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
extern "C" void m11732 (t2143 * __this, t2* p0, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = 0;
		V_1 = L_0;
		__this->f22 = L_0;
		uint32_t L_1 = V_1;
		uint32_t L_2 = L_1;
		V_1 = L_2;
		__this->f21 = L_2;
		uint32_t L_3 = V_1;
		uint32_t L_4 = L_3;
		V_1 = L_4;
		__this->f20 = L_4;
		uint32_t L_5 = V_1;
		__this->f19 = L_5;
		__this->f17 = 0;
		int32_t L_6 = 0;
		V_2 = L_6;
		__this->f9 = L_6;
		bool L_7 = V_2;
		__this->f8 = L_7;
		__this->f10 = 0;
		__this->f11 = 1;
		__this->f14 = (-1);
		t2* L_8 = p0;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		t2* L_9 = p0;
		int32_t L_10 = m2763(L_9, &m2763_MI);
		if (L_10)
		{
			goto IL_0062;
		}
	}

IL_0059:
	{
		__this->f13 = ((int32_t)71);
		return;
	}

IL_0062:
	{
		t2* L_11 = p0;
		uint16_t L_12 = m2778(L_11, 0, &m2778_MI);
		V_0 = L_12;
		uint16_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)97))))
		{
			goto IL_0086;
		}
	}
	{
		uint16_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)122))))
		{
			goto IL_0086;
		}
	}
	{
		uint16_t L_15 = V_0;
		V_0 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15-(int32_t)((int32_t)97)))+(int32_t)((int32_t)65)))));
		__this->f11 = 0;
		goto IL_00a0;
	}

IL_0086:
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)65))))
		{
			goto IL_0090;
		}
	}
	{
		uint16_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)90))))
		{
			goto IL_00a0;
		}
	}

IL_0090:
	{
		__this->f10 = 1;
		__this->f13 = ((int32_t)48);
		return;
	}

IL_00a0:
	{
		uint16_t L_18 = V_0;
		__this->f13 = L_18;
		t2* L_19 = p0;
		int32_t L_20 = m2763(L_19, &m2763_MI);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		t2* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_22 = m11731(NULL, L_21, &m11731_MI);
		__this->f14 = L_22;
		int32_t L_23 = (__this->f14);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00dc;
		}
	}
	{
		__this->f10 = 1;
		__this->f13 = ((int32_t)48);
		__this->f14 = (-1);
	}

IL_00dc:
	{
		return;
	}
}
extern "C" void m11733 (t2143 * __this, uint64_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f15);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 0)
		{
			goto IL_0022;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 1)
		{
			goto IL_001b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)3)) == 2)
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_003d;
	}

IL_0022:
	{
		uint64_t L_3 = p0;
		p0 = (((uint64_t)(((uint8_t)L_3))));
		goto IL_003d;
	}

IL_002b:
	{
		uint64_t L_4 = p0;
		p0 = (((uint64_t)(((uint16_t)L_4))));
		goto IL_003d;
	}

IL_0034:
	{
		uint64_t L_5 = p0;
		p0 = (((uint64_t)(((uint32_t)L_5))));
		goto IL_003d;
	}

IL_003d:
	{
		uint64_t L_6 = p0;
		__this->f19 = (((uint32_t)L_6));
		uint64_t L_7 = p0;
		__this->f20 = (((uint32_t)((int64_t)((uint64_t)L_7>>((int32_t)32)))));
		int32_t L_8 = m11728(__this, &m11728_MI);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f16 = L_9;
		int32_t L_10 = V_0;
		__this->f18 = L_10;
		uint64_t L_11 = p0;
		if (L_11)
		{
			goto IL_006f;
		}
	}
	{
		__this->f18 = 1;
	}

IL_006f:
	{
		return;
	}
}
extern "C" void m11734 (t2143 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11732(__this, L_0, &m11732_MI);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		int32_t L_2 = p1;
		__this->f12 = ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_3 = p1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		uint16_t L_4 = (__this->f13);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0031;
		}
	}

IL_0028:
	{
		int32_t L_5 = p1;
		m11733(__this, (((int64_t)L_5)), &m11733_MI);
		return;
	}

IL_0031:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = p1;
		p1 = ((-L_7));
	}

IL_003b:
	{
		int32_t L_8 = p1;
		m11721(__this, L_8, &m11721_MI);
		int32_t L_9 = m11728(__this, &m11728_MI);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->f16 = L_10;
		int32_t L_11 = V_0;
		__this->f18 = L_11;
		return;
	}
}
extern "C" void m11735 (t2143 * __this, t2* p0, uint32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11732(__this, L_0, &m11732_MI);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		__this->f12 = 1;
		uint32_t L_2 = p1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint16_t L_3 = (__this->f13);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		uint32_t L_4 = p1;
		m11733(__this, (((uint64_t)L_4)), &m11733_MI);
		return;
	}

IL_002b:
	{
		uint32_t L_5 = p1;
		m11721(__this, L_5, &m11721_MI);
		int32_t L_6 = m11728(__this, &m11728_MI);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f16 = L_7;
		int32_t L_8 = V_0;
		__this->f18 = L_8;
		return;
	}
}
extern "C" void m11736 (t2143 * __this, t2* p0, int64_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11732(__this, L_0, &m11732_MI);
		__this->f15 = ((int32_t)19);
		int64_t L_1 = p1;
		__this->f12 = ((((int32_t)((((int64_t)L_1) < ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_2 = p1;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint16_t L_3 = (__this->f13);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0032;
		}
	}

IL_002a:
	{
		int64_t L_4 = p1;
		m11733(__this, L_4, &m11733_MI);
		return;
	}

IL_0032:
	{
		int64_t L_5 = p1;
		if ((((int64_t)L_5) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_6 = p1;
		p1 = ((-L_6));
	}

IL_003d:
	{
		int64_t L_7 = p1;
		m11722(__this, L_7, &m11722_MI);
		int32_t L_8 = m11728(__this, &m11728_MI);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f16 = L_9;
		int32_t L_10 = V_0;
		__this->f18 = L_10;
		return;
	}
}
extern "C" void m11737 (t2143 * __this, t2* p0, uint64_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11732(__this, L_0, &m11732_MI);
		__this->f15 = ((int32_t)20);
		__this->f12 = 1;
		uint64_t L_1 = p1;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		uint16_t L_2 = (__this->f13);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_002b;
		}
	}

IL_0023:
	{
		uint64_t L_3 = p1;
		m11733(__this, L_3, &m11733_MI);
		return;
	}

IL_002b:
	{
		uint64_t L_4 = p1;
		m11722(__this, L_4, &m11722_MI);
		int32_t L_5 = m11728(__this, &m11728_MI);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->f16 = L_6;
		int32_t L_7 = V_0;
		__this->f18 = L_7;
		return;
	}
}
extern "C" void m11738 (t2143 * __this, t2* p0, double p1, int32_t p2, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int64_t V_13 = 0;
	{
		t2* L_0 = p0;
		m11732(__this, L_0, &m11732_MI);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		double L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		int64_t L_3 = m11199(NULL, L_2, &m11199_MI);
		V_0 = L_3;
		int64_t L_4 = V_0;
		__this->f12 = ((((int32_t)((((int64_t)L_4) < ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_5 = V_0;
		V_0 = ((int64_t)((int64_t)L_5&(int64_t)((int64_t)std::numeric_limits<int64_t>::max())));
		int64_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		__this->f18 = 1;
		__this->f16 = 0;
		__this->f12 = 1;
		return;
	}

IL_0048:
	{
		int64_t L_7 = V_0;
		V_1 = (((int32_t)((int64_t)((int64_t)L_7>>(int32_t)((int32_t)52)))));
		int64_t L_8 = V_0;
		V_2 = ((int64_t)((int64_t)L_8&(int64_t)((int64_t)4503599627370495LL)));
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2047)))))
		{
			goto IL_007c;
		}
	}
	{
		int64_t L_10 = V_2;
		__this->f8 = ((((int32_t)((((int64_t)L_10) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int64_t L_11 = V_2;
		__this->f9 = ((((int64_t)L_11) == ((int64_t)(((int64_t)0))))? 1 : 0);
		return;
	}

IL_007c:
	{
		V_3 = 0;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_00a3;
		}
	}
	{
		V_1 = 1;
		int64_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_14 = m11729(NULL, L_13, &m11729_MI);
		V_4 = L_14;
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)15))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_16 = V_4;
		V_3 = ((int32_t)((int32_t)L_16-(int32_t)((int32_t)15)));
		int64_t L_17 = V_2;
		int32_t L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int64_t L_19 = m11720(NULL, ((-L_18)), &m11720_MI);
		V_2 = ((int64_t)((int64_t)L_17*(int64_t)L_19));
	}

IL_00a1:
	{
		goto IL_00b8;
	}

IL_00a3:
	{
		int64_t L_20 = V_2;
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_20+(int64_t)((int64_t)4503599627370495LL)))+(int64_t)(((int64_t)1))))*(int64_t)(((int64_t)((int32_t)10)))));
		V_3 = (-1);
	}

IL_00b8:
	{
		int64_t L_21 = V_2;
		V_5 = (((uint64_t)(((uint32_t)L_21))));
		int64_t L_22 = V_2;
		V_6 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint64_t* L_23 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f0;
		int32_t L_24 = V_1;
		V_7 = (*((int64_t*)((intptr_t)((intptr_t)L_23+(int32_t)((int32_t)((int32_t)L_24*(int32_t)8))))));
		uint64_t L_25 = V_7;
		V_8 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_7;
		V_7 = (((uint64_t)(((uint32_t)L_26))));
		uint64_t L_27 = V_6;
		uint64_t L_28 = V_7;
		uint64_t L_29 = V_5;
		uint64_t L_30 = V_8;
		uint64_t L_31 = V_5;
		uint64_t L_32 = V_7;
		V_9 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_27*(int64_t)L_28))+(int64_t)((int64_t)((int64_t)L_29*(int64_t)L_30))))+(int64_t)((int64_t)((uint64_t)((int64_t)((int64_t)L_31*(int64_t)L_32))>>((int32_t)32)))));
		uint64_t L_33 = V_6;
		uint64_t L_34 = V_8;
		uint64_t L_35 = V_9;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_33*(int64_t)L_34))+(int64_t)((int64_t)((uint64_t)L_35>>((int32_t)32)))));
		goto IL_011e;
	}

IL_0101:
	{
		uint64_t L_36 = V_9;
		V_9 = ((int64_t)((int64_t)((int64_t)((int64_t)L_36&(int64_t)(((uint64_t)(((uint32_t)(-1)))))))*(int64_t)(((int64_t)((int32_t)10)))));
		int64_t L_37 = V_10;
		uint64_t L_38 = V_9;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_37*(int64_t)(((int64_t)((int32_t)10)))))+(int64_t)((int64_t)((uint64_t)L_38>>((int32_t)32)))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_39-(int32_t)1));
	}

IL_011e:
	{
		int64_t L_40 = V_10;
		if ((((int64_t)L_40) < ((int64_t)((int64_t)10000000000000000LL))))
		{
			goto IL_0101;
		}
	}
	{
		uint64_t L_41 = V_9;
		if (!((int64_t)((int64_t)L_41&(int64_t)(((uint64_t)(((uint32_t)((int32_t)-2147483648))))))))
		{
			goto IL_013d;
		}
	}
	{
		int64_t L_42 = V_10;
		V_10 = ((int64_t)((int64_t)L_42+(int64_t)(((int64_t)1))));
	}

IL_013d:
	{
		V_11 = ((int32_t)17);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t* L_43 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f1;
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		int32_t L_46 = V_11;
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_43+(int32_t)((int32_t)((int32_t)L_44*(int32_t)4))))))+(int32_t)L_45))+(int32_t)L_46));
		int32_t L_47 = m11730(__this, &m11730_MI);
		V_12 = L_47;
		int32_t L_48 = V_11;
		int32_t L_49 = V_12;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_50 = V_11;
		int32_t L_51 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int64_t L_52 = m11720(NULL, ((int32_t)((int32_t)L_50-(int32_t)L_51)), &m11720_MI);
		V_13 = L_52;
		int64_t L_53 = V_10;
		int64_t L_54 = V_13;
		int64_t L_55 = V_13;
		V_10 = ((int64_t)((int64_t)((int64_t)((int64_t)L_53+(int64_t)((int64_t)((int64_t)L_54>>(int32_t)1))))/(int64_t)L_55));
		int32_t L_56 = V_12;
		V_11 = L_56;
	}

IL_0180:
	{
		int64_t L_57 = V_10;
		int32_t L_58 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int64_t L_59 = m11720(NULL, L_58, &m11720_MI);
		if ((((int64_t)L_57) < ((int64_t)L_59)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_60 = V_11;
		V_11 = ((int32_t)((int32_t)L_60+(int32_t)1));
		int32_t L_61 = (__this->f18);
		__this->f18 = ((int32_t)((int32_t)L_61+(int32_t)1));
	}

IL_019f:
	{
		int64_t L_62 = V_10;
		m11722(__this, L_62, &m11722_MI);
		int32_t L_63 = m11758(__this, &m11758_MI);
		__this->f17 = L_63;
		int32_t L_64 = V_11;
		int32_t L_65 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_64-(int32_t)L_65));
		return;
	}
}
extern "C" void m11739 (t2143 * __this, t2* p0, t910  p1, MethodInfo* method)
{
	t1101* V_0 = {0};
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		m11732(__this, L_0, &m11732_MI);
		__this->f15 = ((int32_t)100);
		t910  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t910_TI));
		t1101* L_2 = m7525(NULL, L_1, &m7525_MI);
		V_0 = L_2;
		t1101* L_3 = V_0;
		int32_t L_4 = 3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4))&(int32_t)((int32_t)2031616)))>>(int32_t)((int32_t)16)));
		t1101* L_5 = V_0;
		int32_t L_6 = 3;
		__this->f12 = ((((int32_t)((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1101* L_7 = V_0;
		int32_t L_8 = 0;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)))
		{
			goto IL_0058;
		}
	}
	{
		t1101* L_9 = V_0;
		int32_t L_10 = 1;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)))
		{
			goto IL_0058;
		}
	}
	{
		t1101* L_11 = V_0;
		int32_t L_12 = 2;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_12)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_13 = V_1;
		__this->f18 = ((-L_13));
		__this->f12 = 1;
		__this->f16 = 0;
		return;
	}

IL_0058:
	{
		t1101* L_14 = V_0;
		int32_t L_15 = 2;
		t1101* L_16 = V_0;
		int32_t L_17 = 1;
		t1101* L_18 = V_0;
		int32_t L_19 = 0;
		m11723(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15)), ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_17))))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)))))))), &m11723_MI);
		int32_t L_20 = m11728(__this, &m11728_MI);
		__this->f16 = L_20;
		int32_t L_21 = (__this->f16);
		int32_t L_22 = V_1;
		__this->f18 = ((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = (__this->f14);
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_009a;
		}
	}
	{
		uint16_t L_24 = (__this->f13);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)71))))
		{
			goto IL_00b9;
		}
	}

IL_009a:
	{
		int32_t L_25 = m11758(__this, &m11758_MI);
		__this->f17 = L_25;
		int32_t L_26 = (__this->f16);
		int32_t L_27 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_26-(int32_t)L_27));
	}

IL_00b9:
	{
		return;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" void m11740 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	static bool m11740_init;
	if (!m11740_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m11740_init = true;
	}
	{
		__this->f24 = 0;
		t318* L_0 = (__this->f23);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = p0;
		__this->f23 = ((t318*)SZArrayNew(t318_TI_var, L_2));
	}

IL_001e:
	{
		return;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" void m11741 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	static bool m11741_init;
	if (!m11741_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m11741_init = true;
	}
	t318* V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = ((t318*)SZArrayNew(t318_TI_var, L_0));
		t318* L_1 = (__this->f23);
		t318* L_2 = V_0;
		int32_t L_3 = (__this->f24);
		m5982(NULL, (t121 *)(t121 *)L_1, (t121 *)(t121 *)L_2, L_3, &m5982_MI);
		t318* L_4 = V_0;
		__this->f23 = L_4;
		return;
	}
}
extern "C" void m11742 (t2143 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		t318* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m11741(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), &m11741_MI);
	}

IL_001f:
	{
		t318* L_3 = (__this->f23);
		int32_t L_4 = (__this->f24);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->f24 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		uint16_t L_7 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_6)) = (uint16_t)L_7;
		return;
	}
}
extern "C" void m11743 (t2143 * __this, uint16_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		int32_t L_1 = p1;
		t318* L_2 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) <= ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = (__this->f24);
		int32_t L_4 = p1;
		m11741(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)((int32_t)10))), &m11741_MI);
	}

IL_0023:
	{
		goto IL_003e;
	}

IL_0025:
	{
		t318* L_5 = (__this->f23);
		int32_t L_6 = (__this->f24);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f24 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		uint16_t L_9 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_8)) = (uint16_t)L_9;
	}

IL_003e:
	{
		int32_t L_10 = p1;
		int32_t L_11 = L_10;
		p1 = ((int32_t)((int32_t)L_11-(int32_t)1));
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
extern "C" void m11744 (t2143 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f24);
		int32_t L_3 = V_0;
		t318* L_4 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = (__this->f24);
		int32_t L_6 = V_0;
		m11741(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))+(int32_t)((int32_t)10))), &m11741_MI);
	}

IL_002a:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_002e:
	{
		t318* L_7 = (__this->f23);
		int32_t L_8 = (__this->f24);
		int32_t L_9 = L_8;
		V_2 = L_9;
		__this->f24 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_2;
		t2* L_11 = p0;
		int32_t L_12 = V_1;
		uint16_t L_13 = m2778(L_11, L_12, &m2778_MI);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_7, L_10)) = (uint16_t)L_13;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
extern "C" t1561 * m11745 (t2143 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1561 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		t9 * L_1 = p0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		t1561 * L_2 = (__this->f7);
		return L_2;
	}

IL_0012:
	{
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1561_TI));
		t1561 * L_4 = m8809(NULL, L_3, &m8809_MI);
		return L_4;
	}
}
extern "C" void m11746 (t2143 * __this, t907 * p0, MethodInfo* method)
{
	{
		t907 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		t907 * L_1 = p0;
		bool L_2 = m8707(L_1, &m8707_MI);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t907 * L_3 = p0;
		t1561 * L_4 = (t1561 *)VirtFuncInvoker0< t1561 * >::Invoke(&m8705_MI, L_3);
		__this->f7 = L_4;
		goto IL_0020;
	}

IL_0019:
	{
		__this->f7 = (t1561 *)NULL;
	}

IL_0020:
	{
		return;
	}
}
extern "C" int32_t m11747 (t2143 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = (__this->f18);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m11748 (t2143 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = (__this->f18);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->f16);
		int32_t L_3 = (__this->f18);
		G_B3_0 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return G_B3_0;
	}
}
extern "C" bool m11749 (t2143 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f15);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = (__this->f15);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)7))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
extern "C" bool m11750 (t2143 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11751 (t2143 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f16);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = (__this->f18);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
extern "C" void m11752 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		m11754(__this, ((int32_t)((int32_t)L_0-(int32_t)L_1)), &m11754_MI);
		return;
	}
}
extern "C" bool m11753 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = (__this->f18);
		int32_t L_2 = p0;
		bool L_3 = m11754(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), &m11754_MI);
		return L_3;
	}
}
extern "C" bool m11754 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f16);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_004e;
		}
	}
	{
		__this->f16 = 0;
		__this->f18 = 1;
		int32_t L_3 = 0;
		V_4 = L_3;
		__this->f22 = L_3;
		uint32_t L_4 = V_4;
		uint32_t L_5 = L_4;
		V_4 = L_5;
		__this->f21 = L_5;
		uint32_t L_6 = V_4;
		uint32_t L_7 = L_6;
		V_4 = L_7;
		__this->f20 = L_7;
		uint32_t L_8 = V_4;
		__this->f19 = L_8;
		__this->f12 = 1;
		return 0;
	}

IL_004e:
	{
		int32_t L_9 = p0;
		int32_t L_10 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = (__this->f16);
		int32_t L_12 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		goto IL_00af;
	}

IL_006f:
	{
		uint32_t L_13 = (__this->f20);
		__this->f19 = L_13;
		uint32_t L_14 = (__this->f21);
		__this->f20 = L_14;
		uint32_t L_15 = (__this->f22);
		__this->f21 = L_15;
		__this->f22 = 0;
		int32_t L_16 = (__this->f16);
		__this->f16 = ((int32_t)((int32_t)L_16-(int32_t)8));
		int32_t L_17 = p0;
		p0 = ((int32_t)((int32_t)L_17-(int32_t)8));
	}

IL_00af:
	{
		int32_t L_18 = p0;
		if ((((int32_t)L_18) > ((int32_t)8)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_19 = p0;
		p0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_19-(int32_t)1))<<(int32_t)2));
		uint32_t L_20 = (__this->f19);
		int32_t L_21 = p0;
		V_0 = ((int32_t)((uint32_t)L_20>>((int32_t)((int32_t)L_21&(int32_t)((int32_t)31)))));
		uint32_t L_22 = V_0;
		V_1 = ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15)));
		uint32_t L_23 = V_0;
		uint32_t L_24 = V_1;
		int32_t L_25 = p0;
		__this->f19 = ((int32_t)((int32_t)((int32_t)((int32_t)L_23^(int32_t)L_24))<<(int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)31)))));
		V_2 = 0;
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) >= ((uint32_t)5))))
		{
			goto IL_0134;
		}
	}
	{
		uint32_t L_27 = (__this->f19);
		int32_t L_28 = p0;
		__this->f19 = ((int32_t)((int32_t)L_27|(int32_t)((int32_t)((uint32_t)((int32_t)-1717986919)>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)28)-(int32_t)L_28))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		m11756(__this, &m11756_MI);
		int32_t L_29 = m11728(__this, &m11728_MI);
		V_3 = L_29;
		int32_t L_30 = V_3;
		int32_t L_31 = (__this->f16);
		V_2 = ((((int32_t)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = (__this->f18);
		int32_t L_33 = V_3;
		int32_t L_34 = (__this->f16);
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32+(int32_t)L_33))-(int32_t)L_34));
		int32_t L_35 = V_3;
		__this->f16 = L_35;
	}

IL_0134:
	{
		m11755(__this, &m11755_MI);
		bool L_36 = V_2;
		return L_36;
	}
}
extern "C" void m11755 (t2143 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11758(__this, &m11758_MI);
		__this->f17 = L_0;
		int32_t L_1 = (__this->f16);
		int32_t L_2 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		int32_t L_3 = (__this->f16);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		__this->f17 = 0;
		__this->f18 = 1;
		__this->f12 = 1;
	}

IL_003c:
	{
		return;
	}
}
extern "C" void m11756 (t2143 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f19);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0075;
		}
	}
	{
		__this->f19 = 0;
		uint32_t L_1 = (__this->f20);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0062;
		}
	}
	{
		__this->f20 = 0;
		uint32_t L_2 = (__this->f21);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_004f;
		}
	}
	{
		__this->f21 = 0;
		uint32_t L_3 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_4 = m11757(NULL, L_3, &m11757_MI);
		__this->f22 = L_4;
		goto IL_0060;
	}

IL_004f:
	{
		uint32_t L_5 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_6 = m11757(NULL, L_5, &m11757_MI);
		__this->f21 = L_6;
	}

IL_0060:
	{
		goto IL_0073;
	}

IL_0062:
	{
		uint32_t L_7 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_8 = m11757(NULL, L_7, &m11757_MI);
		__this->f20 = L_8;
	}

IL_0073:
	{
		goto IL_0086;
	}

IL_0075:
	{
		uint32_t L_9 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_10 = m11757(NULL, L_9, &m11757_MI);
		__this->f19 = L_10;
	}

IL_0086:
	{
		return;
	}
}
extern "C" uint32_t m11757 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)))) == ((uint32_t)((int32_t)39321)))))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_1 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)16777215)))) == ((uint32_t)((int32_t)10066329)))))
		{
			goto IL_003a;
		}
	}
	{
		uint32_t L_2 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)268435455)))) == ((uint32_t)((int32_t)161061273)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_3 = p0;
		return ((int32_t)((int32_t)L_3+(int32_t)((int32_t)107374183)));
	}

IL_0032:
	{
		uint32_t L_4 = p0;
		return ((int32_t)((int32_t)L_4+(int32_t)((int32_t)6710887)));
	}

IL_003a:
	{
		uint32_t L_5 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)1048575)))) == ((uint32_t)((int32_t)629145)))))
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_6 = p0;
		return ((int32_t)((int32_t)L_6+(int32_t)((int32_t)419431)));
	}

IL_0050:
	{
		uint32_t L_7 = p0;
		return ((int32_t)((int32_t)L_7+(int32_t)((int32_t)26215)));
	}

IL_0058:
	{
		uint32_t L_8 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)255)))) == ((uint32_t)((int32_t)153)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_9 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)4095)))) == ((uint32_t)((int32_t)2457)))))
		{
			goto IL_007c;
		}
	}
	{
		uint32_t L_10 = p0;
		return ((int32_t)((int32_t)L_10+(int32_t)((int32_t)1639)));
	}

IL_007c:
	{
		uint32_t L_11 = p0;
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)103)));
	}

IL_0081:
	{
		uint32_t L_12 = p0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)15)))) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_13 = p0;
		return ((int32_t)((int32_t)L_13+(int32_t)7));
	}

IL_008d:
	{
		uint32_t L_14 = p0;
		return ((int32_t)((int32_t)L_14+(int32_t)1));
	}
}
extern "C" int32_t m11758 (t2143 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f19);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_1 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_2 = m11759(NULL, L_1, &m11759_MI);
		return L_2;
	}

IL_0014:
	{
		uint32_t L_3 = (__this->f20);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_4 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_5 = m11759(NULL, L_4, &m11759_MI);
		return ((int32_t)((int32_t)L_5+(int32_t)8));
	}

IL_002a:
	{
		uint32_t L_6 = (__this->f21);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_7 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_8 = m11759(NULL, L_7, &m11759_MI);
		return ((int32_t)((int32_t)L_8+(int32_t)((int32_t)16)));
	}

IL_0041:
	{
		uint32_t L_9 = (__this->f22);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_11 = m11759(NULL, L_10, &m11759_MI);
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)24)));
	}

IL_0058:
	{
		int32_t L_12 = (__this->f16);
		return L_12;
	}
}
extern "C" int32_t m11759 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_1 = p0;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)16777215))))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = p0;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)268435455))))
		{
			goto IL_001d;
		}
	}
	{
		return 7;
	}

IL_001d:
	{
		return 6;
	}

IL_001f:
	{
		uint32_t L_3 = p0;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)1048575))))
		{
			goto IL_002a;
		}
	}
	{
		return 5;
	}

IL_002a:
	{
		return 4;
	}

IL_002c:
	{
		uint32_t L_4 = p0;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)255))))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_5 = p0;
		if (((int32_t)((int32_t)L_5&(int32_t)((int32_t)4095))))
		{
			goto IL_0040;
		}
	}
	{
		return 3;
	}

IL_0040:
	{
		return 2;
	}

IL_0042:
	{
		uint32_t L_6 = p0;
		if (((int32_t)((int32_t)L_6&(int32_t)((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		return 1;
	}

IL_004a:
	{
		return 0;
	}
}
extern "C" t2143 * m11760 (t9 * __this , MethodInfo* method)
{
	t2143 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = ((t2143_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2143_TI)))->f25;
		V_0 = L_0;
		((t2143_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2143_TI)))->f25 = (t2143 *)NULL;
		t2143 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1878 * L_2 = m11083(NULL, &m11083_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_3 = (t2143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2143_TI));
		m11717(L_3, L_2, &m11717_MI);
		return L_3;
	}

IL_001a:
	{
		t2143 * L_4 = V_0;
		return L_4;
	}
}
extern "C" void m11761 (t2143 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		((t2143_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2143_TI)))->f25 = __this;
		return;
	}
}
extern MethodInfo m11762_MI;
extern "C" void m11762 (t9 * __this , t907 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = ((t2143_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2143_TI)))->f25;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_1 = ((t2143_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2143_TI)))->f25;
		t907 * L_2 = p0;
		m11746(L_1, L_2, &m11746_MI);
	}

IL_0012:
	{
		return;
	}
}
extern MethodInfo m11763_MI;
extern "C" t2* m11763 (t9 * __this , t2* p0, int8_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		int8_t L_3 = p1;
		m11734(L_1, L_2, (((int32_t)L_3)), 3, &m11734_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11764_MI;
extern "C" t2* m11764 (t9 * __this , t2* p0, uint8_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		uint8_t L_3 = p1;
		m11734(L_1, L_2, L_3, 3, &m11734_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11765_MI;
extern "C" t2* m11765 (t9 * __this , t2* p0, uint16_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		uint16_t L_3 = p1;
		m11734(L_1, L_2, L_3, 5, &m11734_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11766_MI;
extern "C" t2* m11766 (t9 * __this , t2* p0, int16_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		int16_t L_3 = p1;
		m11734(L_1, L_2, L_3, 5, &m11734_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11767 (t9 * __this , t2* p0, uint32_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		uint32_t L_3 = p1;
		m11735(L_1, L_2, L_3, ((int32_t)10), &m11735_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11768 (t9 * __this , t2* p0, int32_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		int32_t L_3 = p1;
		m11734(L_1, L_2, L_3, ((int32_t)10), &m11734_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11769 (t9 * __this , t2* p0, uint64_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		uint64_t L_3 = p1;
		m11737(L_1, L_2, L_3, &m11737_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11770 (t9 * __this , t2* p0, int64_t p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		int64_t L_3 = p1;
		m11736(L_1, L_2, L_3, &m11736_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11781(L_4, L_5, L_6, &m11781_MI);
		V_1 = L_7;
		t2143 * L_8 = V_0;
		m11761(L_8, &m11761_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11771_MI;
extern "C" t2* m11771 (t9 * __this , t2* p0, float p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t1561 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		float L_3 = p1;
		m11738(L_1, L_2, (((double)L_3)), 7, &m11738_MI);
		t2143 * L_4 = V_0;
		t9 * L_5 = p2;
		t1561 * L_6 = m11745(L_4, L_5, &m11745_MI);
		V_1 = L_6;
		t2143 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1561 * L_9 = V_1;
		t2* L_10 = m8788(L_9, &m8788_MI);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t2143 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t2143 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1561 * L_15 = V_1;
		t2* L_16 = m8805(L_15, &m8805_MI);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1561 * L_17 = V_1;
		t2* L_18 = m8789(L_17, &m8789_MI);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t2143 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t2143 * L_21 = V_0;
		float L_22 = p1;
		t1561 * L_23 = V_1;
		t2* L_24 = m11788(L_21, L_22, L_23, &m11788_MI);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t2143 * L_25 = V_0;
		t2* L_26 = p0;
		t1561 * L_27 = V_1;
		t2* L_28 = m11782(L_25, L_26, L_27, &m11782_MI);
		V_2 = L_28;
	}

IL_0069:
	{
		t2143 * L_29 = V_0;
		m11761(L_29, &m11761_MI);
		t2* L_30 = V_2;
		return L_30;
	}
}
extern MethodInfo m11772_MI;
extern "C" t2* m11772 (t9 * __this , t2* p0, double p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t1561 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		double L_3 = p1;
		m11738(L_1, L_2, L_3, ((int32_t)15), &m11738_MI);
		t2143 * L_4 = V_0;
		t9 * L_5 = p2;
		t1561 * L_6 = m11745(L_4, L_5, &m11745_MI);
		V_1 = L_6;
		t2143 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1561 * L_9 = V_1;
		t2* L_10 = m8788(L_9, &m8788_MI);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t2143 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t2143 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1561 * L_15 = V_1;
		t2* L_16 = m8805(L_15, &m8805_MI);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1561 * L_17 = V_1;
		t2* L_18 = m8789(L_17, &m8789_MI);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t2143 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t2143 * L_21 = V_0;
		double L_22 = p1;
		t1561 * L_23 = V_1;
		t2* L_24 = m11787(L_21, L_22, L_23, &m11787_MI);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t2143 * L_25 = V_0;
		t2* L_26 = p0;
		t1561 * L_27 = V_1;
		t2* L_28 = m11782(L_25, L_26, L_27, &m11782_MI);
		V_2 = L_28;
	}

IL_0069:
	{
		t2143 * L_29 = V_0;
		m11761(L_29, &m11761_MI);
		t2* L_30 = V_2;
		return L_30;
	}
}
extern MethodInfo m11773_MI;
extern "C" t2* m11773 (t9 * __this , t2* p0, t910  p1, t9 * p2, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t2* L_2 = p0;
		t910  L_3 = p1;
		m11739(L_1, L_2, L_3, &m11739_MI);
		t2143 * L_4 = V_0;
		t2* L_5 = p0;
		t2143 * L_6 = V_0;
		t9 * L_7 = p2;
		t1561 * L_8 = m11745(L_6, L_7, &m11745_MI);
		t2* L_9 = m11782(L_4, L_5, L_8, &m11782_MI);
		V_1 = L_9;
		t2143 * L_10 = V_0;
		m11761(L_10, &m11761_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11774_MI;
extern "C" t2* m11774 (t9 * __this , uint32_t p0, t9 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_1 = p0;
		t9 * L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2* L_3 = m11767(NULL, (t2*)NULL, L_1, L_2, &m11767_MI);
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_4 = m11760(NULL, &m11760_MI);
		V_0 = L_4;
		t2143 * L_5 = V_0;
		uint32_t L_6 = p0;
		t9 * L_7 = p1;
		t2* L_8 = m11780(L_5, L_6, L_7, &m11780_MI);
		V_1 = L_8;
		t2143 * L_9 = V_0;
		m11761(L_9, &m11761_MI);
		t2* L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m11775_MI;
extern "C" t2* m11775 (t9 * __this , int32_t p0, t9 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100000000))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-100000000))))
		{
			goto IL_0019;
		}
	}

IL_0010:
	{
		int32_t L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2* L_4 = m11768(NULL, (t2*)NULL, L_2, L_3, &m11768_MI);
		return L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_5 = m11760(NULL, &m11760_MI);
		V_0 = L_5;
		t2143 * L_6 = V_0;
		int32_t L_7 = p0;
		t9 * L_8 = p1;
		t2* L_9 = m11780(L_6, L_7, L_8, &m11780_MI);
		V_1 = L_9;
		t2143 * L_10 = V_0;
		m11761(L_10, &m11761_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11776_MI;
extern "C" t2* m11776 (t9 * __this , uint64_t p0, t9 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) >= ((uint64_t)(((int64_t)((int32_t)100000000)))))))
		{
			goto IL_0012;
		}
	}
	{
		uint64_t L_1 = p0;
		t9 * L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2* L_3 = m11769(NULL, (t2*)NULL, L_1, L_2, &m11769_MI);
		return L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_4 = m11760(NULL, &m11760_MI);
		V_0 = L_4;
		t2143 * L_5 = V_0;
		uint64_t L_6 = p0;
		t9 * L_7 = p1;
		t2* L_8 = m11780(L_5, (((int32_t)L_6)), L_7, &m11780_MI);
		V_1 = L_8;
		t2143 * L_9 = V_0;
		m11761(L_9, &m11761_MI);
		t2* L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m11777_MI;
extern "C" t2* m11777 (t9 * __this , int64_t p0, t9 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int32_t)100000000))))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = p0;
		if ((((int64_t)L_1) > ((int64_t)(((int64_t)((int32_t)-100000000))))))
		{
			goto IL_001b;
		}
	}

IL_0012:
	{
		int64_t L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2* L_4 = m11770(NULL, (t2*)NULL, L_2, L_3, &m11770_MI);
		return L_4;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_5 = m11760(NULL, &m11760_MI);
		V_0 = L_5;
		t2143 * L_6 = V_0;
		int64_t L_7 = p0;
		t9 * L_8 = p1;
		t2* L_9 = m11780(L_6, (((int32_t)L_7)), L_8, &m11780_MI);
		V_1 = L_9;
		t2143 * L_10 = V_0;
		m11761(L_10, &m11761_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11778_MI;
extern "C" t2* m11778 (t9 * __this , float p0, t9 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t1561 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		float L_2 = p0;
		m11738(L_1, (t2*)NULL, (((double)L_2)), 7, &m11738_MI);
		t2143 * L_3 = V_0;
		t9 * L_4 = p1;
		t1561 * L_5 = m11745(L_3, L_4, &m11745_MI);
		V_1 = L_5;
		t2143 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1561 * L_8 = V_1;
		t2* L_9 = m8788(L_8, &m8788_MI);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t2143 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t2143 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1561 * L_14 = V_1;
		t2* L_15 = m8805(L_14, &m8805_MI);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1561 * L_16 = V_1;
		t2* L_17 = m8789(L_16, &m8789_MI);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t2143 * L_18 = V_0;
		t1561 * L_19 = V_1;
		t2* L_20 = m11789(L_18, (-1), L_19, &m11789_MI);
		V_2 = L_20;
	}

IL_0054:
	{
		t2143 * L_21 = V_0;
		m11761(L_21, &m11761_MI);
		t2* L_22 = V_2;
		return L_22;
	}
}
extern MethodInfo m11779_MI;
extern "C" t2* m11779 (t9 * __this , double p0, t9 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t1561 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		t2143 * L_0 = m11760(NULL, &m11760_MI);
		V_0 = L_0;
		t2143 * L_1 = V_0;
		t9 * L_2 = p1;
		t1561 * L_3 = m11745(L_1, L_2, &m11745_MI);
		V_1 = L_3;
		t2143 * L_4 = V_0;
		double L_5 = p0;
		m11738(L_4, (t2*)NULL, L_5, ((int32_t)15), &m11738_MI);
		t2143 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1561 * L_8 = V_1;
		t2* L_9 = m8788(L_8, &m8788_MI);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t2143 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t2143 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1561 * L_14 = V_1;
		t2* L_15 = m8805(L_14, &m8805_MI);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1561 * L_16 = V_1;
		t2* L_17 = m8789(L_16, &m8789_MI);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t2143 * L_18 = V_0;
		t1561 * L_19 = V_1;
		t2* L_20 = m11789(L_18, (-1), L_19, &m11789_MI);
		V_2 = L_20;
	}

IL_0054:
	{
		t2143 * L_21 = V_0;
		m11761(L_21, &m11761_MI);
		t2* L_22 = V_2;
		return L_22;
	}
}
extern "C" t2* m11780 (t2143 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		t9 * L_1 = p1;
		t1561 * L_2 = m11745(__this, L_1, &m11745_MI);
		t2* L_3 = m8790(L_2, &m8790_MI);
		V_0 = L_3;
		t2* L_4 = V_0;
		int32_t L_5 = m2763(L_4, &m2763_MI);
		m11740(__this, ((int32_t)((int32_t)8+(int32_t)L_5)), &m11740_MI);
		int32_t L_6 = p0;
		p0 = ((-L_6));
		t2* L_7 = V_0;
		m11744(__this, L_7, &m11744_MI);
		goto IL_0035;
	}

IL_002e:
	{
		m11740(__this, 8, &m11740_MI);
	}

IL_0035:
	{
		int32_t L_8 = p0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)10000))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_9 = p0;
		V_1 = ((int32_t)((int32_t)L_9/(int32_t)((int32_t)10000)));
		int32_t L_10 = V_1;
		m11805(__this, L_10, 0, &m11805_MI);
		int32_t L_11 = p0;
		int32_t L_12 = V_1;
		m11805(__this, ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)10000))))), 1, &m11805_MI);
		goto IL_0067;
	}

IL_005f:
	{
		int32_t L_13 = p0;
		m11805(__this, L_13, 0, &m11805_MI);
	}

IL_0067:
	{
		t318* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_16 = m4419(L_16, L_14, 0, L_15, &m4399_MI);
		return L_16;
	}
}
extern "C" t2* m11781 (t2143 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1561 * V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		t9 * L_0 = p1;
		t1561 * L_1 = m11745(__this, L_0, &m11745_MI);
		V_0 = L_1;
		uint16_t L_2 = (__this->f13);
		V_1 = L_2;
		uint16_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 0)
		{
			goto IL_005a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 1)
		{
			goto IL_0068;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 2)
		{
			goto IL_0076;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 3)
		{
			goto IL_0084;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 4)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 5)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 6)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 7)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 8)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 9)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 10)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 11)
		{
			goto IL_00b2;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 12)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)67))) == 13)
		{
			goto IL_00c0;
		}
	}

IL_0050:
	{
		uint16_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)88))))
		{
			goto IL_00ce;
		}
	}
	{
		goto IL_00db;
	}

IL_005a:
	{
		int32_t L_5 = (__this->f14);
		t1561 * L_6 = V_0;
		t2* L_7 = m11783(__this, L_5, L_6, &m11783_MI);
		return L_7;
	}

IL_0068:
	{
		int32_t L_8 = (__this->f14);
		t1561 * L_9 = V_0;
		t2* L_10 = m11784(__this, L_8, L_9, &m11784_MI);
		return L_10;
	}

IL_0076:
	{
		int32_t L_11 = (__this->f14);
		t1561 * L_12 = V_0;
		t2* L_13 = m11792(__this, L_11, L_12, &m11792_MI);
		return L_13;
	}

IL_0084:
	{
		int32_t L_14 = (__this->f14);
		t1561 * L_15 = V_0;
		t2* L_16 = m11786(__this, L_14, L_15, &m11786_MI);
		return L_16;
	}

IL_0092:
	{
		int32_t L_17 = (__this->f14);
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		t1561 * L_18 = V_0;
		t2* L_19 = m11784(__this, (-1), L_18, &m11784_MI);
		return L_19;
	}

IL_00a4:
	{
		int32_t L_20 = (__this->f14);
		t1561 * L_21 = V_0;
		t2* L_22 = m11789(__this, L_20, L_21, &m11789_MI);
		return L_22;
	}

IL_00b2:
	{
		int32_t L_23 = (__this->f14);
		t1561 * L_24 = V_0;
		t2* L_25 = m11790(__this, L_23, L_24, &m11790_MI);
		return L_25;
	}

IL_00c0:
	{
		int32_t L_26 = (__this->f14);
		t1561 * L_27 = V_0;
		t2* L_28 = m11791(__this, L_26, L_27, &m11791_MI);
		return L_28;
	}

IL_00ce:
	{
		int32_t L_29 = (__this->f14);
		t2* L_30 = m11785(__this, L_29, &m11785_MI);
		return L_30;
	}

IL_00db:
	{
		bool L_31 = (__this->f10);
		if (!L_31)
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_32 = p0;
		t1561 * L_33 = V_0;
		t2* L_34 = m11794(__this, L_32, L_33, &m11794_MI);
		return L_34;
	}

IL_00ec:
	{
		t2* L_35 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_36 = m399(NULL, (t2*) &_stringLiteral2777, L_35, (t2*) &_stringLiteral2778, &m399_MI);
		t897 * L_37 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_37, L_36, &m4354_MI);
		il2cpp_codegen_raise_exception(L_37);
	}
}
extern "C" t2* m11782 (t2143 * __this, t2* p0, t1561 * p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		uint16_t L_0 = (__this->f13);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 0)
		{
			goto IL_0040;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 1)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 2)
		{
			goto IL_004e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 3)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)67))) == 4)
		{
			goto IL_006a;
		}
	}

IL_0024:
	{
		uint16_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 0)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 1)
		{
			goto IL_0039;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)78))) == 2)
		{
			goto IL_0086;
		}
	}

IL_0039:
	{
		uint16_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)88))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0094;
	}

IL_0040:
	{
		int32_t L_4 = (__this->f14);
		t1561 * L_5 = p1;
		t2* L_6 = m11783(__this, L_4, L_5, &m11783_MI);
		return L_6;
	}

IL_004e:
	{
		int32_t L_7 = (__this->f14);
		t1561 * L_8 = p1;
		t2* L_9 = m11792(__this, L_7, L_8, &m11792_MI);
		return L_9;
	}

IL_005c:
	{
		int32_t L_10 = (__this->f14);
		t1561 * L_11 = p1;
		t2* L_12 = m11786(__this, L_10, L_11, &m11786_MI);
		return L_12;
	}

IL_006a:
	{
		int32_t L_13 = (__this->f14);
		t1561 * L_14 = p1;
		t2* L_15 = m11789(__this, L_13, L_14, &m11789_MI);
		return L_15;
	}

IL_0078:
	{
		int32_t L_16 = (__this->f14);
		t1561 * L_17 = p1;
		t2* L_18 = m11790(__this, L_16, L_17, &m11790_MI);
		return L_18;
	}

IL_0086:
	{
		int32_t L_19 = (__this->f14);
		t1561 * L_20 = p1;
		t2* L_21 = m11791(__this, L_19, L_20, &m11791_MI);
		return L_21;
	}

IL_0094:
	{
		bool L_22 = (__this->f10);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		t2* L_23 = p0;
		t1561 * L_24 = p1;
		t2* L_25 = m11794(__this, L_23, L_24, &m11794_MI);
		return L_25;
	}

IL_00a5:
	{
		t2* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_27 = m399(NULL, (t2*) &_stringLiteral2777, L_26, (t2*) &_stringLiteral2778, &m399_MI);
		t897 * L_28 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_28, L_27, &m4354_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" t2* m11783 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		t1561 * L_2 = p1;
		int32_t L_3 = m8779(L_2, &m8779_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = p0;
		m11753(__this, L_4, &m11753_MI);
		int32_t L_5 = m11747(__this, &m11747_MI);
		int32_t L_6 = p0;
		m11740(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)((int32_t)((int32_t)L_6*(int32_t)2))))+(int32_t)((int32_t)16))), &m11740_MI);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1561 * L_8 = p1;
		int32_t L_9 = m8784(L_8, &m8784_MI);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_0051;
		}
		if (L_10 == 1)
		{
			goto IL_0075;
		}
		if (L_10 == 2)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0075;
	}

IL_0051:
	{
		t1561 * L_11 = p1;
		t2* L_12 = m8785(L_11, &m8785_MI);
		m11744(__this, L_12, &m11744_MI);
		goto IL_0075;
	}

IL_005f:
	{
		t1561 * L_13 = p1;
		t2* L_14 = m8785(L_13, &m8785_MI);
		m11744(__this, L_14, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_01e1;
	}

IL_007a:
	{
		t1561 * L_15 = p1;
		int32_t L_16 = m8783(L_15, &m8783_MI);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if (L_17 == 0)
		{
			goto IL_00cc;
		}
		if (L_17 == 1)
		{
			goto IL_00e5;
		}
		if (L_17 == 2)
		{
			goto IL_0102;
		}
		if (L_17 == 3)
		{
			goto IL_011f;
		}
		if (L_17 == 4)
		{
			goto IL_0130;
		}
		if (L_17 == 5)
		{
			goto IL_013d;
		}
		if (L_17 == 6)
		{
			goto IL_01e1;
		}
		if (L_17 == 7)
		{
			goto IL_01e1;
		}
		if (L_17 == 8)
		{
			goto IL_014e;
		}
		if (L_17 == 9)
		{
			goto IL_015f;
		}
		if (L_17 == 10)
		{
			goto IL_01e1;
		}
		if (L_17 == 11)
		{
			goto IL_0181;
		}
		if (L_17 == 12)
		{
			goto IL_0197;
		}
		if (L_17 == 13)
		{
			goto IL_01e1;
		}
		if (L_17 == 14)
		{
			goto IL_01b9;
		}
		if (L_17 == 15)
		{
			goto IL_01d7;
		}
	}
	{
		goto IL_01e1;
	}

IL_00cc:
	{
		m11742(__this, ((int32_t)40), &m11742_MI);
		t1561 * L_18 = p1;
		t2* L_19 = m8785(L_18, &m8785_MI);
		m11744(__this, L_19, &m11744_MI);
		goto IL_01e1;
	}

IL_00e5:
	{
		t1561 * L_20 = p1;
		t2* L_21 = m8790(L_20, &m8790_MI);
		m11744(__this, L_21, &m11744_MI);
		t1561 * L_22 = p1;
		t2* L_23 = m8785(L_22, &m8785_MI);
		m11744(__this, L_23, &m11744_MI);
		goto IL_01e1;
	}

IL_0102:
	{
		t1561 * L_24 = p1;
		t2* L_25 = m8785(L_24, &m8785_MI);
		m11744(__this, L_25, &m11744_MI);
		t1561 * L_26 = p1;
		t2* L_27 = m8790(L_26, &m8790_MI);
		m11744(__this, L_27, &m11744_MI);
		goto IL_01e1;
	}

IL_011f:
	{
		t1561 * L_28 = p1;
		t2* L_29 = m8785(L_28, &m8785_MI);
		m11744(__this, L_29, &m11744_MI);
		goto IL_01e1;
	}

IL_0130:
	{
		m11742(__this, ((int32_t)40), &m11742_MI);
		goto IL_01e1;
	}

IL_013d:
	{
		t1561 * L_30 = p1;
		t2* L_31 = m8790(L_30, &m8790_MI);
		m11744(__this, L_31, &m11744_MI);
		goto IL_01e1;
	}

IL_014e:
	{
		t1561 * L_32 = p1;
		t2* L_33 = m8790(L_32, &m8790_MI);
		m11744(__this, L_33, &m11744_MI);
		goto IL_01e1;
	}

IL_015f:
	{
		t1561 * L_34 = p1;
		t2* L_35 = m8790(L_34, &m8790_MI);
		m11744(__this, L_35, &m11744_MI);
		t1561 * L_36 = p1;
		t2* L_37 = m8785(L_36, &m8785_MI);
		m11744(__this, L_37, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		goto IL_01e1;
	}

IL_0181:
	{
		t1561 * L_38 = p1;
		t2* L_39 = m8785(L_38, &m8785_MI);
		m11744(__this, L_39, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		goto IL_01e1;
	}

IL_0197:
	{
		t1561 * L_40 = p1;
		t2* L_41 = m8785(L_40, &m8785_MI);
		m11744(__this, L_41, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_42 = p1;
		t2* L_43 = m8790(L_42, &m8790_MI);
		m11744(__this, L_43, &m11744_MI);
		goto IL_01e1;
	}

IL_01b9:
	{
		m11742(__this, ((int32_t)40), &m11742_MI);
		t1561 * L_44 = p1;
		t2* L_45 = m8785(L_44, &m8785_MI);
		m11744(__this, L_45, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		goto IL_01e1;
	}

IL_01d7:
	{
		m11742(__this, ((int32_t)40), &m11742_MI);
		goto IL_01e1;
	}

IL_01e1:
	{
		t1561 * L_46 = p1;
		t1101* L_47 = m8782(L_46, &m8782_MI);
		t1561 * L_48 = p1;
		t2* L_49 = m8781(L_48, &m8781_MI);
		m11802(__this, L_47, L_49, &m11802_MI);
		int32_t L_50 = p0;
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_020a;
		}
	}
	{
		t1561 * L_51 = p1;
		t2* L_52 = m8780(L_51, &m8780_MI);
		m11744(__this, L_52, &m11744_MI);
		int32_t L_53 = p0;
		m11801(__this, L_53, &m11801_MI);
	}

IL_020a:
	{
		bool L_54 = (__this->f12);
		if (!L_54)
		{
			goto IL_0258;
		}
	}
	{
		t1561 * L_55 = p1;
		int32_t L_56 = m8784(L_55, &m8784_MI);
		V_0 = L_56;
		int32_t L_57 = V_0;
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 0)
		{
			goto IL_022f;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 1)
		{
			goto IL_0253;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)1)) == 2)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_0253;
	}

IL_022f:
	{
		t1561 * L_58 = p1;
		t2* L_59 = m8785(L_58, &m8785_MI);
		m11744(__this, L_59, &m11744_MI);
		goto IL_0253;
	}

IL_023d:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_60 = p1;
		t2* L_61 = m8785(L_60, &m8785_MI);
		m11744(__this, L_61, &m11744_MI);
		goto IL_0253;
	}

IL_0253:
	{
		goto IL_03bf;
	}

IL_0258:
	{
		t1561 * L_62 = p1;
		int32_t L_63 = m8783(L_62, &m8783_MI);
		V_0 = L_63;
		int32_t L_64 = V_0;
		if (L_64 == 0)
		{
			goto IL_02aa;
		}
		if (L_64 == 1)
		{
			goto IL_03bf;
		}
		if (L_64 == 2)
		{
			goto IL_03bf;
		}
		if (L_64 == 3)
		{
			goto IL_02b7;
		}
		if (L_64 == 4)
		{
			goto IL_02c8;
		}
		if (L_64 == 5)
		{
			goto IL_02e1;
		}
		if (L_64 == 6)
		{
			goto IL_02f2;
		}
		if (L_64 == 7)
		{
			goto IL_030f;
		}
		if (L_64 == 8)
		{
			goto IL_032c;
		}
		if (L_64 == 9)
		{
			goto IL_03bf;
		}
		if (L_64 == 10)
		{
			goto IL_0345;
		}
		if (L_64 == 11)
		{
			goto IL_0367;
		}
		if (L_64 == 12)
		{
			goto IL_03bf;
		}
		if (L_64 == 13)
		{
			goto IL_0375;
		}
		if (L_64 == 14)
		{
			goto IL_0397;
		}
		if (L_64 == 15)
		{
			goto IL_03a1;
		}
	}
	{
		goto IL_03bf;
	}

IL_02aa:
	{
		m11742(__this, ((int32_t)41), &m11742_MI);
		goto IL_03bf;
	}

IL_02b7:
	{
		t1561 * L_65 = p1;
		t2* L_66 = m8790(L_65, &m8790_MI);
		m11744(__this, L_66, &m11744_MI);
		goto IL_03bf;
	}

IL_02c8:
	{
		t1561 * L_67 = p1;
		t2* L_68 = m8785(L_67, &m8785_MI);
		m11744(__this, L_68, &m11744_MI);
		m11742(__this, ((int32_t)41), &m11742_MI);
		goto IL_03bf;
	}

IL_02e1:
	{
		t1561 * L_69 = p1;
		t2* L_70 = m8785(L_69, &m8785_MI);
		m11744(__this, L_70, &m11744_MI);
		goto IL_03bf;
	}

IL_02f2:
	{
		t1561 * L_71 = p1;
		t2* L_72 = m8790(L_71, &m8790_MI);
		m11744(__this, L_72, &m11744_MI);
		t1561 * L_73 = p1;
		t2* L_74 = m8785(L_73, &m8785_MI);
		m11744(__this, L_74, &m11744_MI);
		goto IL_03bf;
	}

IL_030f:
	{
		t1561 * L_75 = p1;
		t2* L_76 = m8785(L_75, &m8785_MI);
		m11744(__this, L_76, &m11744_MI);
		t1561 * L_77 = p1;
		t2* L_78 = m8790(L_77, &m8790_MI);
		m11744(__this, L_78, &m11744_MI);
		goto IL_03bf;
	}

IL_032c:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_79 = p1;
		t2* L_80 = m8785(L_79, &m8785_MI);
		m11744(__this, L_80, &m11744_MI);
		goto IL_03bf;
	}

IL_0345:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_81 = p1;
		t2* L_82 = m8785(L_81, &m8785_MI);
		m11744(__this, L_82, &m11744_MI);
		t1561 * L_83 = p1;
		t2* L_84 = m8790(L_83, &m8790_MI);
		m11744(__this, L_84, &m11744_MI);
		goto IL_03bf;
	}

IL_0367:
	{
		t1561 * L_85 = p1;
		t2* L_86 = m8790(L_85, &m8790_MI);
		m11744(__this, L_86, &m11744_MI);
		goto IL_03bf;
	}

IL_0375:
	{
		t1561 * L_87 = p1;
		t2* L_88 = m8790(L_87, &m8790_MI);
		m11744(__this, L_88, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_89 = p1;
		t2* L_90 = m8785(L_89, &m8785_MI);
		m11744(__this, L_90, &m11744_MI);
		goto IL_03bf;
	}

IL_0397:
	{
		m11742(__this, ((int32_t)41), &m11742_MI);
		goto IL_03bf;
	}

IL_03a1:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_91 = p1;
		t2* L_92 = m8785(L_91, &m8785_MI);
		m11744(__this, L_92, &m11744_MI);
		m11742(__this, ((int32_t)41), &m11742_MI);
		goto IL_03bf;
	}

IL_03bf:
	{
		t318* L_93 = (__this->f23);
		int32_t L_94 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_95 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_95 = m4419(L_95, L_93, 0, L_94, &m4399_MI);
		return L_95;
	}
}
extern "C" t2* m11784 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f16);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = (__this->f16);
		p0 = L_2;
	}

IL_0013:
	{
		int32_t L_3 = p0;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (t2*) &_stringLiteral691;
	}

IL_001c:
	{
		int32_t L_4 = p0;
		m11740(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), &m11740_MI);
		bool L_5 = (__this->f12);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		t1561 * L_6 = p1;
		t2* L_7 = m8790(L_6, &m8790_MI);
		m11744(__this, L_7, &m11744_MI);
	}

IL_0039:
	{
		int32_t L_8 = p0;
		m11806(__this, 0, L_8, &m11806_MI);
		t318* L_9 = (__this->f23);
		int32_t L_10 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_11 = m4419(L_11, L_9, 0, L_10, &m4399_MI);
		return L_11;
	}
}
extern "C" t2* m11785 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t* V_1 = {0};
	uint64_t V_2 = 0;
	uint16_t* G_B3_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f18);
		int32_t L_2 = m6945(NULL, L_0, L_1, &m6945_MI);
		V_0 = L_2;
		bool L_3 = (__this->f11);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint16_t* L_4 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f3;
		G_B3_0 = L_4;
		goto IL_0021;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint16_t* L_5 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f2;
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_1 = (uint16_t*)G_B3_0;
		int32_t L_6 = V_0;
		m11740(__this, L_6, &m11740_MI);
		int32_t L_7 = V_0;
		__this->f24 = L_7;
		uint32_t L_8 = (__this->f19);
		uint32_t L_9 = (__this->f20);
		V_2 = ((int64_t)((int64_t)(((uint64_t)L_8))|(int64_t)((int64_t)((int64_t)(((uint64_t)L_9))<<(int32_t)((int32_t)32)))));
		goto IL_0061;
	}

IL_0045:
	{
		t318* L_10 = (__this->f23);
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)((int32_t)L_11-(int32_t)1));
		V_0 = L_12;
		uint16_t* L_13 = V_1;
		uint64_t L_14 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_12)) = (uint16_t)(*((uint16_t*)((intptr_t)((intptr_t)L_13+(intptr_t)(((uintptr_t)((int64_t)((int64_t)((int64_t)((int64_t)L_14&(int64_t)(((int64_t)((int32_t)15)))))*(int64_t)(((int64_t)2))))))))));
		uint64_t L_15 = V_2;
		V_2 = ((int64_t)((uint64_t)L_15>>4));
	}

IL_0061:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		t318* L_17 = (__this->f23);
		int32_t L_18 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4419(L_19, L_17, 0, L_18, &m4399_MI);
		return L_19;
	}
}
extern "C" t2* m11786 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		t1561 * L_1 = p1;
		int32_t L_2 = m8791(L_1, &m8791_MI);
		p0 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p0;
		m11753(__this, L_3, &m11753_MI);
		int32_t L_4 = m11747(__this, &m11747_MI);
		int32_t L_5 = p0;
		m11740(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)2)), &m11740_MI);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1561 * L_7 = p1;
		t2* L_8 = m8790(L_7, &m8790_MI);
		m11744(__this, L_8, &m11744_MI);
	}

IL_003a:
	{
		int32_t L_9 = m11747(__this, &m11747_MI);
		m11799(__this, L_9, &m11799_MI);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		t1561 * L_11 = p1;
		t2* L_12 = m8792(L_11, &m8792_MI);
		m11744(__this, L_12, &m11744_MI);
		int32_t L_13 = p0;
		m11801(__this, L_13, &m11801_MI);
	}

IL_005d:
	{
		t318* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_16 = m4419(L_16, L_14, 0, L_15, &m4399_MI);
		return L_16;
	}
}
extern "C" t2* m11787 (t2143 * __this, double p0, t1561 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		t2143 * L_0 = m11810(__this, &m11810_MI);
		V_0 = L_0;
		double L_1 = p0;
		if ((!(((double)L_1) >= ((double)(-1.79769313486231E+308)))))
		{
			goto IL_0039;
		}
	}
	{
		double L_2 = p0;
		if ((!(((double)L_2) <= ((double)(1.79769313486231E+308)))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = (__this->f15);
		t1561 * L_4 = p1;
		t2* L_5 = m11789(__this, L_3, L_4, &m11789_MI);
		V_1 = L_5;
		double L_6 = p0;
		t2* L_7 = V_1;
		t1561 * L_8 = p1;
		double L_9 = m7495(NULL, L_7, L_8, &m7495_MI);
		if ((!(((double)L_6) == ((double)L_9))))
		{
			goto IL_0039;
		}
	}
	{
		t2* L_10 = V_1;
		return L_10;
	}

IL_0039:
	{
		t2143 * L_11 = V_0;
		int32_t L_12 = (__this->f15);
		t1561 * L_13 = p1;
		t2* L_14 = m11789(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)), L_13, &m11789_MI);
		return L_14;
	}
}
extern "C" t2* m11788 (t2143 * __this, float p0, t1561 * p1, MethodInfo* method)
{
	t2143 * V_0 = {0};
	t2* V_1 = {0};
	{
		t2143 * L_0 = m11810(__this, &m11810_MI);
		V_0 = L_0;
		int32_t L_1 = (__this->f15);
		t1561 * L_2 = p1;
		t2* L_3 = m11789(__this, L_1, L_2, &m11789_MI);
		V_1 = L_3;
		float L_4 = p0;
		t2* L_5 = V_1;
		t1561 * L_6 = p1;
		float L_7 = m7467(NULL, L_5, L_6, &m7467_MI);
		if ((!(((float)L_4) == ((float)L_7))))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		t2143 * L_9 = V_0;
		int32_t L_10 = (__this->f15);
		t1561 * L_11 = p1;
		t2* L_12 = m11789(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), L_11, &m11789_MI);
		return L_12;
	}
}
extern "C" t2* m11789 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m11749(__this, &m11749_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f15);
		p0 = L_2;
		goto IL_002d;
	}

IL_0017:
	{
		V_0 = 1;
		int32_t L_3 = p0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = (__this->f15);
		p0 = L_4;
	}

IL_0026:
	{
		int32_t L_5 = p0;
		m11752(__this, L_5, &m11752_MI);
	}

IL_002d:
	{
		int32_t L_6 = (__this->f18);
		V_1 = L_6;
		int32_t L_7 = (__this->f16);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_1;
		int32_t L_11 = p0;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)-4))))
		{
			goto IL_0057;
		}
	}

IL_0048:
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = V_2;
		t1561 * L_15 = p1;
		t2* L_16 = m11793(__this, ((int32_t)((int32_t)L_14-(int32_t)1)), L_15, 2, &m11793_MI);
		return L_16;
	}

IL_0057:
	{
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		V_3 = 0;
	}

IL_005d:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		V_1 = 0;
	}

IL_0063:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_1;
		m11740(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20))+(int32_t)3)), &m11740_MI);
		bool L_21 = (__this->f12);
		if (L_21)
		{
			goto IL_0082;
		}
	}
	{
		t1561 * L_22 = p1;
		t2* L_23 = m8790(L_22, &m8790_MI);
		m11744(__this, L_23, &m11744_MI);
	}

IL_0082:
	{
		int32_t L_24 = V_1;
		if (L_24)
		{
			goto IL_008f;
		}
	}
	{
		m11742(__this, ((int32_t)48), &m11742_MI);
		goto IL_0099;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		m11806(__this, ((int32_t)((int32_t)L_25-(int32_t)L_26)), L_27, &m11806_MI);
	}

IL_0099:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		t1561 * L_29 = p1;
		t2* L_30 = m8792(L_29, &m8792_MI);
		m11744(__this, L_30, &m11744_MI);
		int32_t L_31 = V_3;
		m11806(__this, 0, L_31, &m11806_MI);
	}

IL_00b1:
	{
		t318* L_32 = (__this->f23);
		int32_t L_33 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_34 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_34 = m4419(L_34, L_32, 0, L_33, &m4399_MI);
		return L_34;
	}
}
extern "C" t2* m11790 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		t1561 * L_2 = p1;
		int32_t L_3 = m8791(L_2, &m8791_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = m11747(__this, &m11747_MI);
		int32_t L_5 = p0;
		m11740(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4*(int32_t)3))+(int32_t)L_5)), &m11740_MI);
		int32_t L_6 = p0;
		m11753(__this, L_6, &m11753_MI);
		bool L_7 = (__this->f12);
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1561 * L_8 = p1;
		int32_t L_9 = m8795(L_8, &m8795_MI);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10 == 0)
		{
			goto IL_004c;
		}
		if (L_10 == 1)
		{
			goto IL_0056;
		}
		if (L_10 == 2)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_007a;
	}

IL_004c:
	{
		m11742(__this, ((int32_t)40), &m11742_MI);
		goto IL_007a;
	}

IL_0056:
	{
		t1561 * L_11 = p1;
		t2* L_12 = m8790(L_11, &m8790_MI);
		m11744(__this, L_12, &m11744_MI);
		goto IL_007a;
	}

IL_0064:
	{
		t1561 * L_13 = p1;
		t2* L_14 = m8790(L_13, &m8790_MI);
		m11744(__this, L_14, &m11744_MI);
		m11742(__this, ((int32_t)32), &m11742_MI);
		goto IL_007a;
	}

IL_007a:
	{
		t1561 * L_15 = p1;
		t1101* L_16 = m8794(L_15, &m8794_MI);
		t1561 * L_17 = p1;
		t2* L_18 = m8793(L_17, &m8793_MI);
		m11802(__this, L_16, L_18, &m11802_MI);
		int32_t L_19 = p0;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		t1561 * L_20 = p1;
		t2* L_21 = m8792(L_20, &m8792_MI);
		m11744(__this, L_21, &m11744_MI);
		int32_t L_22 = p0;
		m11801(__this, L_22, &m11801_MI);
	}

IL_00a3:
	{
		bool L_23 = (__this->f12);
		if (L_23)
		{
			goto IL_00fc;
		}
	}
	{
		t1561 * L_24 = p1;
		int32_t L_25 = m8795(L_24, &m8795_MI);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (L_26 == 0)
		{
			goto IL_00ce;
		}
		if (L_26 == 1)
		{
			goto IL_00fc;
		}
		if (L_26 == 2)
		{
			goto IL_00fc;
		}
		if (L_26 == 3)
		{
			goto IL_00d8;
		}
		if (L_26 == 4)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00fc;
	}

IL_00ce:
	{
		m11742(__this, ((int32_t)41), &m11742_MI);
		goto IL_00fc;
	}

IL_00d8:
	{
		t1561 * L_27 = p1;
		t2* L_28 = m8790(L_27, &m8790_MI);
		m11744(__this, L_28, &m11744_MI);
		goto IL_00fc;
	}

IL_00e6:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_29 = p1;
		t2* L_30 = m8790(L_29, &m8790_MI);
		m11744(__this, L_30, &m11744_MI);
		goto IL_00fc;
	}

IL_00fc:
	{
		t318* L_31 = (__this->f23);
		int32_t L_32 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_33 = m4419(L_33, L_31, 0, L_32, &m4399_MI);
		return L_33;
	}
}
extern "C" t2* m11791 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = p0;
		G_B3_0 = L_1;
		goto IL_000d;
	}

IL_0007:
	{
		t1561 * L_2 = p1;
		int32_t L_3 = m8797(L_2, &m8797_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		m11808(__this, 2, &m11808_MI);
		int32_t L_4 = p0;
		m11753(__this, L_4, &m11753_MI);
		int32_t L_5 = m11747(__this, &m11747_MI);
		int32_t L_6 = p0;
		m11740(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)L_6))+(int32_t)((int32_t)16))), &m11740_MI);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		t1561 * L_8 = p1;
		int32_t L_9 = m8802(L_8, &m8802_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		t1561 * L_10 = p1;
		t2* L_11 = m8803(L_10, &m8803_MI);
		m11744(__this, L_11, &m11744_MI);
	}

IL_0050:
	{
		goto IL_00a3;
	}

IL_0052:
	{
		t1561 * L_12 = p1;
		int32_t L_13 = m8801(L_12, &m8801_MI);
		V_0 = L_13;
		int32_t L_14 = V_0;
		if (L_14 == 0)
		{
			goto IL_006d;
		}
		if (L_14 == 1)
		{
			goto IL_007b;
		}
		if (L_14 == 2)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a3;
	}

IL_006d:
	{
		t1561 * L_15 = p1;
		t2* L_16 = m8790(L_15, &m8790_MI);
		m11744(__this, L_16, &m11744_MI);
		goto IL_00a3;
	}

IL_007b:
	{
		t1561 * L_17 = p1;
		t2* L_18 = m8790(L_17, &m8790_MI);
		m11744(__this, L_18, &m11744_MI);
		goto IL_00a3;
	}

IL_0089:
	{
		t1561 * L_19 = p1;
		t2* L_20 = m8790(L_19, &m8790_MI);
		m11744(__this, L_20, &m11744_MI);
		t1561 * L_21 = p1;
		t2* L_22 = m8803(L_21, &m8803_MI);
		m11744(__this, L_22, &m11744_MI);
		goto IL_00a3;
	}

IL_00a3:
	{
		t1561 * L_23 = p1;
		t1101* L_24 = m8800(L_23, &m8800_MI);
		t1561 * L_25 = p1;
		t2* L_26 = m8799(L_25, &m8799_MI);
		m11802(__this, L_24, L_26, &m11802_MI);
		int32_t L_27 = p0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		t1561 * L_28 = p1;
		t2* L_29 = m8798(L_28, &m8798_MI);
		m11744(__this, L_29, &m11744_MI);
		int32_t L_30 = p0;
		m11801(__this, L_30, &m11801_MI);
	}

IL_00cc:
	{
		bool L_31 = (__this->f12);
		if (!L_31)
		{
			goto IL_010a;
		}
	}
	{
		t1561 * L_32 = p1;
		int32_t L_33 = m8802(L_32, &m8802_MI);
		V_0 = L_33;
		int32_t L_34 = V_0;
		if (!L_34)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0108;
	}

IL_00e4:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_36 = p1;
		t2* L_37 = m8803(L_36, &m8803_MI);
		m11744(__this, L_37, &m11744_MI);
		goto IL_0108;
	}

IL_00fa:
	{
		t1561 * L_38 = p1;
		t2* L_39 = m8803(L_38, &m8803_MI);
		m11744(__this, L_39, &m11744_MI);
		goto IL_0108;
	}

IL_0108:
	{
		goto IL_013e;
	}

IL_010a:
	{
		t1561 * L_40 = p1;
		int32_t L_41 = m8801(L_40, &m8801_MI);
		V_0 = L_41;
		int32_t L_42 = V_0;
		if (!L_42)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_0130;
		}
	}
	{
		goto IL_013e;
	}

IL_011a:
	{
		m11742(__this, ((int32_t)32), &m11742_MI);
		t1561 * L_44 = p1;
		t2* L_45 = m8803(L_44, &m8803_MI);
		m11744(__this, L_45, &m11744_MI);
		goto IL_013e;
	}

IL_0130:
	{
		t1561 * L_46 = p1;
		t2* L_47 = m8803(L_46, &m8803_MI);
		m11744(__this, L_47, &m11744_MI);
		goto IL_013e;
	}

IL_013e:
	{
		t318* L_48 = (__this->f23);
		int32_t L_49 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_50 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_50 = m4419(L_50, L_48, 0, L_49, &m4399_MI);
		return L_50;
	}
}
extern "C" t2* m11792 (t2143 * __this, int32_t p0, t1561 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}
	{
		p0 = 6;
	}

IL_0009:
	{
		int32_t L_1 = p0;
		m11752(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), &m11752_MI);
		int32_t L_2 = p0;
		t1561 * L_3 = p1;
		t2* L_4 = m11793(__this, L_2, L_3, 3, &m11793_MI);
		return L_4;
	}
}
extern "C" t2* m11793 (t2143 * __this, int32_t p0, t1561 * p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (__this->f18);
		V_0 = L_0;
		int32_t L_1 = (__this->f16);
		V_1 = L_1;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		int32_t L_3 = 1;
		V_3 = L_3;
		__this->f18 = L_3;
		int32_t L_4 = V_3;
		V_0 = L_4;
		int32_t L_5 = p0;
		m11740(__this, ((int32_t)((int32_t)L_5+(int32_t)8)), &m11740_MI);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1561 * L_7 = p1;
		t2* L_8 = m8790(L_7, &m8790_MI);
		m11744(__this, L_8, &m11744_MI);
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		m11804(__this, ((int32_t)((int32_t)L_9-(int32_t)1)), &m11804_MI);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		t1561 * L_11 = p1;
		t2* L_12 = m8792(L_11, &m8792_MI);
		m11744(__this, L_12, &m11744_MI);
		int32_t L_13 = V_1;
		int32_t L_14 = p0;
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->f18);
		m11806(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))-(int32_t)1)), ((int32_t)((int32_t)L_15-(int32_t)L_16)), &m11806_MI);
	}

IL_0066:
	{
		t1561 * L_17 = p1;
		int32_t L_18 = V_2;
		int32_t L_19 = p2;
		m11803(__this, L_17, L_18, L_19, &m11803_MI);
		t318* L_20 = (__this->f23);
		int32_t L_21 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_22 = m4419(L_22, L_20, 0, L_21, &m4399_MI);
		return L_22;
	}
}
extern "C" t2* m11794 (t2143 * __this, t2* p0, t1561 * p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t2142 * V_3 = {0};
	t328 * V_4 = {0};
	t328 * V_5 = {0};
	t328 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t2* G_B4_0 = {0};
	t328 * G_B8_0 = {0};
	t328 * G_B21_0 = {0};
	t328 * G_B20_0 = {0};
	int32_t G_B22_0 = 0;
	t328 * G_B22_1 = {0};
	{
		bool L_0 = (__this->f12);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		t2* L_1 = p0;
		bool L_2 = m11750(__this, &m11750_MI);
		m11714(NULL, L_1, (&V_0), L_2, (&V_1), (&V_2), &m11714_MI);
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = (__this->f12);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B4_0 = L_5;
		goto IL_0035;
	}

IL_002f:
	{
		t1561 * L_6 = p1;
		t2* L_7 = m8790(L_6, &m8790_MI);
		G_B4_0 = L_7;
	}

IL_0035:
	{
		return G_B4_0;
	}

IL_0036:
	{
		bool L_8 = V_0;
		__this->f12 = L_8;
		t2* L_9 = p0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		t1561 * L_12 = p1;
		t2142 * L_13 = m11715(NULL, L_9, L_10, L_11, L_12, &m11715_MI);
		V_3 = L_13;
		t2142 * L_14 = V_3;
		int32_t L_15 = (L_14->f4);
		t328 * L_16 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_16, ((int32_t)((int32_t)L_15*(int32_t)2)), &m4396_MI);
		V_4 = L_16;
		t2142 * L_17 = V_3;
		int32_t L_18 = (L_17->f1);
		t328 * L_19 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_19, ((int32_t)((int32_t)L_18*(int32_t)2)), &m4396_MI);
		V_5 = L_19;
		t2142 * L_20 = V_3;
		bool L_21 = (L_20->f7);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		t2142 * L_22 = V_3;
		int32_t L_23 = (L_22->f8);
		t328 * L_24 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_24, ((int32_t)((int32_t)L_23*(int32_t)2)), &m4396_MI);
		G_B8_0 = L_24;
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = ((t328 *)(NULL));
	}

IL_007d:
	{
		V_6 = G_B8_0;
		V_7 = 0;
		t2142 * L_25 = V_3;
		int32_t L_26 = (L_25->f12);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		t2142 * L_27 = V_3;
		int32_t L_28 = (L_27->f12);
		m11808(__this, ((int32_t)((int32_t)2*(int32_t)L_28)), &m11808_MI);
	}

IL_0099:
	{
		t2142 * L_29 = V_3;
		int32_t L_30 = (L_29->f13);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		t2142 * L_31 = V_3;
		int32_t L_32 = (L_31->f13);
		m11808(__this, ((int32_t)((int32_t)3*(int32_t)L_32)), &m11808_MI);
	}

IL_00b0:
	{
		t2142 * L_33 = V_3;
		int32_t L_34 = (L_33->f11);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		t2142 * L_35 = V_3;
		int32_t L_36 = (L_35->f11);
		m11809(__this, L_36, &m11809_MI);
	}

IL_00c5:
	{
		V_8 = 1;
		t2142 * L_37 = V_3;
		bool L_38 = (L_37->f7);
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		t2142 * L_39 = V_3;
		int32_t L_40 = (L_39->f1);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		t2142 * L_41 = V_3;
		int32_t L_42 = (L_41->f4);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}

IL_00e2:
	{
		bool L_43 = m11750(__this, &m11750_MI);
		if (L_43)
		{
			goto IL_011b;
		}
	}
	{
		t2142 * L_44 = V_3;
		int32_t L_45 = (L_44->f1);
		t2142 * L_46 = V_3;
		int32_t L_47 = (L_46->f4);
		m11752(__this, ((int32_t)((int32_t)L_45+(int32_t)L_47)), &m11752_MI);
		int32_t L_48 = V_7;
		int32_t L_49 = (__this->f18);
		t2142 * L_50 = V_3;
		int32_t L_51 = (L_50->f4);
		V_7 = ((int32_t)((int32_t)L_48-(int32_t)((int32_t)((int32_t)L_49-(int32_t)L_51))));
		t2142 * L_52 = V_3;
		int32_t L_53 = (L_52->f4);
		__this->f18 = L_53;
	}

IL_011b:
	{
		int32_t L_54 = V_7;
		V_8 = ((((int32_t)((((int32_t)L_54) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t328 * L_55 = V_6;
		int32_t L_56 = V_7;
		G_B20_0 = L_55;
		if ((((int32_t)L_56) >= ((int32_t)0)))
		{
			G_B21_0 = L_55;
			goto IL_0131;
		}
	}
	{
		int32_t L_57 = V_7;
		G_B22_0 = ((-L_57));
		G_B22_1 = G_B20_0;
		goto IL_0133;
	}

IL_0131:
	{
		int32_t L_58 = V_7;
		G_B22_0 = L_58;
		G_B22_1 = G_B21_0;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		m11797(NULL, G_B22_1, G_B22_0, &m11797_MI);
		goto IL_0147;
	}

IL_013a:
	{
		t2142 * L_59 = V_3;
		int32_t L_60 = (L_59->f1);
		m11753(__this, L_60, &m11753_MI);
	}

IL_0147:
	{
		t2142 * L_61 = V_3;
		int32_t L_62 = (L_61->f4);
		if (L_62)
		{
			goto IL_0157;
		}
	}
	{
		bool L_63 = m11751(__this, &m11751_MI);
		if (L_63)
		{
			goto IL_0165;
		}
	}

IL_0157:
	{
		int32_t L_64 = m11747(__this, &m11747_MI);
		t328 * L_65 = V_4;
		m11798(__this, L_64, L_65, &m11798_MI);
	}

IL_0165:
	{
		int32_t L_66 = m11748(__this, &m11748_MI);
		t328 * L_67 = V_5;
		m11800(__this, L_66, L_67, &m11800_MI);
		t2142 * L_68 = V_3;
		bool L_69 = (L_68->f7);
		if (!L_69)
		{
			goto IL_0217;
		}
	}
	{
		t2142 * L_70 = V_3;
		int32_t L_71 = (L_70->f1);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		t2142 * L_72 = V_3;
		int32_t L_73 = (L_72->f4);
		if ((((int32_t)L_73) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		__this->f12 = 1;
	}

IL_0197:
	{
		t328 * L_74 = V_4;
		int32_t L_75 = m5926(L_74, &m5926_MI);
		t2142 * L_76 = V_3;
		int32_t L_77 = (L_76->f4);
		if ((((int32_t)L_75) >= ((int32_t)L_77)))
		{
			goto IL_01c2;
		}
	}
	{
		t328 * L_78 = V_4;
		t2142 * L_79 = V_3;
		int32_t L_80 = (L_79->f4);
		t328 * L_81 = V_4;
		int32_t L_82 = m5926(L_81, &m5926_MI);
		m10943(L_78, 0, (t2*) &_stringLiteral691, ((int32_t)((int32_t)L_80-(int32_t)L_82)), &m10943_MI);
	}

IL_01c2:
	{
		goto IL_01cf;
	}

IL_01c4:
	{
		t328 * L_83 = V_6;
		m10942(L_83, 0, ((int32_t)48), &m10942_MI);
	}

IL_01cf:
	{
		t328 * L_84 = V_6;
		int32_t L_85 = m5926(L_84, &m5926_MI);
		t2142 * L_86 = V_3;
		int32_t L_87 = (L_86->f8);
		t2142 * L_88 = V_3;
		int32_t L_89 = (L_88->f9);
		if ((((int32_t)L_85) < ((int32_t)((int32_t)((int32_t)L_87-(int32_t)L_89)))))
		{
			goto IL_01c4;
		}
	}
	{
		bool L_90 = V_8;
		if (!L_90)
		{
			goto IL_0202;
		}
	}
	{
		t2142 * L_91 = V_3;
		bool L_92 = (L_91->f10);
		if (L_92)
		{
			goto IL_0202;
		}
	}
	{
		t328 * L_93 = V_6;
		t1561 * L_94 = p1;
		t2* L_95 = m8806(L_94, &m8806_MI);
		m10941(L_93, 0, L_95, &m10941_MI);
		goto IL_0215;
	}

IL_0202:
	{
		bool L_96 = V_8;
		if (L_96)
		{
			goto IL_0215;
		}
	}
	{
		t328 * L_97 = V_6;
		t1561 * L_98 = p1;
		t2* L_99 = m8790(L_98, &m8790_MI);
		m10941(L_97, 0, L_99, &m10941_MI);
	}

IL_0215:
	{
		goto IL_0277;
	}

IL_0217:
	{
		t328 * L_100 = V_4;
		int32_t L_101 = m5926(L_100, &m5926_MI);
		t2142 * L_102 = V_3;
		int32_t L_103 = (L_102->f4);
		t2142 * L_104 = V_3;
		int32_t L_105 = (L_104->f5);
		if ((((int32_t)L_101) >= ((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_105)))))
		{
			goto IL_0250;
		}
	}
	{
		t328 * L_106 = V_4;
		t2142 * L_107 = V_3;
		int32_t L_108 = (L_107->f4);
		t2142 * L_109 = V_3;
		int32_t L_110 = (L_109->f5);
		t328 * L_111 = V_4;
		int32_t L_112 = m5926(L_111, &m5926_MI);
		m10943(L_106, 0, (t2*) &_stringLiteral691, ((int32_t)((int32_t)((int32_t)((int32_t)L_108-(int32_t)L_110))-(int32_t)L_112)), &m10943_MI);
	}

IL_0250:
	{
		t2142 * L_113 = V_3;
		int32_t L_114 = (L_113->f4);
		t2142 * L_115 = V_3;
		int32_t L_116 = (L_115->f5);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_116))))
		{
			goto IL_0277;
		}
	}
	{
		t328 * L_117 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		bool L_118 = m11796(NULL, L_117, &m11796_MI);
		if (!L_118)
		{
			goto IL_0277;
		}
	}
	{
		t328 * L_119 = V_4;
		t328 * L_120 = V_4;
		int32_t L_121 = m5926(L_120, &m5926_MI);
		m10935(L_119, 0, L_121, &m10935_MI);
	}

IL_0277:
	{
		t328 * L_122 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		m11795(NULL, L_122, 1, &m11795_MI);
		goto IL_028b;
	}

IL_0281:
	{
		t328 * L_123 = V_5;
		m2797(L_123, ((int32_t)48), &m2797_MI);
	}

IL_028b:
	{
		t328 * L_124 = V_5;
		int32_t L_125 = m5926(L_124, &m5926_MI);
		t2142 * L_126 = V_3;
		int32_t L_127 = (L_126->f1);
		t2142 * L_128 = V_3;
		int32_t L_129 = (L_128->f3);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)((int32_t)L_127-(int32_t)L_129)))))
		{
			goto IL_0281;
		}
	}
	{
		t328 * L_130 = V_5;
		int32_t L_131 = m5926(L_130, &m5926_MI);
		t2142 * L_132 = V_3;
		int32_t L_133 = (L_132->f1);
		if ((((int32_t)L_131) <= ((int32_t)L_133)))
		{
			goto IL_02cc;
		}
	}
	{
		t328 * L_134 = V_5;
		t2142 * L_135 = V_3;
		int32_t L_136 = (L_135->f1);
		t328 * L_137 = V_5;
		int32_t L_138 = m5926(L_137, &m5926_MI);
		t2142 * L_139 = V_3;
		int32_t L_140 = (L_139->f1);
		m10935(L_134, L_136, ((int32_t)((int32_t)L_138-(int32_t)L_140)), &m10935_MI);
	}

IL_02cc:
	{
		t2142 * L_141 = V_3;
		t2* L_142 = p0;
		int32_t L_143 = V_1;
		int32_t L_144 = V_2;
		t1561 * L_145 = p1;
		bool L_146 = (__this->f12);
		t328 * L_147 = V_4;
		t328 * L_148 = V_5;
		t328 * L_149 = V_6;
		t2* L_150 = m11716(L_141, L_142, L_143, L_144, L_145, L_146, L_147, L_148, L_149, &m11716_MI);
		return L_150;
	}
}
extern "C" void m11795 (t9 * __this , t328 * p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = 0;
		t328 * L_0 = p0;
		int32_t L_1 = m5926(L_0, &m5926_MI);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0022;
	}

IL_000d:
	{
		t328 * L_2 = p0;
		int32_t L_3 = V_1;
		uint16_t L_4 = m10932(L_2, L_3, &m10932_MI);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0034;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6-(int32_t)1));
	}

IL_0022:
	{
		bool L_7 = p1;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_1;
		G_B7_0 = ((((int32_t)((((int32_t)L_8) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		if (G_B7_0)
		{
			goto IL_000d;
		}
	}

IL_0034:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		t328 * L_11 = p0;
		t328 * L_12 = p0;
		int32_t L_13 = m5926(L_12, &m5926_MI);
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		m10935(L_11, ((int32_t)((int32_t)L_13-(int32_t)L_14)), L_15, &m10935_MI);
	}

IL_0048:
	{
		return;
	}
}
extern "C" bool m11796 (t9 * __this , t328 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		t328 * L_0 = p0;
		int32_t L_1 = V_0;
		uint16_t L_2 = m10932(L_0, L_1, &m10932_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_3 = m5967(NULL, L_2, &m5967_MI);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t328 * L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m10932(L_4, L_5, &m10932_MI);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)48))))
		{
			goto IL_001f;
		}
	}
	{
		return 0;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_0;
		t328 * L_9 = p0;
		int32_t L_10 = m5926(L_9, &m5926_MI);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
extern "C" void m11797 (t9 * __this , t328 * p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		t570 * L_1 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_1, &m11179_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t L_3 = m11729(NULL, (((int64_t)L_2)), &m11729_MI);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = p1;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int64_t L_6 = m11720(NULL, L_5, &m11720_MI);
		V_1 = ((int32_t)((int32_t)L_4/(int32_t)(((int32_t)L_6))));
		t328 * L_7 = p0;
		int32_t L_8 = V_1;
		m2797(L_7, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_8)))), &m2797_MI);
		int32_t L_9 = p1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		int64_t L_12 = m11720(NULL, L_11, &m11720_MI);
		int32_t L_13 = V_1;
		p1 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)((int32_t)(((int32_t)L_12))*(int32_t)L_13))));
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
extern "C" void m11798 (t2143 * __this, int32_t p0, t328 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t328 * L_1 = p1;
		int32_t L_2 = p0;
		m10938(L_1, ((int32_t)48), L_2, &m10938_MI);
		return;
	}

IL_0014:
	{
		int32_t L_3 = (__this->f18);
		int32_t L_4 = p0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		t328 * L_5 = p1;
		int32_t L_6 = p0;
		int32_t L_7 = (__this->f18);
		m10938(L_5, ((int32_t)48), ((int32_t)((int32_t)L_6-(int32_t)L_7)), &m10938_MI);
	}

IL_002e:
	{
		int32_t L_8 = (__this->f16);
		int32_t L_9 = (__this->f18);
		int32_t L_10 = (__this->f16);
		t328 * L_11 = p1;
		m11807(__this, ((int32_t)((int32_t)L_8-(int32_t)L_9)), L_10, L_11, &m11807_MI);
		return;
	}
}
extern "C" void m11799 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = p0;
		m11743(__this, ((int32_t)48), L_1, &m11743_MI);
		return;
	}

IL_0013:
	{
		int32_t L_2 = (__this->f18);
		int32_t L_3 = p0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = p0;
		int32_t L_5 = (__this->f18);
		m11743(__this, ((int32_t)48), ((int32_t)((int32_t)L_4-(int32_t)L_5)), &m11743_MI);
	}

IL_002c:
	{
		int32_t L_6 = (__this->f16);
		int32_t L_7 = (__this->f18);
		int32_t L_8 = (__this->f16);
		m11806(__this, ((int32_t)((int32_t)L_6-(int32_t)L_7)), L_8, &m11806_MI);
		return;
	}
}
extern "C" void m11800 (t2143 * __this, int32_t p0, t328 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		t328 * L_5 = p1;
		m11807(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), L_5, &m11807_MI);
		return;
	}
}
extern "C" void m11801 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		m11806(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), &m11806_MI);
		return;
	}
}
extern "C" void m11802 (t2143 * __this, t1101* p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		bool L_0 = m11751(__this, &m11751_MI);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		m11742(__this, ((int32_t)48), &m11742_MI);
		return;
	}

IL_0011:
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0032;
	}

IL_0019:
	{
		int32_t L_1 = V_0;
		t1101* L_2 = p0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))));
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->f18);
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_2;
		V_1 = L_7;
		goto IL_002e;
	}

IL_002c:
	{
		goto IL_0038;
	}

IL_002e:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_9 = V_2;
		t1101* L_10 = p0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_0038:
	{
		t1101* L_11 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_11)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		t1101* L_13 = p0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15));
		int32_t L_16 = (__this->f18);
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_18 = (__this->f18);
		int32_t L_19 = V_0;
		G_B13_0 = ((int32_t)((int32_t)L_18-(int32_t)L_19));
		goto IL_0061;
	}

IL_0060:
	{
		G_B13_0 = 0;
	}

IL_0061:
	{
		V_5 = G_B13_0;
		int32_t L_20 = V_4;
		if (L_20)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_006d;
	}

IL_0069:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21-(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		t1101* L_23 = p0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		if (!(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)))
		{
			goto IL_0069;
		}
	}

IL_0076:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_27 = V_5;
		G_B21_0 = L_27;
		goto IL_0082;
	}

IL_007f:
	{
		t1101* L_28 = p0;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		G_B21_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_28, L_30));
	}

IL_0082:
	{
		V_4 = G_B21_0;
	}

IL_0084:
	{
		int32_t L_31 = V_5;
		if (L_31)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_32 = V_4;
		V_3 = L_32;
		goto IL_00a7;
	}

IL_008d:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_5;
		int32_t L_35 = V_4;
		V_1 = ((int32_t)((int32_t)L_33+(int32_t)((int32_t)((int32_t)L_34/(int32_t)L_35))));
		int32_t L_36 = V_5;
		int32_t L_37 = V_4;
		V_3 = ((int32_t)((int32_t)L_36%(int32_t)L_37));
		int32_t L_38 = V_3;
		if (L_38)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_39 = V_4;
		V_3 = L_39;
		goto IL_00a7;
	}

IL_00a3:
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00a7:
	{
		V_6 = 0;
		goto IL_0116;
	}

IL_00ac:
	{
		int32_t L_41 = (__this->f18);
		int32_t L_42 = V_6;
		int32_t L_43 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_41-(int32_t)L_42))) <= ((int32_t)L_43)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_44 = V_3;
		if (L_44)
		{
			goto IL_00d9;
		}
	}

IL_00bb:
	{
		int32_t L_45 = (__this->f16);
		int32_t L_46 = (__this->f18);
		int32_t L_47 = (__this->f16);
		int32_t L_48 = V_6;
		m11806(__this, ((int32_t)((int32_t)L_45-(int32_t)L_46)), ((int32_t)((int32_t)L_47-(int32_t)L_48)), &m11806_MI);
		goto IL_0118;
	}

IL_00d9:
	{
		int32_t L_49 = (__this->f16);
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		int32_t L_52 = (__this->f16);
		int32_t L_53 = V_6;
		m11806(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_49-(int32_t)L_50))-(int32_t)L_51)), ((int32_t)((int32_t)L_52-(int32_t)L_53)), &m11806_MI);
		int32_t L_54 = V_6;
		int32_t L_55 = V_3;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)L_55));
		t2* L_56 = p1;
		m11744(__this, L_56, &m11744_MI);
		int32_t L_57 = V_1;
		int32_t L_58 = ((int32_t)((int32_t)L_57-(int32_t)1));
		V_1 = L_58;
		t1101* L_59 = p0;
		if ((((int32_t)L_58) >= ((int32_t)(((int32_t)(((t121 *)L_59)->max_length))))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) < ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		t1101* L_61 = p0;
		int32_t L_62 = V_1;
		int32_t L_63 = L_62;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_61, L_63));
	}

IL_0113:
	{
		int32_t L_64 = V_4;
		V_3 = L_64;
	}

IL_0116:
	{
		goto IL_00ac;
	}

IL_0118:
	{
		goto IL_0133;
	}

IL_011a:
	{
		int32_t L_65 = (__this->f16);
		int32_t L_66 = (__this->f18);
		int32_t L_67 = (__this->f16);
		m11806(__this, ((int32_t)((int32_t)L_65-(int32_t)L_66)), L_67, &m11806_MI);
	}

IL_0133:
	{
		return;
	}
}
extern "C" void m11803 (t2143 * __this, t1561 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_1 = (__this->f13);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
		m11742(__this, ((int32_t)69), &m11742_MI);
		goto IL_0024;
	}

IL_001c:
	{
		m11742(__this, ((int32_t)101), &m11742_MI);
	}

IL_0024:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t1561 * L_3 = p0;
		t2* L_4 = m8806(L_3, &m8806_MI);
		m11744(__this, L_4, &m11744_MI);
		goto IL_0048;
	}

IL_0036:
	{
		t1561 * L_5 = p0;
		t2* L_6 = m8790(L_5, &m8790_MI);
		m11744(__this, L_6, &m11744_MI);
		int32_t L_7 = p1;
		p1 = ((-L_7));
	}

IL_0048:
	{
		int32_t L_8 = p1;
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_9 = p2;
		m11743(__this, ((int32_t)48), L_9, &m11743_MI);
		goto IL_00ae;
	}

IL_0056:
	{
		int32_t L_10 = p1;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_11 = p2;
		m11743(__this, ((int32_t)48), ((int32_t)((int32_t)L_11-(int32_t)1)), &m11743_MI);
		int32_t L_12 = p1;
		m11742(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_12)))), &m11742_MI);
		goto IL_00ae;
	}

IL_0073:
	{
		int32_t L_13 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		uint32_t L_14 = m11724(NULL, L_13, &m11724_MI);
		V_0 = L_14;
		int32_t L_15 = p1;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_16 = p2;
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_0090;
		}
	}

IL_0083:
	{
		uint32_t L_17 = V_0;
		m11742(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((uint32_t)L_17>>8)))))), &m11742_MI);
	}

IL_0090:
	{
		uint32_t L_18 = V_0;
		m11742(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_18>>4))&(int32_t)((int32_t)15))))))), &m11742_MI);
		uint32_t L_19 = V_0;
		m11742(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)15))))))), &m11742_MI);
	}

IL_00ae:
	{
		return;
	}
}
extern "C" void m11804 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f24);
		t318* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m11741(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), &m11741_MI);
	}

IL_001f:
	{
		int32_t L_3 = p0;
		int32_t L_4 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_3+(int32_t)L_4));
		int32_t L_5 = p0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_006c;
	}

IL_0033:
	{
		int32_t L_6 = p0;
		if ((((int32_t)L_6) >= ((int32_t)8)))
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_7 = (__this->f19);
		V_0 = L_7;
		goto IL_006c;
	}

IL_0040:
	{
		int32_t L_8 = p0;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)16))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_9 = (__this->f20);
		V_0 = L_9;
		goto IL_006c;
	}

IL_004e:
	{
		int32_t L_10 = p0;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)24))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_11 = (__this->f21);
		V_0 = L_11;
		goto IL_006c;
	}

IL_005c:
	{
		int32_t L_12 = p0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_13 = (__this->f22);
		V_0 = L_13;
		goto IL_006c;
	}

IL_006a:
	{
		V_0 = 0;
	}

IL_006c:
	{
		uint32_t L_14 = V_0;
		int32_t L_15 = p0;
		V_0 = ((int32_t)((uint32_t)L_14>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		t318* L_16 = (__this->f23);
		int32_t L_17 = (__this->f24);
		int32_t L_18 = L_17;
		V_1 = L_18;
		__this->f24 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		uint32_t L_20 = V_0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_16, L_19)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)15)))))));
		return;
	}
}
extern "C" void m11805 (t2143 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f24);
		V_0 = L_0;
		bool L_1 = p1;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)100))))
		{
			goto IL_0069;
		}
	}

IL_000f:
	{
		int32_t L_3 = p0;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t* L_4 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5;
		int32_t L_5 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))));
		bool L_6 = p1;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = p0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0043;
		}
	}

IL_0030:
	{
		t318* L_8 = (__this->f23);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_11>>(int32_t)4))))));
	}

IL_0043:
	{
		t318* L_12 = (__this->f23);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)15)))))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t* L_16 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5;
		int32_t L_17 = p0;
		int32_t L_18 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_16+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)100)))))*(int32_t)4))))));
		goto IL_0074;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2143_TI));
		int32_t* L_19 = ((t2143_SFs*)InitializedTypeInfo(&t2143_TI)->static_fields)->f5;
		int32_t L_20 = p0;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_19+(int32_t)((int32_t)((int32_t)L_20*(int32_t)4))))));
	}

IL_0074:
	{
		bool L_21 = p1;
		if (L_21)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_22 = p0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_008f;
		}
	}

IL_007c:
	{
		t318* L_23 = (__this->f23);
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_26>>(int32_t)4))))));
	}

IL_008f:
	{
		t318* L_27 = (__this->f23);
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15)))))));
		int32_t L_31 = V_0;
		__this->f24 = L_31;
		return;
	}
}
extern "C" void m11806 (t2143 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = (__this->f24);
		int32_t L_3 = p1;
		int32_t L_4 = p0;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)((int32_t)((int32_t)L_3-(int32_t)L_4))));
		int32_t L_5 = V_0;
		t318* L_6 = (__this->f23);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((t121 *)L_6)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		m11741(__this, ((int32_t)((int32_t)L_7+(int32_t)((int32_t)10))), &m11741_MI);
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		__this->f24 = L_8;
		int32_t L_9 = p1;
		int32_t L_10 = (__this->f17);
		p1 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = p0;
		int32_t L_12 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		int32_t L_13 = p0;
		int32_t L_14 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_13+(int32_t)8))-(int32_t)((int32_t)((int32_t)L_14&(int32_t)7))));
		goto IL_01a6;
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_005e;
		}
	}
	{
		uint32_t L_16 = (__this->f19);
		V_2 = L_16;
		goto IL_008a;
	}

IL_005e:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_18 = (__this->f20);
		V_2 = L_18;
		goto IL_008a;
	}

IL_006c:
	{
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_007a;
		}
	}
	{
		uint32_t L_20 = (__this->f21);
		V_2 = L_20;
		goto IL_008a;
	}

IL_007a:
	{
		int32_t L_21 = V_1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_22 = (__this->f22);
		V_2 = L_22;
		goto IL_008a;
	}

IL_0088:
	{
		V_2 = 0;
	}

IL_008a:
	{
		uint32_t L_23 = V_2;
		int32_t L_24 = p0;
		V_2 = ((int32_t)((uint32_t)L_23>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_24&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		int32_t L_25 = V_1;
		int32_t L_26 = p1;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_27 = p1;
		V_1 = L_27;
	}

IL_009b:
	{
		t318* L_28 = (__this->f23);
		int32_t L_29 = V_0;
		int32_t L_30 = ((int32_t)((int32_t)L_29-(int32_t)1));
		V_0 = L_30;
		uint32_t L_31 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_28, L_30)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)15)))))));
		int32_t L_32 = V_1;
		int32_t L_33 = p0;
		V_3 = ((int32_t)((int32_t)L_32-(int32_t)L_33));
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 0)
		{
			goto IL_0196;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 1)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 2)
		{
			goto IL_0162;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 3)
		{
			goto IL_0148;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 4)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 5)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 6)
		{
			goto IL_00fa;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)1)) == 7)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_019d;
	}

IL_00e0:
	{
		t318* L_35 = (__this->f23);
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)((int32_t)L_36-(int32_t)1));
		V_0 = L_37;
		uint32_t L_38 = V_2;
		int32_t L_39 = ((int32_t)((uint32_t)L_38>>4));
		V_2 = L_39;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_35, L_37)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)15)))))));
		goto IL_00fa;
	}

IL_00fa:
	{
		t318* L_40 = (__this->f23);
		int32_t L_41 = V_0;
		int32_t L_42 = ((int32_t)((int32_t)L_41-(int32_t)1));
		V_0 = L_42;
		uint32_t L_43 = V_2;
		int32_t L_44 = ((int32_t)((uint32_t)L_43>>4));
		V_2 = L_44;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_40, L_42)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)15)))))));
		goto IL_0114;
	}

IL_0114:
	{
		t318* L_45 = (__this->f23);
		int32_t L_46 = V_0;
		int32_t L_47 = ((int32_t)((int32_t)L_46-(int32_t)1));
		V_0 = L_47;
		uint32_t L_48 = V_2;
		int32_t L_49 = ((int32_t)((uint32_t)L_48>>4));
		V_2 = L_49;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)15)))))));
		goto IL_012e;
	}

IL_012e:
	{
		t318* L_50 = (__this->f23);
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)((int32_t)L_51-(int32_t)1));
		V_0 = L_52;
		uint32_t L_53 = V_2;
		int32_t L_54 = ((int32_t)((uint32_t)L_53>>4));
		V_2 = L_54;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_50, L_52)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_54&(int32_t)((int32_t)15)))))));
		goto IL_0148;
	}

IL_0148:
	{
		t318* L_55 = (__this->f23);
		int32_t L_56 = V_0;
		int32_t L_57 = ((int32_t)((int32_t)L_56-(int32_t)1));
		V_0 = L_57;
		uint32_t L_58 = V_2;
		int32_t L_59 = ((int32_t)((uint32_t)L_58>>4));
		V_2 = L_59;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_55, L_57)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)15)))))));
		goto IL_0162;
	}

IL_0162:
	{
		t318* L_60 = (__this->f23);
		int32_t L_61 = V_0;
		int32_t L_62 = ((int32_t)((int32_t)L_61-(int32_t)1));
		V_0 = L_62;
		uint32_t L_63 = V_2;
		int32_t L_64 = ((int32_t)((uint32_t)L_63>>4));
		V_2 = L_64;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)15)))))));
		goto IL_017c;
	}

IL_017c:
	{
		t318* L_65 = (__this->f23);
		int32_t L_66 = V_0;
		int32_t L_67 = ((int32_t)((int32_t)L_66-(int32_t)1));
		V_0 = L_67;
		uint32_t L_68 = V_2;
		int32_t L_69 = ((int32_t)((uint32_t)L_68>>4));
		V_2 = L_69;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_65, L_67)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)15)))))));
		goto IL_0196;
	}

IL_0196:
	{
		int32_t L_70 = V_1;
		int32_t L_71 = p1;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_71))))
		{
			goto IL_019b;
		}
	}
	{
		return;
	}

IL_019b:
	{
		goto IL_019d;
	}

IL_019d:
	{
		int32_t L_72 = V_1;
		p0 = L_72;
		int32_t L_73 = V_1;
		V_1 = ((int32_t)((int32_t)L_73+(int32_t)8));
	}

IL_01a6:
	{
		goto IL_0051;
	}
}
extern "C" void m11807 (t2143 * __this, int32_t p0, int32_t p1, t328 * p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		t328 * L_2 = p2;
		int32_t L_3 = m5926(L_2, &m5926_MI);
		int32_t L_4 = p1;
		int32_t L_5 = p0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))));
		t328 * L_6 = p2;
		int32_t L_7 = V_0;
		m6031(L_6, L_7, &m6031_MI);
		int32_t L_8 = p1;
		int32_t L_9 = (__this->f17);
		p1 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = p0;
		int32_t L_11 = (__this->f17);
		p0 = ((int32_t)((int32_t)L_10+(int32_t)L_11));
		int32_t L_12 = p0;
		int32_t L_13 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12+(int32_t)8))-(int32_t)((int32_t)((int32_t)L_13&(int32_t)7))));
		goto IL_0189;
	}

IL_003c:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_15 = (__this->f19);
		V_2 = L_15;
		goto IL_0075;
	}

IL_0049:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_17 = (__this->f20);
		V_2 = L_17;
		goto IL_0075;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_19 = (__this->f21);
		V_2 = L_19;
		goto IL_0075;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_21 = (__this->f22);
		V_2 = L_21;
		goto IL_0075;
	}

IL_0073:
	{
		V_2 = 0;
	}

IL_0075:
	{
		uint32_t L_22 = V_2;
		int32_t L_23 = p0;
		V_2 = ((int32_t)((uint32_t)L_22>>((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23&(int32_t)7))<<(int32_t)2))&(int32_t)((int32_t)31)))));
		int32_t L_24 = V_1;
		int32_t L_25 = p1;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_26 = p1;
		V_1 = L_26;
	}

IL_0086:
	{
		t328 * L_27 = p2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)((int32_t)L_28-(int32_t)1));
		V_0 = L_29;
		uint32_t L_30 = V_2;
		m10933(L_27, L_29, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15))))))), &m10933_MI);
		int32_t L_31 = V_1;
		int32_t L_32 = p0;
		V_3 = ((int32_t)((int32_t)L_31-(int32_t)L_32));
		int32_t L_33 = V_3;
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 0)
		{
			goto IL_0179;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 1)
		{
			goto IL_0160;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 2)
		{
			goto IL_0147;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 4)
		{
			goto IL_0115;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 5)
		{
			goto IL_00fc;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 6)
		{
			goto IL_00e3;
		}
		if (((int32_t)((int32_t)L_33-(int32_t)1)) == 7)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0180;
	}

IL_00ca:
	{
		t328 * L_34 = p2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)((int32_t)L_35-(int32_t)1));
		V_0 = L_36;
		uint32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)((uint32_t)L_37>>4));
		V_2 = L_38;
		m10933(L_34, L_36, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_00e3;
	}

IL_00e3:
	{
		t328 * L_39 = p2;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		V_0 = L_41;
		uint32_t L_42 = V_2;
		int32_t L_43 = ((int32_t)((uint32_t)L_42>>4));
		V_2 = L_43;
		m10933(L_39, L_41, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_00fc;
	}

IL_00fc:
	{
		t328 * L_44 = p2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)((int32_t)L_45-(int32_t)1));
		V_0 = L_46;
		uint32_t L_47 = V_2;
		int32_t L_48 = ((int32_t)((uint32_t)L_47>>4));
		V_2 = L_48;
		m10933(L_44, L_46, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_0115;
	}

IL_0115:
	{
		t328 * L_49 = p2;
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)((int32_t)L_50-(int32_t)1));
		V_0 = L_51;
		uint32_t L_52 = V_2;
		int32_t L_53 = ((int32_t)((uint32_t)L_52>>4));
		V_2 = L_53;
		m10933(L_49, L_51, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_012e;
	}

IL_012e:
	{
		t328 * L_54 = p2;
		int32_t L_55 = V_0;
		int32_t L_56 = ((int32_t)((int32_t)L_55-(int32_t)1));
		V_0 = L_56;
		uint32_t L_57 = V_2;
		int32_t L_58 = ((int32_t)((uint32_t)L_57>>4));
		V_2 = L_58;
		m10933(L_54, L_56, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_0147;
	}

IL_0147:
	{
		t328 * L_59 = p2;
		int32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)((int32_t)L_60-(int32_t)1));
		V_0 = L_61;
		uint32_t L_62 = V_2;
		int32_t L_63 = ((int32_t)((uint32_t)L_62>>4));
		V_2 = L_63;
		m10933(L_59, L_61, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_63&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_0160;
	}

IL_0160:
	{
		t328 * L_64 = p2;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)((int32_t)L_65-(int32_t)1));
		V_0 = L_66;
		uint32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((uint32_t)L_67>>4));
		V_2 = L_68;
		m10933(L_64, L_66, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)15))))))), &m10933_MI);
		goto IL_0179;
	}

IL_0179:
	{
		int32_t L_69 = V_1;
		int32_t L_70 = p1;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_017e;
		}
	}
	{
		return;
	}

IL_017e:
	{
		goto IL_0180;
	}

IL_0180:
	{
		int32_t L_71 = V_1;
		p0 = L_71;
		int32_t L_72 = V_1;
		V_1 = ((int32_t)((int32_t)L_72+(int32_t)8));
	}

IL_0189:
	{
		goto IL_003c;
	}
}
extern "C" void m11808 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = (__this->f16);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = (__this->f18);
		int32_t L_3 = p0;
		__this->f18 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		return;
	}
}
extern "C" void m11809 (t2143 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = (__this->f16);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = (__this->f18);
		int32_t L_3 = p0;
		__this->f18 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		return;
	}
}
extern "C" t2143 * m11810 (t2143 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = m7100(__this, &m7100_MI);
		return ((t2143 *)Castclass(L_0, InitializedTypeInfo(&t2143_TI)));
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m6953 (t1536 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2779, &m7888_MI);
		m5755(__this, L_0, &m5755_MI);
		t2* L_1 = p0;
		__this->f12 = L_1;
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2779, &m7888_MI);
		__this->f13 = L_2;
		return;
	}
}
extern MethodInfo m11811_MI;
extern "C" void m11811 (t1536 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		m5755(__this, L_0, &m5755_MI);
		t2* L_1 = p0;
		__this->f12 = L_1;
		t2* L_2 = p1;
		__this->f13 = L_2;
		return;
	}
}
extern MethodInfo m11812_MI;
extern "C" void m11812 (t1536 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11608(__this, L_0, L_1, &m11608_MI);
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral2780, &m5782_MI);
		__this->f12 = L_3;
		return;
	}
}
extern MethodInfo m11813_MI;
extern "C" t2* m11813 (t1536 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m11814_MI;
extern "C" void m11814 (t1536 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m4539(__this, L_0, L_1, &m4539_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f12);
		m5785(L_2, (t2*) &_stringLiteral2780, L_3, &m5785_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t2124_TI;
extern TypeInfo t1202_TI;
extern MethodInfo m11936_MI;
extern MethodInfo m11934_MI;


extern "C" void m11815 (t2123 * __this, int32_t p0, t1202 * p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_0;
		m336(__this, &m336_MI);
		t1202 * L_1 = p1;
		bool L_2 = m11936(NULL, L_1, (t1202 *)NULL, &m11936_MI);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral467, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		int32_t L_4 = p0;
		__this->f0 = L_4;
		t1202 * L_5 = p1;
		__this->f1 = L_5;
		return;
	}
}
extern MethodInfo m11816_MI;
extern "C" int32_t m11816 (t2123 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11817_MI;
extern "C" void m11817 (t2123 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		int32_t L_1 = (__this->f0);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t2124_TI), &L_2);
		m5785(L_0, (t2*) &_stringLiteral2781, L_3, &m5785_MI);
		t1106 * L_4 = p0;
		t1202 * L_5 = (__this->f1);
		m5785(L_4, (t2*) &_stringLiteral2782, L_5, &m5785_MI);
		t1106 * L_6 = p0;
		t2* L_7 = (__this->f2);
		m5785(L_6, (t2*) &_stringLiteral2783, L_7, &m5785_MI);
		return;
	}
}
extern MethodInfo m11818_MI;
extern "C" t2* m11818 (t2123 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f0);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
		if (L_1 == 2)
		{
			goto IL_0033;
		}
		if (L_1 == 3)
		{
			goto IL_004b;
		}
		if (L_1 == 4)
		{
			goto IL_0053;
		}
		if (L_1 == 5)
		{
			goto IL_005b;
		}
		if (L_1 == 6)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)128))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_006b;
	}

IL_0033:
	{
		V_0 = (t2*) &_stringLiteral2784;
		goto IL_0078;
	}

IL_003b:
	{
		V_0 = (t2*) &_stringLiteral2785;
		goto IL_0078;
	}

IL_0043:
	{
		V_0 = (t2*) &_stringLiteral2786;
		goto IL_0078;
	}

IL_004b:
	{
		V_0 = (t2*) &_stringLiteral2787;
		goto IL_0078;
	}

IL_0053:
	{
		V_0 = (t2*) &_stringLiteral2788;
		goto IL_0078;
	}

IL_005b:
	{
		V_0 = (t2*) &_stringLiteral2789;
		goto IL_0078;
	}

IL_0063:
	{
		V_0 = (t2*) &_stringLiteral2790;
		goto IL_0078;
	}

IL_006b:
	{
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral2791, &m7888_MI);
		V_0 = L_3;
		goto IL_0078;
	}

IL_0078:
	{
		t2* L_4 = V_0;
		t1202 * L_5 = (__this->f1);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11934_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m399(NULL, L_4, (t2*) &_stringLiteral163, L_6, &m399_MI);
		return L_7;
	}
}
#include "t2144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2144_TI;
#include "t2144MD.h"



extern MethodInfo m11819_MI;
extern "C" void m11819 (t2144 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2792, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2147024882), &m4499_MI);
		return;
	}
}
extern MethodInfo m11820_MI;
extern "C" void m11820 (t2144 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11821_MI;
extern "C" void m11821 (t2145 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2793, &m7888_MI);
		m6928(__this, L_0, &m6928_MI);
		m4499(__this, ((int32_t)-2146233066), &m4499_MI);
		return;
	}
}
extern "C" void m11822 (t2145 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m6928(__this, L_0, &m6928_MI);
		m4499(__this, ((int32_t)-2146233066), &m4499_MI);
		return;
	}
}
extern MethodInfo m11823_MI;
extern "C" void m11823 (t2145 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11192(__this, L_0, L_1, &m11192_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t2124MD.h"



#include "t805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t805_TI;
#include "t805MD.h"

extern MethodInfo m4366_MI;


extern MethodInfo m11824_MI;
extern "C" void m11824 (t805 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m4365(NULL, &m4365_MI);
		m4366(__this, L_0, &m4366_MI);
		return;
	}
}
extern TypeInfo* t1101_TI_var;
extern "C" void m4366 (t805 * __this, int32_t p0, MethodInfo* method)
{
	static bool m4366_init;
	if (!m4366_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m4366_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->f2 = ((t1101*)SZArrayNew(t1101_TI_var, ((int32_t)56)));
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = abs(L_0);
		V_1 = ((int32_t)((int32_t)((int32_t)161803398)-(int32_t)L_1));
		t1101* L_2 = (__this->f2);
		int32_t L_3 = V_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, ((int32_t)55))) = (int32_t)L_3;
		V_2 = 1;
		V_3 = 1;
		goto IL_005e;
	}

IL_0030:
	{
		int32_t L_4 = V_3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)21)*(int32_t)L_4))%(int32_t)((int32_t)55)));
		t1101* L_5 = (__this->f2);
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)) = (int32_t)L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)((int32_t)2147483647)));
	}

IL_0051:
	{
		t1101* L_12 = (__this->f2);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)55))))
		{
			goto IL_0030;
		}
	}
	{
		V_4 = 1;
		goto IL_00c3;
	}

IL_0068:
	{
		V_5 = 1;
		goto IL_00b7;
	}

IL_006d:
	{
		t1101* L_17 = (__this->f2);
		int32_t L_18 = V_5;
		int32_t* L_19 = ((int32_t*)(int32_t*)SZArrayLdElema(L_17, L_18));
		t1101* L_20 = (__this->f2);
		int32_t L_21 = V_5;
		int32_t L_22 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21+(int32_t)((int32_t)30)))%(int32_t)((int32_t)55)))));
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_19))-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))));
		t1101* L_23 = (__this->f2);
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25))) >= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		t1101* L_26 = (__this->f2);
		int32_t L_27 = V_5;
		int32_t* L_28 = ((int32_t*)(int32_t*)SZArrayLdElema(L_26, L_27));
		*((int32_t*)(L_28)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)((int32_t)2147483647)));
	}

IL_00b1:
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00b7:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)56))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00c3:
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)5)))
		{
			goto IL_0068;
		}
	}
	{
		__this->f0 = 0;
		__this->f1 = ((int32_t)31);
		return;
	}
}
#include "t2146.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2146_TI;
#include "t2146MD.h"



extern MethodInfo m11825_MI;
extern "C" void m11825 (t2146 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2794, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233065), &m4499_MI);
		return;
	}
}
extern MethodInfo m11826_MI;
extern "C" void m11826 (t2146 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233065), &m4499_MI);
		return;
	}
}
extern MethodInfo m11827_MI;
extern "C" void m11827 (t2146 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2147.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2147_TI;
#include "t2147MD.h"



#include "t1764.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1764_TI;
#include "t1764MD.h"

#include "t1348.h"
extern TypeInfo t58_TI;
extern TypeInfo t1348_TI;
#include "t1348MD.h"
extern Il2CppType t1767_0_0_0;
extern MethodInfo m9672_MI;
extern MethodInfo m11830_MI;
extern MethodInfo m5774_MI;
extern MethodInfo m9583_MI;
extern MethodInfo m5770_MI;
extern MethodInfo m7617_MI;


extern MethodInfo m11828_MI;
extern "C" void m11828 (t1764 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m11829_MI;
extern "C" void m11829 (t1764 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t1767 * V_0 = {0};
	t1764  V_1 = {0};
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1106 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1767_0_0_0), &m329_MI);
		t9 * L_4 = m5773(L_2, (t2*) &_stringLiteral2795, L_3, &m5773_MI);
		V_0 = ((t1767 *)Castclass(L_4, InitializedTypeInfo(&t1767_TI)));
		t1767 * L_5 = V_0;
		t1764  L_6 = (t1764 )VirtFuncInvoker0< t1764  >::Invoke(&m9672_MI, L_5);
		V_1 = L_6;
		t58 L_7 = m11830((&V_1), &m11830_MI);
		__this->f0 = L_7;
		t58 L_8 = (__this->f0);
		t58 L_9 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_10 = m4502(NULL, L_8, L_9, &m4502_MI);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		t2* L_11 = m7888(NULL, (t2*) &_stringLiteral1280, &m7888_MI);
		t1348 * L_12 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_12, L_11, &m5774_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005f:
	{
		return;
	}
}
extern "C" t58 m11830 (t1764 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11831_MI;
extern "C" void m11831 (t1764 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t58 L_2 = (__this->f0);
		t58 L_3 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_4 = m4502(NULL, L_2, L_3, &m4502_MI);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1348 * L_5 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_5, (t2*) &_stringLiteral1281, &m5774_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		t1106 * L_6 = p0;
		t920 * L_7 = m9583(NULL, (*(t1764 *)__this), &m9583_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t1767_0_0_0), &m329_MI);
		m5770(L_6, (t2*) &_stringLiteral2795, ((t1767 *)Castclass(L_7, InitializedTypeInfo(&t1767_TI))), L_8, &m5770_MI);
		return;
	}
}
extern MethodInfo m11832_MI;
extern "C" bool m11832 (t1764 * __this, t9 * p0, MethodInfo* method)
{
	t1764  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t1764  L_1 = (*(t1764 *)__this);
		t9 * L_2 = Box(InitializedTypeInfo(&t1764_TI), &L_1);
		t126 * L_3 = m2550(L_2, &m2550_MI);
		t9 * L_4 = p0;
		t126 * L_5 = m2550(L_4, &m2550_MI);
		if ((((t9*)(t126 *)L_3) == ((t9*)(t126 *)L_5)))
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
		t58 L_6 = (__this->f0);
		t9 * L_7 = p0;
		V_0 = ((*(t1764 *)((t1764 *)UnBox (L_7, InitializedTypeInfo(&t1764_TI)))));
		t58 L_8 = m11830((&V_0), &m11830_MI);
		bool L_9 = m4502(NULL, L_6, L_8, &m4502_MI);
		return L_9;
	}
}
extern MethodInfo m11833_MI;
extern "C" int32_t m11833 (t1764 * __this, MethodInfo* method)
{
	{
		t58* L_0 = &(__this->f0);
		int32_t L_1 = m7617(L_0, &m7617_MI);
		return L_1;
	}
}
#include "t887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t887_TI;
#include "t887MD.h"

#include "t2148.h"
#include "t2149.h"
extern TypeInfo t2148_TI;
extern TypeInfo t2149_TI;
extern TypeInfo t185_TI;
#include "t2148MD.h"
#include "t2149MD.h"
extern MethodInfo m11839_MI;
extern MethodInfo m11843_MI;
extern MethodInfo m12195_MI;
extern MethodInfo m12008_MI;
extern MethodInfo m12196_MI;
extern MethodInfo m671_MI;
extern MethodInfo m672_MI;
extern MethodInfo m12197_MI;


extern MethodInfo m11834_MI;
extern "C" void m11834 (t887 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11835_MI;
extern "C" void m11835 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = m4400(NULL, &m4400_MI);
		t2148 * L_1 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m11839(L_1, L_0, 1, &m11839_MI);
		((t887_SFs*)InitializedTypeInfo(&t887_TI)->static_fields)->f0 = L_1;
		t907 * L_2 = m4400(NULL, &m4400_MI);
		t2148 * L_3 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m11839(L_3, L_2, 0, &m11839_MI);
		((t887_SFs*)InitializedTypeInfo(&t887_TI)->static_fields)->f1 = L_3;
		t2149 * L_4 = (t2149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2149_TI));
		m11843(L_4, 1, &m11843_MI);
		((t887_SFs*)InitializedTypeInfo(&t887_TI)->static_fields)->f2 = L_4;
		t2149 * L_5 = (t2149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2149_TI));
		m11843(L_5, 0, &m11843_MI);
		((t887_SFs*)InitializedTypeInfo(&t887_TI)->static_fields)->f3 = L_5;
		return;
	}
}
extern MethodInfo m5806_MI;
extern "C" t887 * m5806 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t887_TI));
		t887 * L_0 = ((t887_SFs*)InitializedTypeInfo(&t887_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m4286_MI;
extern "C" t887 * m4286 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t887_TI));
		t887 * L_0 = ((t887_SFs*)InitializedTypeInfo(&t887_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m11836_MI;
extern "C" int32_t m11836 (t887 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t9 * V_2 = {0};
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t9 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		t9 * L_2 = p0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		t9 * L_3 = p1;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		t9 * L_4 = p0;
		V_0 = ((t2*)IsInst(L_4, (&t2_TI)));
		t2* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		t9 * L_6 = p1;
		V_1 = ((t2*)IsInst(L_6, (&t2_TI)));
		t2* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		t2* L_8 = V_0;
		t2* L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m12195_MI, __this, L_8, L_9);
		return L_10;
	}

IL_002d:
	{
		t9 * L_11 = p0;
		V_2 = ((t9 *)IsInst(L_11, InitializedTypeInfo(&t185_TI)));
		t9 * L_12 = V_2;
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_13, &m11179_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003d:
	{
		t9 * L_14 = V_2;
		t9 * L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12008_MI, L_14, L_15);
		return L_16;
	}
}
extern MethodInfo m11837_MI;
extern "C" bool m11837 (t887 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t9 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		t9 * L_2 = p0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		t9 * L_3 = p1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return 0;
	}

IL_000e:
	{
		t9 * L_4 = p0;
		V_0 = ((t2*)IsInst(L_4, (&t2_TI)));
		t2* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		t9 * L_6 = p1;
		V_1 = ((t2*)IsInst(L_6, (&t2_TI)));
		t2* L_7 = V_1;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		t2* L_8 = V_0;
		t2* L_9 = V_1;
		bool L_10 = (bool)VirtFuncInvoker2< bool, t2*, t2* >::Invoke(&m12196_MI, __this, L_8, L_9);
		return L_10;
	}

IL_002b:
	{
		t9 * L_11 = p0;
		t9 * L_12 = p1;
		bool L_13 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m671_MI, L_11, L_12);
		return L_13;
	}
}
extern MethodInfo m11838_MI;
extern "C" int32_t m11838 (t887 * __this, t9 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1408, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t2*)IsInst(L_2, (&t2_TI)));
		t2* L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		t9 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, L_4);
		G_B5_0 = L_5;
		goto IL_0027;
	}

IL_0020:
	{
		t2* L_6 = V_0;
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, t2* >::Invoke(&m12197_MI, __this, L_6);
		G_B5_0 = L_7;
	}

IL_0027:
	{
		return G_B5_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1552.h"
#include "t1553.h"
#include "t1623.h"
extern TypeInfo t1552_TI;
extern TypeInfo t1553_TI;
extern TypeInfo t1623_TI;
#include "t1552MD.h"
#include "t1623MD.h"
extern MethodInfo m7012_MI;
extern MethodInfo m7013_MI;
extern MethodInfo m11840_MI;
extern MethodInfo m8676_MI;
extern MethodInfo m7991_MI;


extern "C" void m11839 (t2148 * __this, t907 * p0, bool p1, MethodInfo* method)
{
	{
		m11834(__this, &m11834_MI);
		t907 * L_0 = p0;
		t1552 * L_1 = (t1552 *)VirtFuncInvoker0< t1552 * >::Invoke(&m7012_MI, L_0);
		__this->f5 = L_1;
		bool L_2 = p1;
		__this->f4 = L_2;
		return;
	}
}
extern "C" int32_t m11840 (t2148 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		t1552 * L_1 = (__this->f5);
		t2* L_2 = p0;
		t2* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m7013_MI, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
extern MethodInfo m11841_MI;
extern "C" bool m11841 (t2148 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m11840_MI, __this, L_0, L_1);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11842_MI;
extern "C" int32_t m11842 (t2148 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1077, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->f4);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		V_0 = G_B5_0;
		t1552 * L_3 = (__this->f5);
		t2* L_4 = p0;
		int32_t L_5 = V_0;
		t1623 * L_6 = (t1623 *)VirtFuncInvoker2< t1623 *, t2*, int32_t >::Invoke(&m8676_MI, L_3, L_4, L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7991_MI, L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7400_MI;
extern MethodInfo m7399_MI;
extern MethodInfo m11844_MI;
extern MethodInfo m7429_MI;
extern MethodInfo m4273_MI;


extern "C" void m11843 (t2149 * __this, bool p0, MethodInfo* method)
{
	{
		m11834(__this, &m11834_MI);
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m11844 (t2149 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		t2* L_1 = p0;
		t2* L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_3 = m7400(NULL, L_1, 0, ((int32_t)2147483647), L_2, 0, ((int32_t)2147483647), &m7400_MI);
		return L_3;
	}

IL_001c:
	{
		t2* L_4 = p0;
		t2* L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m7399(NULL, L_4, 0, ((int32_t)2147483647), L_5, 0, ((int32_t)2147483647), &m7399_MI);
		return L_6;
	}
}
extern MethodInfo m11845_MI;
extern "C" bool m11845 (t2149 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = p0;
		t2* L_2 = p1;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m11844_MI, __this, L_1, L_2);
		return ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		t2* L_4 = p0;
		t2* L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m331(NULL, L_4, L_5, &m331_MI);
		return L_6;
	}
}
extern MethodInfo m11846_MI;
extern "C" int32_t m11846 (t2149 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1077, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->f4);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m7429(L_3, &m7429_MI);
		return L_4;
	}

IL_001d:
	{
		t2* L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_5);
		return L_6;
	}
}
#include "t891.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t891_TI;
#include "t891MD.h"



#include "t1361.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1361_TI;
#include "t1361MD.h"



#include "t1375.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1375_TI;

extern MethodInfo m4500_MI;


extern MethodInfo m11847_MI;
extern "C" void m11847 (t1375 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2796, &m7888_MI);
		m379(__this, L_0, &m379_MI);
		m4499(__this, ((int32_t)-2146233087), &m4499_MI);
		return;
	}
}
extern "C" void m5942 (t1375 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		m4499(__this, ((int32_t)-2146233087), &m4499_MI);
		return;
	}
}
extern "C" void m11848 (t1375 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m7070(__this, L_0, L_1, &m7070_MI);
		return;
	}
}
extern "C" void m11849 (t1375 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m4500(__this, L_0, L_1, &m4500_MI);
		m4499(__this, ((int32_t)-2146233087), &m4499_MI);
		return;
	}
}
#include "t2150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2150_TI;
#include "t2150MD.h"



extern MethodInfo m11850_MI;
extern "C" void m11850 (t2150 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2205.h"
#include "t2206.h"
extern TypeInfo t2205_TI;
extern TypeInfo t2206_TI;
#include "t2205MD.h"
#include "t2206MD.h"
extern Il2CppType t2205_0_0_0;
extern Il2CppType t2206_0_0_0;
extern MethodInfo m11855_MI;
extern MethodInfo m12198_MI;
extern MethodInfo m12199_MI;
extern MethodInfo m11867_MI;
extern MethodInfo m11875_MI;
extern MethodInfo m7493_MI;
extern MethodInfo m7494_MI;
extern MethodInfo m7165_MI;
extern MethodInfo m11866_MI;
extern MethodInfo m11878_MI;
extern Il2CppGenericMethod m12198_GM;
extern Il2CppGenericMethod m12199_GM;


extern "C" void m11851 (t310 * __this, int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m11852 (t310 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		int64_t L_3 = m11855(NULL, 0, L_0, L_1, L_2, 0, &m11855_MI);
		__this->f3 = L_3;
		return;
	}
}
extern "C" void m11853 (t310 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		int64_t L_5 = m11855(NULL, L_0, L_1, L_2, L_3, L_4, &m11855_MI);
		__this->f3 = L_5;
		return;
	}
}
extern MethodInfo m11854_MI;
extern TypeInfo* t2205_TI_var;
extern TypeInfo* t2206_TI_var;
extern MethodInfo* m12198_MI_var;
extern MethodInfo* m12199_MI_var;
extern "C" void m11854 (t9 * __this , MethodInfo* method)
{
	static bool m11854_init;
	if (!m11854_init)
	{
		t2205_TI_var = il2cpp_codegen_class_from_type(&t2205_0_0_0);
		t2206_TI_var = il2cpp_codegen_class_from_type(&t2206_0_0_0);
		m12198_MI_var = il2cpp_codegen_genericmethod_get_method(&m12198_GM);
		m12199_MI_var = il2cpp_codegen_genericmethod_get_method(&m12199_GM);
		m11854_init = true;
	}
	t2205 * V_0 = {0};
	t2206 * V_1 = {0};
	{
		t310  L_0 = {0};
		m11851(&L_0, ((int64_t)std::numeric_limits<int64_t>::max()), &m11851_MI);
		((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f0 = L_0;
		t310  L_1 = {0};
		m11851(&L_1, ((int64_t)std::numeric_limits<int64_t>::min()), &m11851_MI);
		((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f1 = L_1;
		t310  L_2 = {0};
		m11851(&L_2, (((int64_t)0)), &m11851_MI);
		((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		bool L_3 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		t2205 * L_4 = (t2205 *)il2cpp_codegen_object_new (t2205_TI_var);
		m12198(L_4, m12198_MI_var);
		V_0 = L_4;
		t2206 * L_5 = (t2206 *)il2cpp_codegen_object_new (t2206_TI_var);
		m12199(L_5, m12199_MI_var);
		V_1 = L_5;
	}

IL_0045:
	{
		return;
	}
}
extern "C" int64_t m11855 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((int32_t)((int32_t)L_0*(int32_t)((int32_t)3600)));
		int32_t L_1 = p2;
		V_1 = ((int32_t)((int32_t)L_1*(int32_t)((int32_t)60)));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = p3;
		int32_t L_5 = p4;
		V_2 = ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))+(int32_t)L_4))))*(int64_t)(((int64_t)((int32_t)1000)))))+(int64_t)(((int64_t)L_5))));
		int64_t L_6 = V_2;
		V_2 = ((int64_t)((int64_t)L_6*(int64_t)(((int64_t)((int32_t)10000)))));
		V_3 = 0;
		int32_t L_7 = p0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = p0;
		V_4 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)L_8))));
		int64_t L_9 = V_2;
		if ((((int64_t)L_9) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0051;
		}
	}
	{
		int64_t L_10 = V_2;
		V_5 = L_10;
		int64_t L_11 = V_2;
		int64_t L_12 = V_4;
		V_2 = ((int64_t)((int64_t)L_11+(int64_t)L_12));
		int64_t L_13 = V_5;
		int64_t L_14 = V_2;
		V_3 = ((((int64_t)L_13) > ((int64_t)L_14))? 1 : 0);
		goto IL_005c;
	}

IL_0051:
	{
		int64_t L_15 = V_2;
		int64_t L_16 = V_4;
		V_2 = ((int64_t)((int64_t)L_15+(int64_t)L_16));
		int64_t L_17 = V_2;
		V_3 = ((((int64_t)L_17) < ((int64_t)(((int64_t)0))))? 1 : 0);
	}

IL_005c:
	{
		goto IL_0090;
	}

IL_005e:
	{
		int32_t L_18 = p0;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_19 = p0;
		V_6 = ((int64_t)((int64_t)((int64_t)864000000000LL)*(int64_t)(((int64_t)L_19))));
		int64_t L_20 = V_2;
		if ((((int64_t)L_20) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_21 = V_2;
		int64_t L_22 = V_6;
		V_2 = ((int64_t)((int64_t)L_21+(int64_t)L_22));
		int64_t L_23 = V_2;
		V_3 = ((((int64_t)L_23) > ((int64_t)(((int64_t)0))))? 1 : 0);
		goto IL_0090;
	}

IL_0082:
	{
		int64_t L_24 = V_2;
		V_7 = L_24;
		int64_t L_25 = V_2;
		int64_t L_26 = V_6;
		V_2 = ((int64_t)((int64_t)L_25+(int64_t)L_26));
		int64_t L_27 = V_2;
		int64_t L_28 = V_7;
		V_3 = ((((int64_t)L_27) > ((int64_t)L_28))? 1 : 0);
	}

IL_0090:
	{
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_00a3;
		}
	}
	{
		t2* L_30 = m7888(NULL, (t2*) &_stringLiteral2797, &m7888_MI);
		t909 * L_31 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_31, L_30, &m5763_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a3:
	{
		int64_t L_32 = V_2;
		return L_32;
	}
}
extern "C" int32_t m11856 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))));
	}
}
extern "C" int32_t m11857 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)864000000000LL)))/(int64_t)((int64_t)36000000000LL)))));
	}
}
extern MethodInfo m11858_MI;
extern "C" int32_t m11858 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)((int32_t)10000)))))));
	}
}
extern "C" int32_t m11859 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)36000000000LL)))/(int64_t)(((int64_t)((int32_t)600000000)))))));
	}
}
extern "C" int32_t m11860 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)600000000)))))/(int64_t)(((int64_t)((int32_t)10000000)))))));
	}
}
extern "C" int64_t m11861 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m11862_MI;
extern "C" double m11862 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(864000000000.0)));
	}
}
extern MethodInfo m11863_MI;
extern "C" double m11863 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(36000000000.0)));
	}
}
extern "C" double m11864 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000.0)));
	}
}
extern "C" double m11865 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(600000000.0)));
	}
}
extern MethodInfo m1145_MI;
extern "C" double m1145 (t310 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000000.0)));
	}
}
extern "C" t310  m11866 (t310 * __this, t310  p0, MethodInfo* method)
{
	t310  V_0 = {0};
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
			int64_t L_0 = (__this->f3);
			int64_t L_1 = m11861((&p0), &m11861_MI);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL - (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 < (int64_t)(int64_t)-9223372036854775808LL - (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t310  L_2 = {0};
			m11851(&L_2, ((int64_t)((int64_t)L_0+(int64_t)L_1)), &m11851_MI);
			V_0 = L_2;
			goto IL_002b;
		}

IL_0016:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2145_TI, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral2798, &m7888_MI);
		t2145 * L_4 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_4, L_3, &m11822_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t310  L_5 = V_0;
		return L_5;
	}
}
extern "C" int32_t m11867 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		if ((((int64_t)L_0) >= ((int64_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int64_t L_2 = ((&p0)->f3);
		int64_t L_3 = ((&p1)->f3);
		if ((((int64_t)L_2) <= ((int64_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
extern MethodInfo m11868_MI;
extern "C" int32_t m11868 (t310 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t310_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2799, &m7888_MI);
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_3, L_2, (t2*) &_stringLiteral607, &m5761_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t9 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		int32_t L_5 = m11867(NULL, (*(t310 *)__this), ((*(t310 *)((t310 *)UnBox (L_4, InitializedTypeInfo(&t310_TI))))), &m11867_MI);
		return L_5;
	}
}
extern MethodInfo m11869_MI;
extern "C" int32_t m11869 (t310 * __this, t310  p0, MethodInfo* method)
{
	{
		t310  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		int32_t L_1 = m11867(NULL, (*(t310 *)__this), L_0, &m11867_MI);
		return L_1;
	}
}
extern MethodInfo m11870_MI;
extern "C" bool m11870 (t310 * __this, t310  p0, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = (__this->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m11871_MI;
extern "C" t310  m11871 (t310 * __this, MethodInfo* method)
{
	t310  V_0 = {0};
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
			int64_t L_0 = (__this->f3);
			int64_t L_1 = llabs(L_0);
			t310  L_2 = {0};
			m11851(&L_2, L_1, &m11851_MI);
			V_0 = L_2;
			goto IL_0028;
		}

IL_0013:
		{
			goto IL_0028;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2145_TI, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral2800, &m7888_MI);
		t2145 * L_4 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_4, L_3, &m11822_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		t310  L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m11872_MI;
extern "C" bool m11872 (t310 * __this, t9 * p0, MethodInfo* method)
{
	t310  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t310_TI))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int64_t L_1 = (__this->f3);
		t9 * L_2 = p0;
		V_0 = ((*(t310 *)((t310 *)UnBox (L_2, InitializedTypeInfo(&t310_TI)))));
		int64_t L_3 = ((&V_0)->f3);
		return ((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
extern "C" t310  m11873 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = m11875(NULL, L_0, (((int64_t)((int32_t)600000000))), &m11875_MI);
		return L_1;
	}
}
extern MethodInfo m11874_MI;
extern "C" t310  m11874 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = m11875(NULL, L_0, (((int64_t)((int32_t)10000000))), &m11875_MI);
		return L_1;
	}
}
extern MethodInfo m1144_MI;
extern "C" t310  m1144 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = m11875(NULL, L_0, (((int64_t)((int32_t)10000))), &m11875_MI);
		return L_1;
	}
}
extern "C" t310  m11875 (t9 * __this , double p0, int64_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	t310  V_1 = {0};
	t310  V_2 = {0};
	t310  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		double L_0 = p0;
		bool L_1 = m7492(NULL, L_0, &m7492_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2801, &m7888_MI);
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_3, L_2, (t2*) &_stringLiteral607, &m5761_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		double L_4 = p0;
		bool L_5 = m7493(NULL, L_4, &m7493_MI);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m7494(NULL, L_6, &m7494_MI);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		double L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_9 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f1;
		V_1 = L_9;
		int64_t L_10 = m11861((&V_1), &m11861_MI);
		if ((((double)L_8) < ((double)(((double)L_10)))))
		{
			goto IL_004f;
		}
	}
	{
		double L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_12 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f0;
		V_2 = L_12;
		int64_t L_13 = m11861((&V_2), &m11861_MI);
		if ((!(((double)L_11) > ((double)(((double)L_13))))))
		{
			goto IL_005f;
		}
	}

IL_004f:
	{
		t2* L_14 = m7888(NULL, (t2*) &_stringLiteral2802, &m7888_MI);
		t2145 * L_15 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_15, L_14, &m11822_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		{
			double L_16 = p0;
			int64_t L_17 = p1;
			p0 = ((double)((double)L_16*(double)(((double)((int64_t)((int64_t)L_17/(int64_t)(((int64_t)((int32_t)10000)))))))));
			double L_18 = p0;
			double L_19 = round(L_18);
			if (L_19 > (double)(std::numeric_limits<int64_t>::max())) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			V_0 = (((int64_t)L_19));
			int64_t L_20 = V_0;
			if (il2cpp_codegen_check_mul_overflow_i64((int64_t)L_20, (int64_t)(((int64_t)((int32_t)10000))), (int64_t)-9223372036854775808LL, (int64_t)9223372036854775807LL))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t310  L_21 = {0};
			m11851(&L_21, ((int64_t)((int64_t)L_20*(int64_t)(((int64_t)((int32_t)10000))))), &m11851_MI);
			V_3 = L_21;
			goto IL_009b;
		}

IL_0086:
		{
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2145_TI, e.ex->object.klass))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.OverflowException)
		t2* L_22 = m7888(NULL, (t2*) &_stringLiteral2798, &m7888_MI);
		t2145 * L_23 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_23, L_22, &m11822_MI);
		il2cpp_codegen_raise_exception(L_23);
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		t310  L_24 = V_3;
		return L_24;
	}
}
extern "C" int32_t m11876 (t310 * __this, MethodInfo* method)
{
	{
		int64_t* L_0 = &(__this->f3);
		int32_t L_1 = m7165(L_0, &m7165_MI);
		return L_1;
	}
}
extern MethodInfo m11877_MI;
extern "C" t310  m11877 (t310 * __this, MethodInfo* method)
{
	t310  V_0 = {0};
	{
		int64_t L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f1;
		V_0 = L_1;
		int64_t L_2 = ((&V_0)->f3);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral2803, &m7888_MI);
		t2145 * L_4 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_4, L_3, &m11822_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int64_t L_5 = (__this->f3);
		t310  L_6 = {0};
		m11851(&L_6, ((-L_5)), &m11851_MI);
		return L_6;
	}
}
extern "C" t310  m11878 (t310 * __this, t310  p0, MethodInfo* method)
{
	t310  V_0 = {0};
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
			int64_t L_0 = (__this->f3);
			int64_t L_1 = m11861((&p0), &m11861_MI);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 < (int64_t)-9223372036854775808LL + (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL + (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t310  L_2 = {0};
			m11851(&L_2, ((int64_t)((int64_t)L_0-(int64_t)L_1)), &m11851_MI);
			V_0 = L_2;
			goto IL_002b;
		}

IL_0016:
		{
			goto IL_002b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2145_TI, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral2798, &m7888_MI);
		t2145 * L_4 = (t2145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2145_TI));
		m11822(L_4, L_3, &m11822_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t310  L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m11879_MI;
extern "C" t2* m11879 (t310 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_0, ((int32_t)14), &m4396_MI);
		V_0 = L_0;
		int64_t L_1 = (__this->f3);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t328 * L_2 = V_0;
		m2797(L_2, ((int32_t)45), &m2797_MI);
	}

IL_001b:
	{
		int32_t L_3 = m11856(__this, &m11856_MI);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		t328 * L_4 = V_0;
		int32_t L_5 = m11856(__this, &m11856_MI);
		int32_t L_6 = abs(L_5);
		m5856(L_4, L_6, &m5856_MI);
		t328 * L_7 = V_0;
		m2797(L_7, ((int32_t)46), &m2797_MI);
	}

IL_003e:
	{
		t328 * L_8 = V_0;
		int32_t L_9 = m11857(__this, &m11857_MI);
		int32_t L_10 = abs(L_9);
		V_2 = L_10;
		t2* L_11 = m5939((&V_2), (t2*) &_stringLiteral2804, &m5939_MI);
		m1207(L_8, L_11, &m1207_MI);
		t328 * L_12 = V_0;
		m2797(L_12, ((int32_t)58), &m2797_MI);
		t328 * L_13 = V_0;
		int32_t L_14 = m11859(__this, &m11859_MI);
		int32_t L_15 = abs(L_14);
		V_3 = L_15;
		t2* L_16 = m5939((&V_3), (t2*) &_stringLiteral2804, &m5939_MI);
		m1207(L_13, L_16, &m1207_MI);
		t328 * L_17 = V_0;
		m2797(L_17, ((int32_t)58), &m2797_MI);
		t328 * L_18 = V_0;
		int32_t L_19 = m11860(__this, &m11860_MI);
		int32_t L_20 = abs(L_19);
		V_4 = L_20;
		t2* L_21 = m5939((&V_4), (t2*) &_stringLiteral2804, &m5939_MI);
		m1207(L_18, L_21, &m1207_MI);
		int64_t L_22 = (__this->f3);
		int64_t L_23 = llabs(((int64_t)((int64_t)L_22%(int64_t)(((int64_t)((int32_t)10000000))))));
		V_1 = (((int32_t)L_23));
		int32_t L_24 = V_1;
		if (!L_24)
		{
			goto IL_00e1;
		}
	}
	{
		t328 * L_25 = V_0;
		m2797(L_25, ((int32_t)46), &m2797_MI);
		t328 * L_26 = V_0;
		t2* L_27 = m5939((&V_1), (t2*) &_stringLiteral2805, &m5939_MI);
		m1207(L_26, L_27, &m1207_MI);
	}

IL_00e1:
	{
		t328 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_28);
		return L_29;
	}
}
extern "C" t310  m11880 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		t310  L_0 = p1;
		t310  L_1 = m11866((&p0), L_0, &m11866_MI);
		return L_1;
	}
}
extern "C" bool m11881 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11882 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11883 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11884 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11885 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11886 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t310  m11887 (t9 * __this , t310  p0, t310  p1, MethodInfo* method)
{
	{
		t310  L_0 = p1;
		t310  L_1 = m11878((&p0), L_0, &m11878_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2152.h"
#include "t1713.h"
extern TypeInfo t2152_TI;
extern TypeInfo t1713_TI;
#include "t2152MD.h"
#include "t1713MD.h"
extern MethodInfo m11898_MI;
extern MethodInfo m12200_MI;
extern MethodInfo m11892_MI;
extern MethodInfo m8763_MI;
extern MethodInfo m8764_MI;
extern MethodInfo m8765_MI;
extern MethodInfo m11896_MI;


extern MethodInfo m11888_MI;
extern "C" void m11888 (t2151 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11889_MI;
extern "C" void m11889 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		int64_t L_0 = m11468(NULL, &m11468_MI);
		t2152 * L_1 = (t2152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2152_TI));
		m11898(L_1, L_0, &m11898_MI);
		((t2151_SFs*)InitializedTypeInfo(&t2151_TI)->static_fields)->f0 = L_1;
		return;
	}
}
extern "C" t2151 * m11890 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		t2151 * L_0 = ((t2151_SFs*)InitializedTypeInfo(&t2151_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m11891_MI;
extern "C" bool m11891 (t2151 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m11470((&p0), &m11470_MI);
		t1713 * L_2 = (t1713 *)VirtFuncInvoker1< t1713 *, int32_t >::Invoke(&m12200_MI, __this, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2151_TI));
		bool L_3 = m11892(NULL, L_0, L_2, &m11892_MI);
		return L_3;
	}
}
extern "C" bool m11892 (t9 * __this , t272  p0, t1713 * p1, MethodInfo* method)
{
	t272  V_0 = {0};
	t272  V_1 = {0};
	t272  V_2 = {0};
	t272  V_3 = {0};
	t272  V_4 = {0};
	t272  V_5 = {0};
	t272  V_6 = {0};
	t272  V_7 = {0};
	t272  V_8 = {0};
	t272  V_9 = {0};
	{
		t1713 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2806, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1713 * L_2 = p1;
		t272  L_3 = m8763(L_2, &m8763_MI);
		V_0 = L_3;
		int64_t L_4 = m7021((&V_0), &m7021_MI);
		t1713 * L_5 = p1;
		t272  L_6 = m8764(L_5, &m8764_MI);
		V_1 = L_6;
		int64_t L_7 = m7021((&V_1), &m7021_MI);
		if ((!(((uint64_t)L_4) == ((uint64_t)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		return 0;
	}

IL_002e:
	{
		t1713 * L_8 = p1;
		t272  L_9 = m8763(L_8, &m8763_MI);
		V_2 = L_9;
		int64_t L_10 = m7021((&V_2), &m7021_MI);
		t1713 * L_11 = p1;
		t272  L_12 = m8764(L_11, &m8764_MI);
		V_3 = L_12;
		int64_t L_13 = m7021((&V_3), &m7021_MI);
		if ((((int64_t)L_10) >= ((int64_t)L_13)))
		{
			goto IL_0080;
		}
	}
	{
		t1713 * L_14 = p1;
		t272  L_15 = m8763(L_14, &m8763_MI);
		V_4 = L_15;
		int64_t L_16 = m7021((&V_4), &m7021_MI);
		int64_t L_17 = m7021((&p0), &m7021_MI);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		t1713 * L_18 = p1;
		t272  L_19 = m8764(L_18, &m8764_MI);
		V_5 = L_19;
		int64_t L_20 = m7021((&V_5), &m7021_MI);
		int64_t L_21 = m7021((&p0), &m7021_MI);
		if ((((int64_t)L_20) <= ((int64_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		goto IL_00e2;
	}

IL_0080:
	{
		int32_t L_22 = m11470((&p0), &m11470_MI);
		t1713 * L_23 = p1;
		t272  L_24 = m8763(L_23, &m8763_MI);
		V_6 = L_24;
		int32_t L_25 = m11470((&V_6), &m11470_MI);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_26 = m11470((&p0), &m11470_MI);
		t1713 * L_27 = p1;
		t272  L_28 = m8764(L_27, &m8764_MI);
		V_7 = L_28;
		int32_t L_29 = m11470((&V_7), &m11470_MI);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00e2;
		}
	}
	{
		int64_t L_30 = m7021((&p0), &m7021_MI);
		t1713 * L_31 = p1;
		t272  L_32 = m8764(L_31, &m8764_MI);
		V_8 = L_32;
		int64_t L_33 = m7021((&V_8), &m7021_MI);
		if ((((int64_t)L_30) < ((int64_t)L_33)))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_34 = m7021((&p0), &m7021_MI);
		t1713 * L_35 = p1;
		t272  L_36 = m8763(L_35, &m8763_MI);
		V_9 = L_36;
		int64_t L_37 = m7021((&V_9), &m7021_MI);
		if ((((int64_t)L_34) <= ((int64_t)L_37)))
		{
			goto IL_00e2;
		}
	}

IL_00e0:
	{
		return 1;
	}

IL_00e2:
	{
		return 0;
	}
}
extern "C" t272  m11893 (t2151 * __this, t272  p0, MethodInfo* method)
{
	t310  V_0 = {0};
	t272  V_1 = {0};
	t1713 * V_2 = {0};
	t310  V_3 = {0};
	t272  V_4 = {0};
	t310  V_5 = {0};
	t272  V_6 = {0};
	{
		int32_t L_0 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		t272  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t272  L_2 = p0;
		t310  L_3 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m11861((&V_0), &m11861_MI);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_5 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		t310  L_6 = V_0;
		t272  L_7 = m11509(NULL, L_5, L_6, &m11509_MI);
		t272  L_8 = p0;
		bool L_9 = m5894(NULL, L_7, L_8, &m5894_MI);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_10 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		t272  L_11 = m11480(NULL, L_10, 2, &m11480_MI);
		return L_11;
	}

IL_003e:
	{
		goto IL_0076;
	}

IL_0040:
	{
		int64_t L_12 = m11861((&V_0), &m11861_MI);
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_13 = m7021((&p0), &m7021_MI);
		int64_t L_14 = m11861((&V_0), &m11861_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_15 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		V_4 = L_15;
		int64_t L_16 = m7021((&V_4), &m7021_MI);
		if ((((int64_t)((int64_t)((int64_t)L_13+(int64_t)L_14))) >= ((int64_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_17 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		t272  L_18 = m11480(NULL, L_17, 2, &m11480_MI);
		return L_18;
	}

IL_0076:
	{
		t310  L_19 = V_0;
		t272  L_20 = m11472((&p0), L_19, &m11472_MI);
		V_1 = L_20;
		int32_t L_21 = m11470((&p0), &m11470_MI);
		t1713 * L_22 = (t1713 *)VirtFuncInvoker1< t1713 *, int32_t >::Invoke(&m12200_MI, __this, L_21);
		V_2 = L_22;
		t1713 * L_23 = V_2;
		t310  L_24 = m8765(L_23, &m8765_MI);
		V_5 = L_24;
		int64_t L_25 = m11861((&V_5), &m11861_MI);
		if (L_25)
		{
			goto IL_00a6;
		}
	}
	{
		t272  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_27 = m11480(NULL, L_26, 2, &m11480_MI);
		return L_27;
	}

IL_00a6:
	{
		t272  L_28 = V_1;
		t1713 * L_29 = V_2;
		t272  L_30 = m8764(L_29, &m8764_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_31 = m5894(NULL, L_28, L_30, &m5894_MI);
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		t1713 * L_32 = V_2;
		t272  L_33 = m8764(L_32, &m8764_MI);
		V_6 = L_33;
		t1713 * L_34 = V_2;
		t310  L_35 = m8765(L_34, &m8765_MI);
		t272  L_36 = m11501((&V_6), L_35, &m11501_MI);
		t272  L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_38 = m5893(NULL, L_36, L_37, &m5893_MI);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		t272  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_40 = m11480(NULL, L_39, 2, &m11480_MI);
		return L_40;
	}

IL_00d9:
	{
		t272  L_41 = V_1;
		t310  L_42 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, __this, L_41);
		V_3 = L_42;
		t310  L_43 = V_3;
		t272  L_44 = m11472((&p0), L_43, &m11472_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_45 = m11480(NULL, L_44, 2, &m11480_MI);
		return L_45;
	}
}
extern "C" t272  m11894 (t2151 * __this, t272  p0, MethodInfo* method)
{
	t310  V_0 = {0};
	{
		int32_t L_0 = m11471((&p0), &m11471_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		t272  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t272  L_2 = p0;
		t310  L_3 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m11861((&V_0), &m11861_MI);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_5 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		t310  L_6 = V_0;
		t272  L_7 = m11505(NULL, L_5, L_6, &m11505_MI);
		t272  L_8 = p0;
		bool L_9 = m5894(NULL, L_7, L_8, &m5894_MI);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_10 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f2;
		t272  L_11 = m11480(NULL, L_10, 1, &m11480_MI);
		return L_11;
	}

IL_003e:
	{
		goto IL_006a;
	}

IL_0040:
	{
		int64_t L_12 = m11861((&V_0), &m11861_MI);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_13 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		t310  L_14 = V_0;
		t272  L_15 = m11505(NULL, L_13, L_14, &m11505_MI);
		t272  L_16 = p0;
		bool L_17 = m5895(NULL, L_15, L_16, &m5895_MI);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_18 = ((t272_SFs*)InitializedTypeInfo(&t272_TI)->static_fields)->f3;
		t272  L_19 = m11480(NULL, L_18, 1, &m11480_MI);
		return L_19;
	}

IL_006a:
	{
		int64_t L_20 = m7021((&p0), &m7021_MI);
		int64_t L_21 = m11861((&V_0), &m11861_MI);
		t272  L_22 = {0};
		m11438(&L_22, ((int64_t)((int64_t)L_20-(int64_t)L_21)), &m11438_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_23 = m11480(NULL, L_22, 1, &m11480_MI);
		return L_23;
	}
}
extern "C" t310  m11895 (t2151 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		t272  L_1 = p0;
		t310  L_2 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, __this, L_1);
		t310  L_3 = m11896(__this, L_0, L_2, &m11896_MI);
		return L_3;
	}
}
extern "C" t310  m11896 (t2151 * __this, t272  p0, t310  p1, MethodInfo* method)
{
	t1713 * V_0 = {0};
	t272  V_1 = {0};
	t310  V_2 = {0};
	t272  V_3 = {0};
	t272  V_4 = {0};
	{
		int32_t L_0 = m11470((&p0), &m11470_MI);
		t1713 * L_1 = (t1713 *)VirtFuncInvoker1< t1713 *, int32_t >::Invoke(&m12200_MI, __this, L_0);
		V_0 = L_1;
		t1713 * L_2 = V_0;
		t310  L_3 = m8765(L_2, &m8765_MI);
		V_2 = L_3;
		int64_t L_4 = m11861((&V_2), &m11861_MI);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		t310  L_5 = p1;
		return L_5;
	}

IL_0020:
	{
		t310  L_6 = p1;
		t272  L_7 = m11472((&p0), L_6, &m11472_MI);
		V_1 = L_7;
		t272  L_8 = V_1;
		t1713 * L_9 = V_0;
		t272  L_10 = m8764(L_9, &m8764_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_11 = m5894(NULL, L_8, L_10, &m5894_MI);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1713 * L_12 = V_0;
		t272  L_13 = m8764(L_12, &m8764_MI);
		V_3 = L_13;
		t1713 * L_14 = V_0;
		t310  L_15 = m8765(L_14, &m8765_MI);
		t272  L_16 = m11501((&V_3), L_15, &m11501_MI);
		t272  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_18 = m5893(NULL, L_16, L_17, &m5893_MI);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		t310  L_19 = p1;
		return L_19;
	}

IL_0055:
	{
		t272  L_20 = V_1;
		t1713 * L_21 = V_0;
		t272  L_22 = m8763(L_21, &m8763_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_23 = m5795(NULL, L_20, L_22, &m5795_MI);
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		t1713 * L_24 = V_0;
		t272  L_25 = m8763(L_24, &m8763_MI);
		V_4 = L_25;
		t1713 * L_26 = V_0;
		t310  L_27 = m8765(L_26, &m8765_MI);
		t272  L_28 = m11472((&V_4), L_27, &m11472_MI);
		t272  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		bool L_30 = m5895(NULL, L_28, L_29, &m5895_MI);
		if (!L_30)
		{
			goto IL_008d;
		}
	}
	{
		t310  L_31 = p1;
		t1713 * L_32 = V_0;
		t310  L_33 = m8765(L_32, &m8765_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_34 = m11887(NULL, L_31, L_33, &m11887_MI);
		return L_34;
	}

IL_008d:
	{
		t272  L_35 = V_1;
		t310  L_36 = (t310 )VirtFuncInvoker1< t310 , t272  >::Invoke(&m12176_MI, __this, L_35);
		return L_36;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11900_MI;
extern MethodInfo m11904_MI;
extern MethodInfo m11903_MI;
extern MethodInfo m8762_MI;


extern MethodInfo m11897_MI;
extern "C" void m11897 (t2152 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5960(L_0, 1, &m5960_MI);
		__this->f3 = L_0;
		m11888(__this, &m11888_MI);
		return;
	}
}
extern "C" void m11898 (t2152 * __this, int64_t p0, MethodInfo* method)
{
	t1571* V_0 = {0};
	t221* V_1 = {0};
	t272  V_2 = {0};
	t1713 * V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5960(L_0, 1, &m5960_MI);
		__this->f3 = L_0;
		m11888(__this, &m11888_MI);
		int64_t L_1 = p0;
		m11438((&V_2), L_1, &m11438_MI);
		int32_t L_2 = m11470((&V_2), &m11470_MI);
		bool L_3 = m11900(NULL, L_2, (&V_0), (&V_1), &m11900_MI);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		t2* L_4 = m7888(NULL, (t2*) &_stringLiteral2807, &m7888_MI);
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, L_4, &m5776_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003c:
	{
		t221* L_6 = V_1;
		int32_t L_7 = 0;
		t2* L_8 = m7888(NULL, (*(t2**)(t2**)SZArrayLdElema(L_6, L_7)), &m7888_MI);
		__this->f1 = L_8;
		t221* L_9 = V_1;
		int32_t L_10 = 1;
		t2* L_11 = m7888(NULL, (*(t2**)(t2**)SZArrayLdElema(L_9, L_10)), &m7888_MI);
		__this->f2 = L_11;
		t1571* L_12 = V_0;
		int32_t L_13 = 2;
		__this->f4 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_12, L_13));
		t1571* L_14 = V_0;
		t1713 * L_15 = m11904(__this, L_14, &m11904_MI);
		V_3 = L_15;
		t1164 * L_16 = (__this->f3);
		int32_t L_17 = m11470((&V_2), &m11470_MI);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t125_TI), &L_18);
		t1713 * L_20 = V_3;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5778_MI, L_16, L_19, L_20);
		t1713 * L_21 = V_3;
		m11903(__this, L_21, &m11903_MI);
		return;
	}
}
extern MethodInfo m11899_MI;
extern "C" void m11899 (t2152 * __this, t9 * p0, MethodInfo* method)
{
	{
		m11903(__this, (t1713 *)NULL, &m11903_MI);
		return;
	}
}
extern "C" bool m11900 (t9 * __this , int32_t p0, t1571** p1, t221** p2, MethodInfo* method)
{
	typedef bool (*m11900_ftn) (int32_t, t1571**, t221**);
	static m11900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11900_ftn)il2cpp_codegen_resolve_icall ("System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m11901_MI;
extern "C" t1713 * m11901 (t2152 * __this, int32_t p0, MethodInfo* method)
{
	t1164 * V_0 = {0};
	t1713 * V_1 = {0};
	t1571* V_2 = {0};
	t221* V_3 = {0};
	t1713 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)9999))))
		{
			goto IL_002c;
		}
	}

IL_000c:
	{
		int32_t L_2 = p0;
		int32_t L_3 = L_2;
		t9 * L_4 = Box(InitializedTypeInfo(&t125_TI), &L_3);
		t2* L_5 = m7888(NULL, (t2*) &_stringLiteral2809, &m7888_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m511(NULL, L_4, L_5, &m511_MI);
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_7, (t2*) &_stringLiteral2808, L_6, &m4402_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002c:
	{
		int32_t L_8 = p0;
		int32_t L_9 = ((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		t1713 * L_10 = ((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f8;
		return L_10;
	}

IL_003a:
	{
		t1164 * L_11 = (__this->f3);
		V_0 = L_11;
		t1164 * L_12 = V_0;
		m1115(NULL, L_12, &m1115_MI);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			t1164 * L_13 = (__this->f3);
			int32_t L_14 = p0;
			int32_t L_15 = L_14;
			t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
			t9 * L_17 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_13, L_16);
			V_1 = ((t1713 *)Castclass(L_17, InitializedTypeInfo(&t1713_TI)));
			t1713 * L_18 = V_1;
			if (L_18)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			int32_t L_19 = p0;
			bool L_20 = m11900(NULL, L_19, (&V_2), (&V_3), &m11900_MI);
			if (L_20)
			{
				goto IL_0088;
			}
		}

IL_006d:
		{
			int32_t L_21 = p0;
			int32_t L_22 = L_21;
			t9 * L_23 = Box(InitializedTypeInfo(&t125_TI), &L_22);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_24 = m511(NULL, (t2*) &_stringLiteral2810, L_23, &m511_MI);
			t2* L_25 = m7888(NULL, L_24, &m7888_MI);
			t570 * L_26 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
			m2949(L_26, L_25, &m2949_MI);
			il2cpp_codegen_raise_exception(L_26);
		}

IL_0088:
		{
			t1571* L_27 = V_2;
			t1713 * L_28 = m11904(__this, L_27, &m11904_MI);
			V_1 = L_28;
			t1164 * L_29 = (__this->f3);
			int32_t L_30 = p0;
			int32_t L_31 = L_30;
			t9 * L_32 = Box(InitializedTypeInfo(&t125_TI), &L_31);
			t1713 * L_33 = V_1;
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5778_MI, L_29, L_32, L_33);
		}

IL_00a2:
		{
			t1713 * L_34 = V_1;
			V_4 = L_34;
			IL2CPP_LEAVE(0xB0, FINALLY_00a9);
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		t1164 * L_35 = V_0;
		m1117(NULL, L_35, &m1117_MI);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00b0:
	{
		t1713 * L_36 = V_4;
		return L_36;
	}
}
extern MethodInfo m11902_MI;
extern "C" t310  m11902 (t2152 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t272  >::Invoke(&m11891_MI, __this, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		t310  L_2 = (__this->f6);
		return L_2;
	}

IL_0010:
	{
		t310  L_3 = (__this->f5);
		return L_3;
	}
}
extern "C" void m11903 (t2152 * __this, t1713 * p0, MethodInfo* method)
{
	t1571* V_0 = {0};
	t221* V_1 = {0};
	t272  V_2 = {0};
	t272  V_3 = {0};
	t310  V_4 = {0};
	{
		t1713 * L_0 = p0;
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_1 = m1132(NULL, &m1132_MI);
		V_2 = L_1;
		int32_t L_2 = m11470((&V_2), &m11470_MI);
		((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f7 = L_2;
		int32_t L_3 = ((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f7;
		bool L_4 = m11900(NULL, L_3, (&V_0), (&V_1), &m11900_MI);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f7;
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m511(NULL, (t2*) &_stringLiteral2810, L_7, &m511_MI);
		t2* L_9 = m7888(NULL, L_8, &m7888_MI);
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_10, L_9, &m2949_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		t1571* L_11 = V_0;
		t1713 * L_12 = m11904(__this, L_11, &m11904_MI);
		p0 = L_12;
		goto IL_0064;
	}

IL_0051:
	{
		t1713 * L_13 = p0;
		t272  L_14 = m8763(L_13, &m8763_MI);
		V_3 = L_14;
		int32_t L_15 = m11470((&V_3), &m11470_MI);
		((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f7 = L_15;
	}

IL_0064:
	{
		int64_t L_16 = (__this->f4);
		t310  L_17 = {0};
		m11851(&L_17, L_16, &m11851_MI);
		__this->f5 = L_17;
		int64_t L_18 = (__this->f4);
		t1713 * L_19 = p0;
		t310  L_20 = m8765(L_19, &m8765_MI);
		V_4 = L_20;
		int64_t L_21 = m11861((&V_4), &m11861_MI);
		t310  L_22 = {0};
		m11851(&L_22, ((int64_t)((int64_t)L_18+(int64_t)L_21)), &m11851_MI);
		__this->f6 = L_22;
		t1713 * L_23 = p0;
		((t2152_SFs*)InitializedTypeInfo(&t2152_TI)->static_fields)->f8 = L_23;
		return;
	}
}
extern "C" t1713 * m11904 (t2152 * __this, t1571* p0, MethodInfo* method)
{
	{
		t1571* L_0 = p0;
		int32_t L_1 = 0;
		t272  L_2 = {0};
		m11438(&L_2, (*(int64_t*)(int64_t*)SZArrayLdElema(L_0, L_1)), &m11438_MI);
		t1571* L_3 = p0;
		int32_t L_4 = 1;
		t272  L_5 = {0};
		m11438(&L_5, (*(int64_t*)(int64_t*)SZArrayLdElema(L_3, L_4)), &m11438_MI);
		t1571* L_6 = p0;
		int32_t L_7 = 3;
		t310  L_8 = {0};
		m11851(&L_8, (*(int64_t*)(int64_t*)SZArrayLdElema(L_6, L_7)), &m11851_MI);
		t1713 * L_9 = (t1713 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1713_TI));
		m8762(L_9, L_2, L_5, L_8, &m8762_MI);
		return L_9;
	}
}
#include "t1562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1562_TI;
#include "t1562MD.h"



#include "t2153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2153_TI;
#include "t2153MD.h"



extern MethodInfo m11905_MI;
extern "C" void m11905 (t2153 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral1250, &m5782_MI);
		__this->f11 = L_3;
		return;
	}
}
extern MethodInfo m11906_MI;
extern "C" void m11906 (t2153 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m4539(__this, L_0, L_1, &m4539_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5785(L_2, (t2*) &_stringLiteral1250, L_3, &m5785_MI);
		return;
	}
}
#include "t2116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2116_TI;



extern MethodInfo m11907_MI;
extern "C" void m11907 (t2116 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2813, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233054), &m4499_MI);
		return;
	}
}
extern "C" void m11908 (t2116 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233054), &m4499_MI);
		return;
	}
}
extern "C" void m11909 (t2116 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		t1106 * L_2 = p0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0016:
	{
		t1106 * L_4 = p0;
		t2* L_5 = m5782(L_4, (t2*) &_stringLiteral2814, &m5782_MI);
		__this->f12 = L_5;
		t1106 * L_6 = p0;
		t2* L_7 = m5782(L_6, (t2*) &_stringLiteral2815, &m5782_MI);
		__this->f13 = L_7;
		return;
	}
}
extern MethodInfo m11910_MI;
extern "C" t2* m11910 (t2116 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		t2* L_1 = (__this->f13);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		t2* L_2 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_4 = m2777(NULL, L_2, L_3, &m2777_MI);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2* L_5 = (__this->f12);
		t2* L_6 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m1251(NULL, (t2*) &_stringLiteral2811, L_5, L_6, &m1251_MI);
		return L_7;
	}

IL_0039:
	{
		t2* L_8 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m590(NULL, (t2*) &_stringLiteral2812, L_8, &m590_MI);
		return L_9;
	}

IL_004a:
	{
		t2* L_10 = m1131(__this, &m1131_MI);
		return L_10;
	}
}
extern MethodInfo m11911_MI;
extern "C" void m11911 (t2116 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1106 * L_2 = p0;
		t1107  L_3 = p1;
		m4539(__this, L_2, L_3, &m4539_MI);
		t1106 * L_4 = p0;
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_4, (t2*) &_stringLiteral2814, L_5, L_6, &m5770_MI);
		t1106 * L_7 = p0;
		t2* L_8 = (__this->f13);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_7, (t2*) &_stringLiteral2815, L_8, L_9, &m5770_MI);
		t1106 * L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t126 * L_12 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5770(L_10, (t2*) &_stringLiteral2816, L_11, L_12, &m5770_MI);
		t1106 * L_13 = p0;
		int32_t L_14 = 0;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		t126 * L_16 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		m5770(L_13, (t2*) &_stringLiteral2817, L_15, L_16, &m5770_MI);
		return;
	}
}
#include "t2154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2154_TI;
#include "t2154MD.h"



extern MethodInfo m11912_MI;
extern "C" void m11912 (t2154 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2818, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233088), &m4499_MI);
		return;
	}
}
extern MethodInfo m11913_MI;
extern "C" void m11913 (t2154 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233088), &m4499_MI);
		return;
	}
}
extern MethodInfo m11914_MI;
extern "C" void m11914 (t2154 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t2155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2155_TI;
#include "t2155MD.h"



#include "t2156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2156_TI;
#include "t2156MD.h"



#include "t2157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2157_TI;

extern TypeInfo t1574_TI;
#include "t1574MD.h"
extern Il2CppType t2157_0_0_0;
extern MethodInfo m5784_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m9608_MI;
extern MethodInfo m9606_MI;
extern MethodInfo m9509_MI;


extern MethodInfo m11915_MI;
extern "C" void m11915 (t2157 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		t2* L_1 = m5782(L_0, (t2*) &_stringLiteral1275, &m5782_MI);
		__this->f0 = L_1;
		t1106 * L_2 = p0;
		int32_t L_3 = m5784(L_2, (t2*) &_stringLiteral2819, &m5784_MI);
		__this->f1 = (((uint8_t)L_3));
		t1106 * L_4 = p0;
		t2* L_5 = m5782(L_4, (t2*) &_stringLiteral2025, &m5782_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m11916 (t9 * __this , t126 * p0, t1106 * p1, t1107  p2, MethodInfo* method)
{
	{
		t1106 * L_0 = p1;
		t126 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		m5785(L_0, (t2*) &_stringLiteral1275, L_2, &m5785_MI);
		t1106 * L_3 = p1;
		m5772(L_3, (t2*) &_stringLiteral2819, 4, &m5772_MI);
		t1106 * L_4 = p1;
		t126 * L_5 = p0;
		t1351 * L_6 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_5);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_6);
		m5785(L_4, (t2*) &_stringLiteral2025, L_7, &m5785_MI);
		t1106 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2157_0_0_0), &m329_MI);
		m10368(L_8, L_9, &m10368_MI);
		return;
	}
}
extern "C" void m11917 (t9 * __this , t2107 * p0, t1106 * p1, t1107  p2, MethodInfo* method)
{
	{
		t1106 * L_0 = p1;
		m5785(L_0, (t2*) &_stringLiteral1275, NULL, &m5785_MI);
		t1106 * L_1 = p1;
		m5772(L_1, (t2*) &_stringLiteral2819, 2, &m5772_MI);
		t1106 * L_2 = p1;
		t2107 * L_3 = p0;
		t126 * L_4 = m2550(L_3, &m2550_MI);
		t1351 * L_5 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_4);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_5);
		m5785(L_2, (t2*) &_stringLiteral2025, L_6, &m5785_MI);
		t1106 * L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t2157_0_0_0), &m329_MI);
		m10368(L_7, L_8, &m10368_MI);
		return;
	}
}
extern MethodInfo m11918_MI;
extern "C" void m11918 (t9 * __this , t1574 * p0, t1106 * p1, t1107  p2, MethodInfo* method)
{
	{
		t1106 * L_0 = p1;
		t1574 * L_1 = p0;
		t2* L_2 = m9608(L_1, &m9608_MI);
		m5785(L_0, (t2*) &_stringLiteral1275, L_2, &m5785_MI);
		t1106 * L_3 = p1;
		m5772(L_3, (t2*) &_stringLiteral2819, 5, &m5772_MI);
		t1106 * L_4 = p1;
		t1574 * L_5 = p0;
		t1351 * L_6 = m9606(L_5, &m9606_MI);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9493_MI, L_6);
		m5785(L_4, (t2*) &_stringLiteral2025, L_7, &m5785_MI);
		t1106 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2157_0_0_0), &m329_MI);
		m10368(L_8, L_9, &m10368_MI);
		return;
	}
}
extern MethodInfo m11919_MI;
extern "C" void m11919 (t2157 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11920_MI;
extern "C" t9 * m11920 (t2157 * __this, t1107  p0, MethodInfo* method)
{
	t1351 * V_0 = {0};
	t1351 * V_1 = {0};
	uint8_t V_2 = {0};
	{
		uint8_t L_0 = (__this->f1);
		V_2 = L_0;
		uint8_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0069;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0025;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_0044;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0069;
	}

IL_0025:
	{
		t2* L_2 = (__this->f2);
		t1351 * L_3 = m9504(NULL, L_2, &m9504_MI);
		V_0 = L_3;
		t1351 * L_4 = V_0;
		t2* L_5 = (__this->f0);
		t126 * L_6 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5814_MI, L_4, L_5);
		return L_6;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t2107 * L_7 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f0;
		return L_7;
	}

IL_0044:
	{
		t2* L_8 = (__this->f2);
		t1351 * L_9 = m9504(NULL, L_8, &m9504_MI);
		V_1 = L_9;
		t1351 * L_10 = V_1;
		t2* L_11 = (__this->f0);
		t1574 * L_12 = (t1574 *)VirtFuncInvoker1< t1574 *, t2* >::Invoke(&m9509_MI, L_10, L_11);
		return L_12;
	}

IL_005d:
	{
		t2* L_13 = (__this->f0);
		t1351 * L_14 = m9504(NULL, L_13, &m9504_MI);
		return L_14;
	}

IL_0069:
	{
		t2* L_15 = m7888(NULL, (t2*) &_stringLiteral2820, &m7888_MI);
		t169 * L_16 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_16, L_15, &m5776_MI);
		il2cpp_codegen_raise_exception(L_16);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11924_MI;
extern MethodInfo m4486_MI;
extern MethodInfo m5947_MI;
extern MethodInfo m11931_MI;
extern MethodInfo m11932_MI;
extern MethodInfo m11937_MI;
extern MethodInfo m4342_MI;
extern MethodInfo m11923_MI;
extern MethodInfo m6032_MI;


extern MethodInfo m11921_MI;
extern "C" void m11921 (t1202 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m11924(__this, 2, 0, 0, (-1), (-1), &m11924_MI);
		return;
	}
}
extern MethodInfo m11922_MI;
extern TypeInfo* t318_TI_var;
extern "C" void m11922 (t1202 * __this, t2* p0, MethodInfo* method)
{
	static bool m11922_init;
	if (!m11922_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m11922_init = true;
	}
	int32_t V_0 = 0;
	t221* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		m336(__this, &m336_MI);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral467, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		t2* L_2 = p0;
		t318* L_3 = ((t318*)SZArrayNew(t318_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)46);
		t221* L_4 = m4486(L_2, L_3, &m4486_MI);
		V_1 = L_4;
		t221* L_5 = V_1;
		V_0 = (((int32_t)(((t121 *)L_5)->max_length)));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_004c;
		}
	}

IL_003c:
	{
		t2* L_8 = m7888(NULL, (t2*) &_stringLiteral2821, &m7888_MI);
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, L_8, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		t221* L_11 = V_1;
		int32_t L_12 = 0;
		int32_t L_13 = m5947(NULL, (*(t2**)(t2**)SZArrayLdElema(L_11, L_12)), &m5947_MI);
		V_2 = L_13;
	}

IL_0059:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		t221* L_15 = V_1;
		int32_t L_16 = 1;
		int32_t L_17 = m5947(NULL, (*(t2**)(t2**)SZArrayLdElema(L_15, L_16)), &m5947_MI);
		V_3 = L_17;
	}

IL_0066:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		t221* L_19 = V_1;
		int32_t L_20 = 2;
		int32_t L_21 = m5947(NULL, (*(t2**)(t2**)SZArrayLdElema(L_19, L_20)), &m5947_MI);
		V_4 = L_21;
	}

IL_0074:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)3)))
		{
			goto IL_0082;
		}
	}
	{
		t221* L_23 = V_1;
		int32_t L_24 = 3;
		int32_t L_25 = m5947(NULL, (*(t2**)(t2**)SZArrayLdElema(L_23, L_24)), &m5947_MI);
		V_5 = L_25;
	}

IL_0082:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		m11924(__this, L_26, L_27, L_28, L_29, L_30, &m11924_MI);
		return;
	}
}
extern MethodInfo m5787_MI;
extern "C" void m5787 (t1202 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		m11924(__this, 2, L_0, L_1, 0, 0, &m11924_MI);
		return;
	}
}
extern "C" void m11923 (t1202 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m11924(__this, 4, L_0, L_1, L_2, L_3, &m11924_MI);
		return;
	}
}
extern "C" void m11924 (t1202 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_1, (t2*) &_stringLiteral2822, &m5763_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = p1;
		__this->f1 = L_2;
		int32_t L_3 = p2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_4, (t2*) &_stringLiteral2823, &m5763_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int32_t L_5 = p2;
		__this->f2 = L_5;
		int32_t L_6 = p0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_003f;
		}
	}
	{
		__this->f3 = (-1);
		__this->f4 = (-1);
		return;
	}

IL_003f:
	{
		int32_t L_7 = p3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_8, (t2*) &_stringLiteral2824, &m5763_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004f:
	{
		int32_t L_9 = p3;
		__this->f3 = L_9;
		int32_t L_10 = p0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0063;
		}
	}
	{
		__this->f4 = (-1);
		return;
	}

IL_0063:
	{
		int32_t L_11 = p4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		t909 * L_12 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_12, (t2*) &_stringLiteral2825, &m5763_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0073:
	{
		int32_t L_13 = p4;
		__this->f4 = L_13;
		return;
	}
}
extern MethodInfo m11925_MI;
extern "C" int32_t m11925 (t1202 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m11926_MI;
extern "C" int32_t m11926 (t1202 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11927_MI;
extern "C" int32_t m11927 (t1202 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m11928_MI;
extern "C" int32_t m11928 (t1202 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m11929_MI;
extern "C" int32_t m11929 (t1202 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		if (((t1202 *)IsInst(L_1, InitializedTypeInfo(&t1202_TI))))
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral2826, &m7888_MI);
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_3, L_2, &m2949_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t9 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, t1202 * >::Invoke(&m11931_MI, __this, ((t1202 *)Castclass(L_4, InitializedTypeInfo(&t1202_TI))));
		return L_5;
	}
}
extern MethodInfo m11930_MI;
extern "C" bool m11930 (t1202 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t1202 * >::Invoke(&m11932_MI, __this, ((t1202 *)IsInst(L_0, InitializedTypeInfo(&t1202_TI))));
		return L_1;
	}
}
extern "C" int32_t m11931 (t1202 * __this, t1202 * p0, MethodInfo* method)
{
	{
		t1202 * L_0 = p0;
		bool L_1 = m11936(NULL, L_0, (t1202 *)NULL, &m11936_MI);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = (__this->f1);
		t1202 * L_3 = p0;
		int32_t L_4 = (L_3->f1);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		int32_t L_5 = (__this->f1);
		t1202 * L_6 = p0;
		int32_t L_7 = (L_6->f1);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_002b;
		}
	}
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = (__this->f2);
		t1202 * L_9 = p0;
		int32_t L_10 = (L_9->f2);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_003b;
		}
	}
	{
		return 1;
	}

IL_003b:
	{
		int32_t L_11 = (__this->f2);
		t1202 * L_12 = p0;
		int32_t L_13 = (L_12->f2);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = (__this->f3);
		t1202 * L_15 = p0;
		int32_t L_16 = (L_15->f3);
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		int32_t L_17 = (__this->f3);
		t1202 * L_18 = p0;
		int32_t L_19 = (L_18->f3);
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_006b;
		}
	}
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = (__this->f4);
		t1202 * L_21 = p0;
		int32_t L_22 = (L_21->f4);
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_007b;
		}
	}
	{
		return 1;
	}

IL_007b:
	{
		int32_t L_23 = (__this->f4);
		t1202 * L_24 = p0;
		int32_t L_25 = (L_24->f4);
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_008b;
		}
	}
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
extern "C" bool m11932 (t1202 * __this, t1202 * p0, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		t1202 * L_0 = p0;
		bool L_1 = m11937(NULL, L_0, (t1202 *)NULL, &m11937_MI);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		t1202 * L_2 = p0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		t1202 * L_5 = p0;
		int32_t L_6 = (L_5->f2);
		int32_t L_7 = (__this->f2);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		t1202 * L_8 = p0;
		int32_t L_9 = (L_8->f3);
		int32_t L_10 = (__this->f3);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		t1202 * L_11 = p0;
		int32_t L_12 = (L_11->f4);
		int32_t L_13 = (__this->f4);
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		return G_B6_0;
	}
}
extern MethodInfo m11933_MI;
extern "C" int32_t m11933 (t1202 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f3);
		int32_t L_2 = (__this->f2);
		int32_t L_3 = (__this->f1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
extern "C" t2* m11934 (t1202 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		int32_t* L_0 = &(__this->f1);
		t2* L_1 = m4342(L_0, &m4342_MI);
		int32_t* L_2 = &(__this->f2);
		t2* L_3 = m4342(L_2, &m4342_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_1, (t2*) &_stringLiteral135, L_3, &m399_MI);
		V_0 = L_4;
		int32_t L_5 = (__this->f3);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0041;
		}
	}
	{
		t2* L_6 = V_0;
		int32_t* L_7 = &(__this->f3);
		t2* L_8 = m4342(L_7, &m4342_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m399(NULL, L_6, (t2*) &_stringLiteral135, L_8, &m399_MI);
		V_0 = L_9;
	}

IL_0041:
	{
		int32_t L_10 = (__this->f4);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0061;
		}
	}
	{
		t2* L_11 = V_0;
		int32_t* L_12 = &(__this->f4);
		t2* L_13 = m4342(L_12, &m4342_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = m399(NULL, L_11, (t2*) &_stringLiteral135, L_13, &m399_MI);
		V_0 = L_14;
	}

IL_0061:
	{
		t2* L_15 = V_0;
		return L_15;
	}
}
extern "C" t1202 * m11935 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		t1202 * L_1 = (t1202 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1202_TI));
		m11923(L_1, 0, 0, 0, 0, &m11923_MI);
		return L_1;
	}

IL_001b:
	{
		V_6 = 0;
		goto IL_00a1;
	}

IL_0023:
	{
		t2* L_2 = p0;
		int32_t L_3 = V_6;
		uint16_t L_4 = m2778(L_2, L_3, &m2778_MI);
		V_7 = L_4;
		uint16_t L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_6 = m5967(NULL, L_5, &m5967_MI);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		uint16_t L_8 = V_7;
		V_5 = ((int32_t)((int32_t)L_8-(int32_t)((int32_t)48)));
		goto IL_0051;
	}

IL_0044:
	{
		int32_t L_9 = V_5;
		uint16_t L_10 = V_7;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)10)))+(int32_t)((int32_t)((int32_t)L_10-(int32_t)((int32_t)48)))));
	}

IL_0051:
	{
		goto IL_0094;
	}

IL_0053:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 0)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 1)
		{
			goto IL_007c;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 2)
		{
			goto IL_0081;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)1)) == 3)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008b;
	}

IL_0077:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_008b;
	}

IL_007c:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_008b;
	}

IL_0081:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_008b;
	}

IL_0086:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_008b;
	}

IL_008b:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00ae;
	}

IL_009b:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_21 = V_6;
		t2* L_22 = p0;
		int32_t L_23 = m2763(L_22, &m2763_MI);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}

IL_00ae:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 0)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 2)
		{
			goto IL_00dc;
		}
		if (((int32_t)((int32_t)L_26-(int32_t)1)) == 3)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_00e6;
	}

IL_00d2:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_00e6;
	}

IL_00d7:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_00e6;
	}

IL_00dc:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_00e6;
	}

IL_00e1:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_00e6;
	}

IL_00e6:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		t1202 * L_35 = (t1202 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1202_TI));
		m11923(L_35, L_31, L_32, L_33, L_34, &m11923_MI);
		return L_35;
	}
}
extern "C" bool m11936 (t9 * __this , t1202 * p0, t1202 * p1, MethodInfo* method)
{
	{
		t1202 * L_0 = p0;
		t1202 * L_1 = p1;
		bool L_2 = m6032(NULL, L_0, L_1, &m6032_MI);
		return L_2;
	}
}
extern "C" bool m11937 (t9 * __this , t1202 * p0, t1202 * p1, MethodInfo* method)
{
	{
		t1202 * L_0 = p0;
		t1202 * L_1 = p1;
		bool L_2 = m6032(NULL, L_0, L_1, &m6032_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1927.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1927_TI;
#include "t1927MD.h"

#include "t1849.h"
#include "t1850.h"
#include "t1849MD.h"
extern MethodInfo m9818_MI;
extern MethodInfo m11940_MI;
extern MethodInfo m11942_MI;
extern MethodInfo m5775_MI;
extern MethodInfo m9819_MI;
extern MethodInfo m9820_MI;
extern MethodInfo m11944_MI;
extern MethodInfo m5771_MI;
extern MethodInfo m11943_MI;


extern MethodInfo m11938_MI;
extern "C" void m11938 (t1927 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11939_MI;
extern "C" void m11939 (t1927 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m11940(__this, L_0, 0, &m11940_MI);
		return;
	}
}
extern "C" void m11940 (t1927 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		bool L_0 = p1;
		__this->f0 = L_0;
		t9 * L_1 = p0;
		m11942(__this, L_1, &m11942_MI);
		return;
	}
}
extern MethodInfo m11941_MI;
extern "C" void m11941 (t1927 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1106 * L_2 = p0;
		bool L_3 = m5775(L_2, (t2*) &_stringLiteral2827, &m5775_MI);
		__this->f0 = L_3;
		t1106 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_6 = m5773(L_4, (t2*) &_stringLiteral2828, L_5, &m5773_MI);
		V_0 = L_6;
		t9 * L_7 = V_0;
		m11942(__this, L_7, &m11942_MI);
		return;
	}
}
extern "C" void m11942 (t1927 * __this, t9 * p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t9 * L_1 = p0;
		t1849  L_2 = m9819(NULL, L_1, 1, &m9819_MI);
		__this->f1 = L_2;
		goto IL_0024;
	}

IL_0017:
	{
		t9 * L_3 = p0;
		t1849  L_4 = m9819(NULL, L_3, 0, &m9819_MI);
		__this->f1 = L_4;
	}

IL_0024:
	{
		return;
	}
}
extern "C" t9 * m11943 (t1927 * __this, MethodInfo* method)
{
	{
		t1849 * L_0 = &(__this->f1);
		t9 * L_1 = m9818(L_0, &m9818_MI);
		return L_1;
	}
}
extern "C" bool m11944 (t1927 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11945_MI;
extern "C" void m11945 (t1927 * __this, MethodInfo* method)
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
		t1849 * L_0 = &(__this->f1);
		m9820(L_0, &m9820_MI);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m11946_MI;
extern "C" void m11946 (t1927 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1106 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1106 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11944_MI, __this);
		m5771(L_2, (t2*) &_stringLiteral2827, L_3, &m5771_MI);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t1106 * L_4 = p0;
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m11943_MI, __this);
		m5785(L_4, (t2*) &_stringLiteral2828, L_5, &m5785_MI);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		t1106 * L_6 = p0;
		m5785(L_6, (t2*) &_stringLiteral2828, NULL, &m5785_MI);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
