﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1486.h"
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
extern TypeInfo t1486_TI;
#include "t1486MD.h"

#include "t58.h"
#include "t1597.h"
#include "t122.h"
#include "t124.h"
#include "t125.h"
#include "t9.h"
#include "mscorlib_ArrayTypes.h"
#include "t2.h"
#include "t132.h"
#include "t169.h"
#include "t563.h"
#include "t304.h"
#include "t299.h"
#include "t156.h"
#include "t903.h"
#include "t1596.h"
#include "t126.h"
#include "t1530.h"
extern TypeInfo t1597_TI;
extern TypeInfo t122_TI;
extern TypeInfo t124_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t563_TI;
extern TypeInfo t903_TI;
extern TypeInfo t1596_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1530_TI;
extern TypeInfo t9_TI;
#include "t1596MD.h"
#include "t58MD.h"
#include "t1597MD.h"
#include "t1209MD.h"
#include "t1526MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t563MD.h"
#include "t304MD.h"
#include "t903MD.h"
#include "t1870MD.h"
#include "t301MD.h"
#include "t9MD.h"
#include "t126MD.h"
#include "t1530MD.h"
extern MethodInfo m9796_MI;
extern MethodInfo m4461_MI;
extern MethodInfo m7855_MI;
extern MethodInfo m5771_MI;
extern MethodInfo m7580_MI;
extern MethodInfo m11103_MI;
extern MethodInfo m6896_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5735_MI;
extern MethodInfo m5716_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m11097_MI;
extern MethodInfo m11825_MI;
extern MethodInfo m5722_MI;
extern MethodInfo m9853_MI;
extern MethodInfo m11098_MI;
extern MethodInfo m9854_MI;
extern MethodInfo m1083_MI;
extern MethodInfo m9798_MI;
extern MethodInfo m1085_MI;
extern MethodInfo m11104_MI;
extern MethodInfo m9795_MI;
extern MethodInfo m11102_MI;
extern MethodInfo m9797_MI;
extern MethodInfo m2511_MI;
extern MethodInfo m4410_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m646_MI;

#include "t121.h"

extern MethodInfo m11094_MI;
extern "C" void m11094 (t1486 * __this, MethodInfo* method)
{
	{
		m5771(__this, &m5771_MI);
		return;
	}
}
extern MethodInfo m11095_MI;
extern "C" void m11095 (t9 * __this , MethodInfo* method)
{
	{
		t58 L_0 = m7580(NULL, (-1), &m7580_MI);
		((t1486_SFs*)InitializedTypeInfo(&t1486_TI)->static_fields)->f3 = L_0;
		return;
	}
}
extern MethodInfo m11096_MI;
extern "C" void m11096 (t1486 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m11103_MI, __this, 1);
		m6896(NULL, __this, &m6896_MI);
		return;
	}
}
extern "C" void m11097 (t9 * __this , t2084* p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1486 * V_1 = {0};
	t2084* V_2 = {0};
	int32_t V_3 = 0;
	{
		t2084* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2565, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2084* L_2 = p0;
		V_0 = (((int32_t)(((t121 *)L_2)->max_length)));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0022;
		}
	}
	{
		t169 * L_4 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_4, (t2*) &_stringLiteral2566, &m5735_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		t2084* L_5 = p0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_005b;
	}

IL_0028:
	{
		t2084* L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		V_1 = (*(t1486 **)(t1486 **)SZArrayLdElema(L_6, L_8));
		t1486 * L_9 = V_1;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		t132 * L_10 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m5716(L_10, (t2*) &_stringLiteral2565, (t2*) &_stringLiteral2567, &m5716_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003f:
	{
		t1486 * L_11 = V_1;
		t1597 * L_12 = (L_11->f2);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_13, (t2*) &_stringLiteral2568, (t2*) &_stringLiteral2569, &m5720_MI);
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
		t2084* L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
extern "C" int32_t m11098 (t9 * __this , t2084* p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef int32_t (*m11098_ftn) (t2084*, int32_t, bool);
	static m11098_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11098_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m11099_MI;
extern "C" int32_t m11099 (t9 * __this , t2084* p0, t304  p1, bool p2, MethodInfo* method)
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
		t2084* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1486_TI));
		m11097(NULL, L_0, 0, &m11097_MI);
		double L_1 = m11825((&p1), &m11825_MI);
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
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_4, (t2*) &_stringLiteral437, &m5722_MI);
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
			m9853(NULL, &m9853_MI);
		}

IL_0031:
		{
			t2084* L_6 = p0;
			int64_t L_7 = V_0;
			bool L_8 = p2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1486_TI));
			int32_t L_9 = m11098(NULL, L_6, (((int32_t)L_7)), L_8, &m11098_MI);
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
			m9854(NULL, &m9854_MI);
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
extern MethodInfo m11100_MI;
extern "C" t58 m11100 (t1486 * __this, MethodInfo* method)
{
	{
		t1597 * L_0 = (__this->f2);
		t58 L_1 = m9796(L_0, &m9796_MI);
		return L_1;
	}
}
extern MethodInfo m11101_MI;
extern "C" void m11101 (t1486 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1486_TI));
		t58 L_1 = ((t1486_SFs*)InitializedTypeInfo(&t1486_TI)->static_fields)->f3;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1486_TI));
		t58 L_3 = ((t1486_SFs*)InitializedTypeInfo(&t1486_TI)->static_fields)->f3;
		t1597 * L_4 = (t1597 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1597_TI));
		m7855(L_4, L_3, 0, &m7855_MI);
		__this->f2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		t58 L_5 = p0;
		t1597 * L_6 = (t1597 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1597_TI));
		m7855(L_6, L_5, 1, &m7855_MI);
		__this->f2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
extern "C" bool m11102 (t1486 * __this, t58 p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef bool (*m11102_ftn) (t1486 *, t58, int32_t, bool);
	static m11102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11102_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" void m11103 (t1486 * __this, bool p0, MethodInfo* method)
{
	t1486 * V_0 = {0};
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
		t1597 * L_1 = (__this->f2);
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
		t1486 * L_2 = V_0;
		m1083(NULL, L_2, &m1083_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1597 * L_3 = (__this->f2);
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_0028:
		{
			t1597 * L_4 = (__this->f2);
			VirtActionInvoker0::Invoke(&m9798_MI, L_4);
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
		t1486 * L_5 = V_0;
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m6994_MI;
extern "C" bool m6994 (t1486 * __this, MethodInfo* method)
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
		m11104(__this, &m11104_MI);
		V_0 = 0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1597 * L_0 = (__this->f2);
			m9795(L_0, (&V_0), &m9795_MI);
			t1597 * L_1 = (__this->f2);
			t58 L_2 = m9796(L_1, &m9796_MI);
			bool L_3 = m11102(__this, L_2, (-1), 0, &m11102_MI);
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
			t1597 * L_5 = (__this->f2);
			m9797(L_5, &m9797_MI);
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
extern MethodInfo m7026_MI;
extern "C" bool m7026 (t1486 * __this, int32_t p0, bool p1, MethodInfo* method)
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
		m11104(__this, &m11104_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_1, (t2*) &_stringLiteral2547, &m5722_MI);
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
			m9853(NULL, &m9853_MI);
		}

IL_001f:
		{
			t1597 * L_3 = (__this->f2);
			m9795(L_3, (&V_0), &m9795_MI);
			t1597 * L_4 = (__this->f2);
			t58 L_5 = m9796(L_4, &m9796_MI);
			int32_t L_6 = p0;
			bool L_7 = p1;
			bool L_8 = m11102(__this, L_5, L_6, L_7, &m11102_MI);
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
			m9854(NULL, &m9854_MI);
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
			t1597 * L_11 = (__this->f2);
			m9797(L_11, &m9797_MI);
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
extern "C" void m11104 (t1486 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		t1597 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0021;
		}
	}

IL_0010:
	{
		t126 * L_2 = m2511(__this, &m2511_MI);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_2);
		t1530 * L_4 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_4, L_3, &m6912_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m11105_MI;
extern "C" void m11105 (t1486 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m11103_MI, __this, 0);
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
#include "t2085.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2085_TI;
#include "t2085MD.h"

#include "t1100.h"
#include "t1101.h"
#include "t1591MD.h"
#include "t1369MD.h"
#include "t138MD.h"
extern MethodInfo m7847_MI;
extern MethodInfo m5901_MI;
extern MethodInfo m4458_MI;
extern MethodInfo m11809_MI;


extern MethodInfo m11106_MI;
extern "C" void m11106 (t2085 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2570, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467261), &m4458_MI);
		return;
	}
}
extern MethodInfo m11107_MI;
extern "C" void m11107 (t2085 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2086.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2086_TI;
#include "t2086MD.h"

extern MethodInfo m11111_MI;


extern MethodInfo m11108_MI;
extern "C" void m11108 (t2086 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11109_MI;
extern "C" void m11109 (t2086 * __this, MethodInfo* method)
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
		m11111(__this, 0, &m11111_MI);
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
extern MethodInfo m11110_MI;
extern "C" void m11110 (t2086 * __this, MethodInfo* method)
{
	{
		m11111(__this, 1, &m11111_MI);
		m6896(NULL, __this, &m6896_MI);
		return;
	}
}
extern "C" void m11111 (t2086 * __this, bool p0, MethodInfo* method)
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
#include "t1347.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1347_TI;
#include "t1347MD.h"

#include "t933.h"
#include "t925.h"
#include "t901.h"
#include "t826.h"
#include "t322.h"
#include "t914.h"
#include "t934.h"
#include "t2126.h"
#include "t2133.h"
#include "t1573.h"
#include "t127.h"
extern TypeInfo t158_TI;
extern TypeInfo t933_TI;
extern TypeInfo t152_TI;
extern TypeInfo t926_TI;
extern TypeInfo t826_TI;
extern TypeInfo t925_TI;
extern TypeInfo t914_TI;
extern TypeInfo t1806_TI;
extern TypeInfo t935_TI;
extern TypeInfo t934_TI;
extern TypeInfo t322_TI;
extern TypeInfo t2126_TI;
extern TypeInfo t901_TI;
extern TypeInfo t2133_TI;
extern TypeInfo t1573_TI;
#include "t933MD.h"
#include "t2MD.h"
#include "t322MD.h"
#include "t2126MD.h"
#include "t1851MD.h"
#include "t914MD.h"
#include "t826MD.h"
#include "t2133MD.h"
extern Il2CppType t158_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t1587_0_0_0;
extern Il2CppType t1588_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t1586_0_0_0;
extern MethodInfo m5775_MI;
extern MethodInfo m11114_MI;
extern MethodInfo m9508_MI;
extern MethodInfo m11115_MI;
extern MethodInfo m11116_MI;
extern MethodInfo m7802_MI;
extern MethodInfo m511_MI;
extern MethodInfo m11984_MI;
extern MethodInfo m12016_MI;
extern MethodInfo m7762_MI;
extern MethodInfo m11118_MI;
extern MethodInfo m1166_MI;
extern MethodInfo m7799_MI;
extern MethodInfo m1170_MI;
extern MethodInfo m5885_MI;
extern MethodInfo m5990_MI;
extern MethodInfo m1214_MI;
extern MethodInfo m11591_MI;
extern MethodInfo m11117_MI;
extern MethodInfo m7758_MI;
extern MethodInfo m7848_MI;
extern MethodInfo m9805_MI;
extern MethodInfo m12029_MI;
extern MethodInfo m12026_MI;
extern MethodInfo m11615_MI;
extern MethodInfo m4391_MI;
extern MethodInfo m7798_MI;
extern MethodInfo m610_MI;
extern MethodInfo m11593_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m329_MI;
extern MethodInfo m7751_MI;


extern MethodInfo m11112_MI;
extern "C" t9 * m11112 (t9 * __this , t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t9 * L_1 = m5775(NULL, L_0, 0, &m5775_MI);
		return L_1;
	}
}
extern MethodInfo m11113_MI;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m11113 (t9 * __this , t126 * p0, t158* p1, MethodInfo* method)
{
	static bool m11113_init;
	if (!m11113_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11113_init = true;
	}
	{
		t126 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = m11114(NULL, L_0, L_1, ((t158*)SZArrayNew(t158_TI_var, 0)), &m11114_MI);
		return L_2;
	}
}
extern "C" t9 * m11114 (t9 * __this , t126 * p0, t158* p1, t158* p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_1 = m9508(NULL, &m9508_MI);
		t158* L_2 = p1;
		t158* L_3 = p2;
		t9 * L_4 = m11115(NULL, L_0, 0, L_1, L_2, (t901 *)NULL, L_3, &m11115_MI);
		return L_4;
	}
}
extern TypeInfo* t152_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m11115 (t9 * __this , t126 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, t158* p5, MethodInfo* method)
{
	static bool m11115_init;
	if (!m11115_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11115_init = true;
	}
	int32_t V_0 = 0;
	t152* V_1 = {0};
	int32_t V_2 = 0;
	t826 * V_3 = {0};
	t322 * V_4 = {0};
	t126 * V_5 = {0};
	t152* V_6 = {0};
	int32_t V_7 = 0;
	t2* V_8 = {0};
	t9 * V_9 = {0};
	t152* G_B9_0 = {0};
	t322 * G_B23_0 = {0};
	t322 * G_B22_0 = {0};
	t2* G_B24_0 = {0};
	t322 * G_B24_1 = {0};
	{
		t126 * L_0 = p0;
		m11116(NULL, L_0, &m11116_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7802_MI, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_3, (t2*) &_stringLiteral2571, &m511_MI);
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_5, L_4, (t2*) &_stringLiteral1104, &m5720_MI);
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
		t126 * L_21 = m2511((*(t9 **)(t9 **)SZArrayLdElema(L_18, L_20)), &m2511_MI);
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
		t933 * L_25 = p2;
		if (L_25)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_26 = m9508(NULL, &m9508_MI);
		p2 = L_26;
	}

IL_0074:
	{
		t933 * L_27 = p2;
		int32_t L_28 = p1;
		t126 * L_29 = p0;
		int32_t L_30 = p1;
		t926* L_31 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m11984_MI, L_29, L_30);
		t152* L_32 = V_1;
		t914 * L_33 = (t914 *)VirtFuncInvoker4< t914 *, int32_t, t1806*, t152*, t935* >::Invoke(&m12016_MI, L_27, L_28, (t1806*)(t1806*)L_31, L_32, (t935*)(t935*)NULL);
		V_3 = ((t826 *)Castclass(L_33, InitializedTypeInfo(&t826_TI)));
		t826 * L_34 = V_3;
		if (L_34)
		{
			goto IL_0125;
		}
	}
	{
		t126 * L_35 = p0;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7762_MI, L_35);
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
		t9 * L_39 = m11118(NULL, L_38, &m11118_MI);
		return L_39;
	}

IL_00a4:
	{
		t322 * L_40 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_40, &m1166_MI);
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
		t322 * L_45 = V_4;
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
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7799_MI, L_47);
		G_B24_0 = L_48;
		G_B24_1 = G_B22_0;
		goto IL_00ce;
	}

IL_00c9:
	{
		G_B24_0 = (t2*) &_stringLiteral2572;
		G_B24_1 = G_B23_0;
	}

IL_00ce:
	{
		m1170(G_B24_1, G_B24_0, &m1170_MI);
		t322 * L_49 = V_4;
		m1170(L_49, (t2*) &_stringLiteral383, &m1170_MI);
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
		t322 * L_53 = V_4;
		int32_t L_54 = m5885(L_53, &m5885_MI);
		if ((((int32_t)L_54) <= ((int32_t)2)))
		{
			goto IL_0108;
		}
	}
	{
		t322 * L_55 = V_4;
		t322 * L_56 = L_55;
		int32_t L_57 = m5885(L_56, &m5885_MI);
		m5990(L_56, ((int32_t)((int32_t)L_57-(int32_t)2)), &m5990_MI);
	}

IL_0108:
	{
		t2* L_58 = m7847(NULL, (t2*) &_stringLiteral2573, &m7847_MI);
		t126 * L_59 = p0;
		t2* L_60 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_59);
		t322 * L_61 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_62 = m1214(NULL, L_58, L_60, L_61, &m1214_MI);
		t2126 * L_63 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11591(L_63, L_62, &m11591_MI);
		il2cpp_codegen_raise_exception(L_63);
	}

IL_0125:
	{
		t126 * L_64 = p0;
		m11117(NULL, L_64, &m11117_MI);
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
		bool L_68 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7758_MI, L_67);
		if (L_68)
		{
			goto IL_0161;
		}
	}
	{
		t158* L_69 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_70 = p0;
		t2* L_71 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_70);
		ArrayElementTypeCheck (L_69, L_71);
		*((t9 **)(t9 **)SZArrayLdElema(L_69, 0)) = (t9 *)L_71;
		t2* L_72 = m7848(NULL, (t2*) &_stringLiteral2574, L_69, &m7848_MI);
		V_8 = L_72;
		t2* L_73 = V_8;
		t169 * L_74 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_74, L_73, &m5735_MI);
		il2cpp_codegen_raise_exception(L_74);
	}

IL_0161:
	{
		t126 * L_75 = p0;
		t158* L_76 = p5;
		t9 * L_77 = m9805(NULL, L_75, L_76, &m9805_MI);
		V_9 = L_77;
		t9 * L_78 = V_9;
		if (!L_78)
		{
			goto IL_0180;
		}
	}
	{
		t826 * L_79 = V_3;
		t9 * L_80 = V_9;
		int32_t L_81 = p1;
		t933 * L_82 = p2;
		t158* L_83 = p3;
		t901 * L_84 = p4;
		VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12029_MI, L_79, L_80, L_81, L_82, L_83, L_84);
		t9 * L_85 = V_9;
		return L_85;
	}

IL_0180:
	{
		t826 * L_86 = V_3;
		int32_t L_87 = p1;
		t933 * L_88 = p2;
		t158* L_89 = p3;
		t901 * L_90 = p4;
		t9 * L_91 = (t9 *)VirtFuncInvoker4< t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12026_MI, L_86, L_87, L_88, L_89, L_90);
		return L_91;
	}
}
extern "C" t9 * m5775 (t9 * __this , t126 * p0, bool p1, MethodInfo* method)
{
	t826 * V_0 = {0};
	t2133 * V_1 = {0};
	int32_t V_2 = {0};
	{
		t126 * L_0 = p0;
		m11116(NULL, L_0, &m11116_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7802_MI, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_3, (t2*) &_stringLiteral2571, &m511_MI);
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_5, L_4, (t2*) &_stringLiteral1104, &m5720_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0024:
	{
		t126 * L_6 = p0;
		m11117(NULL, L_6, &m11117_MI);
		t126 * L_7 = p0;
		V_1 = ((t2133 *)IsInst(L_7, InitializedTypeInfo(&t2133_TI)));
		t2133 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		t2133 * L_9 = V_1;
		t826 * L_10 = m11615(L_9, &m11615_MI);
		V_0 = L_10;
		bool L_11 = p1;
		if (L_11)
		{
			goto IL_004b;
		}
	}
	{
		t826 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t826 * L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4391_MI, L_13);
		if (L_14)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = (t826 *)NULL;
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
		t826 * L_20 = (t826 *)VirtFuncInvoker5< t826 *, int32_t, t933 *, int32_t, t152*, t935* >::Invoke(&m7798_MI, L_17, L_18, (t933 *)NULL, 3, L_19, (t935*)(t935*)NULL);
		V_0 = L_20;
	}

IL_0068:
	{
		t826 * L_21 = V_0;
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		t126 * L_22 = p0;
		bool L_23 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7762_MI, L_22);
		if (!L_23)
		{
			goto IL_007a;
		}
	}
	{
		t126 * L_24 = p0;
		t9 * L_25 = m11118(NULL, L_24, &m11118_MI);
		return L_25;
	}

IL_007a:
	{
		t2* L_26 = m7847(NULL, (t2*) &_stringLiteral2575, &m7847_MI);
		t126 * L_27 = p0;
		t2* L_28 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_27);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_29 = m610(NULL, (t2*) &_stringLiteral2576, L_28, &m610_MI);
		t2126 * L_30 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11593(L_30, L_26, L_29, &m11593_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009a:
	{
		t826 * L_31 = V_0;
		t9 * L_32 = m4417(L_31, (t158*)(t158*)NULL, &m4417_MI);
		return L_32;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11116 (t9 * __this , t126 * p0, MethodInfo* method)
{
	static bool m11116_init;
	if (!m11116_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11116_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1104, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1587_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_2) == ((t9*)(t126 *)L_3)))
		{
			goto IL_0042;
		}
	}
	{
		t126 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t1588_0_0_0), &m329_MI);
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
		t126 * L_9 = m329(NULL, LoadTypeToken(&t1586_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_8) == ((t9*)(t126 *)L_9))))
		{
			goto IL_0063;
		}
	}

IL_0042:
	{
		t158* L_10 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_11 = p0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 0)) = (t9 *)L_12;
		t2* L_13 = m7848(NULL, (t2*) &_stringLiteral2577, L_10, &m7848_MI);
		V_0 = L_13;
		t2* L_14 = V_0;
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_15, L_14, &m5735_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0063:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11117 (t9 * __this , t126 * p0, MethodInfo* method)
{
	static bool m11117_init;
	if (!m11117_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11117_init = true;
	}
	t2* V_0 = {0};
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_0);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_4;
		t2* L_5 = m7848(NULL, (t2*) &_stringLiteral2578, L_2, &m7848_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		t2126 * L_7 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11591(L_7, L_6, &m11591_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0029:
	{
		return;
	}
}
extern "C" t9 * m11118 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t9 * (*m11118_ftn) (t126 *);
	static m11118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11118_ftn)il2cpp_codegen_resolve_icall ("System.Activator::CreateInstanceInternal(System.Type)");
	return _il2cpp_icall_func(p0);
}
#include "t2036.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2036_TI;
#include "t2036MD.h"

#include "t1744.h"
#include "t1748.h"
#include "t1751.h"
#include "t1345.h"
#include "t1800.h"
#include "t1720.h"
#include "t1861.h"
#include "t918.h"
extern TypeInfo t1744_TI;
extern TypeInfo t1720_TI;
extern TypeInfo t918_TI;
#include "t1744MD.h"
#include "t1720MD.h"
#include "t918MD.h"
extern MethodInfo m11120_MI;
extern MethodInfo m9096_MI;
extern MethodInfo m11126_MI;
extern MethodInfo m2724_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m11124_MI;
extern MethodInfo m8852_MI;
extern MethodInfo m11555_MI;
extern MethodInfo m11561_MI;
extern MethodInfo m11129_MI;
extern MethodInfo m11119_MI;


extern "C" t2* m11119 (t2036 * __this, MethodInfo* method)
{
	typedef t2* (*m11119_ftn) (t2036 *);
	static m11119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11119_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::getFriendlyName()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2036 * m11120 (t9 * __this , MethodInfo* method)
{
	typedef t2036 * (*m11120_ftn) ();
	static m11120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11120_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::getCurDomain()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11121_MI;
extern "C" t2036 * m11121 (t9 * __this , MethodInfo* method)
{
	{
		t2036 * L_0 = m11120(NULL, &m11120_MI);
		return L_0;
	}
}
extern MethodInfo m11122_MI;
extern "C" t1744 * m11122 (t2036 * __this, t1748 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1748 * L_0 = p0;
		int32_t L_1 = p1;
		t1744 * L_2 = (t1744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1744_TI));
		m9096(L_2, L_0, (t2*)NULL, L_1, 1, &m9096_MI);
		return L_2;
	}
}
extern MethodInfo m11123_MI;
extern "C" t9 * m11123 (t2036 * __this, MethodInfo* method)
{
	{
		return NULL;
	}
}
extern "C" t1345 * m11124 (t2036 * __this, t2* p0, t1800 * p1, bool p2, MethodInfo* method)
{
	typedef t1345 * (*m11124_ftn) (t2036 *, t2*, t1800 *, bool);
	static m11124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11124_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m11125_MI;
extern "C" t1345 * m11125 (t2036 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1345 * L_1 = m11126(__this, L_0, (t1800 *)NULL, 0, &m11126_MI);
		return L_1;
	}
}
extern "C" t1345 * m11126 (t2036 * __this, t2* p0, t1800 * p1, bool p2, MethodInfo* method)
{
	t1345 * V_0 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2579, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral2580, &m2910_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		t1800 * L_6 = p1;
		bool L_7 = p2;
		t1345 * L_8 = m11124(__this, L_5, L_6, L_7, &m11124_MI);
		V_0 = L_8;
		t1345 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_10 = p0;
		t1720 * L_11 = (t1720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1720_TI));
		m8852(L_11, (t2*)NULL, L_10, &m8852_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0036:
	{
		t1345 * L_12 = V_0;
		return L_12;
	}
}
extern MethodInfo m11127_MI;
extern "C" t1861 * m11127 (t9 * __this , MethodInfo* method)
{
	typedef t1861 * (*m11127_ftn) ();
	static m11127_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11127_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetContext()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11128_MI;
extern "C" t1861 * m11128 (t9 * __this , MethodInfo* method)
{
	typedef t1861 * (*m11128_ftn) ();
	static m11128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11128_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetDefaultContext()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11129 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t2* (*m11129_ftn) (t2*);
	static m11129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11129_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetProcessGuid(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m11130_MI;
extern "C" t2* m11130 (t9 * __this , MethodInfo* method)
{
	t918  V_0 = {0};
	{
		t2* L_0 = ((t2036_SFs*)InitializedTypeInfo(&t2036_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		t918  L_1 = m11555(NULL, &m11555_MI);
		V_0 = L_1;
		t2* L_2 = m11561((&V_0), &m11561_MI);
		t2* L_3 = m11129(NULL, L_2, &m11129_MI);
		((t2036_SFs*)InitializedTypeInfo(&t2036_TI)->static_fields)->f2 = L_3;
	}

IL_001e:
	{
		t2* L_4 = ((t2036_SFs*)InitializedTypeInfo(&t2036_TI)->static_fields)->f2;
		return L_4;
	}
}
extern MethodInfo m11131_MI;
extern "C" t2* m11131 (t2036 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11119(__this, &m11119_MI);
		return L_0;
	}
}
#include "t2087.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2087_TI;
#include "t2087MD.h"



#include "t2093.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2093_TI;
#include "t2093MD.h"

extern MethodInfo m336_MI;


extern MethodInfo m11132_MI;
extern "C" void m11132 (t2093 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t2096.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2096_TI;
#include "t2096MD.h"

extern MethodInfo m379_MI;
extern MethodInfo m7029_MI;


extern MethodInfo m11133_MI;
extern "C" void m11133 (t2096 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2581, &m7847_MI);
		m379(__this, L_0, &m379_MI);
		m4458(__this, ((int32_t)-2146232832), &m4458_MI);
		return;
	}
}
extern MethodInfo m11134_MI;
extern "C" void m11134 (t2096 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		m4458(__this, ((int32_t)-2146232832), &m4458_MI);
		return;
	}
}
extern MethodInfo m11135_MI;
extern "C" void m11135 (t2096 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m7029(__this, L_0, L_1, &m7029_MI);
		return;
	}
}
#include "t2088.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2088_TI;
#include "t2088MD.h"



extern MethodInfo m11136_MI;
extern "C" void m11136 (t2088 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11137_MI;
extern "C" t2* m11137 (t2088 * __this, MethodInfo* method)
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
extern TypeInfo t1100_TI;
extern TypeInfo t1101_TI;
#include "t893MD.h"
#include "t1100MD.h"
extern MethodInfo m11141_MI;
extern MethodInfo m1099_MI;
extern MethodInfo m5804_MI;
extern MethodInfo m4444_MI;
extern MethodInfo m11810_MI;
extern MethodInfo m5741_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m5744_MI;


extern MethodInfo m11138_MI;
extern "C" void m11138 (t563 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2583, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147024809), &m4458_MI);
		return;
	}
}
extern "C" void m2910 (t563 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147024809), &m4458_MI);
		return;
	}
}
extern MethodInfo m5856_MI;
extern "C" void m5856 (t563 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11810(__this, L_0, L_1, &m11810_MI);
		m4458(__this, ((int32_t)-2147024809), &m4458_MI);
		return;
	}
}
extern "C" void m5720 (t563 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		t2* L_1 = p1;
		__this->f12 = L_1;
		m4458(__this, ((int32_t)-2147024809), &m4458_MI);
		return;
	}
}
extern MethodInfo m11139_MI;
extern "C" void m11139 (t563 * __this, t2* p0, t2* p1, t138 * p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p2;
		m11810(__this, L_0, L_1, &m11810_MI);
		t2* L_2 = p1;
		__this->f12 = L_2;
		m4458(__this, ((int32_t)-2147024809), &m4458_MI);
		return;
	}
}
extern MethodInfo m11140_MI;
extern "C" void m11140 (t563 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		t1100 * L_2 = p0;
		t2* L_3 = m5741(L_2, (t2*) &_stringLiteral2584, &m5741_MI);
		__this->f12 = L_3;
		return;
	}
}
extern "C" t2* m11141 (t563 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m11142_MI;
extern "C" t2* m11142 (t563 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11141_MI, __this);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11141_MI, __this);
		int32_t L_2 = m2724(L_1, &m2724_MI);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_3 = m1099(__this, &m1099_MI);
		t2* L_4 = m5804(NULL, &m5804_MI);
		t2* L_5 = m7847(NULL, (t2*) &_stringLiteral2582, &m7847_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11141_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m4444(NULL, L_3, L_4, L_5, L_6, &m4444_MI);
		return L_7;
	}

IL_0036:
	{
		t2* L_8 = m1099(__this, &m1099_MI);
		return L_8;
	}
}
extern MethodInfo m11143_MI;
extern "C" void m11143 (t563 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m4498(__this, L_0, L_1, &m4498_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11141_MI, __this);
		m5744(L_2, (t2*) &_stringLiteral2584, L_3, &m5744_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11144_MI;
extern "C" void m11144 (t132 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2585, &m7847_MI);
		m2910(__this, L_0, &m2910_MI);
		m4458(__this, ((int32_t)-2147467261), &m4458_MI);
		return;
	}
}
extern "C" void m339 (t132 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2585, &m7847_MI);
		t2* L_1 = p0;
		m5720(__this, L_0, L_1, &m5720_MI);
		m4458(__this, ((int32_t)-2147467261), &m4458_MI);
		return;
	}
}
extern "C" void m5716 (t132 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t2* L_1 = p0;
		m5720(__this, L_0, L_1, &m5720_MI);
		m4458(__this, ((int32_t)-2147467261), &m4458_MI);
		return;
	}
}
extern MethodInfo m11145_MI;
extern "C" void m11145 (t132 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11140(__this, L_0, L_1, &m11140_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2420_MI;


extern MethodInfo m5899_MI;
extern "C" void m5899 (t903 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2586, &m7847_MI);
		m2910(__this, L_0, &m2910_MI);
		m4458(__this, ((int32_t)-2146233086), &m4458_MI);
		return;
	}
}
extern "C" void m5722 (t903 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2586, &m7847_MI);
		t2* L_1 = p0;
		m5720(__this, L_0, L_1, &m5720_MI);
		m4458(__this, ((int32_t)-2146233086), &m4458_MI);
		return;
	}
}
extern MethodInfo m4361_MI;
extern "C" void m4361 (t903 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t2* L_1 = p0;
		m5720(__this, L_0, L_1, &m5720_MI);
		m4458(__this, ((int32_t)-2146233086), &m4458_MI);
		return;
	}
}
extern MethodInfo m11146_MI;
extern "C" void m11146 (t903 * __this, t2* p0, t9 * p1, t2* p2, MethodInfo* method)
{
	{
		t2* L_0 = p2;
		t2* L_1 = p0;
		m5720(__this, L_0, L_1, &m5720_MI);
		t9 * L_2 = p1;
		__this->f13 = L_2;
		m4458(__this, ((int32_t)-2146233086), &m4458_MI);
		return;
	}
}
extern MethodInfo m11147_MI;
extern "C" void m11147 (t903 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11140(__this, L_0, L_1, &m11140_MI);
		t1100 * L_2 = p0;
		t2* L_3 = m5741(L_2, (t2*) &_stringLiteral2587, &m5741_MI);
		__this->f13 = L_3;
		return;
	}
}
extern MethodInfo m11148_MI;
extern "C" t2* m11148 (t903 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = m11142(__this, &m11142_MI);
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
		t2* L_4 = m5804(NULL, &m5804_MI);
		t9 * L_5 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m2420(NULL, L_3, L_4, L_5, &m2420_MI);
		return L_6;
	}
}
extern MethodInfo m11149_MI;
extern "C" void m11149 (t903 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11143(__this, L_0, L_1, &m11143_MI);
		t1100 * L_2 = p0;
		t9 * L_3 = (__this->f13);
		m5744(L_2, (t2*) &_stringLiteral2587, L_3, &m5744_MI);
		return;
	}
}
#include "t1524.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1524_TI;
#include "t1524MD.h"



extern MethodInfo m11150_MI;
extern "C" void m11150 (t1524 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2588, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147024362), &m4458_MI);
		return;
	}
}
extern MethodInfo m6887_MI;
extern "C" void m6887 (t1524 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147024362), &m4458_MI);
		return;
	}
}
extern MethodInfo m11151_MI;
extern "C" void m11151 (t1524 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2097.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2097_TI;
#include "t2097MD.h"



extern MethodInfo m11152_MI;
extern "C" void m11152 (t2097 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2589, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233085), &m4458_MI);
		return;
	}
}
extern MethodInfo m11153_MI;
extern "C" void m11153 (t2097 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233085), &m4458_MI);
		return;
	}
}
extern MethodInfo m11154_MI;
extern "C" void m11154 (t2097 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2098.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2098_TI;
#include "t2098MD.h"



#include "t1558.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1558_TI;
#include "t1558MD.h"



#include "t1343.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1343_TI;
#include "t1343MD.h"

#include "t575.h"
#include "t303.h"
extern TypeInfo t730_TI;
extern TypeInfo t575_TI;
extern Il2CppType t730_0_0_0;
extern MethodInfo m11157_MI;
extern MethodInfo m11156_MI;
extern MethodInfo m11162_MI;
extern MethodInfo m11164_MI;
extern MethodInfo m11161_MI;
extern MethodInfo m11165_MI;
extern MethodInfo m11160_MI;
extern MethodInfo m11163_MI;
extern MethodInfo m11166_MI;
extern MethodInfo m4355_MI;
extern MethodInfo m2758_MI;
extern MethodInfo m1172_MI;


extern MethodInfo m11155_MI;
extern "C" void m11155 (t9 * __this , MethodInfo* method)
{
	{
		bool L_0 = m11157(NULL, &m11157_MI);
		((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f0 = L_0;
		bool L_1 = m11156(NULL, &m11156_MI);
		((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1 = L_1;
		return;
	}
}
extern "C" bool m11156 (t9 * __this , MethodInfo* method)
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
extern "C" bool m11157 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m11158_MI;
extern "C" int64_t m11158 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		t730* L_1 = m11162(NULL, L_0, &m11162_MI);
		int64_t L_2 = m11164(NULL, L_1, 0, &m11164_MI);
		return L_2;
	}
}
extern MethodInfo m11159_MI;
extern "C" double m11159 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		t730* L_1 = m11161(NULL, L_0, &m11161_MI);
		double L_2 = m11165(NULL, L_1, 0, &m11165_MI);
		return L_2;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m11160 (t9 * __this , uint8_t* p0, int32_t p1, MethodInfo* method)
{
	static bool m11160_init;
	if (!m11160_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m11160_init = true;
	}
	t730* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((t730*)SZArrayNew(t730_TI_var, L_0));
		V_1 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		t730* L_1 = V_0;
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
		t730* L_8 = V_0;
		return L_8;
	}
}
extern "C" t730* m11161 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		t730* L_0 = m11160(NULL, (uint8_t*)(uint8_t*)(&p0), 8, &m11160_MI);
		return L_0;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m11162 (t9 * __this , double p0, MethodInfo* method)
{
	static bool m11162_init;
	if (!m11162_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m11162_init = true;
	}
	t730* V_0 = {0};
	uint8_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		V_0 = ((t730*)SZArrayNew(t730_TI_var, 8));
		V_1 = (uint8_t*)(&p0);
		t730* L_1 = V_0;
		uint8_t* L_2 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_2+(int32_t)4))));
		t730* L_3 = V_0;
		uint8_t* L_4 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)5))));
		t730* L_5 = V_0;
		uint8_t* L_6 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)6))));
		t730* L_7 = V_0;
		uint8_t* L_8 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)7))));
		t730* L_9 = V_0;
		uint8_t* L_10 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 4)) = (uint8_t)(*((uint8_t*)L_10));
		t730* L_11 = V_0;
		uint8_t* L_12 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)1))));
		t730* L_13 = V_0;
		uint8_t* L_14 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)2))));
		t730* L_15 = V_0;
		uint8_t* L_16 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 7)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)3))));
		t730* L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		t730* L_18 = m11160(NULL, (uint8_t*)(uint8_t*)(&p0), 8, &m11160_MI);
		return L_18;
	}
}
extern "C" void m11163 (t9 * __this , uint8_t* p0, t730* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t730* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral606, &m339_MI);
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
		t730* L_4 = p1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1)))))
		{
			goto IL_002a;
		}
	}

IL_001a:
	{
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_5, (t2*) &_stringLiteral1112, (t2*) &_stringLiteral2590, &m4361_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t730* L_6 = p1;
		int32_t L_7 = p3;
		int32_t L_8 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_9, (t2*) &_stringLiteral2591, &m2910_MI);
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
		t730* L_12 = p1;
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
extern "C" int64_t m11164 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		t730* L_0 = p0;
		int32_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		m11163(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, 8, &m11163_MI);
		int64_t L_2 = V_0;
		return L_2;
	}
}
extern "C" double m11165 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	double V_0 = 0.0;
	uint8_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0090;
		}
	}
	{
		V_1 = (uint8_t*)(&V_0);
		t730* L_1 = p0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, (t2*) &_stringLiteral606, &m339_MI);
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
		t730* L_5 = p0;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)1)))))
		{
			goto IL_0037;
		}
	}

IL_0027:
	{
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_6, (t2*) &_stringLiteral1112, (t2*) &_stringLiteral2590, &m4361_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0037:
	{
		t730* L_7 = p0;
		int32_t L_8 = p1;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)8))) >= ((int32_t)L_8)))
		{
			goto IL_004a;
		}
	}
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_9, (t2*) &_stringLiteral2591, &m2910_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		uint8_t* L_10 = V_1;
		t730* L_11 = p0;
		int32_t L_12 = p1;
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)4));
		*((int8_t*)(L_10)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_13));
		uint8_t* L_14 = V_1;
		t730* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)5));
		*((int8_t*)(((intptr_t)((intptr_t)L_14+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_17));
		uint8_t* L_18 = V_1;
		t730* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = ((int32_t)((int32_t)L_20+(int32_t)6));
		*((int8_t*)(((intptr_t)((intptr_t)L_18+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_21));
		uint8_t* L_22 = V_1;
		t730* L_23 = p0;
		int32_t L_24 = p1;
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)7));
		*((int8_t*)(((intptr_t)((intptr_t)L_22+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25));
		uint8_t* L_26 = V_1;
		t730* L_27 = p0;
		int32_t L_28 = p1;
		int32_t L_29 = L_28;
		*((int8_t*)(((intptr_t)((intptr_t)L_26+(int32_t)4)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_29));
		uint8_t* L_30 = V_1;
		t730* L_31 = p0;
		int32_t L_32 = p1;
		int32_t L_33 = ((int32_t)((int32_t)L_32+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_30+(int32_t)5)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_31, L_33));
		uint8_t* L_34 = V_1;
		t730* L_35 = p0;
		int32_t L_36 = p1;
		int32_t L_37 = ((int32_t)((int32_t)L_36+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_34+(int32_t)6)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_35, L_37));
		uint8_t* L_38 = V_1;
		t730* L_39 = p0;
		int32_t L_40 = p1;
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)3));
		*((int8_t*)(((intptr_t)((intptr_t)L_38+(int32_t)7)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41));
		double L_42 = V_0;
		return L_42;
	}

IL_0090:
	{
		t730* L_43 = p0;
		int32_t L_44 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		m11163(NULL, (uint8_t*)(uint8_t*)(&V_0), L_43, L_44, 8, &m11163_MI);
		double L_45 = V_0;
		return L_45;
	}
}
extern MethodInfo m6978_MI;
extern "C" t2* m6978 (t9 * __this , t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral606, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t730* L_2 = p0;
		t730* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		t2* L_4 = m11166(NULL, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m11166_MI);
		return L_4;
	}
}
extern "C" t2* m11166 (t9 * __this , t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	{
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2592, &m339_MI);
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
		t730* L_4 = p0;
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
		t730* L_6 = p0;
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
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_8, (t2*) &_stringLiteral1112, (t2*) &_stringLiteral2590, &m4361_MI);
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
		t903 * L_10 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_10, (t2*) &_stringLiteral1113, (t2*) &_stringLiteral2593, &m4361_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004a:
	{
		int32_t L_11 = p1;
		t730* L_12 = p0;
		int32_t L_13 = p2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)L_13)))))
		{
			goto IL_005d;
		}
	}
	{
		t563 * L_14 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_14, (t2*) &_stringLiteral2594, &m2910_MI);
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
		t322 * L_18 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_18, ((int32_t)((int32_t)((int32_t)((int32_t)L_17*(int32_t)3))-(int32_t)1)), &m4355_MI);
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
		t322 * L_24 = V_0;
		m2758(L_24, ((int32_t)45), &m2758_MI);
	}

IL_0086:
	{
		t730* L_25 = p0;
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		V_3 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_27))>>(int32_t)4))&(int32_t)((int32_t)15)))));
		t730* L_28 = p0;
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
		t322 * L_39 = V_0;
		uint16_t L_40 = V_3;
		m2758(L_39, L_40, &m2758_MI);
		t322 * L_41 = V_0;
		uint16_t L_42 = V_4;
		m2758(L_41, L_42, &m2758_MI);
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
		t322 * L_46 = V_0;
		t2* L_47 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_46);
		return L_47;
	}
}
#include "t1354.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1354_TI;
#include "t1354MD.h"

extern MethodInfo m11168_MI;
extern MethodInfo m11169_MI;
extern MethodInfo m11167_MI;


extern "C" int32_t m11167 (t9 * __this , t121 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m11168(NULL, L_2, &m11168_MI);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = m7847(NULL, (t2*) &_stringLiteral2595, &m7847_MI);
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_6, L_5, &m2910_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m5793_MI;
extern "C" void m5793 (t9 * __this , t121 * p0, int32_t p1, t121 * p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2596, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral2597, &m339_MI);
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
		t2* L_5 = m7847(NULL, (t2*) &_stringLiteral1146, &m7847_MI);
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_6, (t2*) &_stringLiteral2598, L_5, &m4361_MI);
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
		t2* L_8 = m7847(NULL, (t2*) &_stringLiteral1146, &m7847_MI);
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_9, (t2*) &_stringLiteral2599, L_8, &m4361_MI);
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
		t2* L_11 = m7847(NULL, (t2*) &_stringLiteral1146, &m7847_MI);
		t903 * L_12 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_12, (t2*) &_stringLiteral488, L_11, &m4361_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0068:
	{
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		t121 * L_15 = p2;
		int32_t L_16 = p3;
		int32_t L_17 = p4;
		bool L_18 = m11169(NULL, L_13, L_14, L_15, L_16, L_17, &m11169_MI);
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
		int32_t L_22 = m11167(NULL, L_21, &m11167_MI);
		int32_t L_23 = p4;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)((int32_t)L_22-(int32_t)L_23)))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_24 = p3;
		t121 * L_25 = p2;
		int32_t L_26 = m11167(NULL, L_25, &m11167_MI);
		int32_t L_27 = p4;
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)((int32_t)L_26-(int32_t)L_27)))))
		{
			goto IL_009f;
		}
	}

IL_008f:
	{
		t2* L_28 = m7847(NULL, (t2*) &_stringLiteral2600, &m7847_MI);
		t563 * L_29 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_29, L_28, &m2910_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009f:
	{
		return;
	}
}
extern "C" int32_t m11168 (t9 * __this , t121 * p0, MethodInfo* method)
{
	typedef int32_t (*m11168_ftn) (t121 *);
	static m11168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11168_ftn)il2cpp_codegen_resolve_icall ("System.Buffer::ByteLengthInternal(System.Array)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m11169 (t9 * __this , t121 * p0, int32_t p1, t121 * p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	typedef bool (*m11169_ftn) (t121 *, int32_t, t121 *, int32_t, int32_t);
	static m11169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11169_ftn)il2cpp_codegen_resolve_icall ("System.Buffer::BlockCopyInternal(System.Array,System.Int32,System.Array,System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
#include "t2099.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2099_TI;
#include "t2099MD.h"

#include "t1341.h"
extern TypeInfo t303_TI;
extern TypeInfo t1341_TI;
#include "t1341MD.h"
extern MethodInfo m11173_MI;
extern MethodInfo m5714_MI;
extern MethodInfo m2739_MI;


extern MethodInfo m11170_MI;
extern "C" void m11170 (t2099 * __this, t2* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = (-1);
		t2* L_1 = p0;
		int32_t L_2 = m2724(L_1, &m2724_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m11171_MI;
extern "C" t9 * m11171 (t2099 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&m11173_MI, __this);
		uint16_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t303_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m11172_MI;
extern "C" void m11172 (t2099 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" uint16_t m11173 (t2099 * __this, MethodInfo* method)
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
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral2601, &m7847_MI);
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_4, L_3, &m5714_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t2* L_5 = (__this->f0);
		int32_t L_6 = (__this->f1);
		uint16_t L_7 = m2739(L_5, L_6, &m2739_MI);
		return L_7;
	}
}
extern MethodInfo m11174_MI;
extern "C" bool m11174 (t2099 * __this, MethodInfo* method)
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
#include "t1371.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1371_TI;
#include "t1371MD.h"

#include "t1370.h"
#include "t729.h"
#include "t298.h"
#include "t1741.h"
#include "t1735.h"
#include "t1740.h"
#include "t1665.h"
#include "t1187.h"
#include "t296.h"
#include "t1732.h"
extern TypeInfo t729_TI;
extern TypeInfo t1741_TI;
extern TypeInfo t1735_TI;
extern TypeInfo t1370_TI;
extern TypeInfo t1740_TI;
extern TypeInfo t1665_TI;
extern TypeInfo t296_TI;
extern TypeInfo t1732_TI;
extern TypeInfo t1549_TI;
extern TypeInfo t1728_TI;
#include "t729MD.h"
#include "t1741MD.h"
#include "t1735MD.h"
#include "t1370MD.h"
#include "t1740MD.h"
#include "t1665MD.h"
#include "t296MD.h"
#include "t1732MD.h"
#include "t1728MD.h"
extern MethodInfo m11531_MI;
extern MethodInfo m10861_MI;
extern MethodInfo m10860_MI;
extern MethodInfo m10863_MI;
extern MethodInfo m11176_MI;
extern MethodInfo m11178_MI;
extern MethodInfo m9090_MI;
extern MethodInfo m9020_MI;
extern MethodInfo m9067_MI;
extern MethodInfo m11180_MI;
extern MethodInfo m11179_MI;
extern MethodInfo m9082_MI;
extern MethodInfo m9050_MI;
extern MethodInfo m8865_MI;
extern MethodInfo m8970_MI;
extern MethodInfo m8944_MI;
extern MethodInfo m11177_MI;
extern MethodInfo m8943_MI;
extern MethodInfo m8942_MI;


extern MethodInfo m11175_MI;
extern "C" void m11175 (t9 * __this , MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = m11531(NULL, &m11531_MI);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_1 = m10861(NULL, &m10861_MI);
		t729 * L_2 = L_1;
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f4 = L_2;
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f3 = L_2;
		goto IL_005c;
	}

IL_0019:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		m10860(NULL, (&V_0), &m10860_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_6 = m10863(NULL, &m10863_MI);
		t729 * L_7 = L_6;
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f4 = L_7;
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f3 = L_7;
		goto IL_005c;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_8 = m10861(NULL, &m10861_MI);
		t729 * L_9 = L_8;
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f4 = L_9;
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f3 = L_9;
	}

IL_005c:
	{
		t729 * L_10 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f3;
		t729 * L_11 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f4;
		m11176(NULL, L_10, L_11, &m11176_MI);
		return;
	}
}
extern "C" void m11176 (t9 * __this , t729 * p0, t729 * p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1371_TI));
		t298 * L_0 = m11178(NULL, 0, &m11178_MI);
		t729 * L_1 = p1;
		t1741 * L_2 = (t1741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1741_TI));
		m9090(L_2, L_0, L_1, &m9090_MI);
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f1 = L_2;
		t1370 * L_3 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f1;
		VirtActionInvoker1< bool >::Invoke(&m9020_MI, ((t1735 *)Castclass(L_3, InitializedTypeInfo(&t1735_TI))), 1);
		t1370 * L_4 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1370_TI));
		t1370 * L_5 = m9067(NULL, L_4, 1, &m9067_MI);
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f1 = L_5;
		t298 * L_6 = m11180(NULL, 0, &m11180_MI);
		t729 * L_7 = p1;
		t1741 * L_8 = (t1741 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1741_TI));
		m9090(L_8, L_6, L_7, &m9090_MI);
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f0 = L_8;
		t1370 * L_9 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f0;
		VirtActionInvoker1< bool >::Invoke(&m9020_MI, ((t1735 *)Castclass(L_9, InitializedTypeInfo(&t1735_TI))), 1);
		t1370 * L_10 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f0;
		t1370 * L_11 = m9067(NULL, L_10, 1, &m9067_MI);
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f0 = L_11;
		t298 * L_12 = m11179(NULL, 0, &m11179_MI);
		t729 * L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1740_TI));
		t1740 * L_14 = (t1740 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1740_TI));
		m9082(L_14, L_12, L_13, &m9082_MI);
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f2 = L_14;
		t1665 * L_15 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1665_TI));
		t1665 * L_16 = m9050(NULL, L_15, &m9050_MI);
		((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f2 = L_16;
		t1370 * L_17 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f0;
		m6896(NULL, L_17, &m6896_MI);
		t1370 * L_18 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f1;
		m6896(NULL, L_18, &m6896_MI);
		t1665 * L_19 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f2;
		m6896(NULL, L_19, &m6896_MI);
		return;
	}
}
extern MethodInfo m5948_MI;
extern "C" t1370 * m5948 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1371_TI));
		t1370 * L_0 = ((t1371_SFs*)InitializedTypeInfo(&t1371_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t298 * m11177 (t9 * __this , t58 p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t298 * V_0 = {0};
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
			t296 * L_4 = (t296 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t296_TI));
			m8865(L_4, L_0, L_1, 0, L_2, 0, ((((int32_t)L_3) == ((int32_t)0))? 1 : 0), &m8865_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1549_TI, e.ex->object.klass))
			goto CATCH_0013;
		throw e;
	}

CATCH_0013:
	{ // begin catch(System.IO.IOException)
		{
			t1732 * L_5 = (t1732 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1732_TI));
			m8970(L_5, &m8970_MI);
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
		t298 * L_6 = V_0;
		return L_6;
	}
}
extern "C" t298 * m11178 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_0 = m8944(NULL, &m8944_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1371_TI));
		t298 * L_2 = m11177(NULL, L_0, 2, L_1, &m11177_MI);
		return L_2;
	}
}
extern "C" t298 * m11179 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_0 = m8943(NULL, &m8943_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1371_TI));
		t298 * L_2 = m11177(NULL, L_0, 1, L_1, &m11177_MI);
		return L_2;
	}
}
extern "C" t298 * m11180 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_0 = m8942(NULL, &m8942_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1371_TI));
		t298 * L_2 = m11177(NULL, L_0, 2, L_1, &m11177_MI);
		return L_2;
	}
}
#include "t2100.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2100_TI;
#include "t2100MD.h"



extern MethodInfo m11181_MI;
extern "C" void m11181 (t2100 * __this, MethodInfo* method)
{
	{
		m5771(__this, &m5771_MI);
		return;
	}
}
#include "t891.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t891_TI;
#include "t891MD.h"

#include "t2101.h"
#include "t2041.h"
#include "t904.h"
#include "t123.h"
#include "t186.h"
#include "t334.h"
#include "t168.h"
#include "t889.h"
#include "t309.h"
#include "t2139.h"
#include "t2122.h"
#include "t270.h"
#include "t1704.h"
#include "t1555.h"
extern TypeInfo t2101_TI;
extern TypeInfo t2041_TI;
extern TypeInfo t904_TI;
extern TypeInfo t184_TI;
extern TypeInfo t906_TI;
extern TypeInfo t2139_TI;
extern TypeInfo t2122_TI;
extern TypeInfo t270_TI;
extern TypeInfo t156_TI;
extern TypeInfo t334_TI;
extern TypeInfo t125_TI;
extern TypeInfo t299_TI;
extern TypeInfo t186_TI;
extern TypeInfo t123_TI;
extern TypeInfo t309_TI;
extern TypeInfo t168_TI;
extern TypeInfo t889_TI;
extern TypeInfo t1704_TI;
extern TypeInfo t1555_TI;
#include "t2101MD.h"
#include "t2014MD.h"
#include "t2041MD.h"
#include "t904MD.h"
#include "t124MD.h"
#include "t2139MD.h"
#include "t160MD.h"
#include "t156MD.h"
#include "t123MD.h"
#include "t575MD.h"
#include "t2122MD.h"
#include "t303MD.h"
#include "t270MD.h"
#include "t334MD.h"
#include "t125MD.h"
#include "t299MD.h"
#include "t186MD.h"
#include "t309MD.h"
#include "t168MD.h"
#include "t889MD.h"
#include "t901MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t2101_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t303_0_0_0;
extern Il2CppType t186_0_0_0;
extern Il2CppType t575_0_0_0;
extern Il2CppType t334_0_0_0;
extern Il2CppType t309_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t299_0_0_0;
extern Il2CppType t889_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t156_0_0_0;
extern Il2CppType t904_0_0_0;
extern Il2CppType t270_0_0_0;
extern Il2CppType t2_0_0_0;
extern MethodInfo m11183_MI;
extern MethodInfo m11184_MI;
extern MethodInfo m10644_MI;
extern MethodInfo m10760_MI;
extern MethodInfo m5829_MI;
extern MethodInfo m7462_MI;
extern MethodInfo m7542_MI;
extern MethodInfo m7567_MI;
extern MethodInfo m11197_MI;
extern MethodInfo m12120_MI;
extern MethodInfo m11783_MI;
extern MethodInfo m7544_MI;
extern MethodInfo m7545_MI;
extern MethodInfo m11573_MI;
extern MethodInfo m7522_MI;
extern MethodInfo m7451_MI;
extern MethodInfo m7450_MI;
extern MethodInfo m4263_MI;
extern MethodInfo m7423_MI;
extern MethodInfo m7422_MI;
extern MethodInfo m7209_MI;
extern MethodInfo m7207_MI;
extern MethodInfo m12121_MI;
extern MethodInfo m11566_MI;
extern MethodInfo m7320_MI;
extern MethodInfo m12122_MI;
extern MethodInfo m11447_MI;
extern MethodInfo m12123_MI;
extern MethodInfo m7534_MI;
extern MethodInfo m7530_MI;
extern MethodInfo m7539_MI;
extern MethodInfo m7538_MI;
extern MethodInfo m7536_MI;
extern MethodInfo m7531_MI;
extern MethodInfo m7532_MI;
extern MethodInfo m7500_MI;
extern MethodInfo m7535_MI;
extern MethodInfo m7537_MI;
extern MethodInfo m7533_MI;
extern MethodInfo m12124_MI;
extern MethodInfo m7541_MI;
extern MethodInfo m7454_MI;
extern MethodInfo m12125_MI;
extern MethodInfo m7524_MI;
extern MethodInfo m7261_MI;
extern MethodInfo m11273_MI;
extern MethodInfo m12126_MI;
extern MethodInfo m7526_MI;
extern MethodInfo m7091_MI;
extern MethodInfo m6954_MI;
extern MethodInfo m11976_MI;
extern MethodInfo m7461_MI;
extern MethodInfo m7528_MI;
extern MethodInfo m7130_MI;
extern MethodInfo m7128_MI;
extern MethodInfo m11303_MI;
extern MethodInfo m12127_MI;
extern MethodInfo m7523_MI;
extern MethodInfo m7233_MI;
extern MethodInfo m12128_MI;
extern MethodInfo m7540_MI;
extern MethodInfo m7426_MI;
extern MethodInfo m12129_MI;
extern MethodInfo m11333_MI;
extern MethodInfo m12130_MI;
extern MethodInfo m673_MI;
extern MethodInfo m7525_MI;
extern MethodInfo m7288_MI;
extern MethodInfo m11347_MI;
extern MethodInfo m12131_MI;
extern MethodInfo m7527_MI;
extern MethodInfo m7158_MI;
extern MethodInfo m12132_MI;
extern MethodInfo m7529_MI;
extern MethodInfo m7181_MI;
extern MethodInfo m11375_MI;
extern MethodInfo m12133_MI;
extern MethodInfo m6970_MI;
extern MethodInfo m8665_MI;
extern MethodInfo m8664_MI;
extern MethodInfo m11377_MI;
extern MethodInfo m12134_MI;


extern MethodInfo m11182_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m11182 (t9 * __this , MethodInfo* method)
{
	static bool m11182_init;
	if (!m11182_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m11182_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2101_TI));
		t2101 * L_0 = ((t2101_SFs*)InitializedTypeInfo(&t2101_TI)->static_fields)->f0;
		((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f0 = L_0;
		t152* L_1 = ((t152*)SZArrayNew(t152_TI_var, ((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_1, L_2);
		*((t126 **)(t126 **)SZArrayLdElema(L_1, 1)) = (t126 *)L_2;
		t152* L_3 = L_1;
		t126 * L_4 = m329(NULL, LoadTypeToken(&t2101_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_3, L_4);
		*((t126 **)(t126 **)SZArrayLdElema(L_3, 2)) = (t126 *)L_4;
		t152* L_5 = L_3;
		t126 * L_6 = m329(NULL, LoadTypeToken(&t124_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_5, L_6);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, 3)) = (t126 *)L_6;
		t152* L_7 = L_5;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t303_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_7, L_8);
		*((t126 **)(t126 **)SZArrayLdElema(L_7, 4)) = (t126 *)L_8;
		t152* L_9 = L_7;
		t126 * L_10 = m329(NULL, LoadTypeToken(&t186_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_9, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_9, 5)) = (t126 *)L_10;
		t152* L_11 = L_9;
		t126 * L_12 = m329(NULL, LoadTypeToken(&t575_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_11, L_12);
		*((t126 **)(t126 **)SZArrayLdElema(L_11, 6)) = (t126 *)L_12;
		t152* L_13 = L_11;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t334_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_13, L_14);
		*((t126 **)(t126 **)SZArrayLdElema(L_13, 7)) = (t126 *)L_14;
		t152* L_15 = L_13;
		t126 * L_16 = m329(NULL, LoadTypeToken(&t309_0_0_0), &m329_MI);
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
		t126 * L_22 = m329(NULL, LoadTypeToken(&t299_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_21, L_22);
		*((t126 **)(t126 **)SZArrayLdElema(L_21, ((int32_t)11))) = (t126 *)L_22;
		t152* L_23 = L_21;
		t126 * L_24 = m329(NULL, LoadTypeToken(&t889_0_0_0), &m329_MI);
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
		t126 * L_30 = m329(NULL, LoadTypeToken(&t904_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_29, L_30);
		*((t126 **)(t126 **)SZArrayLdElema(L_29, ((int32_t)15))) = (t126 *)L_30;
		t152* L_31 = L_29;
		t126 * L_32 = m329(NULL, LoadTypeToken(&t270_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_31, L_32);
		*((t126 **)(t126 **)SZArrayLdElema(L_31, ((int32_t)16))) = (t126 *)L_32;
		t152* L_33 = L_31;
		t126 * L_34 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_33, L_34);
		*((t126 **)(t126 **)SZArrayLdElema(L_33, ((int32_t)18))) = (t126 *)L_34;
		((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1 = L_33;
		return;
	}
}
extern "C" t730* m11183 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	typedef t730* (*m11183_ftn) (t2*, bool);
	static m11183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11183_ftn)il2cpp_codegen_resolve_icall ("System.Convert::InternalFromBase64String(System.String,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m6943_MI;
extern TypeInfo* t730_TI_var;
extern "C" t730* m6943 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m6943_init;
	if (!m6943_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m6943_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1076, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return ((t730*)SZArrayNew(t730_TI_var, 0));
	}

IL_001d:
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t730* L_5 = m11183(NULL, L_4, 1, &m11183_MI);
		return L_5;
	}
}
extern MethodInfo m4323_MI;
extern "C" t2* m4323 (t9 * __this , t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2602, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t730* L_2 = p0;
		t730* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t2* L_4 = m11184(NULL, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m11184_MI);
		return L_4;
	}
}
extern "C" t2* m11184 (t9 * __this , t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t730* V_0 = {0};
	{
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2602, &m339_MI);
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
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_4, (t2*) &_stringLiteral2603, &m5722_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		int32_t L_5 = p1;
		t730* L_6 = p0;
		int32_t L_7 = p2;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)L_7)))))
		{
			goto IL_0034;
		}
	}
	{
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_8, (t2*) &_stringLiteral2604, &m5722_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		t730* L_9 = p0;
		int32_t L_10 = p1;
		int32_t L_11 = p2;
		t730* L_12 = m10644(NULL, L_9, L_10, L_11, &m10644_MI);
		V_0 = L_12;
		t2041 * L_13 = (t2041 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2041_TI));
		m10760(L_13, &m10760_MI);
		t730* L_14 = V_0;
		t2* L_15 = (t2*)VirtFuncInvoker1< t2*, t730* >::Invoke(&m5829_MI, L_13, L_14);
		return L_15;
	}
}
extern MethodInfo m11185_MI;
extern "C" bool m11185 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11186_MI;
extern "C" bool m11186 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7462(&L_1, 0, &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7542(NULL, L_0, L_1, &m7542_MI);
		return L_2;
	}
}
extern MethodInfo m11187_MI;
extern "C" bool m11187 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return ((((int32_t)((((double)L_0) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11188_MI;
extern "C" bool m11188 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return ((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11189_MI;
extern "C" bool m11189 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11190_MI;
extern "C" bool m11190 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11191_MI;
extern "C" bool m11191 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return ((((int32_t)((((int32_t)(((int32_t)L_0))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11192_MI;
extern "C" bool m11192 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11193_MI;
extern "C" bool m11193 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		bool L_2 = m7567(NULL, L_1, &m7567_MI);
		return L_2;
	}
}
extern MethodInfo m11194_MI;
extern "C" bool m11194 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11195_MI;
extern "C" bool m11195 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11196_MI;
extern "C" bool m11196 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4317_MI;
extern "C" bool m4317 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		bool L_2 = m11197(NULL, L_1, (t9 *)NULL, &m11197_MI);
		return L_2;
	}
}
extern "C" bool m11197 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12120_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11198_MI;
extern "C" uint8_t m11198 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11199_MI;
extern "C" uint8_t m11199 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2605, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11200_MI;
extern "C" uint8_t m11200 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7462(&L_1, ((int32_t)255), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, 0, &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2606, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		uint8_t L_10 = m7522(NULL, L_9, &m7522_MI);
		return L_10;
	}
}
extern MethodInfo m11201_MI;
extern "C" uint8_t m11201 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2606, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		bool L_5 = m7451(NULL, L_4, &m7451_MI);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m7450(NULL, L_6, &m7450_MI);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		t2* L_8 = m7847(NULL, (t2*) &_stringLiteral2607, &m7847_MI);
		t2139 * L_9 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_9, L_8, &m11783_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0048:
	{
		double L_10 = p0;
		double L_11 = round(L_10);
		return (((uint8_t)L_11));
	}
}
extern MethodInfo m11202_MI;
extern "C" uint8_t m11202 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2608, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		bool L_5 = m7423(NULL, L_4, &m7423_MI);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = p0;
		bool L_7 = m7422(NULL, L_6, &m7422_MI);
		if (!L_7)
		{
			goto IL_0040;
		}
	}

IL_0030:
	{
		t2* L_8 = m7847(NULL, (t2*) &_stringLiteral2609, &m7847_MI);
		t2139 * L_9 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_9, L_8, &m11783_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		float L_10 = p0;
		double L_11 = round((((double)L_10)));
		return (((uint8_t)L_11));
	}
}
extern MethodInfo m11203_MI;
extern "C" uint8_t m11203 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2606, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11204_MI;
extern "C" uint8_t m11204 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2606, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11205_MI;
extern "C" uint8_t m11205 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2610, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11206_MI;
extern "C" uint8_t m11206 (t9 * __this , int16_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2606, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int16_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11207_MI;
extern "C" uint8_t m11207 (t9 * __this , t2* p0, MethodInfo* method)
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
		uint8_t L_2 = m7209(NULL, L_1, &m7209_MI);
		return L_2;
	}
}
extern MethodInfo m11208_MI;
extern "C" uint8_t m11208 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint8_t L_3 = m7207(NULL, L_1, L_2, &m7207_MI);
		return L_3;
	}
}
extern MethodInfo m11209_MI;
extern "C" uint8_t m11209 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2605, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11210_MI;
extern "C" uint8_t m11210 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)255)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2605, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11211_MI;
extern "C" uint8_t m11211 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2605, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11212_MI;
extern "C" uint8_t m11212 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint8_t L_3 = (uint8_t)InterfaceFuncInvoker1< uint8_t, t9 * >::Invoke(&m12121_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m6945_MI;
extern "C" uint16_t m6945 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint16_t)L_0));
	}
}
extern MethodInfo m11213_MI;
extern "C" uint16_t m11213 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2611, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11214_MI;
extern "C" uint16_t m11214 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2611, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11215_MI;
extern "C" uint16_t m11215 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11216_MI;
extern "C" uint16_t m11216 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2613, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11217_MI;
extern "C" uint16_t m11217 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2613, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11218_MI;
extern "C" uint16_t m11218 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		uint16_t L_1 = m7320(NULL, L_0, &m7320_MI);
		return L_1;
	}
}
extern MethodInfo m11219_MI;
extern "C" uint16_t m11219 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2614, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11220_MI;
extern "C" uint16_t m11220 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)65535)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2614, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11221_MI;
extern "C" uint16_t m11221 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11222_MI;
extern "C" uint16_t m11222 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint16_t L_3 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12122_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11223_MI;
extern "C" t270  m11223 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_1 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		return L_1;
	}

IL_0009:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_4 = m11447(NULL, L_2, L_3, &m11447_MI);
		return L_4;
	}
}
extern MethodInfo m11224_MI;
extern "C" t270  m11224 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11225_MI;
extern "C" t270  m11225 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11226_MI;
extern "C" t270  m11226 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11227_MI;
extern "C" t270  m11227 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11228_MI;
extern "C" t270  m11228 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_1 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		return L_1;
	}

IL_0009:
	{
		t9 * L_2 = p0;
		t9 * L_3 = p1;
		t270  L_4 = (t270 )InterfaceFuncInvoker1< t270 , t9 * >::Invoke(&m12123_MI, ((t9 *)Castclass(L_2, InitializedTypeInfo(&t184_TI))), L_3);
		return L_4;
	}
}
extern MethodInfo m11229_MI;
extern "C" t270  m11229 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11230_MI;
extern "C" t270  m11230 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11231_MI;
extern "C" t270  m11231 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11232_MI;
extern "C" t270  m11232 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_0, (t2*) &_stringLiteral2612, &m11566_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11233_MI;
extern "C" t904  m11233 (t9 * __this , bool p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7534(NULL, G_B3_0, &m7534_MI);
		return L_1;
	}
}
extern MethodInfo m11234_MI;
extern "C" t904  m11234 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7530(NULL, L_0, &m7530_MI);
		return L_1;
	}
}
extern MethodInfo m11235_MI;
extern "C" t904  m11235 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7539(NULL, L_0, &m7539_MI);
		return L_1;
	}
}
extern MethodInfo m11236_MI;
extern "C" t904  m11236 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7538(NULL, L_0, &m7538_MI);
		return L_1;
	}
}
extern MethodInfo m11237_MI;
extern "C" t904  m11237 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7534(NULL, L_0, &m7534_MI);
		return L_1;
	}
}
extern MethodInfo m11238_MI;
extern "C" t904  m11238 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7536(NULL, L_0, &m7536_MI);
		return L_1;
	}
}
extern MethodInfo m11239_MI;
extern "C" t904  m11239 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7531(NULL, L_0, &m7531_MI);
		return L_1;
	}
}
extern MethodInfo m11240_MI;
extern "C" t904  m11240 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7532(NULL, L_0, &m7532_MI);
		return L_1;
	}
}
extern MethodInfo m11241_MI;
extern "C" t904  m11241 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t904  L_1 = {0};
		m7462(&L_1, 0, &m7462_MI);
		return L_1;
	}

IL_000a:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_4 = m7500(NULL, L_2, L_3, &m7500_MI);
		return L_4;
	}
}
extern MethodInfo m11242_MI;
extern "C" t904  m11242 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7535(NULL, L_0, &m7535_MI);
		return L_1;
	}
}
extern MethodInfo m11243_MI;
extern "C" t904  m11243 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7537(NULL, L_0, &m7537_MI);
		return L_1;
	}
}
extern MethodInfo m11244_MI;
extern "C" t904  m11244 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7533(NULL, L_0, &m7533_MI);
		return L_1;
	}
}
extern MethodInfo m11245_MI;
extern "C" t904  m11245 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t904  L_1 = {0};
		m7462(&L_1, 0, &m7462_MI);
		return L_1;
	}

IL_000a:
	{
		t9 * L_2 = p0;
		t9 * L_3 = p1;
		t904  L_4 = (t904 )InterfaceFuncInvoker1< t904 , t9 * >::Invoke(&m12124_MI, ((t9 *)Castclass(L_2, InitializedTypeInfo(&t184_TI))), L_3);
		return L_4;
	}
}
extern MethodInfo m11246_MI;
extern "C" double m11246 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11247_MI;
extern "C" double m11247 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11248_MI;
extern "C" double m11248 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		double L_1 = m7541(NULL, L_0, &m7541_MI);
		return L_1;
	}
}
extern MethodInfo m11249_MI;
extern "C" double m11249 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11250_MI;
extern "C" double m11250 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11251_MI;
extern "C" double m11251 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11252_MI;
extern "C" double m11252 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11253_MI;
extern "C" double m11253 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11254_MI;
extern "C" double m11254 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11255_MI;
extern "C" double m11255 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		double L_3 = m7454(NULL, L_1, L_2, &m7454_MI);
		return L_3;
	}
}
extern MethodInfo m11256_MI;
extern "C" double m11256 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((double)(((double)L_0))));
	}
}
extern MethodInfo m11257_MI;
extern "C" double m11257 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return (((double)(((double)L_0))));
	}
}
extern MethodInfo m11258_MI;
extern "C" double m11258 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m4376_MI;
extern "C" double m4376 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		double L_3 = (double)InterfaceFuncInvoker1< double, t9 * >::Invoke(&m12125_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11259_MI;
extern "C" int16_t m11259 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11260_MI;
extern "C" int16_t m11260 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11261_MI;
extern "C" int16_t m11261 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2615, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11262_MI;
extern "C" int16_t m11262 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7462(&L_1, ((int32_t)32767), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, ((int32_t)-32768), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2616, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		int16_t L_10 = m7524(NULL, L_9, &m7524_MI);
		return L_10;
	}
}
extern MethodInfo m11263_MI;
extern "C" int16_t m11263 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2616, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int16_t)L_5));
	}
}
extern MethodInfo m11264_MI;
extern "C" int16_t m11264 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2616, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int16_t)L_5));
	}
}
extern MethodInfo m11265_MI;
extern "C" int16_t m11265 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2616, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		int32_t L_4 = p0;
		return (((int16_t)L_4));
	}
}
extern MethodInfo m11266_MI;
extern "C" int16_t m11266 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2616, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = p0;
		return (((int16_t)L_4));
	}
}
extern MethodInfo m11267_MI;
extern "C" int16_t m11267 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int16_t)L_0));
	}
}
extern MethodInfo m11268_MI;
extern "C" int16_t m11268 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m6893_MI;
extern "C" int16_t m6893 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		int16_t L_3 = m7261(NULL, L_1, L_2, &m7261_MI);
		return L_3;
	}
}
extern MethodInfo m11269_MI;
extern "C" int16_t m11269 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((((int64_t)(((uint64_t)L_0))) <= ((int64_t)(((int64_t)((int32_t)32767))))))
		{
			goto IL_001a;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2615, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001a:
	{
		uint32_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11270_MI;
extern "C" int16_t m11270 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)32767)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2615, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11271_MI;
extern "C" int16_t m11271 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2615, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11272_MI;
extern "C" int16_t m11272 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int16_t L_2 = m11273(NULL, L_1, (t9 *)NULL, &m11273_MI);
		return L_2;
	}
}
extern "C" int16_t m11273 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int16_t L_3 = (int16_t)InterfaceFuncInvoker1< int16_t, t9 * >::Invoke(&m12126_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11274_MI;
extern "C" int32_t m11274 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11275_MI;
extern "C" int32_t m11275 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11276_MI;
extern "C" int32_t m11276 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11277_MI;
extern "C" int32_t m11277 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7462(&L_1, ((int32_t)2147483647), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, ((int32_t)-2147483648), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2617, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		int32_t L_10 = m7526(NULL, L_9, &m7526_MI);
		return L_10;
	}
}
extern MethodInfo m11278_MI;
extern "C" int32_t m11278 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2617, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
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
extern MethodInfo m11279_MI;
extern "C" int32_t m11279 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2617, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
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
extern MethodInfo m11280_MI;
extern "C" int32_t m11280 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2617, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = p0;
		return (((int32_t)L_4));
	}
}
extern MethodInfo m11281_MI;
extern "C" int32_t m11281 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int32_t)L_0));
	}
}
extern MethodInfo m11282_MI;
extern "C" int32_t m11282 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11283_MI;
extern "C" int32_t m11283 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		int32_t L_3 = m7091(NULL, L_1, L_2, &m7091_MI);
		return L_3;
	}
}
extern MethodInfo m11284_MI;
extern "C" int32_t m11284 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2618, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11285_MI;
extern "C" int32_t m11285 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)2147483647)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2618, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((int32_t)L_3));
	}
}
extern MethodInfo m11286_MI;
extern "C" int32_t m11286 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m4314_MI;
extern "C" int32_t m4314 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int32_t L_2 = m6954(NULL, L_1, (t9 *)NULL, &m6954_MI);
		return L_2;
	}
}
extern "C" int32_t m6954 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11976_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11287_MI;
extern "C" int64_t m11287 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11288_MI;
extern "C" int64_t m11288 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11289_MI;
extern "C" int64_t m11289 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11290_MI;
extern "C" int64_t m11290 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7461(&L_1, (-1), ((int32_t)2147483647), 0, 0, 0, &m7461_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7461(&L_4, 0, ((int32_t)-2147483648), 0, (-1), 0, &m7461_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_003c;
		}
	}

IL_002c:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2619, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003c:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		int64_t L_10 = m7528(NULL, L_9, &m7528_MI);
		return L_10;
	}
}
extern MethodInfo m11291_MI;
extern "C" int64_t m11291 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2619, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int64_t)L_5));
	}
}
extern MethodInfo m11292_MI;
extern "C" int64_t m11292 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2619, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int64_t)L_5));
	}
}
extern MethodInfo m11293_MI;
extern "C" int64_t m11293 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11294_MI;
extern "C" int64_t m11294 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11295_MI;
extern "C" int64_t m11295 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11296_MI;
extern "C" int64_t m11296 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11297_MI;
extern "C" int64_t m11297 (t9 * __this , t2* p0, MethodInfo* method)
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
		int64_t L_2 = m7130(NULL, L_1, &m7130_MI);
		return L_2;
	}
}
extern MethodInfo m11298_MI;
extern "C" int64_t m11298 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		int64_t L_3 = m7128(NULL, L_1, L_2, &m7128_MI);
		return L_3;
	}
}
extern MethodInfo m11299_MI;
extern "C" int64_t m11299 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11300_MI;
extern "C" int64_t m11300 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_001c;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2620, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001c:
	{
		uint64_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11301_MI;
extern "C" int64_t m11301 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11302_MI;
extern "C" int64_t m11302 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int64_t L_2 = m11303(NULL, L_1, (t9 *)NULL, &m11303_MI);
		return L_2;
	}
}
extern "C" int64_t m11303 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int64_t L_3 = (int64_t)InterfaceFuncInvoker1< int64_t, t9 * >::Invoke(&m12127_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11304_MI;
extern "C" int8_t m11304 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11305_MI;
extern "C" int8_t m11305 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2621, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint8_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11306_MI;
extern "C" int8_t m11306 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2621, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11307_MI;
extern "C" int8_t m11307 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7462(&L_1, ((int32_t)127), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, ((int32_t)-128), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}

IL_001e:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2622, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		int8_t L_10 = m7523(NULL, L_9, &m7523_MI);
		return L_10;
	}
}
extern MethodInfo m11308_MI;
extern "C" int8_t m11308 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2622, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int8_t)L_5));
	}
}
extern MethodInfo m11309_MI;
extern "C" int8_t m11309 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2623, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int8_t)L_5));
	}
}
extern MethodInfo m11310_MI;
extern "C" int8_t m11310 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2622, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11311_MI;
extern "C" int8_t m11311 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2622, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int64_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11312_MI;
extern "C" int8_t m11312 (t9 * __this , int16_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2622, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int16_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11313_MI;
extern "C" int8_t m11313 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral606, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		int8_t L_4 = m7233(NULL, L_2, L_3, &m7233_MI);
		return L_4;
	}
}
extern MethodInfo m11314_MI;
extern "C" int8_t m11314 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((((int64_t)(((uint64_t)L_0))) <= ((int64_t)(((int64_t)((int32_t)127))))))
		{
			goto IL_0017;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2621, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		uint32_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11315_MI;
extern "C" int8_t m11315 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)127)))))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2621, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		uint64_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11316_MI;
extern "C" int8_t m11316 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2621, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11317_MI;
extern "C" int8_t m11317 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int8_t L_3 = (int8_t)InterfaceFuncInvoker1< int8_t, t9 * >::Invoke(&m12128_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11318_MI;
extern "C" float m11318 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11319_MI;
extern "C" float m11319 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11320_MI;
extern "C" float m11320 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		float L_1 = m7540(NULL, L_0, &m7540_MI);
		return L_1;
	}
}
extern MethodInfo m11321_MI;
extern "C" float m11321 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11322_MI;
extern "C" float m11322 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11323_MI;
extern "C" float m11323 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11324_MI;
extern "C" float m11324 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11325_MI;
extern "C" float m11325 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11326_MI;
extern "C" float m11326 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11327_MI;
extern "C" float m11327 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		float L_3 = m7426(NULL, L_1, L_2, &m7426_MI);
		return L_3;
	}
}
extern MethodInfo m11328_MI;
extern "C" float m11328 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((float)(((double)L_0))));
	}
}
extern MethodInfo m11329_MI;
extern "C" float m11329 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return (((float)(((double)L_0))));
	}
}
extern MethodInfo m11330_MI;
extern "C" float m11330 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11331_MI;
extern "C" float m11331 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		float L_3 = (float)InterfaceFuncInvoker1< float, t9 * >::Invoke(&m12129_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11332_MI;
extern "C" t2* m11332 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t2* L_1 = m11333(NULL, L_0, (t9 *)NULL, &m11333_MI);
		return L_1;
	}
}
extern "C" t2* m11333 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		t2* L_3 = (t2*)InterfaceFuncInvoker1< t2*, t9 * >::Invoke(&m12130_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
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
extern MethodInfo m11334_MI;
extern "C" uint16_t m11334 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11335_MI;
extern "C" uint16_t m11335 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11336_MI;
extern "C" uint16_t m11336 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11337_MI;
extern "C" uint16_t m11337 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7462(&L_1, ((int32_t)65535), &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, 0, &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2624, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		uint16_t L_10 = m7525(NULL, L_9, &m7525_MI);
		return L_10;
	}
}
extern MethodInfo m11338_MI;
extern "C" uint16_t m11338 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2624, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint16_t)L_5));
	}
}
extern MethodInfo m11339_MI;
extern "C" uint16_t m11339 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2624, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint16_t)L_5));
	}
}
extern MethodInfo m11340_MI;
extern "C" uint16_t m11340 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2624, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11341_MI;
extern "C" uint16_t m11341 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2624, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11342_MI;
extern "C" uint16_t m11342 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2625, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11343_MI;
extern "C" uint16_t m11343 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2625, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11344_MI;
extern "C" uint16_t m11344 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint16_t L_3 = m7288(NULL, L_1, L_2, &m7288_MI);
		return L_3;
	}
}
extern MethodInfo m11345_MI;
extern "C" uint16_t m11345 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2626, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11346_MI;
extern "C" uint16_t m11346 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)65535)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2626, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m4315_MI;
extern "C" uint16_t m4315 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		uint16_t L_2 = m11347(NULL, L_1, (t9 *)NULL, &m11347_MI);
		return L_2;
	}
}
extern "C" uint16_t m11347 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint16_t L_3 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12131_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11348_MI;
extern "C" uint32_t m11348 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11349_MI;
extern "C" uint32_t m11349 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11350_MI;
extern "C" uint32_t m11350 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11351_MI;
extern "C" uint32_t m11351 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7461(&L_1, (-1), 0, 0, 0, 0, &m7461_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, 0, &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2627, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		uint32_t L_10 = m7527(NULL, L_9, &m7527_MI);
		return L_10;
	}
}
extern MethodInfo m11352_MI;
extern "C" uint32_t m11352 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2627, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint32_t)L_5));
	}
}
extern MethodInfo m11353_MI;
extern "C" uint32_t m11353 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2627, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint32_t)L_5));
	}
}
extern MethodInfo m11354_MI;
extern "C" uint32_t m11354 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2628, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int32_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11355_MI;
extern "C" uint32_t m11355 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2627, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int64_t L_4 = p0;
		return (((uint32_t)L_4));
	}
}
extern MethodInfo m11356_MI;
extern "C" uint32_t m11356 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2628, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int8_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11357_MI;
extern "C" uint32_t m11357 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2628, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int16_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11358_MI;
extern "C" uint32_t m11358 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint32_t L_3 = m7158(NULL, L_1, L_2, &m7158_MI);
		return L_3;
	}
}
extern MethodInfo m11359_MI;
extern "C" uint32_t m11359 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2629, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint64_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11360_MI;
extern "C" uint32_t m11360 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11361_MI;
extern "C" uint32_t m11361 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint32_t L_3 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t9 * >::Invoke(&m12132_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11362_MI;
extern "C" uint64_t m11362 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11363_MI;
extern "C" uint64_t m11363 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11364_MI;
extern "C" uint64_t m11364 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11365_MI;
extern "C" uint64_t m11365 (t9 * __this , t904  p0, MethodInfo* method)
{
	{
		t904  L_0 = p0;
		t904  L_1 = {0};
		m7461(&L_1, (-1), (-1), 0, 0, 0, &m7461_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_2 = m7544(NULL, L_0, L_1, &m7544_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t904  L_3 = p0;
		t904  L_4 = {0};
		m7462(&L_4, 0, &m7462_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_5 = m7545(NULL, L_3, L_4, &m7545_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral2630, &m7847_MI);
		t2139 * L_7 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_7, L_6, &m11783_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t904  L_8 = p0;
		t904  L_9 = m11573(NULL, L_8, &m11573_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		uint64_t L_10 = m7529(NULL, L_9, &m7529_MI);
		return L_10;
	}
}
extern MethodInfo m11366_MI;
extern "C" uint64_t m11366 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2630, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint64_t)L_5));
	}
}
extern MethodInfo m11367_MI;
extern "C" uint64_t m11367 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2630, &m7847_MI);
		t2139 * L_3 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_3, L_2, &m11783_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint64_t)L_5));
	}
}
extern MethodInfo m11368_MI;
extern "C" uint64_t m11368 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2631, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		return (((int64_t)L_3));
	}
}
extern MethodInfo m11369_MI;
extern "C" uint64_t m11369 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2631, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int64_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11370_MI;
extern "C" uint64_t m11370 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t2139 * L_1 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_1, (t2*) &_stringLiteral2631, &m11783_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0010:
	{
		int8_t L_2 = p0;
		return (((int64_t)L_2));
	}
}
extern MethodInfo m11371_MI;
extern "C" uint64_t m11371 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2631, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((int64_t)L_3));
	}
}
extern MethodInfo m11372_MI;
extern "C" uint64_t m11372 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint64_t L_3 = m7181(NULL, L_1, L_2, &m7181_MI);
		return L_3;
	}
}
extern MethodInfo m11373_MI;
extern "C" uint64_t m11373 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11374_MI;
extern "C" uint64_t m11374 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m4316_MI;
extern "C" uint64_t m4316 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		uint64_t L_2 = m11375(NULL, L_1, (t9 *)NULL, &m11375_MI);
		return L_2;
	}
}
extern "C" uint64_t m11375 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint64_t L_3 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t9 * >::Invoke(&m12133_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11376_MI;
extern "C" t9 * m11376 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	t901 * V_0 = {0};
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
		m339(L_2, (t2*) &_stringLiteral2632, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_3 = m6970(NULL, &m6970_MI);
		V_0 = L_3;
		t126 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t270_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_4) == ((t9*)(t126 *)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		t901 * L_6 = V_0;
		t1704 * L_7 = (t1704 *)VirtFuncInvoker0< t1704 * >::Invoke(&m8665_MI, L_6);
		V_1 = L_7;
		goto IL_0034;
	}

IL_002d:
	{
		t901 * L_8 = V_0;
		t1555 * L_9 = (t1555 *)VirtFuncInvoker0< t1555 * >::Invoke(&m8664_MI, L_8);
		V_1 = L_9;
	}

IL_0034:
	{
		t9 * L_10 = p0;
		t126 * L_11 = p1;
		t9 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t9 * L_13 = m11377(NULL, L_10, L_11, L_12, 1, &m11377_MI);
		return L_13;
	}
}
extern "C" t9 * m11377 (t9 * __this , t9 * p0, t126 * p1, t9 * p2, bool p3, MethodInfo* method)
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
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7762_MI, L_2);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		t2122 * L_4 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_4, (t2*) &_stringLiteral2633, &m11566_MI);
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
		t2122 * L_6 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_6, (t2*) &_stringLiteral2634, &m11566_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		t9 * L_7 = p0;
		t126 * L_8 = m2511(L_7, &m2511_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_14 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_15 = 0;
		if ((!(((t9*)(t126 *)L_13) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_14, L_15))))))
		{
			goto IL_0056;
		}
	}
	{
		t132 * L_16 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11144(L_16, &m11144_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0056:
	{
		t126 * L_17 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_18 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_22 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_23 = 2;
		if ((!(((t9*)(t126 *)L_21) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_22, L_23))))))
		{
			goto IL_0077;
		}
	}
	{
		t2122 * L_24 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_24, (t2*) &_stringLiteral2635, &m11566_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0077:
	{
		t126 * L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_26 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_27 = 3;
		if ((!(((t9*)(t126 *)L_25) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_26, L_27))))))
		{
			goto IL_008e;
		}
	}
	{
		t9 * L_28 = V_0;
		t9 * L_29 = p2;
		bool L_30 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12120_MI, L_28, L_29);
		bool L_31 = L_30;
		t9 * L_32 = Box(InitializedTypeInfo(&t124_TI), &L_31);
		return L_32;
	}

IL_008e:
	{
		t126 * L_33 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_34 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_35 = 4;
		if ((!(((t9*)(t126 *)L_33) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_34, L_35))))))
		{
			goto IL_00a5;
		}
	}
	{
		t9 * L_36 = V_0;
		t9 * L_37 = p2;
		uint16_t L_38 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12122_MI, L_36, L_37);
		uint16_t L_39 = L_38;
		t9 * L_40 = Box(InitializedTypeInfo(&t303_TI), &L_39);
		return L_40;
	}

IL_00a5:
	{
		t126 * L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_42 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_43 = 5;
		if ((!(((t9*)(t126 *)L_41) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_42, L_43))))))
		{
			goto IL_00bc;
		}
	}
	{
		t9 * L_44 = V_0;
		t9 * L_45 = p2;
		int8_t L_46 = (int8_t)InterfaceFuncInvoker1< int8_t, t9 * >::Invoke(&m12128_MI, L_44, L_45);
		int8_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t186_TI), &L_47);
		return L_48;
	}

IL_00bc:
	{
		t126 * L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_50 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_51 = 6;
		if ((!(((t9*)(t126 *)L_49) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_50, L_51))))))
		{
			goto IL_00d3;
		}
	}
	{
		t9 * L_52 = V_0;
		t9 * L_53 = p2;
		uint8_t L_54 = (uint8_t)InterfaceFuncInvoker1< uint8_t, t9 * >::Invoke(&m12121_MI, L_52, L_53);
		uint8_t L_55 = L_54;
		t9 * L_56 = Box(InitializedTypeInfo(&t575_TI), &L_55);
		return L_56;
	}

IL_00d3:
	{
		t126 * L_57 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_58 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_59 = 7;
		if ((!(((t9*)(t126 *)L_57) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_58, L_59))))))
		{
			goto IL_00ea;
		}
	}
	{
		t9 * L_60 = V_0;
		t9 * L_61 = p2;
		int16_t L_62 = (int16_t)InterfaceFuncInvoker1< int16_t, t9 * >::Invoke(&m12126_MI, L_60, L_61);
		int16_t L_63 = L_62;
		t9 * L_64 = Box(InitializedTypeInfo(&t334_TI), &L_63);
		return L_64;
	}

IL_00ea:
	{
		t126 * L_65 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_66 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_67 = 8;
		if ((!(((t9*)(t126 *)L_65) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_66, L_67))))))
		{
			goto IL_0101;
		}
	}
	{
		t9 * L_68 = V_0;
		t9 * L_69 = p2;
		uint16_t L_70 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12131_MI, L_68, L_69);
		uint16_t L_71 = L_70;
		t9 * L_72 = Box(InitializedTypeInfo(&t309_TI), &L_71);
		return L_72;
	}

IL_0101:
	{
		t126 * L_73 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_74 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_75 = ((int32_t)9);
		if ((!(((t9*)(t126 *)L_73) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_74, L_75))))))
		{
			goto IL_0119;
		}
	}
	{
		t9 * L_76 = V_0;
		t9 * L_77 = p2;
		int32_t L_78 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11976_MI, L_76, L_77);
		int32_t L_79 = L_78;
		t9 * L_80 = Box(InitializedTypeInfo(&t125_TI), &L_79);
		return L_80;
	}

IL_0119:
	{
		t126 * L_81 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_82 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_83 = ((int32_t)10);
		if ((!(((t9*)(t126 *)L_81) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_82, L_83))))))
		{
			goto IL_0131;
		}
	}
	{
		t9 * L_84 = V_0;
		t9 * L_85 = p2;
		uint32_t L_86 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t9 * >::Invoke(&m12132_MI, L_84, L_85);
		uint32_t L_87 = L_86;
		t9 * L_88 = Box(InitializedTypeInfo(&t168_TI), &L_87);
		return L_88;
	}

IL_0131:
	{
		t126 * L_89 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_90 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_91 = ((int32_t)11);
		if ((!(((t9*)(t126 *)L_89) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_90, L_91))))))
		{
			goto IL_0149;
		}
	}
	{
		t9 * L_92 = V_0;
		t9 * L_93 = p2;
		int64_t L_94 = (int64_t)InterfaceFuncInvoker1< int64_t, t9 * >::Invoke(&m12127_MI, L_92, L_93);
		int64_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t299_TI), &L_95);
		return L_96;
	}

IL_0149:
	{
		t126 * L_97 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_98 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_99 = ((int32_t)12);
		if ((!(((t9*)(t126 *)L_97) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_98, L_99))))))
		{
			goto IL_0161;
		}
	}
	{
		t9 * L_100 = V_0;
		t9 * L_101 = p2;
		uint64_t L_102 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t9 * >::Invoke(&m12133_MI, L_100, L_101);
		uint64_t L_103 = L_102;
		t9 * L_104 = Box(InitializedTypeInfo(&t889_TI), &L_103);
		return L_104;
	}

IL_0161:
	{
		t126 * L_105 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_106 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_107 = ((int32_t)13);
		if ((!(((t9*)(t126 *)L_105) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_106, L_107))))))
		{
			goto IL_0179;
		}
	}
	{
		t9 * L_108 = V_0;
		t9 * L_109 = p2;
		float L_110 = (float)InterfaceFuncInvoker1< float, t9 * >::Invoke(&m12129_MI, L_108, L_109);
		float L_111 = L_110;
		t9 * L_112 = Box(InitializedTypeInfo(&t123_TI), &L_111);
		return L_112;
	}

IL_0179:
	{
		t126 * L_113 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_114 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_115 = ((int32_t)14);
		if ((!(((t9*)(t126 *)L_113) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_114, L_115))))))
		{
			goto IL_0191;
		}
	}
	{
		t9 * L_116 = V_0;
		t9 * L_117 = p2;
		double L_118 = (double)InterfaceFuncInvoker1< double, t9 * >::Invoke(&m12125_MI, L_116, L_117);
		double L_119 = L_118;
		t9 * L_120 = Box(InitializedTypeInfo(&t156_TI), &L_119);
		return L_120;
	}

IL_0191:
	{
		t126 * L_121 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_122 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_123 = ((int32_t)15);
		if ((!(((t9*)(t126 *)L_121) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_122, L_123))))))
		{
			goto IL_01a9;
		}
	}
	{
		t9 * L_124 = V_0;
		t9 * L_125 = p2;
		t904  L_126 = (t904 )InterfaceFuncInvoker1< t904 , t9 * >::Invoke(&m12124_MI, L_124, L_125);
		t904  L_127 = L_126;
		t9 * L_128 = Box(InitializedTypeInfo(&t904_TI), &L_127);
		return L_128;
	}

IL_01a9:
	{
		t126 * L_129 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_130 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_131 = ((int32_t)16);
		if ((!(((t9*)(t126 *)L_129) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_130, L_131))))))
		{
			goto IL_01c1;
		}
	}
	{
		t9 * L_132 = V_0;
		t9 * L_133 = p2;
		t270  L_134 = (t270 )InterfaceFuncInvoker1< t270 , t9 * >::Invoke(&m12123_MI, L_132, L_133);
		t270  L_135 = L_134;
		t9 * L_136 = Box(InitializedTypeInfo(&t270_TI), &L_135);
		return L_136;
	}

IL_01c1:
	{
		t126 * L_137 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t152* L_138 = ((t891_SFs*)InitializedTypeInfo(&t891_TI)->static_fields)->f1;
		int32_t L_139 = ((int32_t)18);
		if ((!(((t9*)(t126 *)L_137) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_138, L_139))))))
		{
			goto IL_01d4;
		}
	}
	{
		t9 * L_140 = V_0;
		t9 * L_141 = p2;
		t2* L_142 = (t2*)InterfaceFuncInvoker1< t2*, t9 * >::Invoke(&m12130_MI, L_140, L_141);
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
		t9 * L_147 = (t9 *)InterfaceFuncInvoker2< t9 *, t126 *, t9 * >::Invoke(&m12134_MI, L_144, L_145, L_146);
		return L_147;
	}

IL_01e0:
	{
		t9 * L_148 = p0;
		t126 * L_149 = m2511(L_148, &m2511_MI);
		t2* L_150 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7799_MI, L_149);
		t126 * L_151 = p1;
		t2* L_152 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_151);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_153 = m4444(NULL, (t2*) &_stringLiteral2636, L_150, (t2*) &_stringLiteral2637, L_152, &m4444_MI);
		t2* L_154 = m7847(NULL, L_153, &m7847_MI);
		t2122 * L_155 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11566(L_155, L_154, &m11566_MI);
		il2cpp_codegen_raise_exception(L_155);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2151MD.h"
extern MethodInfo m561_MI;
extern MethodInfo m11378_MI;
extern MethodInfo m11565_MI;
extern MethodInfo m11878_MI;


extern "C" void m11378 (t2101 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11379_MI;
extern "C" void m11379 (t2101 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11380_MI;
extern "C" void m11380 (t9 * __this , MethodInfo* method)
{
	{
		t2101 * L_0 = (t2101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2101_TI));
		m11378(L_0, &m11378_MI);
		((t2101_SFs*)InitializedTypeInfo(&t2101_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m11381_MI;
extern "C" bool m11381 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11382_MI;
extern "C" uint8_t m11382 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11383_MI;
extern "C" uint16_t m11383 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11384_MI;
extern "C" t270  m11384 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11385_MI;
extern "C" t904  m11385 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11386_MI;
extern "C" double m11386 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11387_MI;
extern "C" int16_t m11387 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11388_MI;
extern "C" int32_t m11388 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11389_MI;
extern "C" int64_t m11389 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11390_MI;
extern "C" int8_t m11390 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11391_MI;
extern "C" float m11391 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11392_MI;
extern "C" t9 * m11392 (t2101 * __this, t126 * p0, t9 * p1, MethodInfo* method)
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
		t126 * L_4 = m329(NULL, LoadTypeToken(&t2101_0_0_0), &m329_MI);
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
		t2122 * L_5 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_5, &m11565_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m11393_MI;
extern "C" uint16_t m11393 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11394_MI;
extern "C" uint32_t m11394 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11395_MI;
extern "C" uint64_t m11395 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11396_MI;
extern "C" void m11396 (t2101 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11878(NULL, __this, L_0, L_1, &m11878_MI);
		return;
	}
}
extern MethodInfo m11397_MI;
extern "C" t2* m11397 (t2101 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m11398_MI;
extern "C" t2* m11398 (t2101 * __this, t9 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
#include "t2102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2102_TI;
#include "t2102MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1700.h"
#include "t2145.h"
#include "t2103.h"
#include "t2193.h"
#include "t2194.h"
#include "t2172.h"
#include "t2171.h"
#include "t313.h"
#include "t2131.h"
#include "t1525.h"
#include "t917.h"
#include "t890.h"
extern TypeInfo t2145_TI;
extern TypeInfo t304_TI;
extern TypeInfo t221_TI;
extern TypeInfo t1095_TI;
extern TypeInfo t2172_TI;
extern TypeInfo t2131_TI;
extern TypeInfo t2193_TI;
extern TypeInfo t2194_TI;
extern TypeInfo t890_TI;
#include "t2145MD.h"
#include "t2172MD.h"
#include "t314MD.h"
#include "t2131MD.h"
#include "t2193MD.h"
#include "t2194MD.h"
#include "t917MD.h"
#include "t890MD.h"
#include "t1704MD.h"
#include "t2104MD.h"
extern Il2CppType t221_0_0_0;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t2193_0_0_0;
extern Il2CppType t2194_0_0_0;
extern MethodInfo m11421_MI;
extern MethodInfo m11817_MI;
extern MethodInfo m11818_MI;
extern MethodInfo m11820_MI;
extern MethodInfo m11821_MI;
extern MethodInfo m11429_MI;
extern MethodInfo m11399_MI;
extern MethodInfo m11851_MI;
extern MethodInfo m11856_MI;
extern MethodInfo m11466_MI;
extern MethodInfo m11822_MI;
extern MethodInfo m1100_MI;
extern MethodInfo m11431_MI;
extern MethodInfo m11422_MI;
extern MethodInfo m11423_MI;
extern MethodInfo m11400_MI;
extern MethodInfo m11403_MI;
extern MethodInfo m11812_MI;
extern MethodInfo m6980_MI;
extern MethodInfo m11401_MI;
extern MethodInfo m11442_MI;
extern MethodInfo m11420_MI;
extern MethodInfo m11814_MI;
extern MethodInfo m11444_MI;
extern MethodInfo m11402_MI;
extern MethodInfo m1123_MI;
extern MethodInfo m12135_MI;
extern MethodInfo m12136_MI;
extern MethodInfo m11464_MI;
extern MethodInfo m11446_MI;
extern MethodInfo m11434_MI;
extern MethodInfo m5753_MI;
extern MethodInfo m11846_MI;
extern MethodInfo m11843_MI;
extern MethodInfo m11435_MI;
extern MethodInfo m11842_MI;
extern MethodInfo m4405_MI;
extern MethodInfo m5818_MI;
extern MethodInfo m11448_MI;
extern MethodInfo m11449_MI;
extern MethodInfo m11473_MI;
extern MethodInfo m4313_MI;
extern MethodInfo m8683_MI;
extern MethodInfo m11450_MI;
extern MethodInfo m11458_MI;
extern MethodInfo m8703_MI;
extern MethodInfo m2795_MI;
extern MethodInfo m8714_MI;
extern MethodInfo m11461_MI;
extern MethodInfo m8700_MI;
extern MethodInfo m5926_MI;
extern MethodInfo m11453_MI;
extern MethodInfo m4359_MI;
extern MethodInfo m7039_MI;
extern MethodInfo m11457_MI;
extern MethodInfo m8695_MI;
extern MethodInfo m2738_MI;
extern MethodInfo m8707_MI;
extern MethodInfo m8696_MI;
extern MethodInfo m8698_MI;
extern MethodInfo m11455_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m11490_MI;
extern MethodInfo m5987_MI;
extern MethodInfo m5806_MI;
extern MethodInfo m11454_MI;
extern MethodInfo m8693_MI;
extern MethodInfo m11452_MI;
extern MethodInfo m8691_MI;
extern MethodInfo m5927_MI;
extern MethodInfo m331_MI;
extern MethodInfo m11456_MI;
extern MethodInfo m11451_MI;
extern MethodInfo m8694_MI;
extern MethodInfo m8692_MI;
extern MethodInfo m4260_MI;
extern MethodInfo m11430_MI;
extern MethodInfo m6977_MI;
extern MethodInfo m11424_MI;
extern MethodInfo m11468_MI;
extern MethodInfo m11471_MI;
extern MethodInfo m11813_MI;
extern MethodInfo m11472_MI;
extern MethodInfo m11485_MI;
extern MethodInfo m11848_MI;
extern MethodInfo m11459_MI;
extern MethodInfo m11460_MI;
extern MethodInfo m11465_MI;
extern MethodInfo m4406_MI;
extern MethodInfo m11492_MI;
extern MethodInfo m11854_MI;
extern MethodInfo m11855_MI;
extern MethodInfo m11841_MI;
extern MethodInfo m11844_MI;
extern MethodInfo m11845_MI;
extern MethodInfo m11847_MI;
extern FieldInfo t2172_f50_FieldInfo;
extern FieldInfo t2172_f51_FieldInfo;
extern Il2CppGenericMethod m12135_GM;
extern Il2CppGenericMethod m12136_GM;


extern TypeInfo* t158_TI_var;
extern "C" void m11399 (t270 * __this, int64_t p0, MethodInfo* method)
{
	static bool m11399_init;
	if (!m11399_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11399_init = true;
	}
	t2* V_0 = {0};
	t270  V_1 = {0};
	t270  V_2 = {0};
	t270  V_3 = {0};
	t270  V_4 = {0};
	{
		int64_t L_0 = p0;
		t304  L_1 = {0};
		m11812(&L_1, L_0, &m11812_MI);
		__this->f0 = L_1;
		int64_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_3 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		V_1 = L_3;
		int64_t L_4 = m6980((&V_1), &m6980_MI);
		if ((((int64_t)L_2) < ((int64_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		int64_t L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_6 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		V_2 = L_6;
		int64_t L_7 = m6980((&V_2), &m6980_MI);
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
		t9 * L_11 = Box(InitializedTypeInfo(&t299_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 0)) = (t9 *)L_11;
		t158* L_12 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_13 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		V_3 = L_13;
		int64_t L_14 = m6980((&V_3), &m6980_MI);
		int64_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t299_TI), &L_15);
		ArrayElementTypeCheck (L_12, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 1)) = (t9 *)L_16;
		t158* L_17 = L_12;
		t270  L_18 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		V_4 = L_18;
		int64_t L_19 = m6980((&V_4), &m6980_MI);
		int64_t L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t299_TI), &L_20);
		ArrayElementTypeCheck (L_17, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 2)) = (t9 *)L_21;
		t2* L_22 = m7848(NULL, (t2*) &_stringLiteral2638, L_17, &m7848_MI);
		V_0 = L_22;
		t2* L_23 = V_0;
		t903 * L_24 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_24, (t2*) &_stringLiteral2639, L_23, &m4361_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_007d:
	{
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11400 (t270 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		m11401(__this, L_0, L_1, L_2, 0, 0, 0, 0, &m11401_MI);
		return;
	}
}
extern "C" void m11401 (t270 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_8 = m11442(NULL, L_6, L_7, &m11442_MI);
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
		t903 * L_17 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_17, (t2*) &_stringLiteral2640, &m5722_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_005d:
	{
		int32_t L_18 = p0;
		int32_t L_19 = p1;
		int32_t L_20 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_21 = m11420(NULL, L_18, L_19, L_20, &m11420_MI);
		int32_t L_22 = p3;
		int32_t L_23 = p4;
		int32_t L_24 = p5;
		int32_t L_25 = p6;
		t304  L_26 = {0};
		m11814(&L_26, L_21, L_22, L_23, L_24, L_25, &m11814_MI);
		__this->f0 = L_26;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11402 (t270 * __this, bool p0, t304  p1, MethodInfo* method)
{
	t270  V_0 = {0};
	t270  V_1 = {0};
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int64_t L_1 = m11822((&p1), &m11822_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_2 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		V_0 = L_2;
		int64_t L_3 = m6980((&V_0), &m6980_MI);
		if ((((int64_t)L_1) < ((int64_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_4 = m11822((&p1), &m11822_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_5 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		V_1 = L_5;
		int64_t L_6 = m6980((&V_1), &m6980_MI);
		if ((((int64_t)L_4) <= ((int64_t)L_6)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_7, &m5899_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		t304  L_8 = p1;
		__this->f0 = L_8;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11403 (t270 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		m11399(__this, L_0, &m11399_MI);
		int32_t L_1 = p1;
		m11444(__this, L_1, &m11444_MI);
		int32_t L_2 = p1;
		__this->f1 = L_2;
		return;
	}
}
extern MethodInfo m11404_MI;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t1095_TI_var;
extern TypeInfo* t2193_TI_var;
extern TypeInfo* t2194_TI_var;
extern MethodInfo* m12135_MI_var;
extern MethodInfo* m12136_MI_var;
extern "C" void m11404 (t9 * __this , MethodInfo* method)
{
	static bool m11404_init;
	if (!m11404_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		t2193_TI_var = il2cpp_codegen_class_from_type(&t2193_0_0_0);
		t2194_TI_var = il2cpp_codegen_class_from_type(&t2194_0_0_0);
		m12135_MI_var = il2cpp_codegen_genericmethod_get_method(&m12135_GM);
		m12136_MI_var = il2cpp_codegen_genericmethod_get_method(&m12136_GM);
		m11404_init = true;
	}
	t2193 * V_0 = {0};
	t2194 * V_1 = {0};
	{
		t304  L_0 = {0};
		m11812(&L_0, ((int64_t)3155378975999999999LL), &m11812_MI);
		t270  L_1 = {0};
		m11402(&L_1, 0, L_0, &m11402_MI);
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2 = L_1;
		t304  L_2 = {0};
		m11812(&L_2, (((int64_t)0)), &m11812_MI);
		t270  L_3 = {0};
		m11402(&L_3, 0, L_2, &m11402_MI);
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3 = L_3;
		t221* L_4 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)9)));
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2641);
		*((t2**)(t2**)SZArrayLdElema(L_4, 0)) = (t2*)(t2*) &_stringLiteral2641;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2642);
		*((t2**)(t2**)SZArrayLdElema(L_5, 1)) = (t2*)(t2*) &_stringLiteral2642;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2643);
		*((t2**)(t2**)SZArrayLdElema(L_6, 2)) = (t2*)(t2*) &_stringLiteral2643;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2644);
		*((t2**)(t2**)SZArrayLdElema(L_7, 3)) = (t2*)(t2*) &_stringLiteral2644;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral2645);
		*((t2**)(t2**)SZArrayLdElema(L_8, 4)) = (t2*)(t2*) &_stringLiteral2645;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral2646);
		*((t2**)(t2**)SZArrayLdElema(L_9, 5)) = (t2*)(t2*) &_stringLiteral2646;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral2647);
		*((t2**)(t2**)SZArrayLdElema(L_10, 6)) = (t2*)(t2*) &_stringLiteral2647;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral2648);
		*((t2**)(t2**)SZArrayLdElema(L_11, 7)) = (t2*)(t2*) &_stringLiteral2648;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral2649);
		*((t2**)(t2**)SZArrayLdElema(L_12, 8)) = (t2*)(t2*) &_stringLiteral2649;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f4 = L_12;
		t221* L_13 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)10)));
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral2650);
		*((t2**)(t2**)SZArrayLdElema(L_13, 0)) = (t2*)(t2*) &_stringLiteral2650;
		t221* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_14, 1)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_15, 2)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral2653);
		*((t2**)(t2**)SZArrayLdElema(L_16, 3)) = (t2*)(t2*) &_stringLiteral2653;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral2654);
		*((t2**)(t2**)SZArrayLdElema(L_17, 4)) = (t2*)(t2*) &_stringLiteral2654;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_18, 5)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_19, 6)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_20, 7)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral2658);
		*((t2**)(t2**)SZArrayLdElema(L_21, 8)) = (t2*)(t2*) &_stringLiteral2658;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral2659);
		*((t2**)(t2**)SZArrayLdElema(L_22, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2659;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f5 = L_22;
		t221* L_23 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)12)));
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral2650);
		*((t2**)(t2**)SZArrayLdElema(L_23, 0)) = (t2*)(t2*) &_stringLiteral2650;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_24, 1)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_25, 2)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral2660);
		*((t2**)(t2**)SZArrayLdElema(L_26, 3)) = (t2*)(t2*) &_stringLiteral2660;
		t221* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_27, 4)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral2662);
		*((t2**)(t2**)SZArrayLdElema(L_28, 5)) = (t2*)(t2*) &_stringLiteral2662;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral2663);
		*((t2**)(t2**)SZArrayLdElema(L_29, 6)) = (t2*)(t2*) &_stringLiteral2663;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral2664);
		*((t2**)(t2**)SZArrayLdElema(L_30, 7)) = (t2*)(t2*) &_stringLiteral2664;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_31, 8)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_32, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral2667);
		*((t2**)(t2**)SZArrayLdElema(L_33, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2667;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_34, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2668;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f6 = L_34;
		t221* L_35 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)15)));
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral2650);
		*((t2**)(t2**)SZArrayLdElema(L_35, 0)) = (t2*)(t2*) &_stringLiteral2650;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_36, 1)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_37, 2)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral2660);
		*((t2**)(t2**)SZArrayLdElema(L_38, 3)) = (t2*)(t2*) &_stringLiteral2660;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_39, 4)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_40, 5)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_41, 6)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral2664);
		*((t2**)(t2**)SZArrayLdElema(L_42, 7)) = (t2*)(t2*) &_stringLiteral2664;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_43, 8)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_44, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2669;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral2670);
		*((t2**)(t2**)SZArrayLdElema(L_45, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2670;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral2671);
		*((t2**)(t2**)SZArrayLdElema(L_46, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2671;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral2667);
		*((t2**)(t2**)SZArrayLdElema(L_47, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral2667;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral2672);
		*((t2**)(t2**)SZArrayLdElema(L_48, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral2672;
		t221* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_49, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral2668;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f7 = L_49;
		t221* L_50 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)15)));
		ArrayElementTypeCheck (L_50, (t2*) &_stringLiteral2650);
		*((t2**)(t2**)SZArrayLdElema(L_50, 0)) = (t2*)(t2*) &_stringLiteral2650;
		t221* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_51, 1)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_52, 2)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral2660);
		*((t2**)(t2**)SZArrayLdElema(L_53, 3)) = (t2*)(t2*) &_stringLiteral2660;
		t221* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_54, 4)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t2*) &_stringLiteral2662);
		*((t2**)(t2**)SZArrayLdElema(L_55, 5)) = (t2*)(t2*) &_stringLiteral2662;
		t221* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral2663);
		*((t2**)(t2**)SZArrayLdElema(L_56, 6)) = (t2*)(t2*) &_stringLiteral2663;
		t221* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t2*) &_stringLiteral2664);
		*((t2**)(t2**)SZArrayLdElema(L_57, 7)) = (t2*)(t2*) &_stringLiteral2664;
		t221* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_58, 8)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t2*) &_stringLiteral2673);
		*((t2**)(t2**)SZArrayLdElema(L_59, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2673;
		t221* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_60, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2668;
		t221* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral2674);
		*((t2**)(t2**)SZArrayLdElema(L_61, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2674;
		t221* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t2*) &_stringLiteral2670);
		*((t2**)(t2**)SZArrayLdElema(L_62, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral2670;
		t221* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t2*) &_stringLiteral2671);
		*((t2**)(t2**)SZArrayLdElema(L_63, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral2671;
		t221* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t2*) &_stringLiteral2667);
		*((t2**)(t2**)SZArrayLdElema(L_64, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral2667;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f8 = L_64;
		t221* L_65 = ((t221*)SZArrayNew(t221_TI_var, 3));
		ArrayElementTypeCheck (L_65, (t2*) &_stringLiteral2675);
		*((t2**)(t2**)SZArrayLdElema(L_65, 0)) = (t2*)(t2*) &_stringLiteral2675;
		t221* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t2*) &_stringLiteral2676);
		*((t2**)(t2**)SZArrayLdElema(L_66, 1)) = (t2*)(t2*) &_stringLiteral2676;
		t221* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t2*) &_stringLiteral2677);
		*((t2**)(t2**)SZArrayLdElema(L_67, 2)) = (t2*)(t2*) &_stringLiteral2677;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f9 = L_67;
		t221* L_68 = ((t221*)SZArrayNew(t221_TI_var, 3));
		ArrayElementTypeCheck (L_68, (t2*) &_stringLiteral2678);
		*((t2**)(t2**)SZArrayLdElema(L_68, 0)) = (t2*)(t2*) &_stringLiteral2678;
		t221* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t2*) &_stringLiteral2679);
		*((t2**)(t2**)SZArrayLdElema(L_69, 1)) = (t2*)(t2*) &_stringLiteral2679;
		t221* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t2*) &_stringLiteral2677);
		*((t2**)(t2**)SZArrayLdElema(L_70, 2)) = (t2*)(t2*) &_stringLiteral2677;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f10 = L_70;
		t1095* L_71 = ((t1095*)SZArrayNew(t1095_TI_var, ((int32_t)13)));
		m1123(NULL, (t121 *)(t121 *)L_71, LoadFieldToken(&t2172_f50_FieldInfo), &m1123_MI);
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f11 = L_71;
		t1095* L_72 = ((t1095*)SZArrayNew(t1095_TI_var, ((int32_t)13)));
		m1123(NULL, (t121 *)(t121 *)L_72, LoadFieldToken(&t2172_f51_FieldInfo), &m1123_MI);
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f12 = L_72;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2131_TI));
		bool L_73 = ((t2131_SFs*)InitializedTypeInfo(&t2131_TI)->static_fields)->f0;
		if (!L_73)
		{
			goto IL_02e6;
		}
	}
	{
		t2193 * L_74 = (t2193 *)il2cpp_codegen_object_new (t2193_TI_var);
		m12135(L_74, m12135_MI_var);
		V_0 = L_74;
		t2194 * L_75 = (t2194 *)il2cpp_codegen_object_new (t2194_TI_var);
		m12136(L_75, m12136_MI_var);
		V_1 = L_75;
	}

IL_02e6:
	{
		return;
	}
}
extern MethodInfo m11405_MI;
extern "C" bool m11405 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11406_MI;
extern "C" uint8_t m11406 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11407_MI;
extern "C" uint16_t m11407 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11408_MI;
extern "C" t270  m11408 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		return (*(t270 *)__this);
	}
}
extern MethodInfo m11409_MI;
extern "C" t904  m11409 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11410_MI;
extern "C" double m11410 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11411_MI;
extern "C" int16_t m11411 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11412_MI;
extern "C" int32_t m11412 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11413_MI;
extern "C" int64_t m11413 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11414_MI;
extern "C" int8_t m11414 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11415_MI;
extern "C" float m11415 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11416_MI;
extern "C" t9 * m11416 (t270 * __this, t126 * p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1074, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t270_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_2) == ((t9*)(t126 *)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		t270  L_4 = (*(t270 *)__this);
		t9 * L_5 = Box(InitializedTypeInfo(&t270_TI), &L_4);
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
		t2* L_9 = m11464(__this, L_8, &m11464_MI);
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
		t270  L_12 = (*(t270 *)__this);
		t9 * L_13 = Box(InitializedTypeInfo(&t270_TI), &L_12);
		return L_13;
	}

IL_0055:
	{
		t2122 * L_14 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_14, &m11565_MI);
		il2cpp_codegen_raise_exception(L_14);
	}
}
extern MethodInfo m11417_MI;
extern "C" uint16_t m11417 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11418_MI;
extern "C" uint32_t m11418 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11419_MI;
extern "C" uint64_t m11419 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2122 * L_0 = (t2122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2122_TI));
		m11565(L_0, &m11565_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" int32_t m11420 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1095* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1095* G_B3_0 = {0};
	{
		V_1 = 0;
		V_2 = 1;
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_1 = m11446(NULL, L_0, &m11446_MI);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t1095* L_2 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f12;
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t1095* L_3 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f11;
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
		t1095* L_5 = V_0;
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
extern "C" int32_t m11421 (t270 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t1095* V_5 = {0};
	int32_t V_6 = 0;
	{
		V_4 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t1095* L_0 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f11;
		V_5 = L_0;
		t304 * L_1 = &(__this->f0);
		int32_t L_2 = m11817(L_1, &m11817_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t1095* L_27 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f12;
		V_5 = L_27;
	}

IL_00ad:
	{
		goto IL_00be;
	}

IL_00af:
	{
		int32_t L_28 = V_6;
		t1095* L_29 = V_5;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = L_31;
		V_6 = ((int32_t)((int32_t)L_28-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_29, L_32))));
	}

IL_00be:
	{
		int32_t L_33 = V_6;
		t1095* L_34 = V_5;
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
extern "C" int32_t m11422 (t270 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11421(__this, 2, &m11421_MI);
		return L_0;
	}
}
extern "C" int32_t m11423 (t270 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11421(__this, 0, &m11421_MI);
		return L_0;
	}
}
extern "C" int32_t m11424 (t270 * __this, MethodInfo* method)
{
	{
		t304 * L_0 = &(__this->f0);
		int32_t L_1 = m11817(L_0, &m11817_MI);
		return (int32_t)(((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)1))%(int32_t)7)));
	}
}
extern MethodInfo m11425_MI;
extern "C" int32_t m11425 (t270 * __this, MethodInfo* method)
{
	{
		t304 * L_0 = &(__this->f0);
		int32_t L_1 = m11818(L_0, &m11818_MI);
		return L_1;
	}
}
extern MethodInfo m11426_MI;
extern "C" int32_t m11426 (t270 * __this, MethodInfo* method)
{
	{
		t304 * L_0 = &(__this->f0);
		int32_t L_1 = m11820(L_0, &m11820_MI);
		return L_1;
	}
}
extern MethodInfo m11427_MI;
extern "C" int32_t m11427 (t270 * __this, MethodInfo* method)
{
	{
		t304 * L_0 = &(__this->f0);
		int32_t L_1 = m11821(L_0, &m11821_MI);
		return L_1;
	}
}
extern MethodInfo m11428_MI;
extern "C" int64_t m11428 (t9 * __this , MethodInfo* method)
{
	typedef int64_t (*m11428_ftn) ();
	static m11428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11428_ftn)il2cpp_codegen_resolve_icall ("System.DateTime::GetTimeMonotonic()");
	return _il2cpp_icall_func();
}
extern "C" int64_t m11429 (t9 * __this , MethodInfo* method)
{
	typedef int64_t (*m11429_ftn) ();
	static m11429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11429_ftn)il2cpp_codegen_resolve_icall ("System.DateTime::GetNow()");
	return _il2cpp_icall_func();
}
extern "C" t270  m1100 (t9 * __this , MethodInfo* method)
{
	int64_t V_0 = 0;
	t270  V_1 = {0};
	t270  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int64_t L_0 = m11429(NULL, &m11429_MI);
		V_0 = L_0;
		int64_t L_1 = V_0;
		m11399((&V_1), L_1, &m11399_MI);
		int64_t L_2 = V_0;
		int64_t L_3 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f14;
		if ((((int64_t)((int64_t)((int64_t)L_2-(int64_t)L_3))) <= ((int64_t)(((int64_t)((int32_t)600000000))))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_4 = m11851(NULL, &m11851_MI);
		t270  L_5 = V_1;
		t304  L_6 = m11856(L_4, L_5, &m11856_MI);
		t304  L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t304_TI), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f13 = L_8;
		int64_t L_9 = V_0;
		((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f14 = L_9;
	}

IL_0038:
	{
		t270  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t9 * L_11 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f13;
		t270  L_12 = m11466(NULL, L_10, ((*(t304 *)((t304 *)UnBox (L_11, InitializedTypeInfo(&t304_TI))))), &m11466_MI);
		V_2 = L_12;
		(&V_2)->f1 = 2;
		t270  L_13 = V_2;
		return L_13;
	}
}
extern "C" int64_t m6980 (t270 * __this, MethodInfo* method)
{
	{
		t304 * L_0 = &(__this->f0);
		int64_t L_1 = m11822(L_0, &m11822_MI);
		return L_1;
	}
}
extern "C" t270  m11430 (t9 * __this , MethodInfo* method)
{
	t270  V_0 = {0};
	t270  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_0 = m1100(NULL, &m1100_MI);
		V_0 = L_0;
		int32_t L_1 = m11431((&V_0), &m11431_MI);
		int32_t L_2 = m11422((&V_0), &m11422_MI);
		int32_t L_3 = m11423((&V_0), &m11423_MI);
		m11400((&V_1), L_1, L_2, L_3, &m11400_MI);
		int32_t L_4 = ((&V_0)->f1);
		(&V_1)->f1 = L_4;
		t270  L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m6935_MI;
extern "C" t270  m6935 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int64_t L_0 = m11429(NULL, &m11429_MI);
		t270  L_1 = {0};
		m11403(&L_1, L_0, 1, &m11403_MI);
		return L_1;
	}
}
extern "C" int32_t m11431 (t270 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11421(__this, 3, &m11421_MI);
		return L_0;
	}
}
extern MethodInfo m11432_MI;
extern "C" int32_t m11432 (t270 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11433_MI;
extern "C" t270  m11433 (t270 * __this, t304  p0, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		int64_t L_0 = m11822((&p0), &m11822_MI);
		t270  L_1 = m11434(__this, L_0, &m11434_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		(&V_0)->f1 = L_2;
		t270  L_3 = V_0;
		return L_3;
	}
}
extern "C" t270  m11434 (t270 * __this, int64_t p0, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		int64_t L_0 = p0;
		t304 * L_1 = &(__this->f0);
		int64_t L_2 = m11822(L_1, &m11822_MI);
		if ((((int64_t)((int64_t)((int64_t)L_0+(int64_t)L_2))) > ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_0029;
		}
	}
	{
		int64_t L_3 = p0;
		t304 * L_4 = &(__this->f0);
		int64_t L_5 = m11822(L_4, &m11822_MI);
		if ((((int64_t)((int64_t)((int64_t)L_3+(int64_t)L_5))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_002f;
		}
	}

IL_0029:
	{
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_6, &m5899_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int64_t L_7 = p0;
		t304 * L_8 = &(__this->f0);
		int64_t L_9 = m11822(L_8, &m11822_MI);
		m11399((&V_0), ((int64_t)((int64_t)L_7+(int64_t)L_9)), &m11399_MI);
		int32_t L_10 = (__this->f1);
		(&V_0)->f1 = L_10;
		t270  L_11 = V_0;
		return L_11;
	}
}
extern "C" t270  m5753 (t270 * __this, double p0, MethodInfo* method)
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_2, &m5899_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0032:
	{
		double L_3 = p0;
		double L_4 = round(((double)((double)L_3*(double)(10000.0))));
		V_0 = (((int64_t)L_4));
		int64_t L_5 = V_0;
		t270  L_6 = m11434(__this, L_5, &m11434_MI);
		return L_6;
	}
}
extern "C" t270  m6977 (t270 * __this, double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		t270  L_1 = m5753(__this, ((double)((double)L_0*(double)(1000.0))), &m5753_MI);
		return L_1;
	}
}
extern "C" int32_t m11435 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11846(NULL, L_0, L_1, &m11846_MI);
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
		t304  L_3 = ((&p0)->f0);
		t304  L_4 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_5 = m11843(NULL, L_3, L_4, &m11843_MI);
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
extern MethodInfo m11436_MI;
extern "C" int32_t m11436 (t270 * __this, t9 * p0, MethodInfo* method)
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t270_TI))))
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2680, &m7847_MI);
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_3, L_2, &m2910_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t9 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_5 = m11435(NULL, (*(t270 *)__this), ((*(t270 *)((t270 *)UnBox (L_4, InitializedTypeInfo(&t270_TI))))), &m11435_MI);
		return L_5;
	}
}
extern MethodInfo m11437_MI;
extern "C" int32_t m11437 (t270 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_1 = m11435(NULL, (*(t270 *)__this), L_0, &m11435_MI);
		return L_1;
	}
}
extern MethodInfo m11438_MI;
extern "C" bool m11438 (t270 * __this, t270  p0, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11842(NULL, L_0, L_1, &m11842_MI);
		return L_2;
	}
}
extern MethodInfo m11439_MI;
extern "C" int64_t m11439 (t270 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	t270  V_1 = {0};
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
		int64_t L_3 = m6980(__this, &m6980_MI);
		return ((int64_t)((int64_t)L_3|(int64_t)((int64_t)4611686018427387904LL)));
	}

IL_0022:
	{
		t270  L_4 = m4405(__this, &m4405_MI);
		V_1 = L_4;
		int64_t L_5 = m6980((&V_1), &m6980_MI);
		return ((int64_t)((int64_t)L_5|(int64_t)((int64_t)std::numeric_limits<int64_t>::min())));
	}

IL_003b:
	{
		int64_t L_6 = m6980(__this, &m6980_MI);
		return L_6;
	}
}
extern MethodInfo m11440_MI;
extern "C" t270  m11440 (t9 * __this , int64_t p0, MethodInfo* method)
{
	uint64_t V_0 = 0;
	t270  V_1 = {0};
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
		t270  L_4 = {0};
		m11403(&L_4, ((int64_t)((int64_t)L_3^(int64_t)((int64_t)4611686018427387904LL))), 1, &m11403_MI);
		return L_4;
	}

IL_0023:
	{
		int64_t L_5 = p0;
		t270  L_6 = {0};
		m11403(&L_6, L_5, 0, &m11403_MI);
		return L_6;
	}

IL_002b:
	{
		int64_t L_7 = p0;
		m11403((&V_1), ((int64_t)((int64_t)L_7&(int64_t)((int64_t)4611686018427387903LL))), 1, &m11403_MI);
		t270  L_8 = m5818((&V_1), &m5818_MI);
		return L_8;
	}
}
extern MethodInfo m11441_MI;
extern "C" t270  m11441 (t9 * __this , t270  p0, int32_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = m6980((&p0), &m6980_MI);
		int32_t L_1 = p1;
		t270  L_2 = {0};
		m11403(&L_2, L_0, L_1, &m11403_MI);
		return L_2;
	}
}
extern "C" int32_t m11442 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	t1095* V_0 = {0};
	t1095* G_B9_0 = {0};
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_2, &m5899_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_5, &m5899_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0021:
	{
		int32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_7 = m11446(NULL, L_6, &m11446_MI);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t1095* L_8 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f12;
		G_B9_0 = L_8;
		goto IL_0035;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t1095* L_9 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f11;
		G_B9_0 = L_9;
	}

IL_0035:
	{
		V_0 = G_B9_0;
		t1095* L_10 = V_0;
		int32_t L_11 = p1;
		int32_t L_12 = L_11;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12));
	}
}
extern MethodInfo m11443_MI;
extern "C" bool m11443 (t270 * __this, t9 * p0, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t270_TI))))
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
		V_0 = ((*(t270 *)((t270 *)UnBox (L_1, InitializedTypeInfo(&t270_TI)))));
		t304  L_2 = ((&V_0)->f0);
		t304  L_3 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_4 = m11842(NULL, L_2, L_3, &m11842_MI);
		return L_4;
	}
}
extern "C" void m11444 (t270 * __this, int32_t p0, MethodInfo* method)
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
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_3, (t2*) &_stringLiteral2681, (t2*) &_stringLiteral2682, &m5720_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		return;
	}
}
extern MethodInfo m11445_MI;
extern "C" int32_t m11445 (t270 * __this, MethodInfo* method)
{
	{
		t304 * L_0 = &(__this->f0);
		int64_t L_1 = m11822(L_0, &m11822_MI);
		return (((int32_t)L_1));
	}
}
extern "C" bool m11446 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_2, &m5899_MI);
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
extern "C" t270  m11447 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_2 = m11448(NULL, L_0, L_1, 7, &m11448_MI);
		return L_2;
	}
}
extern "C" t270  m11448 (t9 * __this , t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	t270  V_0 = {0};
	t917  V_1 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1076, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_2 = (t138 *)NULL;
		t2* L_2 = p0;
		t9 * L_3 = p1;
		int32_t L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_5 = m11449(NULL, L_2, L_3, L_4, (&V_0), (&V_1), 1, (&V_2), &m11449_MI);
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
		t270  L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" bool m11449 (t9 * __this , t2* p0, t9 * p1, int32_t p2, t270 * p3, t917 * p4, bool p5, t138 ** p6, MethodInfo* method)
{
	static bool m11449_init;
	if (!m11449_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11449_init = true;
	}
	t1704 * V_0 = {0};
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
		t917 * L_0 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		m11473(L_0, (((int64_t)0)), L_1, &m11473_MI);
		t2* L_2 = p0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m2724(L_3, &m2724_MI);
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
		t890 * L_7 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_7, (t2*) &_stringLiteral2683, &m4313_MI);
		*((t9 **)(L_6)) = (t9 *)L_7;
	}

IL_002a:
	{
		t270 * L_8 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_9 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_11 = m6970(NULL, &m6970_MI);
		p1 = L_11;
	}

IL_0043:
	{
		t9 * L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_13 = m8683(NULL, L_12, &m8683_MI);
		V_0 = L_13;
		t1704 * L_14 = V_0;
		bool L_15 = p5;
		t138 ** L_16 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_17 = m11450(NULL, L_14, L_15, L_16, &m11450_MI);
		V_1 = L_17;
		t221* L_18 = V_1;
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		t270 * L_19 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_20 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
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
		t270 * L_27 = p3;
		t917 * L_28 = p4;
		t1704 * L_29 = V_0;
		int32_t L_30 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_31 = m11458(NULL, L_24, L_25, L_26, 0, L_27, L_28, L_29, L_30, 1, (&V_5), (&V_2), &m11458_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_35 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f4;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		t270 * L_38 = p3;
		t917 * L_39 = p4;
		t1704 * L_40 = V_0;
		int32_t L_41 = p2;
		bool L_42 = m11458(NULL, L_33, L_34, (*(t2**)(t2**)SZArrayLdElema(L_35, L_37)), 0, L_38, L_39, L_40, L_41, 1, (&V_5), (&V_2), &m11458_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_45 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f4;
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
		t1704 * L_49 = V_0;
		t2* L_50 = m8703(L_49, &m8703_MI);
		int32_t L_51 = m2795(L_50, ((int32_t)100), &m2795_MI);
		V_7 = L_51;
		t1704 * L_52 = V_0;
		t2* L_53 = m8703(L_52, &m8703_MI);
		int32_t L_54 = m2795(L_53, ((int32_t)77), &m2795_MI);
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
		t270 * L_57 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_58 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
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
		t1704 * L_62 = V_0;
		t2* L_63 = m8703(L_62, &m8703_MI);
		ArrayElementTypeCheck (L_61, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_61, 0)) = (t9 *)L_63;
		t2* L_64 = m7848(NULL, (t2*) &_stringLiteral2684, L_61, &m7848_MI);
		t890 * L_65 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_65, L_64, &m4313_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_69 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f10;
		G_B29_0 = L_69;
		goto IL_0146;
	}

IL_0141:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_70 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f9;
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
		t270 * L_76 = p3;
		t917 * L_77 = p4;
		t1704 * L_78 = V_0;
		int32_t L_79 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_80 = m11458(NULL, L_71, (*(t2**)(t2**)SZArrayLdElema(L_72, L_74)), L_75, 0, L_76, L_77, L_78, L_79, 1, (&V_12), (&V_2), &m11458_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_84 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f4;
		int32_t L_85 = V_13;
		int32_t L_86 = L_85;
		V_14 = (*(t2**)(t2**)SZArrayLdElema(L_84, L_86));
		V_15 = 0;
		t2* L_87 = p0;
		t2* L_88 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_89 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t270 * L_90 = p3;
		t917 * L_91 = p4;
		t1704 * L_92 = V_0;
		int32_t L_93 = p2;
		bool L_94 = m11458(NULL, L_87, L_88, L_89, 0, L_90, L_91, L_92, L_93, 0, (&V_15), (&V_2), &m11458_MI);
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
		t270 * L_101 = p3;
		t917 * L_102 = p4;
		t1704 * L_103 = V_0;
		int32_t L_104 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_105 = m11458(NULL, L_96, L_97, (*(t2**)(t2**)SZArrayLdElema(L_98, L_100)), 0, L_101, L_102, L_103, L_104, 0, (&V_15), (&V_2), &m11458_MI);
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
		int32_t L_114 = m2724(L_113, &m2724_MI);
		uint16_t L_115 = m2739(L_112, ((int32_t)((int32_t)L_114-(int32_t)1)), &m2739_MI);
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
		t270 * L_119 = p3;
		t917 * L_120 = p4;
		t1704 * L_121 = V_0;
		int32_t L_122 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_123 = m11458(NULL, L_116, L_117, L_118, 0, L_119, L_120, L_121, L_122, 0, (&V_15), (&V_2), &m11458_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_129 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f4;
		if ((((int32_t)L_128) < ((int32_t)(((int32_t)(((t121 *)L_129)->max_length))))))
		{
			goto IL_0185;
		}
	}
	{
		t2* L_130 = p0;
		t1704 * L_131 = V_0;
		t221* L_132 = m8714(L_131, &m8714_MI);
		t1704 * L_133 = V_0;
		int32_t L_134 = p2;
		t270 * L_135 = p3;
		bool L_136 = p5;
		t138 ** L_137 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_138 = m11461(NULL, L_130, L_132, L_133, L_134, L_135, 0, (&V_2), L_136, L_137, &m11461_MI);
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
		t890 * L_141 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_141, (t2*) &_stringLiteral2683, &m4313_MI);
		*((t9 **)(L_140)) = (t9 *)L_141;
		return 0;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t221* m11450 (t9 * __this , t1704 * p0, bool p1, t138 ** p2, MethodInfo* method)
{
	static bool m11450_init;
	if (!m11450_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11450_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t1704 * L_0 = p0;
		t2* L_1 = m8700(L_0, &m8700_MI);
		int32_t L_2 = m2795(L_1, ((int32_t)100), &m2795_MI);
		V_0 = L_2;
		t1704 * L_3 = p0;
		t2* L_4 = m8700(L_3, &m8700_MI);
		int32_t L_5 = m2795(L_4, ((int32_t)77), &m2795_MI);
		V_1 = L_5;
		t1704 * L_6 = p0;
		t2* L_7 = m8700(L_6, &m8700_MI);
		int32_t L_8 = m2795(L_7, ((int32_t)121), &m2795_MI);
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
		t1704 * L_15 = p0;
		t2* L_16 = m8700(L_15, &m8700_MI);
		ArrayElementTypeCheck (L_14, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_14, 0)) = (t9 *)L_16;
		t2* L_17 = m7848(NULL, (t2*) &_stringLiteral2685, L_14, &m7848_MI);
		t890 * L_18 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_18, L_17, &m4313_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_23 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f6;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_26 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f5;
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
		t1704 * L_30 = p0;
		t2* L_31 = m8700(L_30, &m8700_MI);
		ArrayElementTypeCheck (L_29, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_29, 0)) = (t9 *)L_31;
		t2* L_32 = m7848(NULL, (t2*) &_stringLiteral2686, L_29, &m7848_MI);
		t890 * L_33 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_33, L_32, &m4313_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_36 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f7;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t221* L_39 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f8;
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
		t1704 * L_43 = p0;
		t2* L_44 = m8700(L_43, &m8700_MI);
		ArrayElementTypeCheck (L_42, L_44);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 0)) = (t9 *)L_44;
		t2* L_45 = m7848(NULL, (t2*) &_stringLiteral2687, L_42, &m7848_MI);
		t890 * L_46 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_46, L_45, &m4313_MI);
		*((t9 **)(L_41)) = (t9 *)L_46;
	}

IL_00cf:
	{
		return (t221*)NULL;
	}
}
extern "C" int32_t m11451 (t9 * __this , t2* p0, int32_t p1, int32_t p2, int32_t p3, bool p4, bool p5, int32_t* p6, MethodInfo* method)
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
		uint16_t L_5 = m2739(L_3, L_4, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_6 = m5926(NULL, L_5, &m5926_MI);
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
		int32_t L_11 = m2724(L_10, &m2724_MI);
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
		int32_t L_20 = m2724(L_19, &m2724_MI);
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
		uint16_t L_27 = m2739(L_25, L_26, &m2739_MI);
		V_3 = L_27;
		uint16_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_29 = m5926(NULL, L_28, &m5926_MI);
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
extern "C" int32_t m11452 (t9 * __this , t2* p0, int32_t p1, t221* p2, t221* p3, bool p4, int32_t* p5, MethodInfo* method)
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
		int32_t L_5 = m2724((*(t2**)(t2**)SZArrayLdElema(L_2, L_4)), &m2724_MI);
		t221* L_6 = p2;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		int32_t L_9 = m2724((*(t2**)(t2**)SZArrayLdElema(L_6, L_8)), &m2724_MI);
		if ((((int32_t)L_5) <= ((int32_t)L_9)))
		{
			goto IL_005b;
		}
	}
	{
		t221* L_10 = p3;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = m2724((*(t2**)(t2**)SZArrayLdElema(L_10, L_12)), &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_20 = m11453(NULL, L_14, L_15, 0, (*(t2**)(t2**)SZArrayLdElema(L_16, L_18)), L_19, &m11453_MI);
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
		int32_t L_25 = m2724((*(t2**)(t2**)SZArrayLdElema(L_22, L_24)), &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_32 = m11453(NULL, L_26, L_27, 0, (*(t2**)(t2**)SZArrayLdElema(L_28, L_30)), L_31, &m11453_MI);
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
		int32_t L_37 = m2724((*(t2**)(t2**)SZArrayLdElema(L_34, L_36)), &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_44 = m11453(NULL, L_38, L_39, 0, (*(t2**)(t2**)SZArrayLdElema(L_40, L_42)), L_43, &m11453_MI);
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
		int32_t L_50 = m2724((*(t2**)(t2**)SZArrayLdElema(L_47, L_49)), &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_57 = m11453(NULL, L_51, L_52, 0, (*(t2**)(t2**)SZArrayLdElema(L_53, L_55)), L_56, &m11453_MI);
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
extern "C" bool m11453 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t* p4, MethodInfo* method)
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
		int32_t L_2 = m2724(L_1, &m2724_MI);
		p2 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t2* L_5 = p0;
		int32_t L_6 = m2724(L_5, &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_11 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_12 = m7039(NULL, L_7, L_8, L_9, 0, L_10, 1, L_11, &m7039_MI);
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
extern "C" bool m11454 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t1704 * p3, bool p4, int32_t* p5, int32_t* p6, MethodInfo* method)
{
	t1704 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_4 = m11457(NULL, L_2, L_3, &m11457_MI);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		t1704 * L_5 = p3;
		t2* L_6 = m8695(L_5, &m8695_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_8 = m2738(NULL, L_6, L_7, &m2738_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_12 = m8707(NULL, &m8707_MI);
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
		t1704 * L_17 = V_0;
		t2* L_18 = m8696(L_17, &m8696_MI);
		int32_t* L_19 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_20 = m11453(NULL, L_14, L_15, L_16, L_18, L_19, &m11453_MI);
		if (L_20)
		{
			goto IL_0077;
		}
	}

IL_0053:
	{
		t1704 * L_21 = p3;
		t2* L_22 = m8696(L_21, &m8696_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_24 = m2738(NULL, L_22, L_23, &m2738_MI);
		if (!L_24)
		{
			goto IL_007d;
		}
	}
	{
		t2* L_25 = p0;
		int32_t L_26 = p1;
		int32_t L_27 = p2;
		t1704 * L_28 = p3;
		t2* L_29 = m8696(L_28, &m8696_MI);
		int32_t* L_30 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_31 = m11453(NULL, L_25, L_26, L_27, L_29, L_30, &m11453_MI);
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
		t1704 * L_37 = V_0;
		t2* L_38 = m8695(L_37, &m8695_MI);
		int32_t* L_39 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_40 = m11453(NULL, L_34, L_35, L_36, L_38, L_39, &m11453_MI);
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
		t1704 * L_44 = p3;
		t2* L_45 = m8695(L_44, &m8695_MI);
		int32_t* L_46 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_47 = m11453(NULL, L_41, L_42, L_43, L_45, L_46, &m11453_MI);
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
extern "C" bool m11455 (t9 * __this , t2* p0, int32_t p1, t1704 * p2, bool p3, int32_t* p4, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t1704 * L_2 = p2;
		t2* L_3 = m8698(L_2, &m8698_MI);
		int32_t* L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_5 = m11453(NULL, L_0, L_1, 0, L_3, L_4, &m11453_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_10 = m11453(NULL, L_7, L_8, 0, (t2*) &_stringLiteral338, L_9, &m11453_MI);
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
extern "C" bool m11456 (t9 * __this , t2* p0, int32_t p1, t1704 * p2, bool p3, int32_t* p4, MethodInfo* method)
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
		uint16_t L_4 = m2739(L_2, L_3, &m2739_MI);
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
		t1704 * L_7 = p2;
		bool L_8 = p3;
		int32_t* L_9 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_10 = m11455(NULL, L_5, L_6, L_7, L_8, L_9, &m11455_MI);
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = p1;
		uint16_t L_13 = m2739(L_11, L_12, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_14 = m5926(NULL, L_13, &m5926_MI);
		if (L_14)
		{
			goto IL_003d;
		}
	}
	{
		t2* L_15 = p0;
		int32_t L_16 = p1;
		uint16_t L_17 = m2739(L_15, L_16, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_18 = m2790(NULL, L_17, &m2790_MI);
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
extern "C" bool m11457 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p1;
		t2* L_1 = p0;
		int32_t L_2 = m2724(L_1, &m2724_MI);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = p1;
		uint16_t L_5 = m2739(L_3, L_4, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_6 = m2790(NULL, L_5, &m2790_MI);
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
extern "C" bool m11458 (t9 * __this , t2* p0, t2* p1, t2* p2, bool p3, t270 * p4, t917 * p5, t1704 * p6, int32_t p7, bool p8, bool* p9, bool* p10, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	t2* V_5 = {0};
	bool V_6 = false;
	t1704 * V_7 = {0};
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
	t270  V_36 = {0};
	t270  V_37 = {0};
	t270  V_38 = {0};
	t270  V_39 = {0};
	t304  V_40 = {0};
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
		t917 * L_0 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		m11473(L_0, (((int64_t)0)), L_1, &m11473_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_6 = m8707(NULL, &m8707_MI);
		V_7 = L_6;
		t2* L_7 = V_5;
		int32_t L_8 = m2724(L_7, &m2724_MI);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		t2* L_9 = V_5;
		uint16_t L_10 = m2739(L_9, 0, &m2739_MI);
		t1704 * L_11 = p6;
		t2* L_12 = m11490(NULL, L_10, L_11, (&V_0), (&V_1), &m11490_MI);
		V_5 = L_12;
	}

IL_0055:
	{
		t270 * L_13 = p4;
		m11399(L_13, (((int64_t)0)), &m11399_MI);
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
		t2* L_18 = m5987(L_17, (t312*)(t312*)NULL, &m5987_MI);
		V_5 = L_18;
		t2* L_19 = p0;
		t2* L_20 = m5987(L_19, (t312*)(t312*)NULL, &m5987_MI);
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
		t2* L_23 = m5806(L_22, (t312*)(t312*)NULL, &m5806_MI);
		V_5 = L_23;
		t2* L_24 = p0;
		t2* L_25 = m5806(L_24, (t312*)(t312*)NULL, &m5806_MI);
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
		t1704 * L_27 = V_7;
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
		int32_t L_31 = m2724(L_30, &m2724_MI);
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
		int32_t L_35 = m2724(L_34, &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_41 = m11457(NULL, L_39, L_40, &m11457_MI);
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
		uint16_t L_45 = m2739(L_43, L_44, &m2739_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		m11453(NULL, L_46, L_47, 0, (t2*) &_stringLiteral2688, (&V_25), &m11453_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_52 = m11457(NULL, L_49, ((int32_t)((int32_t)L_50+(int32_t)L_51)), &m11457_MI);
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
		t1704 * L_58 = p6;
		bool L_59 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_60 = m11454(NULL, L_56, L_57, 0, L_58, L_59, (&V_25), (&V_20), &m11454_MI);
		if (!L_60)
		{
			goto IL_01a8;
		}
	}
	{
		t2* L_61 = p0;
		int32_t L_62 = V_4;
		int32_t L_63 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_64 = m11457(NULL, L_61, ((int32_t)((int32_t)L_62+(int32_t)L_63)), &m11457_MI);
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
		t1704 * L_73 = p6;
		t221* L_74 = m8693(L_73, &m8693_MI);
		t1704 * L_75 = V_7;
		t221* L_76 = m8693(L_75, &m8693_MI);
		bool L_77 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_78 = m11452(NULL, L_71, L_72, L_74, L_76, L_77, (&V_25), &m11452_MI);
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
		t1704 * L_82 = p6;
		t221* L_83 = m8691(L_82, &m8691_MI);
		t1704 * L_84 = V_7;
		t221* L_85 = m8691(L_84, &m8691_MI);
		bool L_86 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_87 = m11452(NULL, L_80, L_81, L_83, L_85, L_86, (&V_25), &m11452_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_92 = m11457(NULL, L_89, ((int32_t)((int32_t)L_90+(int32_t)L_91)), &m11457_MI);
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
		uint16_t L_97 = m2739(L_95, L_96, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_98 = m5927(NULL, L_97, &m5927_MI);
		if (L_98)
		{
			goto IL_022c;
		}
	}
	{
		t2* L_99 = p0;
		int32_t L_100 = V_4;
		uint16_t L_101 = m2739(L_99, L_100, &m2739_MI);
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
		int32_t L_111 = m2724(L_110, &m2724_MI);
		uint16_t L_112 = m2739(L_109, ((int32_t)((int32_t)L_111-(int32_t)1)), &m2739_MI);
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
		int32_t L_122 = m2724(L_121, &m2724_MI);
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
		uint16_t L_125 = m2739(L_123, L_124, &m2739_MI);
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
		uint16_t L_129 = m2739(L_126, ((int32_t)((int32_t)L_127+(int32_t)L_128)), &m2739_MI);
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
		int32_t L_132 = m2724(L_131, &m2724_MI);
		if ((((int32_t)L_130) == ((int32_t)L_132)))
		{
			goto IL_02f0;
		}
	}
	{
		t2* L_133 = p0;
		int32_t L_134 = V_4;
		uint16_t L_135 = m2739(L_133, L_134, &m2739_MI);
		t2* L_136 = V_8;
		int32_t L_137 = V_10;
		int32_t L_138 = V_11;
		uint16_t L_139 = m2739(L_136, ((int32_t)((int32_t)L_137+(int32_t)L_138)), &m2739_MI);
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
		uint16_t L_149 = m2739(L_147, L_148, &m2739_MI);
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
		uint16_t L_153 = m2739(L_150, ((int32_t)((int32_t)L_151+(int32_t)L_152)), &m2739_MI);
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
		int32_t L_156 = m2724(L_155, &m2724_MI);
		if ((((int32_t)L_154) == ((int32_t)L_156)))
		{
			goto IL_035c;
		}
	}
	{
		t2* L_157 = p0;
		int32_t L_158 = V_4;
		uint16_t L_159 = m2739(L_157, L_158, &m2739_MI);
		t2* L_160 = V_8;
		int32_t L_161 = V_10;
		int32_t L_162 = V_11;
		uint16_t L_163 = m2739(L_160, ((int32_t)((int32_t)L_161+(int32_t)L_162)), &m2739_MI);
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
		uint16_t L_173 = m2739(L_171, L_172, &m2739_MI);
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
		uint16_t L_180 = m2739(L_178, L_179, &m2739_MI);
		t2* L_181 = V_8;
		int32_t L_182 = V_10;
		uint16_t L_183 = m2739(L_181, L_182, &m2739_MI);
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
		uint16_t L_188 = m2739(L_186, L_187, &m2739_MI);
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
		uint16_t L_192 = m2739(L_190, L_191, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_193 = m5927(NULL, L_192, &m5927_MI);
		if (L_193)
		{
			goto IL_0424;
		}
	}
	{
		t2* L_194 = p0;
		int32_t L_195 = V_4;
		uint16_t L_196 = m2739(L_194, L_195, &m2739_MI);
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
		uint16_t L_200 = m2739(L_198, L_199, &m2739_MI);
		if ((((int32_t)L_200) == ((int32_t)((int32_t)47))))
		{
			goto IL_0424;
		}
	}

IL_0411:
	{
		t2* L_201 = V_8;
		int32_t L_202 = V_10;
		uint16_t L_203 = m2739(L_201, L_202, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_204 = m5927(NULL, L_203, &m5927_MI);
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
		uint16_t L_210 = m2739(L_208, L_209, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_211 = m5927(NULL, L_210, &m5927_MI);
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
		uint16_t L_216 = m2739(L_214, L_215, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_217 = m5927(NULL, L_216, &m5927_MI);
		if (L_217)
		{
			goto IL_0474;
		}
	}
	{
		t2* L_218 = p0;
		int32_t L_219 = V_28;
		uint16_t L_220 = m2739(L_218, L_219, &m2739_MI);
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
		int32_t L_224 = m2724(L_223, &m2724_MI);
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
		uint16_t L_229 = m2739(L_227, L_228, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_230 = m5927(NULL, L_229, &m5927_MI);
		if (L_230)
		{
			goto IL_04af;
		}
	}
	{
		t2* L_231 = V_8;
		int32_t L_232 = V_28;
		uint16_t L_233 = m2739(L_231, L_232, &m2739_MI);
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
		int32_t L_237 = m2724(L_236, &m2724_MI);
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
		int32_t L_242 = m2724(L_241, &m2724_MI);
		if ((((int32_t)L_240) >= ((int32_t)L_242)))
		{
			goto IL_04f8;
		}
	}
	{
		t2* L_243 = V_8;
		int32_t L_244 = V_10;
		uint16_t L_245 = m2739(L_243, L_244, &m2739_MI);
		if ((!(((uint32_t)L_245) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_04f8;
		}
	}
	{
		t2* L_246 = p0;
		int32_t L_247 = V_4;
		t1704 * L_248 = p6;
		bool L_249 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_250 = m11456(NULL, L_246, L_247, L_248, L_249, (&V_25), &m11456_MI);
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
		uint16_t L_258 = m2739(L_255, ((int32_t)((int32_t)((int32_t)((int32_t)L_256+(int32_t)L_257))+(int32_t)1)), &m2739_MI);
		t2* L_259 = V_8;
		int32_t L_260 = V_10;
		int32_t L_261 = V_11;
		uint16_t L_262 = m2739(L_259, ((int32_t)((int32_t)L_260+(int32_t)L_261)), &m2739_MI);
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
		uint16_t L_266 = m2739(L_264, L_265, &m2739_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_282 = m11451(NULL, L_279, L_280, 1, 2, 0, L_281, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_287 = m11451(NULL, L_284, L_285, 1, 2, 1, L_286, (&V_25), &m11451_MI);
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
		t1704 * L_291 = p6;
		t221* L_292 = m8691(L_291, &m8691_MI);
		t1704 * L_293 = V_7;
		t221* L_294 = m8691(L_293, &m8691_MI);
		bool L_295 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_296 = m11452(NULL, L_289, L_290, L_292, L_294, L_295, (&V_25), &m11452_MI);
		V_13 = L_296;
		goto IL_0655;
	}

IL_063a:
	{
		t2* L_297 = p0;
		int32_t L_298 = V_4;
		t1704 * L_299 = p6;
		t221* L_300 = m8693(L_299, &m8693_MI);
		t1704 * L_301 = V_7;
		t221* L_302 = m8693(L_301, &m8693_MI);
		bool L_303 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_304 = m11452(NULL, L_297, L_298, L_300, L_302, L_303, (&V_25), &m11452_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_312 = m11451(NULL, L_309, L_310, 1, 2, 0, L_311, (&V_25), &m11451_MI);
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
		t1704 * L_317 = p6;
		t221* L_318 = m8694(L_317, &m8694_MI);
		t1704 * L_319 = V_7;
		t221* L_320 = m8694(L_319, &m8694_MI);
		bool L_321 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_322 = m11452(NULL, L_315, L_316, L_318, L_320, L_321, (&V_25), &m11452_MI);
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
		t1704 * L_327 = p6;
		t221* L_328 = m8692(L_327, &m8692_MI);
		t1704 * L_329 = V_7;
		t221* L_330 = m8692(L_329, &m8692_MI);
		bool L_331 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_332 = m11452(NULL, L_325, L_326, L_328, L_330, L_331, (&V_25), &m11452_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_337 = m11451(NULL, L_334, L_335, 1, 2, 0, L_336, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_342 = m11451(NULL, L_339, L_340, 1, 2, 1, L_341, (&V_25), &m11451_MI);
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
		t1704 * L_346 = p6;
		t221* L_347 = m8692(L_346, &m8692_MI);
		t1704 * L_348 = V_7;
		t221* L_349 = m8692(L_348, &m8692_MI);
		bool L_350 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_351 = m11452(NULL, L_344, L_345, L_347, L_349, L_350, (&V_25), &m11452_MI);
		V_14 = ((int32_t)((int32_t)L_351+(int32_t)1));
		goto IL_0744;
	}

IL_0727:
	{
		t2* L_352 = p0;
		int32_t L_353 = V_4;
		t1704 * L_354 = p6;
		t221* L_355 = m8694(L_354, &m8694_MI);
		t1704 * L_356 = V_7;
		t221* L_357 = m8694(L_356, &m8694_MI);
		bool L_358 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_359 = m11452(NULL, L_352, L_353, L_355, L_357, L_358, (&V_25), &m11452_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_365 = m11451(NULL, L_362, L_363, 1, 2, 0, L_364, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_370 = m11451(NULL, L_367, L_368, 1, 2, 1, L_369, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_375 = m11451(NULL, G_B174_2, G_B174_1, G_B174_0, 4, 0, L_374, (&V_25), &m11451_MI);
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
		int32_t L_380 = m2724(L_379, &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_385 = m11451(NULL, L_382, L_383, 5, 5, 0, L_384, (&V_29), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_396 = m11451(NULL, L_393, L_394, 1, 2, 0, L_395, (&V_25), &m11451_MI);
		V_16 = L_396;
		goto IL_0825;
	}

IL_0815:
	{
		t2* L_397 = p0;
		int32_t L_398 = V_4;
		bool L_399 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_400 = m11451(NULL, L_397, L_398, 1, 2, 1, L_399, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_410 = m11451(NULL, L_407, L_408, 1, 2, 0, L_409, (&V_25), &m11451_MI);
		V_16 = L_410;
		goto IL_0870;
	}

IL_0860:
	{
		t2* L_411 = p0;
		int32_t L_412 = V_4;
		bool L_413 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_414 = m11451(NULL, L_411, L_412, 1, 2, 1, L_413, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_421 = m11451(NULL, L_418, L_419, 1, 2, 0, L_420, (&V_25), &m11451_MI);
		V_17 = L_421;
		goto IL_08aa;
	}

IL_089a:
	{
		t2* L_422 = p0;
		int32_t L_423 = V_4;
		bool L_424 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_425 = m11451(NULL, L_422, L_423, 1, 2, 1, L_424, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_432 = m11451(NULL, L_429, L_430, 1, 2, 0, L_431, (&V_25), &m11451_MI);
		V_18 = L_432;
		goto IL_08e4;
	}

IL_08d4:
	{
		t2* L_433 = p0;
		int32_t L_434 = V_4;
		bool L_435 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_436 = m11451(NULL, L_433, L_434, 1, 2, 1, L_435, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_445 = m11451(NULL, L_440, L_441, 0, ((int32_t)((int32_t)L_442+(int32_t)1)), L_443, L_444, (&V_25), &m11451_MI);
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
		t1704 * L_453 = p6;
		bool L_454 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_455 = m11454(NULL, G_B232_2, G_B232_1, G_B232_0, L_453, L_454, (&V_25), (&V_20), &m11454_MI);
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
		uint16_t L_459 = m2739(L_457, L_458, &m2739_MI);
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
		uint16_t L_462 = m2739(L_460, L_461, &m2739_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_468 = m11451(NULL, L_465, L_466, 1, 2, 0, L_467, (&V_25), &m11451_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_473 = m11451(NULL, L_470, L_471, 1, 2, 1, L_472, (&V_25), &m11451_MI);
		V_22 = L_473;
		goto IL_0a37;
	}

IL_09c6:
	{
		t2* L_474 = p0;
		int32_t L_475 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_476 = m11451(NULL, L_474, L_475, 1, 2, 1, 1, (&V_25), &m11451_MI);
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
		int32_t L_482 = m2724(L_481, &m2724_MI);
		if ((((int32_t)L_480) >= ((int32_t)L_482)))
		{
			goto IL_0a00;
		}
	}
	{
		t2* L_483 = p0;
		int32_t L_484 = V_4;
		uint16_t L_485 = m2739(L_483, L_484, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_486 = m5926(NULL, L_485, &m5926_MI);
		if (L_486)
		{
			goto IL_0a0f;
		}
	}

IL_0a00:
	{
		t2* L_487 = p0;
		int32_t L_488 = V_4;
		t1704 * L_489 = p6;
		bool L_490 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_491 = m11455(NULL, L_487, L_488, L_489, L_490, (&V_25), &m11455_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_497 = m11451(NULL, L_494, L_495, 1, 2, 1, L_496, (&V_25), &m11451_MI);
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
		uint16_t L_502 = m2739(L_500, L_501, &m2739_MI);
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
		uint16_t L_506 = m2739(L_504, L_505, &m2739_MI);
		if ((((int32_t)L_506) == ((int32_t)((int32_t)43))))
		{
			goto IL_0a70;
		}
	}
	{
		t2* L_507 = p0;
		int32_t L_508 = V_4;
		uint16_t L_509 = m2739(L_507, L_508, &m2739_MI);
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
		uint16_t L_513 = m2739(L_511, L_512, &m2739_MI);
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
		uint16_t L_516 = m2739(L_514, L_515, &m2739_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_521 = m11451(NULL, L_518, L_519, 0, 2, 1, L_520, (&V_25), &m11451_MI);
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
		uint16_t L_527 = m2739(L_525, L_526, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_528 = m5926(NULL, L_527, &m5926_MI);
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
		t1704 * L_531 = p6;
		t2* L_532 = m8698(L_531, &m8698_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_533 = m11453(NULL, L_529, L_530, 0, L_532, (&V_25), &m11453_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_539 = m11451(NULL, L_536, L_537, 0, 2, 1, L_538, (&V_25), &m11451_MI);
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
		uint16_t L_543 = m2739(L_541, L_542, &m2739_MI);
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
		uint16_t L_546 = m2739(L_544, L_545, &m2739_MI);
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
		int32_t L_551 = m2724(L_550, &m2724_MI);
		if ((((int32_t)((int32_t)((int32_t)L_549+(int32_t)2))) >= ((int32_t)L_551)))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_552 = V_8;
		int32_t L_553 = V_10;
		uint16_t L_554 = m2739(L_552, ((int32_t)((int32_t)L_553+(int32_t)1)), &m2739_MI);
		if ((!(((uint32_t)L_554) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_555 = p0;
		int32_t L_556 = V_4;
		uint16_t L_557 = m2739(L_555, ((int32_t)((int32_t)L_556+(int32_t)1)), &m2739_MI);
		if ((!(((uint32_t)L_557) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_558 = V_8;
		int32_t L_559 = V_10;
		uint16_t L_560 = m2739(L_558, ((int32_t)((int32_t)L_559+(int32_t)2)), &m2739_MI);
		if ((!(((uint32_t)L_560) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_561 = p0;
		int32_t L_562 = V_4;
		uint16_t L_563 = m2739(L_561, ((int32_t)((int32_t)L_562+(int32_t)2)), &m2739_MI);
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
		t1704 * L_566 = p6;
		bool L_567 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_568 = m11455(NULL, L_564, L_565, L_566, L_567, (&V_25), &m11455_MI);
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
		t1704 * L_571 = p6;
		bool L_572 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_573 = m11456(NULL, L_569, L_570, L_571, L_572, (&V_25), &m11456_MI);
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
		uint16_t L_576 = m2739(L_574, L_575, &m2739_MI);
		t2* L_577 = V_8;
		int32_t L_578 = V_10;
		uint16_t L_579 = m2739(L_577, L_578, &m2739_MI);
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
		uint16_t L_587 = m2739(L_585, L_586, &m2739_MI);
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
		int32_t L_594 = m2724(L_593, &m2724_MI);
		int32_t L_595 = V_4;
		if ((((int32_t)L_594) <= ((int32_t)L_595)))
		{
			goto IL_0c59;
		}
	}
	{
		t2* L_596 = p0;
		int32_t L_597 = V_4;
		uint16_t L_598 = m2739(L_596, L_597, &m2739_MI);
		if ((!(((uint32_t)L_598) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0c59;
		}
	}
	{
		int32_t L_599 = V_10;
		t2* L_600 = V_8;
		int32_t L_601 = m2724(L_600, &m2724_MI);
		if ((((int32_t)((int32_t)((int32_t)L_599+(int32_t)1))) == ((int32_t)L_601)))
		{
			goto IL_0c51;
		}
	}
	{
		t2* L_602 = V_8;
		int32_t L_603 = V_10;
		uint16_t L_604 = m2739(L_602, ((int32_t)((int32_t)L_603+(int32_t)1)), &m2739_MI);
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
		uint16_t L_612 = m2739(L_610, L_611, &m2739_MI);
		if ((!(((uint32_t)L_612) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0cb1;
		}
	}
	{
		t2* L_613 = V_8;
		int32_t L_614 = V_10;
		uint16_t L_615 = m2739(L_613, ((int32_t)((int32_t)L_614+(int32_t)1)), &m2739_MI);
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
		uint16_t L_622 = m2739(L_620, L_621, &m2739_MI);
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
		uint16_t L_628 = m2739(L_626, L_627, &m2739_MI);
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
		int32_t L_632 = m2724(L_631, &m2724_MI);
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
		uint16_t L_637 = m2739(L_635, L_636, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_638 = m5926(NULL, L_637, &m5926_MI);
		if (!L_638)
		{
			goto IL_0d06;
		}
	}
	{
		t2* L_639 = p0;
		int32_t L_640 = V_4;
		uint16_t L_641 = m2739(L_639, ((int32_t)((int32_t)L_640-(int32_t)1)), &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_642 = m5926(NULL, L_641, &m5926_MI);
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
		uint16_t L_645 = m2739(L_643, L_644, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_646 = m2790(NULL, L_645, &m2790_MI);
		if (!L_646)
		{
			goto IL_0d28;
		}
	}
	{
		t2* L_647 = p0;
		int32_t L_648 = V_4;
		uint16_t L_649 = m2739(L_647, ((int32_t)((int32_t)L_648-(int32_t)1)), &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_650 = m2790(NULL, L_649, &m2790_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_660 = m11430(NULL, &m11430_MI);
		V_36 = L_660;
		int32_t L_661 = m11423((&V_36), &m11423_MI);
		V_12 = L_661;
		t270  L_662 = m11430(NULL, &m11430_MI);
		V_37 = L_662;
		int32_t L_663 = m11422((&V_37), &m11422_MI);
		V_14 = L_663;
		t270  L_664 = m11430(NULL, &m11430_MI);
		V_38 = L_664;
		int32_t L_665 = m11431((&V_38), &m11431_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_670 = m11430(NULL, &m11430_MI);
		V_39 = L_670;
		int32_t L_671 = m11431((&V_39), &m11431_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int32_t L_686 = m11442(NULL, L_684, L_685, &m11442_MI);
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
		t270 * L_693 = p4;
		int32_t L_694 = V_15;
		int32_t L_695 = V_14;
		int32_t L_696 = V_12;
		int32_t L_697 = V_16;
		int32_t L_698 = V_17;
		int32_t L_699 = V_18;
		m11401(L_693, L_694, L_695, L_696, L_697, L_698, L_699, 0, &m11401_MI);
		t270 * L_700 = p4;
		t270 * L_701 = p4;
		double L_702 = V_19;
		t270  L_703 = m6977(L_701, L_702, &m6977_MI);
		*L_700 = L_703;
		int32_t L_704 = V_13;
		if ((((int32_t)L_704) == ((int32_t)(-1))))
		{
			goto IL_0e84;
		}
	}
	{
		int32_t L_705 = V_13;
		t270 * L_706 = p4;
		int32_t L_707 = m11424(L_706, &m11424_MI);
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
		t270 * L_709 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_710 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		bool L_711 = m11468(NULL, (*(t270 *)L_709), L_710, &m11468_MI);
		if (!L_711)
		{
			goto IL_0eaf;
		}
	}

IL_0e9c:
	try
	{ // begin try (depth: 1)
		t917 * L_712 = p5;
		t270 * L_713 = p4;
		m11471(L_712, (*(t270 *)L_713), &m11471_MI);
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
		t917 * L_719 = p5;
		t270 * L_720 = p4;
		int32_t L_721 = V_22;
		int32_t L_722 = V_23;
		t304  L_723 = {0};
		m11813(&L_723, L_721, L_722, 0, &m11813_MI);
		m11472(L_719, (*(t270 *)L_720), L_723, &m11472_MI);
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
		t270 * L_726 = p4;
		t304  L_727 = (L_726->f0);
		t917 * L_728 = p5;
		t304  L_729 = m11485(L_728, &m11485_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_730 = m11848(NULL, L_727, L_729, &m11848_MI);
		V_40 = L_730;
		int64_t L_731 = m11822((&V_40), &m11822_MI);
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
		t270 * L_734 = p4;
		int64_t L_735 = V_33;
		t304  L_736 = {0};
		m11812(&L_736, L_735, &m11812_MI);
		m11402(L_734, 0, L_736, &m11402_MI);
		t270 * L_737 = p4;
		L_737->f1 = 1;
		int32_t L_738 = p7;
		if (!((int32_t)((int32_t)L_738&(int32_t)((int32_t)128))))
		{
			goto IL_0f60;
		}
	}
	{
		t270 * L_739 = p4;
		t270 * L_740 = p4;
		t270  L_741 = m5818(L_740, &m5818_MI);
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
		t270 * L_744 = p4;
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
		t270 * L_746 = p4;
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
		t270 * L_749 = p4;
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
		t270 * L_752 = p4;
		t270 * L_753 = p4;
		t270  L_754 = m4405(L_753, &m4405_MI);
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
		t270 * L_756 = p4;
		t270 * L_757 = p4;
		t270  L_758 = m5818(L_757, &m5818_MI);
		*L_756 = L_758;
	}

IL_0fc8:
	{
		return 1;
	}
}
extern MethodInfo m6894_MI;
extern TypeInfo* t221_TI_var;
extern "C" t270  m6894 (t9 * __this , t2* p0, t2* p1, t9 * p2, int32_t p3, MethodInfo* method)
{
	static bool m6894_init;
	if (!m6894_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m6894_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1134, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_8 = m11459(NULL, L_4, L_5, L_6, L_7, &m11459_MI);
		return L_8;
	}
}
extern "C" t270  m11459 (t9 * __this , t2* p0, t221* p1, t9 * p2, int32_t p3, MethodInfo* method)
{
	t1704 * V_0 = {0};
	t270  V_1 = {0};
	bool V_2 = false;
	t138 * V_3 = {0};
	{
		t9 * L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_1 = m8683(NULL, L_0, &m8683_MI);
		V_0 = L_1;
		int32_t L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		m11460(NULL, L_2, &m11460_MI);
		t2* L_3 = p0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral1076, &m339_MI);
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
		m339(L_6, (t2*) &_stringLiteral2689, &m339_MI);
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
		t890 * L_8 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_8, (t2*) &_stringLiteral1543, &m4313_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		V_2 = 0;
		V_3 = (t138 *)NULL;
		t2* L_9 = p0;
		t221* L_10 = p1;
		t1704 * L_11 = V_0;
		int32_t L_12 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_13 = m11461(NULL, L_9, L_10, L_11, L_12, (&V_1), 1, (&V_2), 1, (&V_3), &m11461_MI);
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
		t270  L_15 = V_1;
		return L_15;
	}
}
extern "C" void m11460 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_4, (t2*) &_stringLiteral2690, (t2*) &_stringLiteral1165, &m5720_MI);
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
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_7, (t2*) &_stringLiteral2691, (t2*) &_stringLiteral1165, &m5720_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0047:
	{
		return;
	}
}
extern "C" bool m11461 (t9 * __this , t2* p0, t221* p1, t1704 * p2, int32_t p3, t270 * p4, bool p5, bool* p6, bool p7, t138 ** p8, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	t270  V_2 = {0};
	t2* V_3 = {0};
	t917  V_4 = {0};
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
		t1704 * L_12 = p2;
		int32_t L_13 = p3;
		bool* L_14 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_15 = m11458(NULL, L_7, (*(t2**)(t2**)SZArrayLdElema(L_8, L_10)), (t2*)NULL, L_11, (&V_2), (&V_4), L_12, L_13, 0, (&V_1), L_14, &m11458_MI);
		if (!L_15)
		{
			goto IL_003f;
		}
	}
	{
		t270 * L_16 = p4;
		t270  L_17 = V_2;
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
		t890 * L_23 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_23, (t2*) &_stringLiteral2692, &m4313_MI);
		*((t9 **)(L_22)) = (t9 *)L_23;
	}

IL_005a:
	{
		t270 * L_24 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_25 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		*L_24 = L_25;
		return 0;
	}
}
extern MethodInfo m11462_MI;
extern "C" t270  m11462 (t270 * __this, t304  p0, MethodInfo* method)
{
	t304  V_0 = {0};
	t270  V_1 = {0};
	{
		t304 * L_0 = &(__this->f0);
		int64_t L_1 = m11822(L_0, &m11822_MI);
		t304  L_2 = {0};
		m11812(&L_2, L_1, &m11812_MI);
		t304  L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_4 = m11848(NULL, L_2, L_3, &m11848_MI);
		V_0 = L_4;
		t304  L_5 = V_0;
		m11402((&V_1), 1, L_5, &m11402_MI);
		int32_t L_6 = (__this->f1);
		(&V_1)->f1 = L_6;
		t270  L_7 = V_1;
		return L_7;
	}
}
extern MethodInfo m1098_MI;
extern "C" t2* m1098 (t270 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11465(__this, (t2*) &_stringLiteral352, &m11465_MI);
		return L_0;
	}
}
extern MethodInfo m11463_MI;
extern "C" t2* m11463 (t270 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4406(__this, (t2*) &_stringLiteral1168, (t9 *)NULL, &m4406_MI);
		return L_0;
	}
}
extern "C" t2* m11464 (t270 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = m4406(__this, (t2*)NULL, L_0, &m4406_MI);
		return L_1;
	}
}
extern "C" t2* m11465 (t270 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4406(__this, L_0, (t9 *)NULL, &m4406_MI);
		return L_1;
	}
}
extern "C" t2* m4406 (t270 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1704 * V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	uint16_t V_3 = 0x0;
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_1 = m8683(NULL, L_0, &m8683_MI);
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
		p0 = (t2*) &_stringLiteral1168;
	}

IL_0020:
	{
		V_1 = 0;
		V_2 = 0;
		t2* L_6 = p0;
		int32_t L_7 = m2724(L_6, &m2724_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		t2* L_8 = p0;
		uint16_t L_9 = m2739(L_8, 0, &m2739_MI);
		V_3 = L_9;
		uint16_t L_10 = V_3;
		t1704 * L_11 = V_0;
		t2* L_12 = m11490(NULL, L_10, L_11, (&V_1), (&V_2), &m11490_MI);
		p0 = L_12;
		uint16_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_0057;
		}
	}
	{
		t270  L_14 = m4405(__this, &m4405_MI);
		t2* L_15 = p0;
		t1704 * L_16 = V_0;
		t2* L_17 = m11492(NULL, L_14, L_15, L_16, &m11492_MI);
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
		t890 * L_19 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_19, (t2*) &_stringLiteral2693, &m4313_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0065:
	{
		t2* L_20 = p0;
		t1704 * L_21 = V_0;
		t2* L_22 = m11492(NULL, (*(t270 *)__this), L_20, L_21, &m11492_MI);
		return L_22;
	}
}
extern "C" t270  m5818 (t270 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_0 = m11851(NULL, &m11851_MI);
		t270  L_1 = (t270 )VirtFuncInvoker1< t270 , t270  >::Invoke(&m11854_MI, L_0, (*(t270 *)__this));
		return L_1;
	}
}
extern "C" t270  m4405 (t270 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_0 = m11851(NULL, &m11851_MI);
		t270  L_1 = (t270 )VirtFuncInvoker1< t270 , t270  >::Invoke(&m11855_MI, L_0, (*(t270 *)__this));
		return L_1;
	}
}
extern "C" t270  m11466 (t9 * __this , t270  p0, t304  p1, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_2 = m11841(NULL, L_0, L_1, &m11841_MI);
		m11402((&V_0), 1, L_2, &m11402_MI);
		int32_t L_3 = ((&p0)->f1);
		(&V_0)->f1 = L_3;
		t270  L_4 = V_0;
		return L_4;
	}
}
extern MethodInfo m11467_MI;
extern "C" bool m11467 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11842(NULL, L_0, L_1, &m11842_MI);
		return L_2;
	}
}
extern MethodInfo m5854_MI;
extern "C" bool m5854 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11843(NULL, L_0, L_1, &m11843_MI);
		return L_2;
	}
}
extern MethodInfo m5754_MI;
extern "C" bool m5754 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11844(NULL, L_0, L_1, &m11844_MI);
		return L_2;
	}
}
extern "C" bool m11468 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11845(NULL, L_0, L_1, &m11845_MI);
		return L_2;
	}
}
extern MethodInfo m5853_MI;
extern "C" bool m5853 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11846(NULL, L_0, L_1, &m11846_MI);
		return L_2;
	}
}
extern MethodInfo m5852_MI;
extern "C" bool m5852 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_2 = m11847(NULL, L_0, L_1, &m11847_MI);
		return L_2;
	}
}
extern MethodInfo m11469_MI;
extern "C" t304  m11469 (t9 * __this , t270  p0, t270  p1, MethodInfo* method)
{
	t304  V_0 = {0};
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_2 = m11848(NULL, L_0, L_1, &m11848_MI);
		V_0 = L_2;
		int64_t L_3 = m11822((&V_0), &m11822_MI);
		t304  L_4 = {0};
		m11812(&L_4, L_3, &m11812_MI);
		return L_4;
	}
}
extern MethodInfo m11470_MI;
extern "C" t270  m11470 (t9 * __this , t270  p0, t304  p1, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		t304  L_0 = ((&p0)->f0);
		t304  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_2 = m11848(NULL, L_0, L_1, &m11848_MI);
		m11402((&V_0), 1, L_2, &m11402_MI);
		int32_t L_3 = ((&p0)->f1);
		(&V_0)->f1 = L_3;
		t270  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2103_TI;
#include "t2103MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t917_TI;

#include "t2195.h"
#include "t2196.h"
#include "t2105.h"
extern TypeInfo t2195_TI;
extern TypeInfo t2196_TI;
extern TypeInfo t2105_TI;
#include "t2195MD.h"
#include "t2196MD.h"
#include "t2105MD.h"
extern Il2CppType t2195_0_0_0;
extern Il2CppType t2196_0_0_0;
extern Il2CppType t2105_0_0_0;
extern MethodInfo m12137_MI;
extern MethodInfo m11486_MI;
extern MethodInfo m5732_MI;
extern MethodInfo m10333_MI;
extern MethodInfo m11834_MI;
extern MethodInfo m12138_MI;
extern MethodInfo m12139_MI;
extern MethodInfo m11479_MI;
extern MethodInfo m10330_MI;
extern MethodInfo m11826_MI;
extern MethodInfo m10329_MI;
extern MethodInfo m11837_MI;
extern MethodInfo m4408_MI;
extern MethodInfo m8702_MI;
extern MethodInfo m11491_MI;
extern MethodInfo m12140_MI;
extern MethodInfo m11493_MI;
extern MethodInfo m11484_MI;
extern Il2CppGenericMethod m12138_GM;
extern Il2CppGenericMethod m12139_GM;
extern Il2CppGenericMethod m12140_GM;


extern "C" void m11471 (t917 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_2 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		__this->f3 = L_2;
		goto IL_002f;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_3 = m11851(NULL, &m11851_MI);
		t270  L_4 = p0;
		t304  L_5 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, L_3, L_4);
		__this->f3 = L_5;
	}

IL_002f:
	{
		t270  L_6 = m11486(__this, &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_7 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		bool L_8 = m5853(NULL, L_6, L_7, &m5853_MI);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		t270  L_9 = m11486(__this, &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_10 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		bool L_11 = m5854(NULL, L_9, L_10, &m5854_MI);
		if (!L_11)
		{
			goto IL_005e;
		}
	}

IL_0053:
	{
		t903 * L_12 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_12, (t2*) &_stringLiteral2694, &m5722_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005e:
	{
		return;
	}
}
extern "C" void m11472 (t917 * __this, t270  p0, t304  p1, MethodInfo* method)
{
	{
		int32_t L_0 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		t304  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_2 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		bool L_3 = m11845(NULL, L_1, L_2, &m11845_MI);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral2695, &m2910_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		int32_t L_5 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004a;
		}
	}
	{
		t304  L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_7 = m11851(NULL, &m11851_MI);
		t270  L_8 = p0;
		t304  L_9 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, L_7, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_10 = m11845(NULL, L_6, L_9, &m11845_MI);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_11, (t2*) &_stringLiteral2696, &m2910_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004a:
	{
		int64_t L_12 = m11822((&p1), &m11822_MI);
		if (!((int64_t)((int64_t)L_12%(int64_t)(((int64_t)((int32_t)600000000))))))
		{
			goto IL_0065;
		}
	}
	{
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_13, (t2*) &_stringLiteral2697, &m2910_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0065:
	{
		t304  L_14 = p1;
		t304  L_15 = {0};
		m11813(&L_15, ((int32_t)-14), 0, 0, &m11813_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_16 = m11846(NULL, L_14, L_15, &m11846_MI);
		if (L_16)
		{
			goto IL_0087;
		}
	}
	{
		t304  L_17 = p1;
		t304  L_18 = {0};
		m11813(&L_18, ((int32_t)14), 0, 0, &m11813_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		bool L_19 = m11843(NULL, L_17, L_18, &m11843_MI);
		if (!L_19)
		{
			goto IL_0092;
		}
	}

IL_0087:
	{
		t903 * L_20 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_20, (t2*) &_stringLiteral2698, &m5722_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0092:
	{
		t270  L_21 = p0;
		__this->f2 = L_21;
		t304  L_22 = p1;
		__this->f3 = L_22;
		t270  L_23 = m11486(__this, &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_24 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		bool L_25 = m5853(NULL, L_23, L_24, &m5853_MI);
		if (L_25)
		{
			goto IL_00c4;
		}
	}
	{
		t270  L_26 = m11486(__this, &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_27 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		bool L_28 = m5854(NULL, L_26, L_27, &m5854_MI);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}

IL_00c4:
	{
		t903 * L_29 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_29, (t2*) &_stringLiteral2699, &m5722_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00cf:
	{
		return;
	}
}
extern "C" void m11473 (t917 * __this, int64_t p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		t270  L_1 = {0};
		m11399(&L_1, L_0, &m11399_MI);
		t304  L_2 = p1;
		m11472(__this, L_1, L_2, &m11472_MI);
		return;
	}
}
extern MethodInfo m11474_MI;
extern "C" void m11474 (t917 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t270  V_0 = {0};
	int16_t V_1 = 0;
	{
		t1100 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t270_0_0_0), &m329_MI);
		t9 * L_2 = m5732(L_0, (t2*) &_stringLiteral2700, L_1, &m5732_MI);
		V_0 = ((*(t270 *)((t270 *)UnBox (L_2, InitializedTypeInfo(&t270_TI)))));
		t1100 * L_3 = p0;
		int16_t L_4 = m10333(L_3, (t2*) &_stringLiteral2701, &m10333_MI);
		V_1 = L_4;
		int16_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_6 = m11834(NULL, (((double)L_5)), &m11834_MI);
		__this->f3 = L_6;
		t304  L_7 = (__this->f3);
		t270  L_8 = m11433((&V_0), L_7, &m11433_MI);
		__this->f2 = L_8;
		return;
	}
}
extern MethodInfo m11475_MI;
extern TypeInfo* t2195_TI_var;
extern TypeInfo* t2196_TI_var;
extern MethodInfo* m12138_MI_var;
extern MethodInfo* m12139_MI_var;
extern "C" void m11475 (t9 * __this , MethodInfo* method)
{
	static bool m11475_init;
	if (!m11475_init)
	{
		t2195_TI_var = il2cpp_codegen_class_from_type(&t2195_0_0_0);
		t2196_TI_var = il2cpp_codegen_class_from_type(&t2196_0_0_0);
		m12138_MI_var = il2cpp_codegen_genericmethod_get_method(&m12138_GM);
		m12139_MI_var = il2cpp_codegen_genericmethod_get_method(&m12139_GM);
		m11475_init = true;
	}
	t2195 * V_0 = {0};
	t2196 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_0 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t917  L_2 = {0};
		m11472(&L_2, L_0, L_1, &m11472_MI);
		((t917_SFs*)InitializedTypeInfo(&t917_TI)->static_fields)->f0 = L_2;
		t270  L_3 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		t304  L_4 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t917  L_5 = {0};
		m11472(&L_5, L_3, L_4, &m11472_MI);
		((t917_SFs*)InitializedTypeInfo(&t917_TI)->static_fields)->f1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2131_TI));
		bool L_6 = ((t2131_SFs*)InitializedTypeInfo(&t2131_TI)->static_fields)->f0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		t2195 * L_7 = (t2195 *)il2cpp_codegen_object_new (t2195_TI_var);
		m12138(L_7, m12138_MI_var);
		V_0 = L_7;
		t2196 * L_8 = (t2196 *)il2cpp_codegen_object_new (t2196_TI_var);
		m12139(L_8, m12139_MI_var);
		V_1 = L_8;
	}

IL_003b:
	{
		return;
	}
}
extern MethodInfo m11476_MI;
extern "C" int32_t m11476 (t917 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = m11479(__this, ((*(t917 *)((t917 *)UnBox (L_0, InitializedTypeInfo(&t917_TI))))), &m11479_MI);
		return L_1;
	}
}
extern MethodInfo m11477_MI;
extern "C" void m11477 (t917 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t270  V_0 = {0};
	t270  V_1 = {0};
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t270 * L_2 = &(__this->f2);
		int64_t L_3 = m6980(L_2, &m6980_MI);
		m11399((&V_1), L_3, &m11399_MI);
		t304  L_4 = (__this->f3);
		t270  L_5 = m11462((&V_1), L_4, &m11462_MI);
		V_0 = L_5;
		t1100 * L_6 = p0;
		t270  L_7 = V_0;
		m10330(L_6, (t2*) &_stringLiteral2700, L_7, &m10330_MI);
		t1100 * L_8 = p0;
		t304 * L_9 = &(__this->f3);
		double L_10 = m11826(L_9, &m11826_MI);
		m10329(L_8, (t2*) &_stringLiteral2701, (((int16_t)L_10)), &m10329_MI);
		return;
	}
}
extern MethodInfo m11478_MI;
extern "C" void m11478 (t917 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" int32_t m11479 (t917 * __this, t917  p0, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		t270  L_0 = m11486(__this, &m11486_MI);
		V_0 = L_0;
		t270  L_1 = m11486((&p0), &m11486_MI);
		int32_t L_2 = m11437((&V_0), L_1, &m11437_MI);
		return L_2;
	}
}
extern MethodInfo m11480_MI;
extern "C" bool m11480 (t917 * __this, t917  p0, MethodInfo* method)
{
	{
		t270  L_0 = m11486(__this, &m11486_MI);
		t270  L_1 = m11486((&p0), &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_2 = m11467(NULL, L_0, L_1, &m11467_MI);
		return L_2;
	}
}
extern MethodInfo m11481_MI;
extern "C" bool m11481 (t917 * __this, t9 * p0, MethodInfo* method)
{
	t917  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t917_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t270  L_1 = m11486(__this, &m11486_MI);
		t9 * L_2 = p0;
		V_0 = ((*(t917 *)((t917 *)UnBox (L_2, InitializedTypeInfo(&t917_TI)))));
		t270  L_3 = m11486((&V_0), &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_4 = m11467(NULL, L_1, L_3, &m11467_MI);
		return L_4;
	}

IL_0022:
	{
		return 0;
	}
}
extern MethodInfo m11482_MI;
extern "C" int32_t m11482 (t917 * __this, MethodInfo* method)
{
	{
		t270 * L_0 = &(__this->f2);
		int32_t L_1 = m11445(L_0, &m11445_MI);
		t304 * L_2 = &(__this->f3);
		int32_t L_3 = m11837(L_2, &m11837_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern MethodInfo m11483_MI;
extern "C" t2* m11483 (t917 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4408(__this, (t2*)NULL, (t9 *)NULL, &m4408_MI);
		return L_0;
	}
}
extern MethodInfo* m12140_MI_var;
extern "C" t2* m4408 (t917 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4408_init;
	if (!m4408_init)
	{
		m12140_MI_var = il2cpp_codegen_genericmethod_get_method(&m12140_GM);
		m4408_init = true;
	}
	t1704 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_1 = m8683(NULL, L_0, &m8683_MI);
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
		t1704 * L_6 = V_0;
		t2* L_7 = m8700(L_6, &m8700_MI);
		t1704 * L_8 = V_0;
		t2* L_9 = m8702(L_8, &m8702_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m4444(NULL, L_7, (t2*) &_stringLiteral163, L_9, (t2*) &_stringLiteral2702, &m4444_MI);
		p0 = L_10;
	}

IL_0036:
	{
		V_1 = 0;
		V_2 = 0;
		t2* L_11 = p0;
		int32_t L_12 = m2724(L_11, &m2724_MI);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		t2* L_13 = p0;
		uint16_t L_14 = m2739(L_13, 0, &m2739_MI);
		V_3 = L_14;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		uint16_t L_15 = V_3;
		t1704 * L_16 = V_0;
		t2* L_17 = m11491(NULL, L_15, L_16, (&V_1), (&V_2), 1, &m11491_MI);
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
		t890 * L_19 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_19, (t2*) &_stringLiteral2693, &m4313_MI);
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
		t270  L_21 = m11486(__this, &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_22 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t2105  L_23 = {0};
		m12140(&L_23, L_22, m12140_MI_var);
		t2* L_24 = p0;
		t1704 * L_25 = V_0;
		t2* L_26 = m11493(NULL, L_21, L_23, L_24, L_25, &m11493_MI);
		G_B12_0 = L_26;
		goto IL_00a7;
	}

IL_008f:
	{
		t270  L_27 = m11484(__this, &m11484_MI);
		t304  L_28 = m11485(__this, &m11485_MI);
		t2105  L_29 = {0};
		m12140(&L_29, L_28, m12140_MI_var);
		t2* L_30 = p0;
		t1704 * L_31 = V_0;
		t2* L_32 = m11493(NULL, L_27, L_29, L_30, L_31, &m11493_MI);
		G_B12_0 = L_32;
	}

IL_00a7:
	{
		return G_B12_0;
	}
}
extern MethodInfo m4407_MI;
extern "C" t917  m4407 (t917 * __this, MethodInfo* method)
{
	{
		t270  L_0 = m11486(__this, &m11486_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		t917  L_2 = {0};
		m11472(&L_2, L_0, L_1, &m11472_MI);
		return L_2;
	}
}
extern "C" t270  m11484 (t917 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_1 = m11441(NULL, L_0, 0, &m11441_MI);
		return L_1;
	}
}
extern "C" t304  m11485 (t917 * __this, MethodInfo* method)
{
	{
		t304  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t270  m11486 (t917 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f2);
		t304  L_1 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_2 = m11470(NULL, L_0, L_1, &m11470_MI);
		t270  L_3 = m11441(NULL, L_2, 1, &m11441_MI);
		return L_3;
	}
}
#include "t2104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2104_TI;

#include "t1699.h"
extern TypeInfo t1699_TI;
extern TypeInfo t1700_TI;
#include "t1699MD.h"
extern MethodInfo m7325_MI;
extern MethodInfo m8699_MI;
extern MethodInfo m8701_MI;
extern MethodInfo m399_MI;
extern MethodInfo m8705_MI;
extern MethodInfo m8711_MI;
extern MethodInfo m8710_MI;
extern MethodInfo m8712_MI;
extern MethodInfo m8713_MI;
extern MethodInfo m8704_MI;
extern MethodInfo m11487_MI;
extern MethodInfo m11488_MI;
extern MethodInfo m10891_MI;
extern MethodInfo m11570_MI;
extern MethodInfo m5815_MI;
extern MethodInfo m5898_MI;
extern MethodInfo m8708_MI;
extern MethodInfo m12141_MI;
extern MethodInfo m12142_MI;
extern MethodInfo m8718_MI;
extern MethodInfo m8717_MI;
extern MethodInfo m12143_MI;
extern MethodInfo m8688_MI;
extern MethodInfo m8690_MI;
extern MethodInfo m12144_MI;
extern MethodInfo m12145_MI;
extern MethodInfo m8689_MI;
extern MethodInfo m8697_MI;
extern MethodInfo m11489_MI;
extern Il2CppGenericMethod m12146_GM;
extern Il2CppGenericMethod m12147_GM;


extern "C" int32_t m11487 (t9 * __this , t2* p0, int32_t p1, uint16_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2724(L_0, &m2724_MI);
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
		uint16_t L_8 = m2739(L_6, L_7, &m2739_MI);
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
extern "C" void m11488 (t9 * __this , t322 * p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t322 * L_13 = p0;
		uint16_t* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_17 = m7393(L_17, (uint16_t*)(uint16_t*)L_14, L_15, ((int32_t)((int32_t)((int32_t)16)-(int32_t)L_16)), &m7325_MI);
		m1170(L_13, L_17, &m1170_MI);
		return;
	}
}
extern "C" int32_t m11489 (t9 * __this , t2* p0, int32_t p1, t322 * p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2724(L_0, &m2724_MI);
		V_0 = L_1;
		int32_t L_2 = p1;
		V_1 = L_2;
		t2* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = L_4;
		p1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		uint16_t L_6 = m2739(L_3, L_5, &m2739_MI);
		V_2 = L_6;
		goto IL_0064;
	}

IL_001a:
	{
		t2* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = L_8;
		p1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint16_t L_10 = m2739(L_7, L_9, &m2739_MI);
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
		t890 * L_18 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_18, (t2*) &_stringLiteral2703, &m4313_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0045:
	{
		t322 * L_19 = p2;
		t2* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = L_21;
		p1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		uint16_t L_23 = m2739(L_20, L_22, &m2739_MI);
		m2758(L_19, L_23, &m2758_MI);
		goto IL_0064;
	}

IL_005c:
	{
		t322 * L_24 = p2;
		uint16_t L_25 = V_3;
		m2758(L_24, L_25, &m2758_MI);
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
		t890 * L_28 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_28, (t2*) &_stringLiteral2703, &m4313_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" t2* m11490 (t9 * __this , uint16_t p0, t1704 * p1, bool* p2, bool* p3, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		t1704 * L_1 = p1;
		bool* L_2 = p2;
		bool* L_3 = p3;
		t2* L_4 = m11491(NULL, L_0, L_1, L_2, L_3, 0, &m11491_MI);
		return L_4;
	}
}
extern "C" t2* m11491 (t9 * __this , uint16_t p0, t1704 * p1, bool* p2, bool* p3, bool p4, MethodInfo* method)
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
		t1704 * L_8 = p1;
		t2* L_9 = m8700(L_8, &m8700_MI);
		V_0 = L_9;
		goto IL_01a9;
	}

IL_00bd:
	{
		t1704 * L_10 = p1;
		t2* L_11 = m8699(L_10, &m8699_MI);
		V_0 = L_11;
		goto IL_01a9;
	}

IL_00c9:
	{
		t1704 * L_12 = p1;
		t2* L_13 = m8699(L_12, &m8699_MI);
		t1704 * L_14 = p1;
		t2* L_15 = m8701(L_14, &m8701_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m399(NULL, L_13, (t2*) &_stringLiteral163, L_15, &m399_MI);
		V_0 = L_16;
		goto IL_01a9;
	}

IL_00e5:
	{
		t1704 * L_17 = p1;
		t2* L_18 = m8705(L_17, &m8705_MI);
		V_0 = L_18;
		goto IL_01a9;
	}

IL_00f1:
	{
		t1704 * L_19 = p1;
		t2* L_20 = m8700(L_19, &m8700_MI);
		t1704 * L_21 = p1;
		t2* L_22 = m8701(L_21, &m8701_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m399(NULL, L_20, (t2*) &_stringLiteral163, L_22, &m399_MI);
		V_0 = L_23;
		goto IL_01a9;
	}

IL_010d:
	{
		t1704 * L_24 = p1;
		t2* L_25 = m8700(L_24, &m8700_MI);
		t1704 * L_26 = p1;
		t2* L_27 = m8702(L_26, &m8702_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_28 = m399(NULL, L_25, (t2*) &_stringLiteral163, L_27, &m399_MI);
		V_0 = L_28;
		goto IL_01a9;
	}

IL_0129:
	{
		t1704 * L_29 = p1;
		t2* L_30 = m8703(L_29, &m8703_MI);
		V_0 = L_30;
		goto IL_01a9;
	}

IL_0135:
	{
		t1704 * L_31 = p1;
		t2* L_32 = m8711(L_31, &m8711_MI);
		V_0 = L_32;
		bool* L_33 = p3;
		*((int8_t*)(L_33)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0144:
	{
		t1704 * L_34 = p1;
		t2* L_35 = m8710(L_34, &m8710_MI);
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
		t1704 * L_39 = p1;
		t2* L_40 = m8712(L_39, &m8712_MI);
		V_0 = L_40;
		bool* L_41 = p3;
		*((int8_t*)(L_41)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0163:
	{
		t1704 * L_42 = p1;
		t2* L_43 = m8701(L_42, &m8701_MI);
		V_0 = L_43;
		goto IL_01a9;
	}

IL_016c:
	{
		t1704 * L_44 = p1;
		t2* L_45 = m8702(L_44, &m8702_MI);
		V_0 = L_45;
		goto IL_01a9;
	}

IL_0175:
	{
		t1704 * L_46 = p1;
		t2* L_47 = m8713(L_46, &m8713_MI);
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
		t1704 * L_52 = p1;
		t2* L_53 = m8705(L_52, &m8705_MI);
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
		t1704 * L_55 = p1;
		t2* L_56 = m8704(L_55, &m8704_MI);
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
extern TypeInfo* t2105_TI_var;
extern "C" t2* m11492 (t9 * __this , t270  p0, t2* p1, t1704 * p2, MethodInfo* method)
{
	static bool m11492_init;
	if (!m11492_init)
	{
		t2105_TI_var = il2cpp_codegen_class_from_type(&t2105_0_0_0);
		m11492_init = true;
	}
	t2105  V_0 = {0};
	{
		t270  L_0 = p0;
		Initobj (t2105_TI_var, (&V_0));
		t2105  L_1 = V_0;
		t2* L_2 = p1;
		t1704 * L_3 = p2;
		t2* L_4 = m11493(NULL, L_0, L_1, L_2, L_3, &m11493_MI);
		return L_4;
	}
}
extern MethodInfo* m12146_MI_var;
extern MethodInfo* m12147_MI_var;
extern "C" t2* m11493 (t9 * __this , t270  p0, t2105  p1, t2* p2, t1704 * p3, MethodInfo* method)
{
	static bool m11493_init;
	if (!m11493_init)
	{
		m12146_MI_var = il2cpp_codegen_genericmethod_get_method(&m12146_GM);
		m12147_MI_var = il2cpp_codegen_genericmethod_get_method(&m12147_GM);
		m11493_init = true;
	}
	t322 * V_0 = {0};
	t1704 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint16_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	t2* V_9 = {0};
	t304  V_10 = {0};
	int32_t V_11 = 0;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t G_B17_0 = 0;
	t322 * G_B17_1 = {0};
	int32_t G_B16_0 = 0;
	t322 * G_B16_1 = {0};
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	t322 * G_B18_2 = {0};
	int32_t G_B21_0 = 0;
	t322 * G_B21_1 = {0};
	int32_t G_B20_0 = 0;
	t322 * G_B20_1 = {0};
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	t322 * G_B22_2 = {0};
	int32_t G_B25_0 = 0;
	t322 * G_B25_1 = {0};
	int32_t G_B24_0 = 0;
	t322 * G_B24_1 = {0};
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	t322 * G_B26_2 = {0};
	int32_t G_B29_0 = 0;
	t322 * G_B29_1 = {0};
	int32_t G_B28_0 = 0;
	t322 * G_B28_1 = {0};
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	t322 * G_B30_2 = {0};
	t2* G_B47_0 = {0};
	t304  G_B56_0 = {0};
	t304  G_B71_0 = {0};
	int32_t G_B81_0 = 0;
	t322 * G_B81_1 = {0};
	int32_t G_B80_0 = 0;
	t322 * G_B80_1 = {0};
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	t322 * G_B82_2 = {0};
	{
		t2* L_0 = p2;
		int32_t L_1 = m2724(L_0, &m2724_MI);
		t322 * L_2 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_2, ((int32_t)((int32_t)L_1+(int32_t)((int32_t)10))), &m4355_MI);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_3 = m8707(NULL, &m8707_MI);
		V_1 = L_3;
		t2* L_4 = p2;
		t1704 * L_5 = V_1;
		t2* L_6 = m8710(L_5, &m8710_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_7 = m331(NULL, L_4, L_6, &m331_MI);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		t1704 * L_8 = V_1;
		p3 = L_8;
		goto IL_003d;
	}

IL_002a:
	{
		t2* L_9 = p2;
		t1704 * L_10 = V_1;
		t2* L_11 = m8713(L_10, &m8713_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_12 = m331(NULL, L_9, L_11, &m331_MI);
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		t1704 * L_13 = V_1;
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
		uint16_t L_16 = m2739(L_14, L_15, &m2739_MI);
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
		int32_t L_28 = m11487(NULL, L_25, L_26, L_27, &m11487_MI);
		V_3 = L_28;
		int32_t L_29 = m11425((&p0), &m11425_MI);
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
		t322 * L_31 = V_0;
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
		m11488(NULL, G_B18_2, G_B18_1, G_B18_0, &m11488_MI);
		goto IL_0610;
	}

IL_014f:
	{
		t2* L_34 = p2;
		int32_t L_35 = V_2;
		uint16_t L_36 = V_5;
		int32_t L_37 = m11487(NULL, L_34, L_35, L_36, &m11487_MI);
		V_3 = L_37;
		t322 * L_38 = V_0;
		int32_t L_39 = m11425((&p0), &m11425_MI);
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
		m11488(NULL, G_B22_2, G_B22_1, G_B22_0, &m11488_MI);
		goto IL_0610;
	}

IL_0173:
	{
		t2* L_41 = p2;
		int32_t L_42 = V_2;
		uint16_t L_43 = V_5;
		int32_t L_44 = m11487(NULL, L_41, L_42, L_43, &m11487_MI);
		V_3 = L_44;
		t322 * L_45 = V_0;
		int32_t L_46 = m11426((&p0), &m11426_MI);
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
		m11488(NULL, G_B26_2, G_B26_1, G_B26_0, &m11488_MI);
		goto IL_0610;
	}

IL_0197:
	{
		t2* L_48 = p2;
		int32_t L_49 = V_2;
		uint16_t L_50 = V_5;
		int32_t L_51 = m11487(NULL, L_48, L_49, L_50, &m11487_MI);
		V_3 = L_51;
		t322 * L_52 = V_0;
		int32_t L_53 = m11427((&p0), &m11427_MI);
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
		m11488(NULL, G_B30_2, G_B30_1, G_B30_0, &m11488_MI);
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
		int32_t L_58 = m11487(NULL, L_55, L_56, L_57, &m11487_MI);
		V_3 = L_58;
		int32_t L_59 = V_3;
		if ((((int32_t)L_59) <= ((int32_t)7)))
		{
			goto IL_01d9;
		}
	}
	{
		t890 * L_60 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_60, (t2*) &_stringLiteral2704, &m4313_MI);
		il2cpp_codegen_raise_exception(L_60);
	}

IL_01d9:
	{
		int64_t L_61 = m6980((&p0), &m6980_MI);
		int32_t L_62 = V_3;
		double L_63 = pow((10.0), (((double)((int32_t)((int32_t)7-(int32_t)L_62)))));
		V_7 = (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_61%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)L_63))))));
		t322 * L_64 = V_0;
		int32_t L_65 = m5885(L_64, &m5885_MI);
		V_8 = L_65;
		t322 * L_66 = V_0;
		int32_t L_67 = V_7;
		int32_t L_68 = V_3;
		m11488(NULL, L_66, L_67, L_68, &m11488_MI);
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
		t322 * L_70 = V_0;
		t322 * L_71 = L_70;
		int32_t L_72 = m5885(L_71, &m5885_MI);
		m5990(L_71, ((int32_t)((int32_t)L_72-(int32_t)1)), &m5990_MI);
	}

IL_0223:
	{
		t322 * L_73 = V_0;
		int32_t L_74 = m5885(L_73, &m5885_MI);
		int32_t L_75 = V_8;
		if ((((int32_t)L_74) <= ((int32_t)L_75)))
		{
			goto IL_023f;
		}
	}
	{
		t322 * L_76 = V_0;
		t322 * L_77 = V_0;
		int32_t L_78 = m5885(L_77, &m5885_MI);
		uint16_t L_79 = m10891(L_76, ((int32_t)((int32_t)L_78-(int32_t)1)), &m10891_MI);
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
		t322 * L_82 = V_0;
		int32_t L_83 = V_8;
		uint16_t L_84 = m10891(L_82, ((int32_t)((int32_t)L_83-(int32_t)1)), &m10891_MI);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0264;
		}
	}
	{
		t322 * L_85 = V_0;
		t322 * L_86 = L_85;
		int32_t L_87 = m5885(L_86, &m5885_MI);
		m5990(L_86, ((int32_t)((int32_t)L_87-(int32_t)1)), &m5990_MI);
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
		int32_t L_91 = m11487(NULL, L_88, L_89, L_90, &m11487_MI);
		V_3 = L_91;
		int32_t L_92 = m11425((&p0), &m11425_MI);
		if ((((int32_t)L_92) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0286;
		}
	}
	{
		t1704 * L_93 = p3;
		t2* L_94 = m8695(L_93, &m8695_MI);
		G_B47_0 = L_94;
		goto IL_028c;
	}

IL_0286:
	{
		t1704 * L_95 = p3;
		t2* L_96 = m8696(L_95, &m8696_MI);
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
		int32_t L_99 = m2724(L_98, &m2724_MI);
		if ((((int32_t)L_99) < ((int32_t)1)))
		{
			goto IL_02ab;
		}
	}
	{
		t322 * L_100 = V_0;
		t2* L_101 = V_9;
		uint16_t L_102 = m2739(L_101, 0, &m2739_MI);
		m2758(L_100, L_102, &m2758_MI);
	}

IL_02ab:
	{
		goto IL_02b6;
	}

IL_02ad:
	{
		t322 * L_103 = V_0;
		t2* L_104 = V_9;
		m1170(L_103, L_104, &m1170_MI);
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
		int32_t L_108 = m11487(NULL, L_105, L_106, L_107, &m11487_MI);
		V_3 = L_108;
		bool L_109 = m12146((&p1), m12146_MI_var);
		if (!L_109)
		{
			goto IL_02d7;
		}
	}
	{
		t304  L_110 = m12147((&p1), m12147_MI_var);
		G_B56_0 = L_110;
		goto IL_02e2;
	}

IL_02d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_111 = m11851(NULL, &m11851_MI);
		t270  L_112 = p0;
		t304  L_113 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, L_111, L_112);
		G_B56_0 = L_113;
	}

IL_02e2:
	{
		V_10 = G_B56_0;
		int64_t L_114 = m11822((&V_10), &m11822_MI);
		if ((((int64_t)L_114) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_02fa;
		}
	}
	{
		t322 * L_115 = V_0;
		m2758(L_115, ((int32_t)43), &m2758_MI);
		goto IL_0303;
	}

IL_02fa:
	{
		t322 * L_116 = V_0;
		m2758(L_116, ((int32_t)45), &m2758_MI);
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
		t322 * L_120 = V_0;
		int32_t L_121 = m11818((&V_10), &m11818_MI);
		int32_t L_122 = abs(L_121);
		m5815(L_120, L_122, &m5815_MI);
		goto IL_0397;
	}

IL_0327:
	{
		t322 * L_123 = V_0;
		int32_t L_124 = m11818((&V_10), &m11818_MI);
		int32_t L_125 = abs(L_124);
		V_14 = L_125;
		t2* L_126 = m5898((&V_14), (t2*) &_stringLiteral2705, &m5898_MI);
		m1170(L_123, L_126, &m1170_MI);
		goto IL_0397;
	}

IL_034a:
	{
		t322 * L_127 = V_0;
		int32_t L_128 = m11818((&V_10), &m11818_MI);
		int32_t L_129 = abs(L_128);
		V_15 = L_129;
		t2* L_130 = m5898((&V_15), (t2*) &_stringLiteral2705, &m5898_MI);
		m1170(L_127, L_130, &m1170_MI);
		t322 * L_131 = V_0;
		m2758(L_131, ((int32_t)58), &m2758_MI);
		t322 * L_132 = V_0;
		int32_t L_133 = m11820((&V_10), &m11820_MI);
		int32_t L_134 = abs(L_133);
		V_16 = L_134;
		t2* L_135 = m5898((&V_16), (t2*) &_stringLiteral2705, &m5898_MI);
		m1170(L_132, L_135, &m1170_MI);
		goto IL_0397;
	}

IL_0397:
	{
		goto IL_0610;
	}

IL_039c:
	{
		V_3 = 1;
		bool L_136 = m12146((&p1), m12146_MI_var);
		if (L_136)
		{
			goto IL_03b4;
		}
	}
	{
		int32_t L_137 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_137) == ((uint32_t)2))))
		{
			goto IL_043f;
		}
	}

IL_03b4:
	{
		bool L_138 = m12146((&p1), m12146_MI_var);
		if (!L_138)
		{
			goto IL_03c6;
		}
	}
	{
		t304  L_139 = m12147((&p1), m12147_MI_var);
		G_B71_0 = L_139;
		goto IL_03d1;
	}

IL_03c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_140 = m11851(NULL, &m11851_MI);
		t270  L_141 = p0;
		t304  L_142 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, L_140, L_141);
		G_B71_0 = L_142;
	}

IL_03d1:
	{
		V_10 = G_B71_0;
		int64_t L_143 = m11822((&V_10), &m11822_MI);
		if ((((int64_t)L_143) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_03e9;
		}
	}
	{
		t322 * L_144 = V_0;
		m2758(L_144, ((int32_t)43), &m2758_MI);
		goto IL_03f2;
	}

IL_03e9:
	{
		t322 * L_145 = V_0;
		m2758(L_145, ((int32_t)45), &m2758_MI);
	}

IL_03f2:
	{
		t322 * L_146 = V_0;
		int32_t L_147 = m11818((&V_10), &m11818_MI);
		int32_t L_148 = abs(L_147);
		V_13 = L_148;
		t2* L_149 = m5898((&V_13), (t2*) &_stringLiteral2705, &m5898_MI);
		m1170(L_146, L_149, &m1170_MI);
		t322 * L_150 = V_0;
		m2758(L_150, ((int32_t)58), &m2758_MI);
		t322 * L_151 = V_0;
		int32_t L_152 = m11820((&V_10), &m11820_MI);
		int32_t L_153 = abs(L_152);
		V_17 = L_153;
		t2* L_154 = m5898((&V_17), (t2*) &_stringLiteral2705, &m5898_MI);
		m1170(L_151, L_154, &m1170_MI);
		goto IL_0452;
	}

IL_043f:
	{
		int32_t L_155 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_155) == ((uint32_t)1))))
		{
			goto IL_0452;
		}
	}
	{
		t322 * L_156 = V_0;
		m2758(L_156, ((int32_t)90), &m2758_MI);
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
		int32_t L_160 = m11487(NULL, L_157, L_158, L_159, &m11487_MI);
		V_3 = L_160;
		int32_t L_161 = V_3;
		if ((((int32_t)L_161) > ((int32_t)2)))
		{
			goto IL_0481;
		}
	}
	{
		t322 * L_162 = V_0;
		t1704 * L_163 = p3;
		t1699 * L_164 = m8708(L_163, &m8708_MI);
		t270  L_165 = p0;
		int32_t L_166 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12141_MI, L_164, L_165);
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
		m11488(NULL, G_B82_2, G_B82_1, G_B82_0, &m11488_MI);
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
		t322 * L_169 = V_0;
		t1704 * L_170 = p3;
		t1704 * L_171 = p3;
		t1699 * L_172 = m8708(L_171, &m8708_MI);
		t270  L_173 = p0;
		int32_t L_174 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12142_MI, L_172, L_173);
		t2* L_175 = m8718(L_170, L_174, &m8718_MI);
		m1170(L_169, L_175, &m1170_MI);
		goto IL_04b9;
	}

IL_04a0:
	{
		t322 * L_176 = V_0;
		t1704 * L_177 = p3;
		t1704 * L_178 = p3;
		t1699 * L_179 = m8708(L_178, &m8708_MI);
		t270  L_180 = p0;
		int32_t L_181 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12142_MI, L_179, L_180);
		t2* L_182 = m8717(L_177, L_181, &m8717_MI);
		m1170(L_176, L_182, &m1170_MI);
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
		int32_t L_186 = m11487(NULL, L_183, L_184, L_185, &m11487_MI);
		V_3 = L_186;
		t1704 * L_187 = p3;
		t1699 * L_188 = m8708(L_187, &m8708_MI);
		t270  L_189 = p0;
		int32_t L_190 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12143_MI, L_188, L_189);
		V_11 = L_190;
		int32_t L_191 = V_3;
		if ((((int32_t)L_191) > ((int32_t)2)))
		{
			goto IL_04e5;
		}
	}
	{
		t322 * L_192 = V_0;
		int32_t L_193 = V_11;
		int32_t L_194 = V_3;
		m11488(NULL, L_192, L_193, L_194, &m11488_MI);
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
		t322 * L_196 = V_0;
		t1704 * L_197 = p3;
		int32_t L_198 = V_11;
		t2* L_199 = m8688(L_197, L_198, &m8688_MI);
		m1170(L_196, L_199, &m1170_MI);
		goto IL_0509;
	}

IL_04fa:
	{
		t322 * L_200 = V_0;
		t1704 * L_201 = p3;
		int32_t L_202 = V_11;
		t2* L_203 = m8690(L_201, L_202, &m8690_MI);
		m1170(L_200, L_203, &m1170_MI);
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
		int32_t L_207 = m11487(NULL, L_204, L_205, L_206, &m11487_MI);
		V_3 = L_207;
		int32_t L_208 = V_3;
		if ((((int32_t)L_208) > ((int32_t)2)))
		{
			goto IL_0534;
		}
	}
	{
		t322 * L_209 = V_0;
		t1704 * L_210 = p3;
		t1699 * L_211 = m8708(L_210, &m8708_MI);
		t270  L_212 = p0;
		int32_t L_213 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12144_MI, L_211, L_212);
		int32_t L_214 = V_3;
		m11488(NULL, L_209, ((int32_t)((int32_t)L_213%(int32_t)((int32_t)100))), L_214, &m11488_MI);
		goto IL_0547;
	}

IL_0534:
	{
		t322 * L_215 = V_0;
		t1704 * L_216 = p3;
		t1699 * L_217 = m8708(L_216, &m8708_MI);
		t270  L_218 = p0;
		int32_t L_219 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12144_MI, L_217, L_218);
		int32_t L_220 = V_3;
		m11488(NULL, L_215, L_219, L_220, &m11488_MI);
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
		int32_t L_224 = m11487(NULL, L_221, L_222, L_223, &m11487_MI);
		V_3 = L_224;
		t322 * L_225 = V_0;
		t1704 * L_226 = p3;
		t1704 * L_227 = p3;
		t1699 * L_228 = m8708(L_227, &m8708_MI);
		t270  L_229 = p0;
		int32_t L_230 = (int32_t)VirtFuncInvoker1< int32_t, t270  >::Invoke(&m12145_MI, L_228, L_229);
		t2* L_231 = m8689(L_226, L_230, &m8689_MI);
		m1170(L_225, L_231, &m1170_MI);
		goto IL_0610;
	}

IL_0574:
	{
		t322 * L_232 = V_0;
		t1704 * L_233 = p3;
		t2* L_234 = m8698(L_233, &m8698_MI);
		m1170(L_232, L_234, &m1170_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_0588:
	{
		t322 * L_235 = V_0;
		t1704 * L_236 = p3;
		t2* L_237 = m8697(L_236, &m8697_MI);
		m1170(L_235, L_237, &m1170_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_059c:
	{
		t2* L_238 = p2;
		int32_t L_239 = V_2;
		t322 * L_240 = V_0;
		int32_t L_241 = m11489(NULL, L_238, L_239, L_240, &m11489_MI);
		V_3 = L_241;
		goto IL_0610;
	}

IL_05a7:
	{
		int32_t L_242 = V_2;
		t2* L_243 = p2;
		int32_t L_244 = m2724(L_243, &m2724_MI);
		if ((((int32_t)L_242) < ((int32_t)((int32_t)((int32_t)L_244-(int32_t)1)))))
		{
			goto IL_05bd;
		}
	}
	{
		t890 * L_245 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_245, (t2*) &_stringLiteral2706, &m4313_MI);
		il2cpp_codegen_raise_exception(L_245);
	}

IL_05bd:
	{
		t2* L_246 = p2;
		int32_t L_247 = V_2;
		uint16_t L_248 = m2739(L_246, ((int32_t)((int32_t)L_247+(int32_t)1)), &m2739_MI);
		if ((!(((uint32_t)L_248) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_05d5;
		}
	}
	{
		t890 * L_249 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_249, (t2*) &_stringLiteral2707, &m4313_MI);
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
		int32_t L_252 = m2724(L_251, &m2724_MI);
		if ((((int32_t)L_250) < ((int32_t)((int32_t)((int32_t)L_252-(int32_t)1)))))
		{
			goto IL_05ef;
		}
	}
	{
		t890 * L_253 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_253, (t2*) &_stringLiteral2708, &m4313_MI);
		il2cpp_codegen_raise_exception(L_253);
	}

IL_05ef:
	{
		t322 * L_254 = V_0;
		t2* L_255 = p2;
		int32_t L_256 = V_2;
		uint16_t L_257 = m2739(L_255, ((int32_t)((int32_t)L_256+(int32_t)1)), &m2739_MI);
		m2758(L_254, L_257, &m2758_MI);
		V_3 = 2;
		goto IL_0610;
	}

IL_0603:
	{
		t322 * L_258 = V_0;
		uint16_t L_259 = V_5;
		m2758(L_258, L_259, &m2758_MI);
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
		int32_t L_264 = m2724(L_263, &m2724_MI);
		if ((((int32_t)L_262) < ((int32_t)L_264)))
		{
			goto IL_0044;
		}
	}
	{
		t322 * L_265 = V_0;
		t2* L_266 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_265);
		return L_266;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1700MD.h"



#include "t1562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1562_TI;
#include "t1562MD.h"



#include "t2106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2106_TI;
#include "t2106MD.h"

#include "t293.h"
#include "t828.h"
#include "t560.h"
#include "t1926.h"
extern TypeInfo t1345_TI;
extern TypeInfo t560_TI;
extern TypeInfo t1927_TI;
extern TypeInfo t1926_TI;
#include "t1345MD.h"
#include "t293MD.h"
#include "t560MD.h"
#include "t1927MD.h"
#include "t1926MD.h"
extern MethodInfo m5772_MI;
extern MethodInfo m9452_MI;
extern MethodInfo m4463_MI;
extern MethodInfo m4453_MI;
extern MethodInfo m4392_MI;
extern MethodInfo m9463_MI;
extern MethodInfo m5773_MI;
extern MethodInfo m10093_MI;
extern MethodInfo m7779_MI;
extern MethodInfo m10089_MI;
extern MethodInfo m7612_MI;
extern MethodInfo m7615_MI;


extern MethodInfo m11494_MI;
extern "C" void m11494 (t2106 * __this, t293 * p0, t2* p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t293 * L_0 = p0;
		t126 * L_1 = m2511(L_0, &m2511_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_1);
		__this->f0 = L_2;
		t293 * L_3 = p0;
		t126 * L_4 = m2511(L_3, &m2511_MI);
		t1345 * L_5 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5772_MI, L_4);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9452_MI, L_5);
		__this->f1 = L_6;
		t2* L_7 = p1;
		__this->f2 = L_7;
		t293 * L_8 = p0;
		t828 * L_9 = m4463(L_8, &m4463_MI);
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4453_MI, L_9);
		t1345 * L_11 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5772_MI, L_10);
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9452_MI, L_11);
		__this->f3 = L_12;
		t293 * L_13 = p0;
		t828 * L_14 = m4463(L_13, &m4463_MI);
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4453_MI, L_14);
		t2* L_16 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_15);
		__this->f4 = L_16;
		t293 * L_17 = p0;
		t828 * L_18 = m4463(L_17, &m4463_MI);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_18);
		__this->f5 = L_19;
		return;
	}
}
extern MethodInfo m11495_MI;
extern "C" t293 * m11495 (t2106 * __this, t1100 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1345 * V_1 = {0};
	t126 * V_2 = {0};
	t293 * V_3 = {0};
	t1345 * V_4 = {0};
	t126 * V_5 = {0};
	t1345 * V_6 = {0};
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
		t1100 * L_1 = p0;
		t9 * L_2 = (__this->f2);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_5 = m5732(L_1, L_3, L_4, &m5732_MI);
		V_0 = L_5;
	}

IL_0026:
	{
		t2* L_6 = (__this->f1);
		t1345 * L_7 = m9463(NULL, L_6, &m9463_MI);
		V_1 = L_7;
		t1345 * L_8 = V_1;
		t2* L_9 = (__this->f0);
		t126 * L_10 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5773_MI, L_8, L_9);
		V_2 = L_10;
		t9 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		bool L_13 = m10093(NULL, L_12, &m10093_MI);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		t2* L_14 = (__this->f3);
		t1345 * L_15 = m9463(NULL, L_14, &m9463_MI);
		V_4 = L_15;
		t1345 * L_16 = V_4;
		t2* L_17 = (__this->f4);
		t126 * L_18 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5773_MI, L_16, L_17);
		V_5 = L_18;
		t126 * L_19 = V_5;
		t9 * L_20 = V_0;
		bool L_21 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7779_MI, L_19, L_20);
		if (L_21)
		{
			goto IL_007b;
		}
	}
	{
		t1926 * L_22 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10089(L_22, (t2*) &_stringLiteral2710, &m10089_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007b:
	{
		t126 * L_23 = V_2;
		t9 * L_24 = V_0;
		t2* L_25 = (__this->f5);
		t293 * L_26 = m7612(NULL, L_23, L_24, L_25, &m7612_MI);
		V_3 = L_26;
		goto IL_00b6;
	}

IL_008b:
	{
		t2* L_27 = (__this->f3);
		t1345 * L_28 = m9463(NULL, L_27, &m9463_MI);
		V_6 = L_28;
		t1345 * L_29 = V_6;
		t2* L_30 = (__this->f4);
		t126 * L_31 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5773_MI, L_29, L_30);
		V_7 = L_31;
		t126 * L_32 = V_2;
		t126 * L_33 = V_7;
		t2* L_34 = (__this->f5);
		t293 * L_35 = m7615(NULL, L_32, L_33, L_34, &m7615_MI);
		V_3 = L_35;
	}

IL_00b6:
	{
		t293 * L_36 = V_3;
		return L_36;
	}
}
#include "t2107.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2107_TI;
#include "t2107MD.h"

extern TypeInfo t1561_TI;
extern TypeInfo t293_TI;
extern Il2CppType t2106_0_0_0;
extern Il2CppType t1561_0_0_0;
extern Il2CppType t2107_0_0_0;
extern MethodInfo m7622_MI;
extern MethodInfo m7621_MI;
extern MethodInfo m4464_MI;
extern MethodInfo m10327_MI;


extern MethodInfo m11496_MI;
extern TypeInfo* t1561_TI_var;
extern "C" void m11496 (t2107 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	static bool m11496_init;
	if (!m11496_init)
	{
		t1561_TI_var = il2cpp_codegen_class_from_type(&t1561_0_0_0);
		m11496_init = true;
	}
	t2106 * V_0 = {0};
	int32_t V_1 = 0;
	t2106 * V_2 = {0};
	t1561* V_3 = {0};
	int32_t V_4 = 0;
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t2106_0_0_0), &m329_MI);
		t9 * L_2 = m5732(L_0, (t2*) &_stringLiteral2709, L_1, &m5732_MI);
		V_0 = ((t2106 *)Castclass(L_2, InitializedTypeInfo(&t2106_TI)));
		V_1 = 0;
		t2106 * L_3 = V_0;
		V_2 = L_3;
		goto IL_0032;
	}

IL_0027:
	{
		t2106 * L_4 = V_2;
		t2106 * L_5 = (L_4->f6);
		V_2 = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		t2106 * L_7 = V_2;
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
		t2106 * L_9 = V_0;
		t1100 * L_10 = p0;
		t293 * L_11 = m11495(L_9, L_10, &m11495_MI);
		__this->f0 = L_11;
		goto IL_007f;
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_3 = ((t1561*)SZArrayNew(t1561_TI_var, L_12));
		t2106 * L_13 = V_0;
		V_2 = L_13;
		V_4 = 0;
		goto IL_006e;
	}

IL_0056:
	{
		t1561* L_14 = V_3;
		int32_t L_15 = V_4;
		t2106 * L_16 = V_2;
		t1100 * L_17 = p0;
		t293 * L_18 = m11495(L_16, L_17, &m11495_MI);
		ArrayElementTypeCheck (L_14, L_18);
		*((t293 **)(t293 **)SZArrayLdElema(L_14, L_15)) = (t293 *)L_18;
		t2106 * L_19 = V_2;
		t2106 * L_20 = (L_19->f6);
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
		t1561* L_24 = V_3;
		t293 * L_25 = m7622(NULL, L_24, &m7622_MI);
		__this->f0 = L_25;
	}

IL_007f:
	{
		return;
	}
}
extern MethodInfo m11497_MI;
extern "C" void m11497 (t9 * __this , t293 * p0, t1100 * p1, t1101  p2, MethodInfo* method)
{
	t1561* V_0 = {0};
	t2106 * V_1 = {0};
	int32_t V_2 = 0;
	t293 * V_3 = {0};
	t2* V_4 = {0};
	t2106 * V_5 = {0};
	t2* G_B4_0 = {0};
	{
		t293 * L_0 = p0;
		t1561* L_1 = (t1561*)VirtFuncInvoker0< t1561* >::Invoke(&m7621_MI, L_0);
		V_0 = L_1;
		V_1 = (t2106 *)NULL;
		V_2 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		t1561* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_3 = (*(t293 **)(t293 **)SZArrayLdElema(L_2, L_4));
		t293 * L_5 = V_3;
		t9 * L_6 = m4464(L_5, &m4464_MI);
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
		t2* L_10 = m511(NULL, (t2*) &_stringLiteral390, L_9, &m511_MI);
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
		t293 * L_11 = V_3;
		t2* L_12 = V_4;
		t2106 * L_13 = (t2106 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2106_TI));
		m11494(L_13, L_11, L_12, &m11494_MI);
		V_5 = L_13;
		t2106 * L_14 = V_1;
		if (L_14)
		{
			goto IL_004a;
		}
	}
	{
		t1100 * L_15 = p1;
		t2106 * L_16 = V_5;
		m5744(L_15, (t2*) &_stringLiteral2709, L_16, &m5744_MI);
		goto IL_0052;
	}

IL_004a:
	{
		t2106 * L_17 = V_1;
		t2106 * L_18 = V_5;
		L_17->f6 = L_18;
	}

IL_0052:
	{
		t2106 * L_19 = V_5;
		V_1 = L_19;
		t293 * L_20 = V_3;
		t9 * L_21 = m4464(L_20, &m4464_MI);
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		t1100 * L_22 = p1;
		t2* L_23 = V_4;
		t293 * L_24 = V_3;
		t9 * L_25 = m4464(L_24, &m4464_MI);
		m5744(L_22, L_23, L_25, &m5744_MI);
	}

IL_006b:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_27 = V_2;
		t1561* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		t1100 * L_29 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t2107_0_0_0), &m329_MI);
		m10327(L_29, L_30, &m10327_MI);
		return;
	}
}
extern MethodInfo m11498_MI;
extern "C" void m11498 (t2107 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11499_MI;
extern "C" t9 * m11499 (t2107 * __this, t1101  p0, MethodInfo* method)
{
	{
		t293 * L_0 = (__this->f0);
		return L_0;
	}
}
#include "t2108.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2108_TI;
#include "t2108MD.h"



extern MethodInfo m11500_MI;
extern "C" void m11500 (t2108 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2711, &m7847_MI);
		m6887(__this, L_0, &m6887_MI);
		m4458(__this, ((int32_t)-2147352558), &m4458_MI);
		return;
	}
}
extern MethodInfo m11501_MI;
extern "C" void m11501 (t2108 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11151(__this, L_0, L_1, &m11151_MI);
		return;
	}
}
#include "t2109.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2109_TI;
#include "t2109MD.h"

#include "t2110MD.h"
extern MethodInfo m11869_MI;
extern MethodInfo m11870_MI;


extern MethodInfo m11502_MI;
extern "C" void m11502 (t2109 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2712, &m7847_MI);
		m11869(__this, L_0, &m11869_MI);
		m4458(__this, ((int32_t)-2146233052), &m4458_MI);
		return;
	}
}
extern MethodInfo m11503_MI;
extern "C" void m11503 (t2109 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11870(__this, L_0, L_1, &m11870_MI);
		return;
	}
}
#include "t2111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2111_TI;
#include "t2111MD.h"



extern MethodInfo m11504_MI;
extern "C" void m11504 (t2111 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2713, &m7847_MI);
		m11869(__this, L_0, &m11869_MI);
		m4458(__this, ((int32_t)-2146233053), &m4458_MI);
		return;
	}
}
extern MethodInfo m11505_MI;
extern "C" void m11505 (t2111 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11870(__this, L_0, L_1, &m11870_MI);
		return;
	}
}
#include "t2112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2112_TI;
#include "t2112MD.h"



extern MethodInfo m11506_MI;
extern "C" void m11506 (t2112 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11507_MI;
extern "C" int32_t m11507 (t2112 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
extern MethodInfo m11508_MI;
extern "C" int32_t m11508 (t2112 * __this, int8_t p0, int8_t p1, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		int8_t L_1 = p1;
		return ((int32_t)((int32_t)(((uint8_t)L_0))-(int32_t)(((uint8_t)L_1))));
	}
}
#include "t2113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2113_TI;
#include "t2113MD.h"



extern MethodInfo m11509_MI;
extern "C" void m11509 (t2113 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11510_MI;
extern "C" int32_t m11510 (t2113 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int16_t*)((int16_t*)UnBox (L_0, InitializedTypeInfo(&t334_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int16_t*)((int16_t*)UnBox (L_1, InitializedTypeInfo(&t334_TI)))));
		int16_t L_2 = V_0;
		int16_t L_3 = V_1;
		return ((int32_t)((int32_t)(((uint16_t)L_2))-(int32_t)(((uint16_t)L_3))));
	}
}
extern MethodInfo m11511_MI;
extern "C" int32_t m11511 (t2113 * __this, int16_t p0, int16_t p1, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		int16_t L_1 = p1;
		return ((int32_t)((int32_t)(((uint16_t)L_0))-(int32_t)(((uint16_t)L_1))));
	}
}
#include "t2114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2114_TI;
#include "t2114MD.h"



extern MethodInfo m11512_MI;
extern "C" void m11512 (t2114 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11513_MI;
extern "C" int32_t m11513 (t2114 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
extern MethodInfo m11514_MI;
extern "C" int32_t m11514 (t2114 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
#include "t2115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2115_TI;
#include "t2115MD.h"



extern MethodInfo m11515_MI;
extern "C" void m11515 (t2115 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11516_MI;
extern "C" int32_t m11516 (t2115 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_0, InitializedTypeInfo(&t299_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int64_t*)((int64_t*)UnBox (L_1, InitializedTypeInfo(&t299_TI)))));
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
extern MethodInfo m11517_MI;
extern "C" int32_t m11517 (t2115 * __this, int64_t p0, int64_t p1, MethodInfo* method)
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
#include "t2116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2116_TI;
#include "t2116MD.h"

#include "t1158.h"
extern TypeInfo t1158_TI;
extern TypeInfo t311_TI;
extern TypeInfo t1412_TI;
extern TypeInfo t2007_TI;
extern TypeInfo t2174_TI;
extern TypeInfo t2062_TI;
extern TypeInfo t1565_TI;
#include "t1158MD.h"
#include "t121MD.h"
extern Il2CppType t311_0_0_0;
extern Il2CppType t1412_0_0_0;
extern Il2CppType t2007_0_0_0;
extern Il2CppType t2174_0_0_0;
extern Il2CppType t2062_0_0_0;
extern Il2CppType t1565_0_0_0;
extern MethodInfo m5912_MI;
extern MethodInfo m11521_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m5736_MI;
extern MethodInfo m5920_MI;
extern MethodInfo m11520_MI;
extern MethodInfo m7726_MI;
extern MethodInfo m5919_MI;
extern MethodInfo m11518_MI;


extern "C" void m11518 (t2116 * __this, t2116  p0, MethodInfo* method)
{
	{
		t126 * L_0 = ((&p0)->f0);
		__this->f0 = L_0;
		t121 * L_1 = ((&p0)->f1);
		__this->f1 = L_1;
		t221* L_2 = ((&p0)->f2);
		__this->f2 = L_2;
		t1158 * L_3 = ((&p0)->f3);
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m11519_MI;
extern "C" void m11519 (t9 * __this , MethodInfo* method)
{
	{
		t2112 * L_0 = (t2112 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2112_TI));
		m11506(L_0, &m11506_MI);
		((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f7 = L_0;
		t2113 * L_1 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11509(L_1, &m11509_MI);
		((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f8 = L_1;
		t2114 * L_2 = (t2114 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2114_TI));
		m11512(L_2, &m11512_MI);
		((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f9 = L_2;
		t2115 * L_3 = (t2115 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2115_TI));
		m11515(L_3, &m11515_MI);
		((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f10 = L_3;
		t9 * L_4 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_4, &m336_MI);
		((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f6 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_5 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5912(L_5, &m5912_MI);
		((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f5 = L_5;
		return;
	}
}
extern "C" void m11520 (t9 * __this , t126 * p0, t2116 * p1, MethodInfo* method)
{
	typedef void (*m11520_ftn) (t126 *, t2116 *);
	static m11520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11520_ftn)il2cpp_codegen_resolve_icall ("System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1158 * m11521 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t1158 * L_0 = ((t2116_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2116_TI)))->f4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_1 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5912(L_1, &m5912_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		((t2116_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2116_TI)))->f4 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t1158 * L_2 = ((t2116_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2116_TI)))->f4;
		return L_2;
	}
}
extern MethodInfo m11522_MI;
extern TypeInfo* t730_TI_var;
extern TypeInfo* t311_TI_var;
extern TypeInfo* t1412_TI_var;
extern TypeInfo* t2007_TI_var;
extern TypeInfo* t1095_TI_var;
extern TypeInfo* t2174_TI_var;
extern TypeInfo* t2062_TI_var;
extern TypeInfo* t1565_TI_var;
extern "C" void m11522 (t9 * __this , t126 * p0, t2116 * p1, MethodInfo* method)
{
	static bool m11522_init;
	if (!m11522_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		t311_TI_var = il2cpp_codegen_class_from_type(&t311_0_0_0);
		t1412_TI_var = il2cpp_codegen_class_from_type(&t1412_0_0_0);
		t2007_TI_var = il2cpp_codegen_class_from_type(&t2007_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		t2174_TI_var = il2cpp_codegen_class_from_type(&t2174_0_0_0);
		t2062_TI_var = il2cpp_codegen_class_from_type(&t2062_0_0_0);
		t1565_TI_var = il2cpp_codegen_class_from_type(&t1565_0_0_0);
		m11522_init = true;
	}
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	int32_t V_3 = 0;
	t2116  V_4 = {0};
	t9 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t1158 * L_0 = m11521(NULL, &m11521_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5768_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t2116 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t1158 * L_4 = ((t2116_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2116_TI)))->f4;
		t126 * L_5 = p0;
		t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5736_MI, L_4, L_5);
		*L_3 = ((*(t2116 *)((t2116 *)UnBox (L_6, InitializedTypeInfo(&t2116_TI)))));
		return;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t9 * L_7 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f6;
		V_0 = L_7;
		t9 * L_8 = V_0;
		m1083(NULL, L_8, &m1083_MI);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
			t1158 * L_9 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f5;
			t126 * L_10 = p0;
			bool L_11 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5768_MI, L_9, L_10);
			if (!L_11)
			{
				goto IL_0066;
			}
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
			t1158 * L_12 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f5;
			t126 * L_13 = p0;
			t9 * L_14 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5736_MI, L_12, L_13);
			V_1 = L_14;
			t1158 * L_15 = ((t2116_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2116_TI)))->f4;
			t126 * L_16 = p0;
			t9 * L_17 = V_1;
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5920_MI, L_15, L_16, L_17);
			t2116 * L_18 = p1;
			t9 * L_19 = V_1;
			*L_18 = ((*(t2116 *)((t2116 *)UnBox (L_19, InitializedTypeInfo(&t2116_TI)))));
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
		m1085(NULL, L_20, &m1085_MI);
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
		t2116 * L_22 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		m11520(NULL, L_21, L_22, &m11520_MI);
		V_2 = (t9 *)NULL;
		t2116 * L_23 = p1;
		t121 * L_24 = (L_23->f1);
		if (((t730*)IsInst(L_24, t730_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2116 * L_25 = p1;
		t121 * L_26 = (L_25->f1);
		if (((t311*)IsInst(L_26, t311_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2116 * L_27 = p1;
		t121 * L_28 = (L_27->f1);
		if (((t1412*)IsInst(L_28, t1412_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2116 * L_29 = p1;
		t121 * L_30 = (L_29->f1);
		if (((t2007*)IsInst(L_30, t2007_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2116 * L_31 = p1;
		t121 * L_32 = (L_31->f1);
		if (!((t1095*)IsInst(L_32, t1095_TI_var)))
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t2114 * L_33 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f9;
		V_2 = L_33;
		goto IL_0104;
	}

IL_00c7:
	{
		t2116 * L_34 = p1;
		t121 * L_35 = (L_34->f1);
		if (!((t2174*)IsInst(L_35, t2174_TI_var)))
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t2113 * L_36 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f8;
		V_2 = L_36;
		goto IL_0104;
	}

IL_00dc:
	{
		t2116 * L_37 = p1;
		t121 * L_38 = (L_37->f1);
		if (!((t2062*)IsInst(L_38, t2062_TI_var)))
		{
			goto IL_00f1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t2112 * L_39 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f7;
		V_2 = L_39;
		goto IL_0104;
	}

IL_00f1:
	{
		t2116 * L_40 = p1;
		t121 * L_41 = (L_40->f1);
		if (!((t1565*)IsInst(L_41, t1565_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t2115 * L_42 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f10;
		V_2 = L_42;
	}

IL_0104:
	{
		t2116 * L_43 = p1;
		t121 * L_44 = (L_43->f1);
		t2116 * L_45 = p1;
		t221* L_46 = (L_45->f2);
		t9 * L_47 = V_2;
		m7726(NULL, L_44, (t121 *)(t121 *)L_46, L_47, &m7726_MI);
		t2116 * L_48 = p1;
		t221* L_49 = (L_48->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_49)->max_length)))) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0161;
		}
	}
	{
		t2116 * L_50 = p1;
		t2116 * L_51 = p1;
		t221* L_52 = (L_51->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_53 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5919(L_53, (((int32_t)(((t121 *)L_52)->max_length))), &m5919_MI);
		L_50->f3 = L_53;
		V_3 = 0;
		goto IL_0156;
	}

IL_0139:
	{
		t2116 * L_54 = p1;
		t1158 * L_55 = (L_54->f3);
		t2116 * L_56 = p1;
		t221* L_57 = (L_56->f2);
		int32_t L_58 = V_3;
		int32_t L_59 = L_58;
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		t9 * L_62 = Box(InitializedTypeInfo(&t125_TI), &L_61);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5920_MI, L_55, (*(t2**)(t2**)SZArrayLdElema(L_57, L_59)), L_62);
		int32_t L_63 = V_3;
		V_3 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0156:
	{
		int32_t L_64 = V_3;
		t2116 * L_65 = p1;
		t221* L_66 = (L_65->f2);
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)(((t121 *)L_66)->max_length))))))
		{
			goto IL_0139;
		}
	}

IL_0161:
	{
		t2116 * L_67 = p1;
		m11518((&V_4), (*(t2116 *)L_67), &m11518_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t9 * L_68 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f6;
		V_5 = L_68;
		t9 * L_69 = V_5;
		m1083(NULL, L_69, &m1083_MI);
	}

IL_017c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2116_TI));
		t1158 * L_70 = ((t2116_SFs*)InitializedTypeInfo(&t2116_TI)->static_fields)->f5;
		t126 * L_71 = p0;
		t2116  L_72 = V_4;
		t2116  L_73 = L_72;
		t9 * L_74 = Box(InitializedTypeInfo(&t2116_TI), &L_73);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5920_MI, L_70, L_71, L_74);
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
		m1085(NULL, L_75, &m1085_MI);
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
#include "t1539.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1539_TI;
#include "t1539MD.h"



#include "t893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t893_TI;

#include "t2118.h"
#include "t2117.h"
#include "t1196.h"
#include "t1719.h"
extern TypeInfo t2117_TI;
extern TypeInfo t300_TI;
extern TypeInfo t1719_TI;
extern TypeInfo t312_TI;
extern TypeInfo t137_TI;
#include "t1196MD.h"
#include "t2117MD.h"
#include "t300MD.h"
#include "t302MD.h"
#include "t1719MD.h"
extern Il2CppType t312_0_0_0;
extern MethodInfo m11525_MI;
extern MethodInfo m11896_MI;
extern MethodInfo m11524_MI;
extern MethodInfo m11776_MI;
extern MethodInfo m11527_MI;
extern MethodInfo m11528_MI;
extern MethodInfo m11530_MI;
extern MethodInfo m1092_MI;
extern MethodInfo m1093_MI;
extern MethodInfo m9003_MI;
extern MethodInfo m4271_MI;
extern MethodInfo m2740_MI;
extern MethodInfo m2766_MI;
extern MethodInfo m4272_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m9014_MI;
extern MethodInfo m365_MI;
extern MethodInfo m11532_MI;
extern MethodInfo m11529_MI;


extern MethodInfo m11523_MI;
extern "C" bool m11523 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m11523_ftn) ();
	static m11523_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11523_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_SocketSecurityEnabled()");
	return _il2cpp_icall_func();
}
extern "C" t2* m5804 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m5804_ftn) ();
	static m5804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5804_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_NewLine()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m11524 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m11524_ftn) ();
	static m11524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11524_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_Platform()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11525 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m11525_ftn) ();
	static m11525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11525_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetOSVersionString()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11526_MI;
extern "C" t2117 * m11526 (t9 * __this , MethodInfo* method)
{
	t1196 * V_0 = {0};
	int32_t V_1 = {0};
	{
		t2117 * L_0 = ((t893_SFs*)InitializedTypeInfo(&t893_TI)->static_fields)->f0;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		t2* L_1 = m11525(NULL, &m11525_MI);
		t1196 * L_2 = m11896(NULL, L_1, &m11896_MI);
		V_0 = L_2;
		int32_t L_3 = m11524(NULL, &m11524_MI);
		V_1 = L_3;
		int32_t L_4 = V_1;
		t1196 * L_5 = V_0;
		t2117 * L_6 = (t2117 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2117_TI));
		m11776(L_6, L_4, L_5, &m11776_MI);
		((t893_SFs*)InitializedTypeInfo(&t893_TI)->static_fields)->f0 = L_6;
	}

IL_0024:
	{
		t2117 * L_7 = ((t893_SFs*)InitializedTypeInfo(&t893_TI)->static_fields)->f0;
		return L_7;
	}
}
extern MethodInfo m4324_MI;
extern "C" int32_t m4324 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m4324_ftn) ();
	static m4324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4324_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_TickCount()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11527 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t2* (*m11527_ftn) (t2*);
	static m11527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11527_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetEnvironmentVariable(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6976_MI;
extern "C" t2* m6976 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m11527(NULL, L_0, &m11527_MI);
		return L_1;
	}
}
extern "C" t2* m11528 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t2* (*m11528_ftn) (int32_t);
	static m11528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11528_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetWindowsFolderPath(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6952_MI;
extern "C" t2* m6952 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		V_0 = (t2*)NULL;
		bool L_0 = m11531(NULL, &m11531_MI);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = p0;
		t2* L_2 = m11528(NULL, L_1, &m11528_MI);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_3 = p0;
		t2* L_4 = m11530(NULL, L_3, &m11530_MI);
		V_0 = L_4;
	}

IL_0019:
	{
		t2* L_5 = V_0;
		return L_5;
	}
}
extern TypeInfo* t312_TI_var;
extern "C" t2* m11529 (t9 * __this , t2* p0, t2* p1, t2* p2, t2* p3, MethodInfo* method)
{
	static bool m11529_init;
	if (!m11529_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m11529_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	t1719 * V_2 = {0};
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
		t2* L_1 = m11527(NULL, L_0, &m11527_MI);
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
		bool L_5 = m2738(NULL, L_3, L_4, &m2738_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_8 = m1092(NULL, L_7, (t2*) &_stringLiteral2714, &m1092_MI);
		V_1 = L_8;
		t2* L_9 = V_1;
		bool L_10 = m1093(NULL, L_9, &m1093_MI);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		t2* L_11 = p1;
		t2* L_12 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_13 = m1092(NULL, L_11, L_12, &m1092_MI);
		return L_13;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			t2* L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
			t1719 * L_15 = (t1719 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1719_TI));
			m9003(L_15, L_14, &m9003_MI);
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
				t2* L_17 = m4271(L_16, &m4271_MI);
				V_3 = L_17;
				t2* L_18 = V_3;
				int32_t L_19 = m2795(L_18, ((int32_t)61), &m2795_MI);
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
				t2* L_23 = m2740(L_21, 0, L_22, &m2740_MI);
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
				t2* L_28 = m2766(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)), &m2766_MI);
				t312* L_29 = ((t312*)SZArrayNew(t312_TI_var, 1));
				*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)34);
				t2* L_30 = m4272(L_28, L_29, &m4272_MI);
				V_5 = L_30;
				V_6 = 0;
				t2* L_31 = V_5;
				bool L_32 = m4280(L_31, (t2*) &_stringLiteral2715, &m4280_MI);
				if (!L_32)
				{
					goto IL_00a7;
				}
			}

IL_0098:
			{
				V_6 = 1;
				t2* L_33 = V_5;
				t2* L_34 = m2766(L_33, 6, &m2766_MI);
				V_5 = L_34;
				goto IL_00b8;
			}

IL_00a7:
			{
				t2* L_35 = V_5;
				bool L_36 = m4280(L_35, (t2*) &_stringLiteral745, &m4280_MI);
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
				IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
				t2* L_40 = m1092(NULL, L_38, L_39, &m1092_MI);
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
				t1719 * L_42 = V_2;
				t2* L_43 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9014_MI, L_42);
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
				t1719 * L_45 = V_2;
				if (!L_45)
				{
					goto IL_00e4;
				}
			}

IL_00de:
			{
				t1719 * L_46 = V_2;
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
		if(il2cpp_codegen_class_is_assignable_from (&t1720_TI, e.ex->object.klass))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_49 = m1092(NULL, L_47, L_48, &m1092_MI);
		return L_49;
	}

IL_00f2:
	{
		t2* L_50 = V_7;
		return L_50;
	}
}
extern "C" t2* m11530 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = {0};
	{
		t2* L_0 = m11532(NULL, &m11532_MI);
		V_0 = L_0;
		t2* L_1 = m11527(NULL, (t2*) &_stringLiteral2716, &m11527_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_7 = m1092(NULL, L_6, (t2*) &_stringLiteral2717, &m1092_MI);
		V_1 = L_7;
		t2* L_8 = V_1;
		t2* L_9 = m1092(NULL, L_8, (t2*) &_stringLiteral1622, &m1092_MI);
		V_1 = L_9;
	}

IL_0039:
	{
		t2* L_10 = m11527(NULL, (t2*) &_stringLiteral2718, &m11527_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_16 = m1092(NULL, L_15, (t2*) &_stringLiteral2719, &m1092_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_21 = m1092(NULL, L_20, (t2*) &_stringLiteral2720, &m1092_MI);
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
		t2* L_26 = m11529(NULL, L_24, L_25, (t2*) &_stringLiteral2721, (t2*) &_stringLiteral2722, &m11529_MI);
		return L_26;
	}

IL_0142:
	{
		t2* L_27 = V_2;
		t2* L_28 = V_0;
		t2* L_29 = m11529(NULL, L_27, L_28, (t2*) &_stringLiteral2723, (t2*) &_stringLiteral2724, &m11529_MI);
		return L_29;
	}

IL_0154:
	{
		t2* L_30 = V_2;
		t2* L_31 = V_0;
		t2* L_32 = m11529(NULL, L_30, L_31, (t2*) &_stringLiteral2725, (t2*) &_stringLiteral2726, &m11529_MI);
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
		return (t2*) &_stringLiteral2727;
	}

IL_0172:
	{
		t563 * L_34 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_34, (t2*) &_stringLiteral2728, &m2910_MI);
		il2cpp_codegen_raise_exception(L_34);
	}
}
extern "C" bool m11531 (t9 * __this , MethodInfo* method)
{
	{
		int32_t L_0 = m11524(NULL, &m11524_MI);
		return ((((int32_t)L_0) < ((int32_t)4))? 1 : 0);
	}
}
extern "C" t2* m11532 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m11532_ftn) ();
	static m11532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11532_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetHome()");
	return _il2cpp_icall_func();
}
#include "t1436.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1436_TI;
#include "t1436MD.h"

extern MethodInfo m11533_MI;


extern "C" void m11533 (t1436 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11534_MI;
extern "C" void m11534 (t9 * __this , MethodInfo* method)
{
	{
		t1436 * L_0 = (t1436 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1436_TI));
		m11533(L_0, &m11533_MI);
		((t1436_SFs*)InitializedTypeInfo(&t1436_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t2119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2119_TI;
#include "t2119MD.h"



extern MethodInfo m11535_MI;
extern "C" void m11535 (t2119 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2729, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		return;
	}
}
extern MethodInfo m11536_MI;
extern "C" void m11536 (t2119 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		return;
	}
}
extern MethodInfo m11537_MI;
extern "C" void m11537 (t2119 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2120_TI;
#include "t2120MD.h"

#include "t2121MD.h"
extern MethodInfo m11576_MI;
extern MethodInfo m11577_MI;


extern MethodInfo m11538_MI;
extern "C" void m11538 (t2120 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2730, &m7847_MI);
		m11576(__this, L_0, &m11576_MI);
		m4458(__this, ((int32_t)-2146233081), &m4458_MI);
		return;
	}
}
extern MethodInfo m11539_MI;
extern "C" void m11539 (t2120 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11576(__this, L_0, &m11576_MI);
		m4458(__this, ((int32_t)-2146233081), &m4458_MI);
		return;
	}
}
extern MethodInfo m11540_MI;
extern "C" void m11540 (t2120 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11577(__this, L_0, L_1, &m11577_MI);
		return;
	}
}
#include "t615.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t615_TI;
#include "t615MD.h"

#include "t725MD.h"
extern MethodInfo m4265_MI;


extern MethodInfo m2992_MI;
extern "C" void m2992 (t615 * __this, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11541_MI;
extern "C" void m11541 (t890 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2731, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233033), &m4458_MI);
		return;
	}
}
extern "C" void m4313 (t890 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233033), &m4458_MI);
		return;
	}
}
extern MethodInfo m5992_MI;
extern "C" void m5992 (t890 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t1526.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1526_TI;



extern "C" void m6896 (t9 * __this , t9 * p0, MethodInfo* method)
{
	typedef void (*m6896_ftn) (t9 *);
	static m6896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6896_ftn)il2cpp_codegen_resolve_icall ("System.GC::SuppressFinalize(System.Object)");
	_il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif

#include "t2197.h"
#include "t2198.h"
#include "t1413.h"
#include "t1996.h"
extern TypeInfo t2197_TI;
extern TypeInfo t2198_TI;
extern TypeInfo t1413_TI;
extern TypeInfo t1996_TI;
#include "t1655MD.h"
#include "t2197MD.h"
#include "t2198MD.h"
#include "t1413MD.h"
#include "t1996MD.h"
extern Il2CppType t2197_0_0_0;
extern Il2CppType t2198_0_0_0;
extern MethodInfo m11547_MI;
extern MethodInfo m8286_MI;
extern MethodInfo m8285_MI;
extern MethodInfo m11543_MI;
extern MethodInfo m12148_MI;
extern MethodInfo m12149_MI;
extern MethodInfo m590_MI;
extern MethodInfo m11545_MI;
extern MethodInfo m11546_MI;
extern MethodInfo m11551_MI;
extern MethodInfo m11548_MI;
extern MethodInfo m6888_MI;
extern MethodInfo m6889_MI;
extern MethodInfo m11542_MI;
extern MethodInfo m10509_MI;
extern MethodInfo m11554_MI;
extern MethodInfo m11557_MI;
extern MethodInfo m11558_MI;
extern MethodInfo m11559_MI;
extern MethodInfo m11560_MI;
extern MethodInfo m7374_MI;
extern MethodInfo m4409_MI;
extern Il2CppGenericMethod m12148_GM;
extern Il2CppGenericMethod m12149_GM;


extern "C" void m11542 (t918 * __this, t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11547(NULL, L_0, ((int32_t)16), &m11547_MI);
		t730* L_1 = p0;
		int32_t L_2 = m8286(NULL, L_1, 0, &m8286_MI);
		__this->f0 = L_2;
		t730* L_3 = p0;
		int16_t L_4 = m8285(NULL, L_3, 4, &m8285_MI);
		__this->f1 = L_4;
		t730* L_5 = p0;
		int16_t L_6 = m8285(NULL, L_5, 6, &m8285_MI);
		__this->f2 = L_6;
		t730* L_7 = p0;
		int32_t L_8 = 8;
		__this->f3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8));
		t730* L_9 = p0;
		int32_t L_10 = ((int32_t)9);
		__this->f4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		t730* L_11 = p0;
		int32_t L_12 = ((int32_t)10);
		__this->f5 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		t730* L_13 = p0;
		int32_t L_14 = ((int32_t)11);
		__this->f6 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14));
		t730* L_15 = p0;
		int32_t L_16 = ((int32_t)12);
		__this->f7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		t730* L_17 = p0;
		int32_t L_18 = ((int32_t)13);
		__this->f8 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_18));
		t730* L_19 = p0;
		int32_t L_20 = ((int32_t)14);
		__this->f9 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_20));
		t730* L_21 = p0;
		int32_t L_22 = ((int32_t)15);
		__this->f10 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_22));
		return;
	}
}
extern "C" void m11543 (t918 * __this, int32_t p0, int16_t p1, int16_t p2, uint8_t p3, uint8_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint8_t p8, uint8_t p9, uint8_t p10, MethodInfo* method)
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
extern MethodInfo m11544_MI;
extern TypeInfo* t2197_TI_var;
extern TypeInfo* t2198_TI_var;
extern MethodInfo* m12148_MI_var;
extern MethodInfo* m12149_MI_var;
extern "C" void m11544 (t9 * __this , MethodInfo* method)
{
	static bool m11544_init;
	if (!m11544_init)
	{
		t2197_TI_var = il2cpp_codegen_class_from_type(&t2197_0_0_0);
		t2198_TI_var = il2cpp_codegen_class_from_type(&t2198_0_0_0);
		m12148_MI_var = il2cpp_codegen_genericmethod_get_method(&m12148_GM);
		m12149_MI_var = il2cpp_codegen_genericmethod_get_method(&m12149_GM);
		m11544_init = true;
	}
	t2197 * V_0 = {0};
	t2198 * V_1 = {0};
	{
		t918  L_0 = {0};
		m11543(&L_0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &m11543_MI);
		((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f11 = L_0;
		t9 * L_1 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_1, &m336_MI);
		((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f12 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2131_TI));
		bool L_2 = ((t2131_SFs*)InitializedTypeInfo(&t2131_TI)->static_fields)->f0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		t2197 * L_3 = (t2197 *)il2cpp_codegen_object_new (t2197_TI_var);
		m12148(L_3, m12148_MI_var);
		V_0 = L_3;
		t2198 * L_4 = (t2198 *)il2cpp_codegen_object_new (t2198_TI_var);
		m12149(L_4, m12149_MI_var);
		V_1 = L_4;
	}

IL_0032:
	{
		return;
	}
}
extern "C" void m11545 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2732, &m7847_MI);
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, L_1, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m11546 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2733, &m7847_MI);
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m590(NULL, L_2, L_5, &m590_MI);
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_7, L_6, &m2910_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		return;
	}
}
extern "C" void m11547 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11545(NULL, (t9 *)(t9 *)L_0, &m11545_MI);
		t730* L_1 = p0;
		int32_t L_2 = p1;
		m11546(NULL, L_1, L_2, &m11546_MI);
		return;
	}
}
extern "C" int32_t m11548 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m11549_MI;
extern "C" int32_t m11549 (t918 * __this, t9 * p0, MethodInfo* method)
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t918_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2734, &m7847_MI);
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_3, (t2*) &_stringLiteral606, L_2, &m5720_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t9 * L_4 = p0;
		int32_t L_5 = m11551(__this, ((*(t918 *)((t918 *)UnBox (L_4, InitializedTypeInfo(&t918_TI))))), &m11551_MI);
		return L_5;
	}
}
extern MethodInfo m11550_MI;
extern "C" bool m11550 (t918 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t918_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t9 * L_1 = p0;
		int32_t L_2 = m11551(__this, ((*(t918 *)((t918 *)UnBox (L_1, InitializedTypeInfo(&t918_TI))))), &m11551_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return 0;
	}
}
extern "C" int32_t m11551 (t918 * __this, t918  p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_4 = m11548(NULL, L_2, L_3, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_9 = m11548(NULL, L_7, L_8, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_14 = m11548(NULL, L_12, L_13, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_19 = m11548(NULL, L_17, L_18, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_24 = m11548(NULL, L_22, L_23, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_29 = m11548(NULL, L_27, L_28, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_34 = m11548(NULL, L_32, L_33, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_39 = m11548(NULL, L_37, L_38, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_44 = m11548(NULL, L_42, L_43, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_49 = m11548(NULL, L_47, L_48, &m11548_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		int32_t L_54 = m11548(NULL, L_52, L_53, &m11548_MI);
		return L_54;
	}

IL_0176:
	{
		return 0;
	}
}
extern MethodInfo m11552_MI;
extern "C" bool m11552 (t918 * __this, t918  p0, MethodInfo* method)
{
	{
		t918  L_0 = p0;
		int32_t L_1 = m11551(__this, L_0, &m11551_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11553_MI;
extern "C" int32_t m11553 (t918 * __this, MethodInfo* method)
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
extern "C" uint16_t m11554 (t9 * __this , int32_t p0, MethodInfo* method)
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
extern TypeInfo* t730_TI_var;
extern "C" t918  m11555 (t9 * __this , MethodInfo* method)
{
	static bool m11555_init;
	if (!m11555_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m11555_init = true;
	}
	t730* V_0 = {0};
	t9 * V_1 = {0};
	t918  V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		t9 * L_0 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f12;
		V_1 = L_0;
		t9 * L_1 = V_1;
		m1083(NULL, L_1, &m1083_MI);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			t1413 * L_2 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f13;
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			t1413 * L_3 = m6888(NULL, &m6888_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f13 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			t1413 * L_4 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f13;
			t730* L_5 = V_0;
			VirtActionInvoker1< t730* >::Invoke(&m6889_MI, L_4, L_5);
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
		m1085(NULL, L_6, &m1085_MI);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0039:
	{
		t730* L_7 = V_0;
		m11542((&V_2), L_7, &m11542_MI);
		uint8_t L_8 = ((&V_2)->f3);
		(&V_2)->f3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		int16_t L_9 = ((&V_2)->f2);
		(&V_2)->f2 = (((int16_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_9))&(int64_t)(((int64_t)((int32_t)4095)))))|(int64_t)(((int64_t)((int32_t)16384)))))));
		t918  L_10 = V_2;
		return L_10;
	}
}
extern MethodInfo m11556_MI;
extern TypeInfo* t730_TI_var;
extern "C" t730* m11556 (t9 * __this , MethodInfo* method)
{
	static bool m11556_init;
	if (!m11556_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m11556_init = true;
	}
	t730* V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		t9 * L_0 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f12;
		V_1 = L_0;
		t9 * L_1 = V_1;
		m1083(NULL, L_1, &m1083_MI);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			t1413 * L_2 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f13;
			if (!L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			t1413 * L_3 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f13;
			((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f14 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			t1413 * L_4 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f14;
			if (L_4)
			{
				goto IL_0036;
			}
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1996_TI));
			t1996 * L_5 = (t1996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1996_TI));
			m10509(L_5, &m10509_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f14 = L_5;
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
			t1413 * L_6 = ((t918_SFs*)InitializedTypeInfo(&t918_TI)->static_fields)->f14;
			t730* L_7 = V_0;
			VirtActionInvoker1< t730* >::Invoke(&m6889_MI, L_6, L_7);
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
		m1085(NULL, L_8, &m1085_MI);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004a:
	{
		t730* L_9 = V_0;
		t730* L_10 = V_0;
		int32_t L_11 = 8;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		t730* L_12 = V_0;
		t730* L_13 = V_0;
		int32_t L_14 = 7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, 7)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14))&(int32_t)((int32_t)15)))|(int32_t)((int32_t)64)))));
		t730* L_15 = V_0;
		return L_15;
	}
}
extern "C" void m11557 (t9 * __this , t322 * p0, int32_t p1, MethodInfo* method)
{
	{
		t322 * L_0 = p0;
		int32_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		uint16_t L_2 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)28)))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_0, L_2, &m2758_MI);
		t322 * L_3 = p0;
		int32_t L_4 = p1;
		uint16_t L_5 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_3, L_5, &m2758_MI);
		t322 * L_6 = p0;
		int32_t L_7 = p1;
		uint16_t L_8 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)20)))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_6, L_8, &m2758_MI);
		t322 * L_9 = p0;
		int32_t L_10 = p1;
		uint16_t L_11 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_9, L_11, &m2758_MI);
		t322 * L_12 = p0;
		int32_t L_13 = p1;
		uint16_t L_14 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_13>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_12, L_14, &m2758_MI);
		t322 * L_15 = p0;
		int32_t L_16 = p1;
		uint16_t L_17 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_16>>(int32_t)8))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_15, L_17, &m2758_MI);
		t322 * L_18 = p0;
		int32_t L_19 = p1;
		uint16_t L_20 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_19>>(int32_t)4))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_18, L_20, &m2758_MI);
		t322 * L_21 = p0;
		int32_t L_22 = p1;
		uint16_t L_23 = m11554(NULL, ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_21, L_23, &m2758_MI);
		return;
	}
}
extern "C" void m11558 (t9 * __this , t322 * p0, int16_t p1, MethodInfo* method)
{
	{
		t322 * L_0 = p0;
		int16_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		uint16_t L_2 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_0, L_2, &m2758_MI);
		t322 * L_3 = p0;
		int16_t L_4 = p1;
		uint16_t L_5 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)8))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_3, L_5, &m2758_MI);
		t322 * L_6 = p0;
		int16_t L_7 = p1;
		uint16_t L_8 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)4))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_6, L_8, &m2758_MI);
		t322 * L_9 = p0;
		int16_t L_10 = p1;
		uint16_t L_11 = m11554(NULL, ((int32_t)((int32_t)L_10&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_9, L_11, &m2758_MI);
		return;
	}
}
extern "C" void m11559 (t9 * __this , t322 * p0, uint8_t p1, MethodInfo* method)
{
	{
		t322 * L_0 = p0;
		uint8_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		uint16_t L_2 = m11554(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)4))&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_0, L_2, &m2758_MI);
		t322 * L_3 = p0;
		uint8_t L_4 = p1;
		uint16_t L_5 = m11554(NULL, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)15))), &m11554_MI);
		m2758(L_3, L_5, &m2758_MI);
		return;
	}
}
extern "C" t2* m11560 (t918 * __this, bool p0, bool p1, bool p2, MethodInfo* method)
{
	t322 * V_0 = {0};
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_0, ((int32_t)40), &m4355_MI);
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t322 * L_2 = V_0;
		m2758(L_2, ((int32_t)40), &m2758_MI);
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
		t322 * L_4 = V_0;
		m2758(L_4, ((int32_t)123), &m2758_MI);
	}

IL_0022:
	{
		t322 * L_5 = V_0;
		int32_t L_6 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11557(NULL, L_5, L_6, &m11557_MI);
		bool L_7 = p0;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		t322 * L_8 = V_0;
		m2758(L_8, ((int32_t)45), &m2758_MI);
	}

IL_003a:
	{
		t322 * L_9 = V_0;
		int16_t L_10 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11558(NULL, L_9, L_10, &m11558_MI);
		bool L_11 = p0;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		t322 * L_12 = V_0;
		m2758(L_12, ((int32_t)45), &m2758_MI);
	}

IL_0052:
	{
		t322 * L_13 = V_0;
		int16_t L_14 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11558(NULL, L_13, L_14, &m11558_MI);
		bool L_15 = p0;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		t322 * L_16 = V_0;
		m2758(L_16, ((int32_t)45), &m2758_MI);
	}

IL_006a:
	{
		t322 * L_17 = V_0;
		uint8_t L_18 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11559(NULL, L_17, L_18, &m11559_MI);
		t322 * L_19 = V_0;
		uint8_t L_20 = (__this->f4);
		m11559(NULL, L_19, L_20, &m11559_MI);
		bool L_21 = p0;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		t322 * L_22 = V_0;
		m2758(L_22, ((int32_t)45), &m2758_MI);
	}

IL_008e:
	{
		t322 * L_23 = V_0;
		uint8_t L_24 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t918_TI));
		m11559(NULL, L_23, L_24, &m11559_MI);
		t322 * L_25 = V_0;
		uint8_t L_26 = (__this->f6);
		m11559(NULL, L_25, L_26, &m11559_MI);
		t322 * L_27 = V_0;
		uint8_t L_28 = (__this->f7);
		m11559(NULL, L_27, L_28, &m11559_MI);
		t322 * L_29 = V_0;
		uint8_t L_30 = (__this->f8);
		m11559(NULL, L_29, L_30, &m11559_MI);
		t322 * L_31 = V_0;
		uint8_t L_32 = (__this->f9);
		m11559(NULL, L_31, L_32, &m11559_MI);
		t322 * L_33 = V_0;
		uint8_t L_34 = (__this->f10);
		m11559(NULL, L_33, L_34, &m11559_MI);
		bool L_35 = p1;
		if (!L_35)
		{
			goto IL_00e4;
		}
	}
	{
		t322 * L_36 = V_0;
		m2758(L_36, ((int32_t)41), &m2758_MI);
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
		t322 * L_38 = V_0;
		m2758(L_38, ((int32_t)125), &m2758_MI);
	}

IL_00f0:
	{
		t322 * L_39 = V_0;
		t2* L_40 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_39);
		return L_40;
	}
}
extern "C" t2* m11561 (t918 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11560(__this, 1, 0, 0, &m11560_MI);
		return L_0;
	}
}
extern "C" t2* m4409 (t918 * __this, t2* p0, MethodInfo* method)
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
		t2* L_2 = m7374(L_1, &m7374_MI);
		V_3 = L_2;
		t2* L_3 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_3, (t2*) &_stringLiteral2735, &m331_MI);
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
		bool L_6 = m331(NULL, L_5, (t2*) &_stringLiteral2736, &m331_MI);
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
		bool L_8 = m331(NULL, L_7, (t2*) &_stringLiteral2737, &m331_MI);
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
		bool L_10 = m2738(NULL, L_9, (t2*) &_stringLiteral2738, &m2738_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_12 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_13 = m2738(NULL, L_11, L_12, &m2738_MI);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_14 = m7847(NULL, (t2*) &_stringLiteral2739, &m7847_MI);
		t890 * L_15 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_15, L_14, &m4313_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006d:
	{
		bool L_16 = V_0;
		bool L_17 = V_1;
		bool L_18 = V_2;
		t2* L_19 = m11560(__this, L_16, L_17, L_18, &m11560_MI);
		return L_19;
	}
}
extern MethodInfo m11562_MI;
extern "C" t2* m11562 (t918 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4409(__this, L_0, &m4409_MI);
		return L_1;
	}
}
#include "t883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t883_TI;
#include "t883MD.h"



extern MethodInfo m11563_MI;
extern "C" void m11563 (t883 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2740, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		return;
	}
}
extern MethodInfo m4252_MI;
extern "C" void m4252 (t883 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		return;
	}
}
extern MethodInfo m11564_MI;
extern "C" void m11564 (t883 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m11565 (t2122 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2741, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467262), &m4458_MI);
		return;
	}
}
extern "C" void m11566 (t2122 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467262), &m4458_MI);
		return;
	}
}
extern MethodInfo m11567_MI;
extern "C" void m11567 (t2122 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m5721_MI;
extern "C" void m5721 (t1341 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2742, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233079), &m4458_MI);
		return;
	}
}
extern "C" void m5714 (t1341 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233079), &m4458_MI);
		return;
	}
}
extern MethodInfo m11568_MI;
extern "C" void m11568 (t1341 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11810(__this, L_0, L_1, &m11810_MI);
		m4458(__this, ((int32_t)-2146233079), &m4458_MI);
		return;
	}
}
extern MethodInfo m11569_MI;
extern "C" void m11569 (t1341 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2095.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2095_TI;
#include "t2095MD.h"



#include "t160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t160_TI;

extern MethodInfo m4262_MI;
extern MethodInfo m11574_MI;
extern MethodInfo m7493_MI;
extern MethodInfo m7519_MI;
extern MethodInfo m7543_MI;
extern MethodInfo m7521_MI;
extern MethodInfo m7520_MI;
extern MethodInfo m7518_MI;


extern MethodInfo m4259_MI;
extern "C" float m4259 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" int32_t m11570 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2743, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
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
extern MethodInfo m11571_MI;
extern "C" int64_t m11571 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral2743, &m7847_MI);
		t2139 * L_2 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_2, L_1, &m11783_MI);
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
extern MethodInfo m4264_MI;
extern "C" double m4264 (t9 * __this , double p0, MethodInfo* method)
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
extern "C" double m4262 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4262_ftn) (double);
	static m4262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4262_ftn)il2cpp_codegen_resolve_icall ("System.Math::Floor(System.Double)");
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		double L_9 = m11159(NULL, ((int64_t)std::numeric_limits<int64_t>::min()), &m11159_MI);
		G_B7_0 = L_9;
	}

IL_0056:
	{
		return G_B7_0;
	}
}
extern MethodInfo m4261_MI;
extern "C" double m4261 (t9 * __this , double p0, double p1, MethodInfo* method)
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
extern MethodInfo m6904_MI;
extern "C" int32_t m6904 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m11572_MI;
extern "C" int32_t m11572 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern "C" t904  m11573 (t9 * __this , t904  p0, MethodInfo* method)
{
	t904  V_0 = {0};
	t904  V_1 = {0};
	{
		t904  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_1 = m7493(NULL, L_0, &m7493_MI);
		V_0 = L_1;
		t904  L_2 = p0;
		t904  L_3 = V_0;
		t904  L_4 = m7519(NULL, L_2, L_3, &m7519_MI);
		V_1 = L_4;
		t904  L_5 = V_1;
		t904  L_6 = {0};
		m7461(&L_6, 5, 0, 0, 0, 1, &m7461_MI);
		bool L_7 = m7543(NULL, L_5, L_6, &m7543_MI);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		t904  L_8 = {0};
		m7461(&L_8, ((int32_t)20), 0, 0, 0, 1, &m7461_MI);
		t904  L_9 = V_0;
		t904  L_10 = {0};
		m7461(&L_10, ((int32_t)20), 0, 0, 0, 1, &m7461_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_11 = m7521(NULL, L_9, L_10, &m7521_MI);
		t904  L_12 = V_0;
		t904  L_13 = {0};
		m7461(&L_13, ((int32_t)20), 0, 0, 0, 1, &m7461_MI);
		t904  L_14 = m7521(NULL, L_12, L_13, &m7521_MI);
		t904  L_15 = m7493(NULL, L_14, &m7493_MI);
		t904  L_16 = m7519(NULL, L_11, L_15, &m7519_MI);
		t904  L_17 = m7520(NULL, L_8, L_16, &m7520_MI);
		t904  L_18 = {0};
		m7462(&L_18, 0, &m7462_MI);
		bool L_19 = m7542(NULL, L_17, L_18, &m7542_MI);
		if (L_19)
		{
			goto IL_007c;
		}
	}

IL_006a:
	{
		t904  L_20 = V_1;
		t904  L_21 = {0};
		m7461(&L_21, 5, 0, 0, 0, 1, &m7461_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		bool L_22 = m7544(NULL, L_20, L_21, &m7544_MI);
		if (!L_22)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		t904  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t904  L_24 = m7518(NULL, L_23, &m7518_MI);
		V_0 = L_24;
	}

IL_0083:
	{
		t904  L_25 = V_0;
		return L_25;
	}
}
extern "C" double m4263 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4263_ftn) (double);
	static m4263_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4263_ftn)il2cpp_codegen_resolve_icall ("System.Math::Round(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4255_MI;
extern "C" double m4255 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4255_ftn) (double);
	static m4255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4255_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sin(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4256_MI;
extern "C" double m4256 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4256_ftn) (double);
	static m4256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4256_ftn)il2cpp_codegen_resolve_icall ("System.Math::Cos(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4257_MI;
extern "C" double m4257 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	typedef double (*m4257_ftn) (double, double);
	static m4257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4257_ftn)il2cpp_codegen_resolve_icall ("System.Math::Atan2(System.Double,System.Double)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" double m11574 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m11574_ftn) (double);
	static m11574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11574_ftn)il2cpp_codegen_resolve_icall ("System.Math::Log(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern "C" double m4260 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	typedef double (*m4260_ftn) (double, double);
	static m4260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4260_ftn)il2cpp_codegen_resolve_icall ("System.Math::Pow(System.Double,System.Double)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m4258_MI;
extern "C" double m4258 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4258_ftn) (double);
	static m4258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4258_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sqrt(System.Double)");
	return _il2cpp_icall_func(p0);
}
#include "t2121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2121_TI;



extern MethodInfo m11575_MI;
extern "C" void m11575 (t2121 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2744, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233062), &m4458_MI);
		return;
	}
}
extern "C" void m11576 (t2121 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233062), &m4458_MI);
		return;
	}
}
extern "C" void m11577 (t2121 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2123_TI;
#include "t2123MD.h"



extern MethodInfo m11578_MI;
extern "C" void m11578 (t2123 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2745, &m7847_MI);
		m11576(__this, L_0, &m11576_MI);
		m4458(__this, ((int32_t)-2146233072), &m4458_MI);
		return;
	}
}
extern MethodInfo m11579_MI;
extern "C" void m11579 (t2123 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11577(__this, L_0, L_1, &m11577_MI);
		return;
	}
}
#include "t2124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2124_TI;
#include "t2124MD.h"

#include "t2125.h"
extern TypeInfo t2125_TI;
#include "t2125MD.h"
extern MethodInfo m11589_MI;
extern MethodInfo m11585_MI;
extern MethodInfo m11586_MI;


extern MethodInfo m11580_MI;
extern "C" void m11580 (t2124 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2747, &m7847_MI);
		m11585(__this, L_0, &m11585_MI);
		m4458(__this, ((int32_t)-2146233071), &m4458_MI);
		return;
	}
}
extern MethodInfo m11581_MI;
extern "C" void m11581 (t2124 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11585(__this, L_0, &m11585_MI);
		m4458(__this, ((int32_t)-2146233071), &m4458_MI);
		return;
	}
}
extern MethodInfo m11582_MI;
extern "C" void m11582 (t2124 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11586(__this, L_0, L_1, &m11586_MI);
		return;
	}
}
extern MethodInfo m11583_MI;
extern "C" t2* m11583 (t2124 * __this, MethodInfo* method)
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
		t2* L_1 = m11589(__this, &m11589_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2746, &m7847_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1214(NULL, L_3, L_4, L_5, &m1214_MI);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11584_MI;
extern "C" void m11584 (t2125 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2749, &m7847_MI);
		m11576(__this, L_0, &m11576_MI);
		m4458(__this, ((int32_t)-2146233070), &m4458_MI);
		return;
	}
}
extern "C" void m11585 (t2125 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11576(__this, L_0, &m11576_MI);
		m4458(__this, ((int32_t)-2146233070), &m4458_MI);
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m11586 (t2125 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	static bool m11586_init;
	if (!m11586_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m11586_init = true;
	}
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11577(__this, L_0, L_1, &m11577_MI);
		t1100 * L_2 = p0;
		t2* L_3 = m5741(L_2, (t2*) &_stringLiteral2750, &m5741_MI);
		__this->f11 = L_3;
		t1100 * L_4 = p0;
		t2* L_5 = m5741(L_4, (t2*) &_stringLiteral2751, &m5741_MI);
		__this->f12 = L_5;
		t1100 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		t9 * L_8 = m5732(L_6, (t2*) &_stringLiteral2752, L_7, &m5732_MI);
		__this->f13 = ((t730*)Castclass(L_8, t730_TI_var));
		return;
	}
}
extern MethodInfo m11587_MI;
extern "C" void m11587 (t2125 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		m11575(__this, &m11575_MI);
		t2* L_0 = p0;
		__this->f11 = L_0;
		t2* L_1 = p1;
		__this->f12 = L_1;
		m4458(__this, ((int32_t)-2146233070), &m4458_MI);
		return;
	}
}
extern MethodInfo m11588_MI;
extern "C" void m11588 (t2125 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m4498(__this, L_0, L_1, &m4498_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5744(L_2, (t2*) &_stringLiteral2750, L_3, &m5744_MI);
		t1100 * L_4 = p0;
		t2* L_5 = (__this->f12);
		m5744(L_4, (t2*) &_stringLiteral2751, L_5, &m5744_MI);
		t1100 * L_6 = p0;
		t730* L_7 = (__this->f13);
		m5744(L_6, (t2*) &_stringLiteral2752, (t9 *)(t9 *)L_7, &m5744_MI);
		return;
	}
}
extern "C" t2* m11589 (t2125 * __this, MethodInfo* method)
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
		t2* L_1 = m1099(__this, &m1099_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2748, &m7847_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1214(NULL, L_3, L_4, L_5, &m1214_MI);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11590_MI;
extern "C" void m11590 (t2126 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2754, &m7847_MI);
		m11585(__this, L_0, &m11585_MI);
		m4458(__this, ((int32_t)-2146233069), &m4458_MI);
		return;
	}
}
extern "C" void m11591 (t2126 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11585(__this, L_0, &m11585_MI);
		m4458(__this, ((int32_t)-2146233069), &m4458_MI);
		return;
	}
}
extern MethodInfo m11592_MI;
extern "C" void m11592 (t2126 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11586(__this, L_0, L_1, &m11586_MI);
		return;
	}
}
extern "C" void m11593 (t2126 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		m11587(__this, L_0, L_1, &m11587_MI);
		m4458(__this, ((int32_t)-2146233069), &m4458_MI);
		return;
	}
}
extern MethodInfo m11594_MI;
extern "C" t2* m11594 (t2126 * __this, MethodInfo* method)
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
		t2* L_1 = m11589(__this, &m11589_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2753, &m7847_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1214(NULL, L_3, L_4, L_5, &m1214_MI);
		return L_6;
	}
}
#include "t2127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2127_TI;
#include "t2127MD.h"



extern MethodInfo m11595_MI;
extern "C" void m11595 (t2127 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t2128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2128_TI;
#include "t2128MD.h"

#include "t1024.h"


extern MethodInfo m11596_MI;
extern "C" void m11596 (t2128 * __this, t1024 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1024 * L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m11597_MI;
extern "C" t1024 * m11597 (t2128 * __this, MethodInfo* method)
{
	{
		t1024 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11598_MI;
extern "C" int32_t m11598 (t2128 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#include "t2129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2129_TI;
#include "t2129MD.h"

#include "t1754.h"
#include "t1761.h"
#include "t830.h"
#include "t924.h"
#include "t725.h"
#include "t1798.h"
#include "t1170.h"
#include "t837.h"
#include "t1820.h"
extern TypeInfo t1024_TI;
extern TypeInfo t1754_TI;
extern TypeInfo t1761_TI;
extern TypeInfo t830_TI;
extern TypeInfo t924_TI;
extern TypeInfo t2130_TI;
extern TypeInfo t1798_TI;
extern TypeInfo t725_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t121_TI;
extern TypeInfo t837_TI;
extern TypeInfo t828_TI;
extern TypeInfo t928_TI;
extern TypeInfo t1820_TI;
#include "t1024MD.h"
#include "t1761MD.h"
#include "t830MD.h"
#include "t924MD.h"
#include "t1798MD.h"
#include "t1170MD.h"
#include "t837MD.h"
#include "t828MD.h"
extern Il2CppType t1024_0_0_0;
extern Il2CppType t2129_0_0_0;
extern Il2CppType t725_0_0_0;
extern MethodInfo m4606_MI;
extern MethodInfo m9641_MI;
extern MethodInfo m9531_MI;
extern MethodInfo m9711_MI;
extern MethodInfo m7810_MI;
extern MethodInfo m4474_MI;
extern MethodInfo m11600_MI;
extern MethodInfo m12150_MI;
extern MethodInfo m11601_MI;
extern MethodInfo m11602_MI;
extern MethodInfo m5941_MI;
extern MethodInfo m7711_MI;
extern MethodInfo m11605_MI;
extern MethodInfo m9446_MI;
extern MethodInfo m11603_MI;
extern MethodInfo m7696_MI;
extern MethodInfo m7760_MI;
extern MethodInfo m11611_MI;
extern MethodInfo m7106_MI;
extern MethodInfo m5882_MI;
extern MethodInfo m7105_MI;
extern MethodInfo m5738_MI;
extern MethodInfo m5737_MI;
extern MethodInfo m11610_MI;
extern MethodInfo m5723_MI;
extern MethodInfo m5878_MI;
extern MethodInfo m5747_MI;
extern MethodInfo m12151_MI;
extern MethodInfo m11608_MI;
extern MethodInfo m11607_MI;
extern MethodInfo m4428_MI;
extern MethodInfo m9546_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m12152_MI;
extern MethodInfo m12022_MI;
extern MethodInfo m4425_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m7790_MI;
extern MethodInfo m7789_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m11609_MI;


extern MethodInfo m11599_MI;
extern "C" void m11599 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1024_0_0_0), &m329_MI);
		((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f1 = L_0;
		t1024 * L_1 = (t1024 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1024_TI));
		m4606(L_1, ((int32_t)32767), &m4606_MI);
		((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f2 = L_1;
		return;
	}
}
extern "C" bool m11600 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t126 *)IsInst(L_0, InitializedTypeInfo(&t126_TI)));
		t126 * L_1 = V_0;
		if (((t2133 *)IsInst(L_1, InitializedTypeInfo(&t2133_TI))))
		{
			goto IL_0017;
		}
	}
	{
		t126 * L_2 = V_0;
		if (!((t1754 *)IsInst(L_2, InitializedTypeInfo(&t1754_TI))))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t1345 * L_4 = ((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t1345 * L_6 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5772_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f0 = L_6;
	}

IL_003e:
	{
		t9 * L_7 = p0;
		t126 * L_8 = m2511(L_7, &m2511_MI);
		t1345 * L_9 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5772_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t1345 * L_10 = ((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f0;
		return ((((int32_t)((((t9*)(t1345 *)L_9) == ((t9*)(t1345 *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t158* m11601 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	typedef t158* (*m11601_ftn) (t9 *, t126 *, bool);
	static m11601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11601_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11602 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	static bool m11602_init;
	if (!m11602_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11602_init = true;
	}
	t158* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = (t158*)NULL;
		t9 * L_0 = p0;
		if (!((t1761 *)IsInst(L_0, InitializedTypeInfo(&t1761_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t9 * L_1 = p0;
		t158* L_2 = m9641(((t1761 *)Castclass(L_1, InitializedTypeInfo(&t1761_TI))), &m9641_MI);
		V_0 = L_2;
		goto IL_0058;
	}

IL_0018:
	{
		t9 * L_3 = p0;
		if (!((t830 *)IsInst(L_3, InitializedTypeInfo(&t830_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t9 * L_4 = p0;
		t158* L_5 = m9531(((t830 *)Castclass(L_4, InitializedTypeInfo(&t830_TI))), &m9531_MI);
		V_0 = L_5;
		goto IL_0058;
	}

IL_002e:
	{
		t9 * L_6 = p0;
		if (!((t924 *)IsInst(L_6, InitializedTypeInfo(&t924_TI))))
		{
			goto IL_0044;
		}
	}
	{
		t9 * L_7 = p0;
		t158* L_8 = m9711(((t924 *)Castclass(L_7, InitializedTypeInfo(&t924_TI))), &m9711_MI);
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
		t158* L_11 = m7810(((t126 *)Castclass(L_10, InitializedTypeInfo(&t126_TI))), &m7810_MI);
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
		t126 * L_18 = m2511((*(t9 **)(t9 **)SZArrayLdElema(L_15, L_17)), &m2511_MI);
		bool L_19 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4474_MI, L_14, L_18);
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
extern "C" t158* m11603 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	static bool m11603_init;
	if (!m11603_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11603_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	t158* V_2 = {0};
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_1 = m11600(NULL, L_0, &m11600_MI);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t9 * L_2 = p0;
		t126 * L_3 = p1;
		t158* L_4 = (t158*)InterfaceFuncInvoker2< t158*, t126 *, bool >::Invoke(&m12150_MI, L_2, L_3, 1);
		V_0 = L_4;
		goto IL_001c;
	}

IL_0013:
	{
		t9 * L_5 = p0;
		t126 * L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_7 = m11601(NULL, L_5, L_6, 0, &m11601_MI);
		V_0 = L_7;
	}

IL_001c:
	{
		t9 * L_8 = p0;
		t126 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_10 = m11602(NULL, L_8, L_9, &m11602_MI);
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
		m5941(NULL, (t121 *)(t121 *)L_14, (t121 *)(t121 *)L_15, (((int32_t)(((t121 *)L_16)->max_length))), &m5941_MI);
		t158* L_17 = V_1;
		t158* L_18 = V_2;
		t158* L_19 = V_0;
		t158* L_20 = V_1;
		m7711(NULL, (t121 *)(t121 *)L_17, 0, (t121 *)(t121 *)L_18, (((int32_t)(((t121 *)L_19)->max_length))), (((int32_t)(((t121 *)L_20)->max_length))), &m7711_MI);
		t158* L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		t158* L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m11604_MI;
extern "C" t725 * m11604 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	t158* V_0 = {0};
	t2* V_1 = {0};
	{
		t9 * L_0 = p0;
		t126 * L_1 = p1;
		bool L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_3 = m11605(NULL, L_0, L_1, L_2, &m11605_MI);
		V_0 = L_3;
		t158* L_4 = V_0;
		if ((((int32_t)(((t121 *)L_4)->max_length))))
		{
			goto IL_0010;
		}
	}
	{
		return (t725 *)NULL;
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
		V_1 = (t2*) &_stringLiteral2755;
		t2* L_6 = V_1;
		t9 * L_7 = p0;
		t126 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m1214(NULL, L_6, L_7, L_8, &m1214_MI);
		V_1 = L_9;
		t2* L_10 = V_1;
		t1798 * L_11 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9446(L_11, L_10, &m9446_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_002c:
	{
		t158* L_12 = V_0;
		int32_t L_13 = 0;
		return ((t725 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_12, L_13)), InitializedTypeInfo(&t725_TI)));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11605 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	static bool m11605_init;
	if (!m11605_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11605_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	t1024 * V_2 = {0};
	int32_t V_3 = 0;
	t1158 * V_4 = {0};
	t1170 * V_5 = {0};
	t9 * V_6 = {0};
	int32_t V_7 = 0;
	t9 * V_8 = {0};
	t158* V_9 = {0};
	int32_t V_10 = 0;
	t1024 * V_11 = {0};
	t126 * V_12 = {0};
	t2128 * V_13 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1407, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1071, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t126 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2129_0_0_0), &m329_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_8 = m11603(NULL, L_6, L_7, &m11603_MI);
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
		t126 * L_15 = m2511((*(t9 **)(t9 **)SZArrayLdElema(L_13, L_14)), &m2511_MI);
		bool L_16 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4474_MI, L_12, L_15);
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		t126 * L_17 = p1;
		t121 * L_18 = m7696(NULL, L_17, 1, &m7696_MI);
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
		t121 * L_23 = m7696(NULL, L_22, 0, &m7696_MI);
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
		t126 * L_26 = m2511((*(t9 **)(t9 **)SZArrayLdElema(L_24, L_25)), &m2511_MI);
		t121 * L_27 = m7696(NULL, L_26, 1, &m7696_MI);
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
		bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7760_MI, L_33);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t1024 * L_37 = m11611(NULL, L_36, &m11611_MI);
		V_2 = L_37;
		t1024 * L_38 = V_2;
		bool L_39 = m7106(L_38, &m7106_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_43 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5919(L_43, L_42, &m5919_MI);
		V_4 = L_43;
		int32_t L_44 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_45 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5882(L_45, L_44, &m5882_MI);
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
		t126 * L_52 = m2511(L_51, &m2511_MI);
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
		bool L_56 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4474_MI, L_54, L_55);
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
		t1158 * L_57 = V_4;
		t126 * L_58 = V_12;
		t9 * L_59 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5736_MI, L_57, L_58);
		V_13 = ((t2128 *)Castclass(L_59, InitializedTypeInfo(&t2128_TI)));
		t2128 * L_60 = V_13;
		if (!L_60)
		{
			goto IL_0125;
		}
	}
	{
		t2128 * L_61 = V_13;
		t1024 * L_62 = m11597(L_61, &m11597_MI);
		V_11 = L_62;
		goto IL_012e;
	}

IL_0125:
	{
		t126 * L_63 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t1024 * L_64 = m11611(NULL, L_63, &m11611_MI);
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
		t1024 * L_66 = V_11;
		bool L_67 = m7106(L_66, &m7106_MI);
		if (!L_67)
		{
			goto IL_0161;
		}
	}

IL_013b:
	{
		t1024 * L_68 = V_11;
		bool L_69 = m7105(L_68, &m7105_MI);
		if (L_69)
		{
			goto IL_0157;
		}
	}
	{
		t2128 * L_70 = V_13;
		if (!L_70)
		{
			goto IL_0157;
		}
	}
	{
		t2128 * L_71 = V_13;
		if (!L_71)
		{
			goto IL_0161;
		}
	}
	{
		t2128 * L_72 = V_13;
		int32_t L_73 = m11598(L_72, &m11598_MI);
		int32_t L_74 = V_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)L_74))))
		{
			goto IL_0161;
		}
	}

IL_0157:
	{
		t1170 * L_75 = V_5;
		t9 * L_76 = V_8;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_75, L_76);
	}

IL_0161:
	{
		t2128 * L_77 = V_13;
		if (L_77)
		{
			goto IL_0177;
		}
	}
	{
		t1158 * L_78 = V_4;
		t126 * L_79 = V_12;
		t1024 * L_80 = V_11;
		int32_t L_81 = V_7;
		t2128 * L_82 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11596(L_82, L_80, L_81, &m11596_MI);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5737_MI, L_78, L_79, L_82);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t9 * L_87 = m11610(NULL, L_86, &m11610_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_92 = m11603(NULL, L_90, L_91, &m11603_MI);
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
		bool L_97 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7762_MI, L_96);
		if (!L_97)
		{
			goto IL_01da;
		}
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_98 = m329(NULL, LoadTypeToken(&t725_0_0_0), &m329_MI);
		t1170 * L_99 = V_5;
		int32_t L_100 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_99);
		t121 * L_101 = m7696(NULL, L_98, L_100, &m7696_MI);
		V_14 = ((t158*)Castclass(L_101, t158_TI_var));
		goto IL_01ee;
	}

IL_01da:
	{
		t126 * L_102 = p1;
		t1170 * L_103 = V_5;
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_103);
		t121 * L_105 = m7696(NULL, L_102, L_104, &m7696_MI);
		V_14 = ((t158*)IsInst(L_105, t158_TI_var));
	}

IL_01ee:
	{
		t1170 * L_106 = V_5;
		t158* L_107 = V_14;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5878_MI, L_106, (t121 *)(t121 *)L_107, 0);
		t158* L_108 = V_14;
		return L_108;
	}
}
extern MethodInfo m11606_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m11606 (t9 * __this , t9 * p0, bool p1, MethodInfo* method)
{
	static bool m11606_init;
	if (!m11606_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11606_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1407, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_4 = m11603(NULL, L_3, (t126 *)NULL, &m11603_MI);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_4);
		return ((t158*)Castclass(L_5, t158_TI_var));
	}

IL_0023:
	{
		t9 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2129_0_0_0), &m329_MI);
		bool L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_9 = m11605(NULL, L_6, L_7, L_8, &m11605_MI);
		return L_9;
	}
}
extern "C" bool m11607 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1071, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_3 = m11600(NULL, L_2, &m11600_MI);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t9 * L_4 = p0;
		t126 * L_5 = p1;
		bool L_6 = p2;
		bool L_7 = (bool)InterfaceFuncInvoker2< bool, t126 *, bool >::Invoke(&m12151_MI, L_4, L_5, L_6);
		return L_7;
	}

IL_001f:
	{
		t9 * L_8 = p0;
		t126 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_10 = m11608(NULL, L_8, L_9, &m11608_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_13 = m11602(NULL, L_11, L_12, &m11602_MI);
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
		t126 * L_19 = m2511((*(t9 **)(t9 **)SZArrayLdElema(L_16, L_18)), &m2511_MI);
		bool L_20 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4474_MI, L_15, L_19);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t9 * L_26 = m11610(NULL, L_25, &m11610_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_31 = m11607(NULL, L_28, L_29, L_30, &m11607_MI);
		return L_31;
	}

IL_006b:
	{
		return 0;
	}
}
extern "C" bool m11608 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	typedef bool (*m11608_ftn) (t9 *, t126 *);
	static m11608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11608_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t152_TI_var;
extern "C" t837 * m11609 (t9 * __this , t837 * p0, MethodInfo* method)
{
	static bool m11609_init;
	if (!m11609_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m11609_init = true;
	}
	t828 * V_0 = {0};
	t828 * V_1 = {0};
	t928* V_2 = {0};
	t152* V_3 = {0};
	int32_t V_4 = 0;
	{
		t837 * L_0 = p0;
		t828 * L_1 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4428_MI, L_0, 1);
		V_0 = L_1;
		t828 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		t828 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9546_MI, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0013:
	{
		t837 * L_5 = p0;
		t828 * L_6 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4429_MI, L_5, 1);
		V_0 = L_6;
	}

IL_001b:
	{
		t828 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		t828 * L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9546_MI, L_8);
		if (L_9)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (t837 *)NULL;
	}

IL_0028:
	{
		t828 * L_10 = V_0;
		t828 * L_11 = (t828 *)VirtFuncInvoker0< t828 * >::Invoke(&m12152_MI, L_10);
		V_1 = L_11;
		t828 * L_12 = V_1;
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		t828 * L_13 = V_1;
		t828 * L_14 = V_0;
		if ((((t9*)(t828 *)L_13) == ((t9*)(t828 *)L_14)))
		{
			goto IL_009f;
		}
	}
	{
		t837 * L_15 = p0;
		t928* L_16 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m12022_MI, L_15);
		V_2 = L_16;
		t928* L_17 = V_2;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		t928* L_18 = V_2;
		if ((((int32_t)(((int32_t)(((t121 *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		t928* L_19 = V_2;
		V_3 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_19)->max_length)))));
		V_4 = 0;
		goto IL_0067;
	}

IL_0054:
	{
		t152* L_20 = V_3;
		int32_t L_21 = V_4;
		t928* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = L_23;
		t126 * L_25 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4425_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_22, L_24)));
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
		t828 * L_29 = V_1;
		t126 * L_30 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4453_MI, L_29);
		t837 * L_31 = p0;
		t2* L_32 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_31);
		t837 * L_33 = p0;
		t126 * L_34 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, L_33);
		t152* L_35 = V_3;
		t837 * L_36 = (t837 *)VirtFuncInvoker3< t837 *, t2*, t126 *, t152* >::Invoke(&m7790_MI, L_30, L_32, L_34, L_35);
		return L_36;
	}

IL_0087:
	{
		t828 * L_37 = V_1;
		t126 * L_38 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4453_MI, L_37);
		t837 * L_39 = p0;
		t2* L_40 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_39);
		t837 * L_41 = p0;
		t126 * L_42 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, L_41);
		t837 * L_43 = (t837 *)VirtFuncInvoker2< t837 *, t2*, t126 * >::Invoke(&m7789_MI, L_38, L_40, L_42);
		return L_43;
	}

IL_009f:
	{
		return (t837 *)NULL;
	}
}
extern "C" t9 * m11610 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t828 * V_0 = {0};
	t828 * V_1 = {0};
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
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4431_MI, ((t126 *)Castclass(L_2, InitializedTypeInfo(&t126_TI))));
		return L_3;
	}

IL_0019:
	{
		V_0 = (t828 *)NULL;
		t9 * L_4 = p0;
		if (!((t1820 *)IsInst(L_4, InitializedTypeInfo(&t1820_TI))))
		{
			goto IL_002f;
		}
	}
	{
		t9 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t837 * L_6 = m11609(NULL, ((t1820 *)Castclass(L_5, InitializedTypeInfo(&t1820_TI))), &m11609_MI);
		return L_6;
	}

IL_002f:
	{
		t9 * L_7 = p0;
		if (!((t1761 *)IsInst(L_7, InitializedTypeInfo(&t1761_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t9 * L_8 = p0;
		V_0 = ((t828 *)Castclass(L_8, InitializedTypeInfo(&t828_TI)));
	}

IL_003e:
	{
		t828 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		t828 * L_10 = V_0;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9546_MI, L_10);
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
		t828 * L_12 = V_0;
		t828 * L_13 = (t828 *)VirtFuncInvoker0< t828 * >::Invoke(&m12152_MI, L_12);
		V_1 = L_13;
		t828 * L_14 = V_1;
		t828 * L_15 = V_0;
		if ((!(((t9*)(t828 *)L_14) == ((t9*)(t828 *)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		return (t9 *)NULL;
	}

IL_0058:
	{
		t828 * L_16 = V_1;
		return L_16;
	}
}
extern "C" t1024 * m11611 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t1024 * V_0 = {0};
	t158* V_1 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1024_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t1024 * L_2 = (t1024 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1024_TI));
		m4606(L_2, 4, &m4606_MI);
		return L_2;
	}

IL_0014:
	{
		V_0 = (t1024 *)NULL;
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t126 * L_4 = ((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f1;
		t158* L_5 = m11605(NULL, L_3, L_4, 0, &m11605_MI);
		V_1 = L_5;
		t158* L_6 = V_1;
		if ((((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0047;
		}
	}
	{
		t126 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4431_MI, L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		t126 * L_9 = p0;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4431_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t1024 * L_11 = m11611(NULL, L_10, &m11611_MI);
		V_0 = L_11;
	}

IL_003c:
	{
		t1024 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		t1024 * L_13 = V_0;
		return L_13;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t1024 * L_14 = ((t2129_SFs*)InitializedTypeInfo(&t2129_TI)->static_fields)->f2;
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
		t890 * L_16 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_16, (t2*) &_stringLiteral2756, &m4313_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0058:
	{
		t158* L_17 = V_1;
		int32_t L_18 = 0;
		return ((t1024 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_17, L_18)), InitializedTypeInfo(&t1024_TI)));
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11612_MI;
extern "C" void m11612 (t9 * __this , MethodInfo* method)
{
	{
		return;
	}
}
#include "t2132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2132_TI;
#include "t2132MD.h"



extern MethodInfo m11613_MI;
extern "C" void m11613 (t2132 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1572.h"
#include "t1568.h"
#include "t1571.h"
#include "t1569.h"
#include "t666.h"
#include "t1810.h"
#include "t1791.h"
extern TypeInfo t929_TI;
extern TypeInfo t666_TI;
extern TypeInfo t1810_TI;
extern TypeInfo t1791_TI;
#include "t666MD.h"
#include "t1810MD.h"
extern Il2CppType t1806_0_0_0;
extern Il2CppType t666_0_0_0;
extern Il2CppType t337_0_0_0;
extern MethodInfo m11643_MI;
extern MethodInfo m11653_MI;
extern MethodInfo m11661_MI;
extern MethodInfo m7806_MI;
extern MethodInfo m11659_MI;
extern MethodInfo m7750_MI;
extern MethodInfo m11639_MI;
extern MethodInfo m11614_MI;
extern MethodInfo m11619_MI;
extern MethodInfo m9545_MI;
extern MethodInfo m9445_MI;
extern MethodInfo m11663_MI;
extern MethodInfo m11618_MI;
extern MethodInfo m11620_MI;
extern MethodInfo m11623_MI;
extern MethodInfo m11626_MI;
extern MethodInfo m9511_MI;
extern MethodInfo m11629_MI;
extern MethodInfo m12153_MI;
extern MethodInfo m11633_MI;
extern MethodInfo m11634_MI;
extern MethodInfo m11635_MI;
extern MethodInfo m7793_MI;
extern MethodInfo m7778_MI;
extern MethodInfo m12154_MI;
extern MethodInfo m11645_MI;
extern MethodInfo m12155_MI;
extern MethodInfo m7069_MI;
extern MethodInfo m7066_MI;
extern MethodInfo m7834_MI;
extern MethodInfo m4424_MI;
extern MethodInfo m9701_MI;
extern MethodInfo m7068_MI;
extern MethodInfo m11664_MI;
extern MethodInfo m11622_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m4420_MI;
extern MethodInfo m11877_MI;
extern MethodInfo m7804_MI;
extern MethodInfo m11968_MI;
extern MethodInfo m5719_MI;


extern "C" int32_t m11614 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef int32_t (*m11614_ftn) (t126 *);
	static m11614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11614_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_attributes(System.Type)");
	return _il2cpp_icall_func(p0);
}
extern "C" t826 * m11615 (t2133 * __this, MethodInfo* method)
{
	t826 * V_0 = {0};
	int32_t V_1 = {0};
	t826 * V_2 = {0};
	{
		V_0 = (t826 *)NULL;
		t2132 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		t2132 * L_1 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11613(L_1, &m11613_MI);
		__this->f8 = L_1;
	}

IL_0015:
	{
		t2132 * L_2 = (__this->f8);
		t826 * L_3 = (L_2->f1);
		t826 * L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		t2132 * L_5 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_6 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		t826 * L_7 = (t826 *)VirtFuncInvoker5< t826 *, int32_t, t933 *, int32_t, t152*, t935* >::Invoke(&m7798_MI, __this, ((int32_t)52), (t933 *)NULL, 3, L_6, (t935*)(t935*)NULL);
		t826 * L_8 = L_7;
		V_2 = L_8;
		L_5->f1 = L_8;
		t826 * L_9 = V_2;
		V_0 = L_9;
	}

IL_0043:
	{
		t826 * L_10 = V_0;
		return L_10;
	}
}
extern MethodInfo m11616_MI;
extern "C" int32_t m11616 (t2133 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11614(NULL, __this, &m11614_MI);
		return L_0;
	}
}
extern MethodInfo m11617_MI;
extern TypeInfo* t1806_TI_var;
extern "C" t826 * m11617 (t2133 * __this, int32_t p0, t933 * p1, int32_t p2, t152* p3, t935* p4, MethodInfo* method)
{
	static bool m11617_init;
	if (!m11617_init)
	{
		t1806_TI_var = il2cpp_codegen_class_from_type(&t1806_0_0_0);
		m11617_init = true;
	}
	t926* V_0 = {0};
	t826 * V_1 = {0};
	t1806* V_2 = {0};
	int32_t V_3 = 0;
	t826 * V_4 = {0};
	t926* V_5 = {0};
	int32_t V_6 = 0;
	t826 * V_7 = {0};
	t926* V_8 = {0};
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
		t926* L_2 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m11619_MI, __this, L_1);
		V_0 = L_2;
		V_1 = (t826 *)NULL;
		V_3 = 0;
		t926* L_3 = V_0;
		V_5 = L_3;
		V_6 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		t926* L_4 = V_5;
		int32_t L_5 = V_6;
		int32_t L_6 = L_5;
		V_4 = (*(t826 **)(t826 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		t826 * L_8 = V_4;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9545_MI, L_8);
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
		t826 * L_12 = V_4;
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
		t926* L_16 = V_5;
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
		return (t826 *)NULL;
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
		t1798 * L_20 = (t1798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1798_TI));
		m9445(L_20, &m9445_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_005e:
	{
		t826 * L_21 = V_1;
		t914 * L_22 = m11663(__this, L_21, &m11663_MI);
		return ((t826 *)Castclass(L_22, InitializedTypeInfo(&t826_TI)));
	}

IL_006b:
	{
		int32_t L_23 = V_3;
		V_2 = ((t1806*)SZArrayNew(t1806_TI_var, L_23));
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		t1806* L_25 = V_2;
		t826 * L_26 = V_1;
		ArrayElementTypeCheck (L_25, L_26);
		*((t914 **)(t914 **)SZArrayLdElema(L_25, 0)) = (t914 *)L_26;
		goto IL_00b6;
	}

IL_007c:
	{
		V_3 = 0;
		t926* L_27 = V_0;
		V_8 = L_27;
		V_9 = 0;
		goto IL_00ae;
	}

IL_0086:
	{
		t926* L_28 = V_8;
		int32_t L_29 = V_9;
		int32_t L_30 = L_29;
		V_7 = (*(t826 **)(t826 **)SZArrayLdElema(L_28, L_30));
		int32_t L_31 = p2;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		t826 * L_32 = V_7;
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9545_MI, L_32);
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
		t1806* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		t826 * L_39 = V_7;
		ArrayElementTypeCheck (L_36, L_39);
		*((t914 **)(t914 **)SZArrayLdElema(L_36, L_38)) = (t914 *)L_39;
	}

IL_00a8:
	{
		int32_t L_40 = V_9;
		V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_41 = V_9;
		t926* L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((t121 *)L_42)->max_length))))))
		{
			goto IL_0086;
		}
	}

IL_00b6:
	{
		t933 * L_43 = p1;
		if (L_43)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_44 = m9508(NULL, &m9508_MI);
		p1 = L_44;
	}

IL_00c2:
	{
		t933 * L_45 = p1;
		int32_t L_46 = p0;
		t1806* L_47 = V_2;
		t152* L_48 = p3;
		t935* L_49 = p4;
		t914 * L_50 = (t914 *)VirtFuncInvoker4< t914 *, int32_t, t1806*, t152*, t935* >::Invoke(&m12016_MI, L_45, L_46, L_47, L_48, L_49);
		t914 * L_51 = m11663(__this, L_50, &m11663_MI);
		return ((t826 *)Castclass(L_51, InitializedTypeInfo(&t826_TI)));
	}
}
extern "C" t926* m11618 (t2133 * __this, int32_t p0, t126 * p1, MethodInfo* method)
{
	typedef t926* (*m11618_ftn) (t2133 *, int32_t, t126 *);
	static m11618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11618_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t926* m11619 (t2133 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t926* L_1 = m11618(__this, L_0, __this, &m11618_MI);
		return L_1;
	}
}
extern "C" t1569 * m11620 (t2133 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	typedef t1569 * (*m11620_ftn) (t2133 *, t2*, int32_t);
	static m11620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11620_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11621_MI;
extern "C" t1569 * m11621 (t2133 * __this, t2* p0, int32_t p1, MethodInfo* method)
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
		t1569 * L_4 = m11620(__this, L_2, L_3, &m11620_MI);
		return L_4;
	}
}
extern "C" t830 * m11622 (t2133 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	typedef t830 * (*m11622_ftn) (t2133 *, t2*, int32_t);
	static m11622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11622_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetField(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t930* m11623 (t2133 * __this, int32_t p0, t126 * p1, MethodInfo* method)
{
	typedef t930* (*m11623_ftn) (t2133 *, int32_t, t126 *);
	static m11623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11623_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11624_MI;
extern "C" t930* m11624 (t2133 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t930* L_1 = m11623(__this, L_0, __this, &m11623_MI);
		return L_1;
	}
}
extern MethodInfo m11625_MI;
extern "C" t152* m11625 (t2133 * __this, MethodInfo* method)
{
	typedef t152* (*m11625_ftn) (t2133 *);
	static m11625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11625_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetInterfaces()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1570* m11626 (t2133 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	typedef t1570* (*m11626_ftn) (t2133 *, t2*, int32_t, bool, t126 *);
	static m11626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11626_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern MethodInfo m11627_MI;
extern "C" t1570* m11627 (t2133 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1570* L_1 = m11626(__this, (t2*)NULL, L_0, 0, __this, &m11626_MI);
		return L_1;
	}
}
extern MethodInfo m11628_MI;
extern TypeInfo* t1806_TI_var;
extern "C" t828 * m11628 (t2133 * __this, t2* p0, int32_t p1, t933 * p2, int32_t p3, t152* p4, t935* p5, MethodInfo* method)
{
	static bool m11628_init;
	if (!m11628_init)
	{
		t1806_TI_var = il2cpp_codegen_class_from_type(&t1806_0_0_0);
		m11628_init = true;
	}
	bool V_0 = false;
	t1570* V_1 = {0};
	t828 * V_2 = {0};
	t1806* V_3 = {0};
	int32_t V_4 = 0;
	t828 * V_5 = {0};
	t1570* V_6 = {0};
	int32_t V_7 = 0;
	t828 * V_8 = {0};
	t1570* V_9 = {0};
	int32_t V_10 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1570* L_4 = m11626(__this, L_1, L_2, L_3, __this, &m11626_MI);
		V_1 = L_4;
		V_2 = (t828 *)NULL;
		V_4 = 0;
		t1570* L_5 = V_1;
		V_6 = L_5;
		V_7 = 0;
		goto IL_004d;
	}

IL_0022:
	{
		t1570* L_6 = V_6;
		int32_t L_7 = V_7;
		int32_t L_8 = L_7;
		V_5 = (*(t828 **)(t828 **)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = p3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_003e;
		}
	}
	{
		t828 * L_10 = V_5;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9545_MI, L_10);
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
		t828 * L_14 = V_5;
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
		t1570* L_18 = V_6;
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
		return (t828 *)NULL;
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
		t828 * L_22 = V_2;
		t914 * L_23 = m11663(__this, L_22, &m11663_MI);
		return ((t828 *)Castclass(L_23, InitializedTypeInfo(&t828_TI)));
	}

IL_0071:
	{
		int32_t L_24 = V_4;
		V_3 = ((t1806*)SZArrayNew(t1806_TI_var, L_24));
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1806* L_26 = V_3;
		t828 * L_27 = V_2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t914 **)(t914 **)SZArrayLdElema(L_26, 0)) = (t914 *)L_27;
		goto IL_00c4;
	}

IL_0084:
	{
		V_4 = 0;
		t1570* L_28 = V_1;
		V_9 = L_28;
		V_10 = 0;
		goto IL_00bc;
	}

IL_008f:
	{
		t1570* L_29 = V_9;
		int32_t L_30 = V_10;
		int32_t L_31 = L_30;
		V_8 = (*(t828 **)(t828 **)SZArrayLdElema(L_29, L_31));
		int32_t L_32 = p3;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_00ab;
		}
	}
	{
		t828 * L_33 = V_8;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9545_MI, L_33);
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
		t1806* L_37 = V_3;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
		t828 * L_40 = V_8;
		ArrayElementTypeCheck (L_37, L_40);
		*((t914 **)(t914 **)SZArrayLdElema(L_37, L_39)) = (t914 *)L_40;
	}

IL_00b6:
	{
		int32_t L_41 = V_10;
		V_10 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00bc:
	{
		int32_t L_42 = V_10;
		t1570* L_43 = V_9;
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
		t1806* L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t914 * L_46 = m9511(NULL, L_45, &m9511_MI);
		t914 * L_47 = m11663(__this, L_46, &m11663_MI);
		return ((t828 *)Castclass(L_47, InitializedTypeInfo(&t828_TI)));
	}

IL_00da:
	{
		t933 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_49 = m9508(NULL, &m9508_MI);
		p2 = L_49;
	}

IL_00e6:
	{
		t933 * L_50 = p2;
		int32_t L_51 = p1;
		t1806* L_52 = V_3;
		t152* L_53 = p4;
		t935* L_54 = p5;
		t914 * L_55 = (t914 *)VirtFuncInvoker4< t914 *, int32_t, t1806*, t152*, t935* >::Invoke(&m12016_MI, L_50, L_51, L_52, L_53, L_54);
		t914 * L_56 = m11663(__this, L_55, &m11663_MI);
		return ((t828 *)Castclass(L_56, InitializedTypeInfo(&t828_TI)));
	}
}
extern "C" t929* m11629 (t2133 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	typedef t929* (*m11629_ftn) (t2133 *, t2*, int32_t, bool, t126 *);
	static m11629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11629_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern MethodInfo m11630_MI;
extern "C" t929* m11630 (t2133 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t929* L_1 = m11629(__this, (t2*)NULL, L_0, 0, __this, &m11629_MI);
		return L_1;
	}
}
extern MethodInfo m11631_MI;
extern "C" t837 * m11631 (t2133 * __this, t2* p0, int32_t p1, t933 * p2, t126 * p3, t152* p4, t935* p5, MethodInfo* method)
{
	bool V_0 = false;
	t929* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t929* L_4 = m11629(__this, L_1, L_2, L_3, __this, &m11629_MI);
		V_1 = L_4;
		t929* L_5 = V_1;
		V_2 = (((int32_t)(((t121 *)L_5)->max_length)));
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		return (t837 *)NULL;
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
		t929* L_12 = V_1;
		int32_t L_13 = 0;
		t126 * L_14 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t837 **)(t837 **)SZArrayLdElema(L_12, L_13)));
		if ((!(((t9*)(t126 *)L_11) == ((t9*)(t126 *)L_14))))
		{
			goto IL_0040;
		}
	}

IL_003c:
	{
		t929* L_15 = V_1;
		int32_t L_16 = 0;
		return (*(t837 **)(t837 **)SZArrayLdElema(L_15, L_16));
	}

IL_0040:
	{
		t933 * L_17 = p2;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_18 = m9508(NULL, &m9508_MI);
		p2 = L_18;
	}

IL_004c:
	{
		t933 * L_19 = p2;
		int32_t L_20 = p1;
		t929* L_21 = V_1;
		t126 * L_22 = p3;
		t152* L_23 = p4;
		t935* L_24 = p5;
		t837 * L_25 = (t837 *)VirtFuncInvoker5< t837 *, int32_t, t929*, t126 *, t152*, t935* >::Invoke(&m12153_MI, L_19, L_20, L_21, L_22, L_23, L_24);
		return L_25;
	}
}
extern MethodInfo m11632_MI;
extern "C" bool m11632 (t2133 * __this, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11633_MI, __this);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11634_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11635_MI, __this);
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
extern "C" bool m11633 (t2133 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_0 = m7793(NULL, __this, &m7793_MI);
		return L_0;
	}
}
extern "C" bool m11634 (t2133 * __this, MethodInfo* method)
{
	typedef bool (*m11634_ftn) (t2133 *);
	static m11634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11634_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsByRefImpl()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m11635 (t2133 * __this, MethodInfo* method)
{
	typedef bool (*m11635_ftn) (t2133 *);
	static m11635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11635_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPointerImpl()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11636_MI;
extern "C" bool m11636 (t2133 * __this, MethodInfo* method)
{
	typedef bool (*m11636_ftn) (t2133 *);
	static m11636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11636_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPrimitiveImpl()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11637_MI;
extern "C" bool m11637 (t2133 * __this, t126 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1104, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = m7778(__this, L_2, &m7778_MI);
		return L_3;
	}
}
extern MethodInfo m11638_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t1806_TI_var;
extern "C" t9 * m11638 (t2133 * __this, t2* p0, int32_t p1, t933 * p2, t9 * p3, t158* p4, t935* p5, t901 * p6, t221* p7, MethodInfo* method)
{
	static bool m11638_init;
	if (!m11638_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t1806_TI_var = il2cpp_codegen_class_from_type(&t1806_0_0_0);
		m11638_init = true;
	}
	t2* V_0 = {0};
	t926* V_1 = {0};
	t9 * V_2 = {0};
	t914 * V_3 = {0};
	t9 * V_4 = {0};
	t666 * V_5 = {0};
	bool V_6 = false;
	t2* V_7 = {0};
	bool V_8 = false;
	t1570* V_9 = {0};
	t9 * V_10 = {0};
	t914 * V_11 = {0};
	t928* V_12 = {0};
	int32_t V_13 = 0;
	bool V_14 = false;
	t9 * V_15 = {0};
	t830 * V_16 = {0};
	t830 * V_17 = {0};
	t929* V_18 = {0};
	t9 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	t1806* V_22 = {0};
	t914 * V_23 = {0};
	t914 * V_24 = {0};
	t928* V_25 = {0};
	bool V_26 = false;
	t9 * V_27 = {0};
	t929* V_28 = {0};
	t9 * V_29 = {0};
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	t1806* V_32 = {0};
	t914 * V_33 = {0};
	t914 * V_34 = {0};
	t928* V_35 = {0};
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
		t563 * L_2 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_2, (t2*) &_stringLiteral2757, &m2910_MI);
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
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_7, (t2*) &_stringLiteral2758, (t2*) &_stringLiteral2757, &m5720_MI);
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
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_10, (t2*) &_stringLiteral2759, (t2*) &_stringLiteral2757, &m5720_MI);
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
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_13, (t2*) &_stringLiteral2760, (t2*) &_stringLiteral2757, &m5720_MI);
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
		t563 * L_15 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_15, (t2*) &_stringLiteral2761, (t2*) &_stringLiteral2757, &m5720_MI);
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
		t563 * L_20 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_20, (t2*) &_stringLiteral2762, &m2910_MI);
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
		t563 * L_22 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_22, (t2*) &_stringLiteral2763, (t2*) &_stringLiteral2757, &m5720_MI);
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
		t933 * L_27 = p2;
		if (L_27)
		{
			goto IL_010a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t933_TI));
		t933 * L_28 = m9508(NULL, &m9508_MI);
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
		t926* L_32 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m11619_MI, __this, L_31);
		V_1 = L_32;
		V_2 = NULL;
		t933 * L_33 = p2;
		int32_t L_34 = p1;
		t926* L_35 = V_1;
		t935* L_36 = p5;
		t901 * L_37 = p6;
		t221* L_38 = p7;
		t914 * L_39 = (t914 *)VirtFuncInvoker7< t914 *, int32_t, t1806*, t158**, t935*, t901 *, t221*, t9 ** >::Invoke(&m12154_MI, L_33, L_34, (t1806*)(t1806*)L_35, (&p4), L_36, L_37, L_38, (&V_2));
		V_3 = L_39;
		t914 * L_40 = V_3;
		if (L_40)
		{
			goto IL_0168;
		}
	}
	{
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7762_MI, __this);
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
		t9 * L_43 = m11118(NULL, __this, &m11118_MI);
		return L_43;
	}

IL_014d:
	{
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11645_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_45 = m399(NULL, (t2*) &_stringLiteral2764, L_44, (t2*) &_stringLiteral1594, &m399_MI);
		t2126 * L_46 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11591(L_46, L_45, &m11591_MI);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0168:
	{
		t914 * L_47 = V_3;
		t9 * L_48 = p3;
		int32_t L_49 = p1;
		t933 * L_50 = p2;
		t158* L_51 = p4;
		t901 * L_52 = p6;
		t9 * L_53 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12029_MI, L_47, L_48, L_49, L_50, L_51, L_52);
		V_4 = L_53;
		t933 * L_54 = p2;
		t9 * L_55 = V_2;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12155_MI, L_54, (&p4), L_55);
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
		t126 * L_60 = m329(NULL, LoadTypeToken(&t666_0_0_0), &m329_MI);
		bool L_61 = m7069(NULL, __this, L_60, &m7069_MI);
		if (!L_61)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_62 = m329(NULL, LoadTypeToken(&t666_0_0_0), &m329_MI);
		t725 * L_63 = m7066(NULL, __this, L_62, &m7066_MI);
		V_5 = ((t666 *)Castclass(L_63, InitializedTypeInfo(&t666_TI)));
		t666 * L_64 = V_5;
		t2* L_65 = m7834(L_64, &m7834_MI);
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
		t1570* L_71 = m11626(__this, L_68, L_69, L_70, __this, &m11626_MI);
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
		t933 * L_73 = p2;
		int32_t L_74 = p1;
		t1570* L_75 = V_9;
		t935* L_76 = p5;
		t901 * L_77 = p6;
		t221* L_78 = p7;
		t914 * L_79 = (t914 *)VirtFuncInvoker7< t914 *, int32_t, t1806*, t158**, t935*, t901 *, t221*, t9 ** >::Invoke(&m12154_MI, L_73, L_74, (t1806*)(t1806*)L_75, (&p4), L_76, L_77, L_78, (&V_10));
		V_11 = L_79;
		t914 * L_80 = V_11;
		if (L_80)
		{
			goto IL_024b;
		}
	}
	{
		t1570* L_81 = V_9;
		if ((((int32_t)(((int32_t)(((t121 *)L_81)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0234;
		}
	}
	{
		t2* L_82 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_83 = m399(NULL, (t2*) &_stringLiteral2765, L_82, (t2*) &_stringLiteral2766, &m399_MI);
		V_7 = L_83;
		goto IL_0246;
	}

IL_0234:
	{
		t2* L_84 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_85 = m399(NULL, (t2*) &_stringLiteral2767, L_84, (t2*) &_stringLiteral135, &m399_MI);
		V_7 = L_85;
	}

IL_0246:
	{
		goto IL_02ea;
	}

IL_024b:
	{
		t914 * L_86 = V_11;
		t928* L_87 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4424_MI, L_86);
		V_12 = L_87;
		V_13 = 0;
		goto IL_0292;
	}

IL_0259:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1810_TI));
		t1810 * L_88 = ((t1810_SFs*)InitializedTypeInfo(&t1810_TI)->static_fields)->f0;
		t158* L_89 = p4;
		int32_t L_90 = V_13;
		int32_t L_91 = L_90;
		if ((!(((t9*)(t1810 *)L_88) == ((t9*)(t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_89, L_91))))))
		{
			goto IL_028c;
		}
	}
	{
		t928* L_92 = V_12;
		int32_t L_93 = V_13;
		int32_t L_94 = L_93;
		int32_t L_95 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9701_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_92, L_94)));
		if ((((int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)4096)))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_028c;
		}
	}
	{
		t563 * L_96 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_96, (t2*) &_stringLiteral2768, (t2*) &_stringLiteral1328, &m5720_MI);
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
		t928* L_99 = V_12;
		if ((((int32_t)L_98) < ((int32_t)(((int32_t)(((t121 *)L_99)->max_length))))))
		{
			goto IL_0259;
		}
	}
	{
		t928* L_100 = V_12;
		if ((((int32_t)(((int32_t)(((t121 *)L_100)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_02bb;
		}
	}
	{
		t928* L_101 = V_12;
		t928* L_102 = V_12;
		int32_t L_103 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_102)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_104 = m329(NULL, LoadTypeToken(&t337_0_0_0), &m329_MI);
		bool L_105 = m7068(NULL, (*(t924 **)(t924 **)SZArrayLdElema(L_101, L_103)), L_104, &m7068_MI);
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
		t914 * L_107 = V_11;
		m11664(__this, (&p4), L_107, &m11664_MI);
	}

IL_02cc:
	{
		t914 * L_108 = V_11;
		t9 * L_109 = p3;
		int32_t L_110 = p1;
		t933 * L_111 = p2;
		t158* L_112 = p4;
		t901 * L_113 = p6;
		t9 * L_114 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12029_MI, L_108, L_109, L_110, L_111, L_112, L_113);
		V_15 = L_114;
		t933 * L_115 = p2;
		t9 * L_116 = V_10;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12155_MI, L_115, (&p4), L_116);
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
		t830 * L_121 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m11622_MI, __this, L_119, L_120);
		V_16 = L_121;
		t830 * L_122 = V_16;
		if (!L_122)
		{
			goto IL_030b;
		}
	}
	{
		t830 * L_123 = V_16;
		t9 * L_124 = p3;
		t9 * L_125 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m4419_MI, L_123, L_124);
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
		t830 * L_130 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m11622_MI, __this, L_128, L_129);
		V_17 = L_130;
		t830 * L_131 = V_17;
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
		m339(L_133, (t2*) &_stringLiteral2769, &m339_MI);
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
		t563 * L_136 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_136, (t2*) &_stringLiteral2770, (t2*) &_stringLiteral2757, &m5720_MI);
		il2cpp_codegen_raise_exception(L_136);
	}

IL_035a:
	{
		t830 * L_137 = V_17;
		t9 * L_138 = p3;
		t158* L_139 = p4;
		int32_t L_140 = 0;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m4420_MI, L_137, L_138, (*(t9 **)(t9 **)SZArrayLdElema(L_139, L_140)));
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
		t929* L_146 = m11629(__this, L_143, L_144, L_145, __this, &m11629_MI);
		V_18 = L_146;
		V_19 = NULL;
		V_21 = 0;
		V_20 = 0;
		goto IL_03b2;
	}

IL_0399:
	{
		t929* L_147 = V_18;
		int32_t L_148 = V_20;
		int32_t L_149 = L_148;
		t828 * L_150 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4428_MI, (*(t837 **)(t837 **)SZArrayLdElema(L_147, L_149)), 1);
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
		t929* L_154 = V_18;
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)(((t121 *)L_154)->max_length))))))
		{
			goto IL_0399;
		}
	}
	{
		int32_t L_155 = V_21;
		V_22 = ((t1806*)SZArrayNew(t1806_TI_var, L_155));
		V_21 = 0;
		V_20 = 0;
		goto IL_03ee;
	}

IL_03cb:
	{
		t929* L_156 = V_18;
		int32_t L_157 = V_20;
		int32_t L_158 = L_157;
		t828 * L_159 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4428_MI, (*(t837 **)(t837 **)SZArrayLdElema(L_156, L_158)), 1);
		V_23 = L_159;
		t914 * L_160 = V_23;
		if (!L_160)
		{
			goto IL_03e8;
		}
	}
	{
		t1806* L_161 = V_22;
		int32_t L_162 = V_21;
		int32_t L_163 = L_162;
		V_21 = ((int32_t)((int32_t)L_163+(int32_t)1));
		t914 * L_164 = V_23;
		ArrayElementTypeCheck (L_161, L_164);
		*((t914 **)(t914 **)SZArrayLdElema(L_161, L_163)) = (t914 *)L_164;
	}

IL_03e8:
	{
		int32_t L_165 = V_20;
		V_20 = ((int32_t)((int32_t)L_165+(int32_t)1));
	}

IL_03ee:
	{
		int32_t L_166 = V_20;
		t929* L_167 = V_18;
		if ((((int32_t)L_166) < ((int32_t)(((int32_t)(((t121 *)L_167)->max_length))))))
		{
			goto IL_03cb;
		}
	}
	{
		t933 * L_168 = p2;
		int32_t L_169 = p1;
		t1806* L_170 = V_22;
		t935* L_171 = p5;
		t901 * L_172 = p6;
		t221* L_173 = p7;
		t914 * L_174 = (t914 *)VirtFuncInvoker7< t914 *, int32_t, t1806*, t158**, t935*, t901 *, t221*, t9 ** >::Invoke(&m12154_MI, L_168, L_169, L_170, (&p4), L_171, L_172, L_173, (&V_19));
		V_24 = L_174;
		t914 * L_175 = V_24;
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
		t914 * L_176 = V_24;
		t928* L_177 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4424_MI, L_176);
		V_25 = L_177;
		t928* L_178 = V_25;
		if ((((int32_t)(((int32_t)(((t121 *)L_178)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_043e;
		}
	}
	{
		t928* L_179 = V_25;
		t928* L_180 = V_25;
		int32_t L_181 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_180)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_182 = m329(NULL, LoadTypeToken(&t337_0_0_0), &m329_MI);
		bool L_183 = m7068(NULL, (*(t924 **)(t924 **)SZArrayLdElema(L_179, L_181)), L_182, &m7068_MI);
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
		t914 * L_185 = V_24;
		m11664(__this, (&p4), L_185, &m11664_MI);
	}

IL_044f:
	{
		t914 * L_186 = V_24;
		t9 * L_187 = p3;
		int32_t L_188 = p1;
		t933 * L_189 = p2;
		t158* L_190 = p4;
		t901 * L_191 = p6;
		t9 * L_192 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12029_MI, L_186, L_187, L_188, L_189, L_190, L_191);
		V_27 = L_192;
		t933 * L_193 = p2;
		t9 * L_194 = V_19;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12155_MI, L_193, (&p4), L_194);
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
		t929* L_200 = m11629(__this, L_197, L_198, L_199, __this, &m11629_MI);
		V_28 = L_200;
		V_29 = NULL;
		V_31 = 0;
		V_30 = 0;
		goto IL_04af;
	}

IL_0496:
	{
		t929* L_201 = V_28;
		int32_t L_202 = V_30;
		int32_t L_203 = L_202;
		t828 * L_204 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4429_MI, (*(t837 **)(t837 **)SZArrayLdElema(L_201, L_203)), 1);
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
		t929* L_208 = V_28;
		if ((((int32_t)L_207) < ((int32_t)(((int32_t)(((t121 *)L_208)->max_length))))))
		{
			goto IL_0496;
		}
	}
	{
		int32_t L_209 = V_31;
		V_32 = ((t1806*)SZArrayNew(t1806_TI_var, L_209));
		V_31 = 0;
		V_30 = 0;
		goto IL_04eb;
	}

IL_04c8:
	{
		t929* L_210 = V_28;
		int32_t L_211 = V_30;
		int32_t L_212 = L_211;
		t828 * L_213 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4429_MI, (*(t837 **)(t837 **)SZArrayLdElema(L_210, L_212)), 1);
		V_33 = L_213;
		t914 * L_214 = V_33;
		if (!L_214)
		{
			goto IL_04e5;
		}
	}
	{
		t1806* L_215 = V_32;
		int32_t L_216 = V_31;
		int32_t L_217 = L_216;
		V_31 = ((int32_t)((int32_t)L_217+(int32_t)1));
		t914 * L_218 = V_33;
		ArrayElementTypeCheck (L_215, L_218);
		*((t914 **)(t914 **)SZArrayLdElema(L_215, L_217)) = (t914 *)L_218;
	}

IL_04e5:
	{
		int32_t L_219 = V_30;
		V_30 = ((int32_t)((int32_t)L_219+(int32_t)1));
	}

IL_04eb:
	{
		int32_t L_220 = V_30;
		t929* L_221 = V_28;
		if ((((int32_t)L_220) < ((int32_t)(((int32_t)(((t121 *)L_221)->max_length))))))
		{
			goto IL_04c8;
		}
	}
	{
		t933 * L_222 = p2;
		int32_t L_223 = p1;
		t1806* L_224 = V_32;
		t935* L_225 = p5;
		t901 * L_226 = p6;
		t221* L_227 = p7;
		t914 * L_228 = (t914 *)VirtFuncInvoker7< t914 *, int32_t, t1806*, t158**, t935*, t901 *, t221*, t9 ** >::Invoke(&m12154_MI, L_222, L_223, L_224, (&p4), L_225, L_226, L_227, (&V_29));
		V_34 = L_228;
		t914 * L_229 = V_34;
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
		t914 * L_230 = V_34;
		t928* L_231 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4424_MI, L_230);
		V_35 = L_231;
		t928* L_232 = V_35;
		if ((((int32_t)(((int32_t)(((t121 *)L_232)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_053b;
		}
	}
	{
		t928* L_233 = V_35;
		t928* L_234 = V_35;
		int32_t L_235 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_234)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_236 = m329(NULL, LoadTypeToken(&t337_0_0_0), &m329_MI);
		bool L_237 = m7068(NULL, (*(t924 **)(t924 **)SZArrayLdElema(L_233, L_235)), L_236, &m7068_MI);
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
		t914 * L_239 = V_34;
		m11664(__this, (&p4), L_239, &m11664_MI);
	}

IL_054c:
	{
		t914 * L_240 = V_34;
		t9 * L_241 = p3;
		int32_t L_242 = p1;
		t933 * L_243 = p2;
		t158* L_244 = p4;
		t901 * L_245 = p6;
		t9 * L_246 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12029_MI, L_240, L_241, L_242, L_243, L_244, L_245);
		V_37 = L_246;
		t933 * L_247 = p2;
		t9 * L_248 = V_29;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12155_MI, L_247, (&p4), L_248);
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
		t2126 * L_252 = (t2126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2126_TI));
		m11591(L_252, L_251, &m11591_MI);
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
		t2* L_255 = m399(NULL, (t2*) &_stringLiteral2771, L_254, (t2*) &_stringLiteral135, &m399_MI);
		t2124 * L_256 = (t2124 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2124_TI));
		m11581(L_256, L_255, &m11581_MI);
		il2cpp_codegen_raise_exception(L_256);
	}

IL_0590:
	{
		return NULL;
	}
}
extern "C" t126 * m11639 (t2133 * __this, MethodInfo* method)
{
	typedef t126 * (*m11639_ftn) (t2133 *);
	static m11639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11639_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetElementType()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11640_MI;
extern "C" t126 * m11640 (t2133 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m11641_MI;
extern "C" t1345 * m11641 (t2133 * __this, MethodInfo* method)
{
	typedef t1345 * (*m11641_ftn) (t2133 *);
	static m11641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11641_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Assembly()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11642_MI;
extern "C" t2* m11642 (t2133 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11643(__this, 1, 1, &m11643_MI);
		return L_0;
	}
}
extern "C" t2* m11643 (t2133 * __this, bool p0, bool p1, MethodInfo* method)
{
	typedef t2* (*m11643_ftn) (t2133 *, bool, bool);
	static m11643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11643_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::getFullName(System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11644_MI;
extern "C" t126 * m11644 (t2133 * __this, MethodInfo* method)
{
	typedef t126 * (*m11644_ftn) (t2133 *);
	static m11644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11644_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_BaseType()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m11645 (t2133 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	{
		t2132 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t2132 * L_1 = (t2132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2132_TI));
		m11613(L_1, &m11613_MI);
		__this->f8 = L_1;
	}

IL_0013:
	{
		t2132 * L_2 = (__this->f8);
		t2* L_3 = (L_2->f0);
		t2* L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2132 * L_5 = (__this->f8);
		t2* L_6 = m11643(__this, 1, 0, &m11643_MI);
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
extern MethodInfo m11646_MI;
extern "C" bool m11646 (t2133 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11607(NULL, __this, L_0, L_1, &m11607_MI);
		return L_2;
	}
}
extern MethodInfo m11647_MI;
extern "C" t158* m11647 (t2133 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_1 = m11606(NULL, __this, L_0, &m11606_MI);
		return L_1;
	}
}
extern MethodInfo m11648_MI;
extern "C" t158* m11648 (t2133 * __this, t126 * p0, bool p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1071, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_4 = m11605(NULL, __this, L_2, L_3, &m11605_MI);
		return L_4;
	}
}
extern MethodInfo m11649_MI;
extern "C" int32_t m11649 (t2133 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11653_MI, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11661_MI, __this);
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
extern MethodInfo m11650_MI;
extern "C" t2* m11650 (t2133 * __this, MethodInfo* method)
{
	typedef t2* (*m11650_ftn) (t2133 *);
	static m11650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11650_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Name()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11651_MI;
extern "C" t2* m11651 (t2133 * __this, MethodInfo* method)
{
	typedef t2* (*m11651_ftn) (t2133 *);
	static m11651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11651_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Namespace()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11652_MI;
extern "C" t1568 * m11652 (t2133 * __this, MethodInfo* method)
{
	typedef t1568 * (*m11652_ftn) (t2133 *);
	static m11652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11652_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Module()");
	return _il2cpp_icall_func(__this);
}
extern "C" t126 * m11653 (t2133 * __this, MethodInfo* method)
{
	typedef t126 * (*m11653_ftn) (t2133 *);
	static m11653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11653_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_DeclaringType()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11654_MI;
extern "C" t126 * m11654 (t2133 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11653_MI, __this);
		return L_0;
	}
}
extern MethodInfo m11655_MI;
extern "C" t127  m11655 (t2133 * __this, MethodInfo* method)
{
	{
		t127  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11656_MI;
extern "C" int32_t m11656 (t2133 * __this, MethodInfo* method)
{
	typedef int32_t (*m11656_ftn) (t2133 *);
	static m11656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11656_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetArrayRank()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11657_MI;
extern "C" void m11657 (t2133 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11877(NULL, __this, L_0, L_1, &m11877_MI);
		return;
	}
}
extern MethodInfo m11658_MI;
extern "C" t2* m11658 (t2133 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11643(__this, 0, 0, &m11643_MI);
		return L_0;
	}
}
extern "C" t152* m11659 (t2133 * __this, MethodInfo* method)
{
	typedef t152* (*m11659_ftn) (t2133 *);
	static m11659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11659_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11660_MI;
extern "C" bool m11660 (t2133 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11661_MI, __this);
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
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7806_MI, __this);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11659_MI, __this);
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
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7802_MI, L_6);
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
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7750_MI, __this);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11639_MI, __this);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7802_MI, L_12);
		return L_13;
	}

IL_0049:
	{
		return 0;
	}
}
extern "C" bool m11661 (t2133 * __this, MethodInfo* method)
{
	typedef bool (*m11661_ftn) (t2133 *);
	static m11661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11661_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11662_MI;
extern "C" t126 * m11662 (t2133 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t126 * L_0 = m7804(__this, &m7804_MI);
		V_0 = L_0;
		t126 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		t1341 * L_2 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_2, &m5721_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t126 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t914 * m11663 (t2133 * __this, t914 * p0, MethodInfo* method)
{
	{
		t914 * L_0 = p0;
		return L_0;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11664 (t2133 * __this, t158** p0, t914 * p1, MethodInfo* method)
{
	static bool m11664_init;
	if (!m11664_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11664_init = true;
	}
	t928* V_0 = {0};
	t158* V_1 = {0};
	t121 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t914 * L_0 = p1;
		t928* L_1 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4424_MI, L_0);
		V_0 = L_1;
		t928* L_2 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		t928* L_3 = V_0;
		t928* L_4 = V_0;
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1));
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4425_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_3, L_5)));
		t126 * L_7 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11968_MI, L_6);
		t158** L_8 = p0;
		t928* L_9 = V_0;
		t121 * L_10 = m7696(NULL, L_7, ((int32_t)((int32_t)(((int32_t)(((t121 *)(*((t158**)L_8)))->max_length)))-(int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)1)))), &m7696_MI);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_0038:
	{
		int32_t L_11 = V_4;
		t928* L_12 = V_0;
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
		m5719(L_18, (*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_19)), L_21)), L_22, &m5719_MI);
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
		t928* L_28 = V_0;
		t121 * L_29 = V_2;
		ArrayElementTypeCheck (L_27, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_28)->max_length)))-(int32_t)1)))) = (t9 *)L_29;
		t158** L_30 = p0;
		t158* L_31 = V_1;
		*((t9 **)(L_30)) = (t9 *)L_31;
		return;
	}
}
#include "t2134.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2134_TI;
#include "t2134MD.h"



extern MethodInfo m11665_MI;
extern "C" void m11665 (t2134 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2772, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		return;
	}
}
extern MethodInfo m11666_MI;
extern "C" void m11666 (t2134 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		return;
	}
}
extern MethodInfo m11667_MI;
extern "C" void m11667 (t2134 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2135_TI;
#include "t2135MD.h"



extern MethodInfo m11668_MI;
extern "C" void m11668 (t2135 * __this, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		return;
	}
}
#include "t1346.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1346_TI;
#include "t1346MD.h"



extern MethodInfo m11669_MI;
extern "C" void m11669 (t1346 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2773, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467263), &m4458_MI);
		return;
	}
}
extern MethodInfo m5774_MI;
extern "C" void m5774 (t1346 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467263), &m4458_MI);
		return;
	}
}
extern MethodInfo m11670_MI;
extern "C" void m11670 (t1346 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m561 (t169 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2774, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233067), &m4458_MI);
		return;
	}
}
extern "C" void m5735 (t169 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233067), &m4458_MI);
		return;
	}
}
extern MethodInfo m11671_MI;
extern "C" void m11671 (t169 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t878_TI;
#include "t878MD.h"



extern MethodInfo m11672_MI;
extern "C" void m11672 (t878 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2775, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467261), &m4458_MI);
		return;
	}
}
extern MethodInfo m4228_MI;
extern "C" void m4228 (t878 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147467261), &m4458_MI);
		return;
	}
}
extern MethodInfo m11673_MI;
extern "C" void m11673 (t878 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2136_TI;
#include "t2136MD.h"

#include "t1555MD.h"
extern MethodInfo m11674_MI;
extern MethodInfo m8753_MI;
extern MethodInfo m8752_MI;
extern MethodInfo m5740_MI;
extern MethodInfo m8751_MI;
extern MethodInfo m8762_MI;
extern MethodInfo m8763_MI;
extern MethodInfo m8749_MI;
extern MethodInfo m10900_MI;


extern "C" void m11674 (t2136 * __this, MethodInfo* method)
{
	{
		__this->f2 = (-1);
		__this->f10 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11675_MI;
extern TypeInfo* t1095_TI_var;
extern "C" void m11675 (t9 * __this , t2* p0, bool* p1, bool p2, int32_t* p3, int32_t* p4, MethodInfo* method)
{
	static bool m11675_init;
	if (!m11675_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m11675_init = true;
	}
	t1095* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		V_0 = ((t1095*)SZArrayNew(t1095_TI_var, 3));
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
		uint16_t L_2 = m2739(L_0, L_1, &m2739_MI);
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
		uint16_t L_13 = m2739(L_11, L_12, &m2739_MI);
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
		uint16_t L_17 = m2739(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), &m2739_MI);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)92))))
		{
			goto IL_0076;
		}
	}

IL_0060:
	{
		t1095* L_18 = V_0;
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
		int32_t L_28 = m2724(L_27, &m2724_MI);
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
		int32_t L_33 = m2724(L_32, &m2724_MI);
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
		t1095* L_39 = V_0;
		int32_t L_40 = 0;
		*((int32_t*)(L_38)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_39, L_40));
		return;
	}

IL_00ab:
	{
		t1095* L_41 = V_0;
		int32_t L_42 = 0;
		t2* L_43 = p0;
		int32_t L_44 = m2724(L_43, &m2724_MI);
		if ((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_41, L_42))+(int32_t)1))) >= ((int32_t)L_44)))
		{
			goto IL_00cf;
		}
	}
	{
		bool* L_45 = p1;
		*((int8_t*)(L_45)) = (int8_t)1;
		int32_t* L_46 = p3;
		t1095* L_47 = V_0;
		int32_t L_48 = 0;
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48))+(int32_t)1));
		int32_t* L_49 = p4;
		t2* L_50 = p0;
		int32_t L_51 = m2724(L_50, &m2724_MI);
		int32_t* L_52 = p3;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51-(int32_t)(*((int32_t*)L_52))));
		return;
	}

IL_00cf:
	{
		int32_t* L_53 = p3;
		*((int32_t*)(L_53)) = (int32_t)0;
		int32_t* L_54 = p4;
		t1095* L_55 = V_0;
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
		t1095* L_60 = V_0;
		int32_t L_61 = 0;
		t1095* L_62 = V_0;
		int32_t L_63 = 1;
		*((int32_t*)(L_59)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_60, L_61))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_62, L_63))))+(int32_t)2));
		int32_t* L_64 = p4;
		t2* L_65 = p0;
		int32_t L_66 = m2724(L_65, &m2724_MI);
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
		t1095* L_71 = V_0;
		int32_t L_72 = 0;
		*((int32_t*)(L_70)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72));
		return;
	}

IL_0106:
	{
		t1095* L_73 = V_0;
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
		t1095* L_77 = V_0;
		int32_t L_78 = 0;
		*((int32_t*)(L_76)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_77, L_78))+(int32_t)1));
		int32_t* L_79 = p4;
		t1095* L_80 = V_0;
		int32_t L_81 = 1;
		*((int32_t*)(L_79)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_80, L_81));
		return;
	}

IL_011d:
	{
		int32_t* L_82 = p3;
		*((int32_t*)(L_82)) = (int32_t)0;
		int32_t* L_83 = p4;
		t1095* L_84 = V_0;
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
		t1095* L_89 = V_0;
		int32_t L_90 = 0;
		t1095* L_91 = V_0;
		int32_t L_92 = 1;
		*((int32_t*)(L_88)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_89, L_90))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_91, L_92))))+(int32_t)2));
		int32_t* L_93 = p4;
		t1095* L_94 = V_0;
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
		t1095* L_99 = V_0;
		int32_t L_100 = 0;
		*((int32_t*)(L_98)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100));
		return;
	}

IL_014e:
	{
		t1095* L_101 = V_0;
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
		t1095* L_105 = V_0;
		int32_t L_106 = 0;
		*((int32_t*)(L_104)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_105, L_106))+(int32_t)1));
		int32_t* L_107 = p4;
		t1095* L_108 = V_0;
		int32_t L_109 = 1;
		*((int32_t*)(L_107)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_108, L_109));
		return;
	}

IL_0165:
	{
		int32_t* L_110 = p3;
		*((int32_t*)(L_110)) = (int32_t)0;
		int32_t* L_111 = p4;
		t1095* L_112 = V_0;
		int32_t L_113 = 0;
		*((int32_t*)(L_111)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_112, L_113));
		return;
	}

IL_016f:
	{
		t563 * L_114 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_114, &m11138_MI);
		il2cpp_codegen_raise_exception(L_114);
	}
}
extern MethodInfo m11676_MI;
extern "C" t2136 * m11676 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t1555 * p3, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	t2136 * V_5 = {0};
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
		t2136 * L_0 = (t2136 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2136_TI));
		m11674(L_0, &m11674_MI);
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
		uint16_t L_4 = m2739(L_2, L_3, &m2739_MI);
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
		t2136 * L_13 = V_5;
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
		t2136 * L_30 = V_5;
		t2136 * L_31 = L_30;
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
		t2136 * L_34 = V_5;
		t2136 * L_35 = L_34;
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
		t2136 * L_38 = V_5;
		t2136 * L_39 = L_38;
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
		t2136 * L_43 = V_5;
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
		t2136 * L_45 = V_5;
		L_45->f9 = 0;
	}

IL_015c:
	{
		t2136 * L_46 = V_5;
		int32_t L_47 = (L_46->f6);
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_016f;
		}
	}
	{
		t2136 * L_48 = V_5;
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
		t2136 * L_51 = V_5;
		t2136 * L_52 = L_51;
		int32_t L_53 = (L_52->f4);
		L_52->f4 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		t2136 * L_55 = V_5;
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
		t2136 * L_57 = V_5;
		t2136 * L_58 = L_57;
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
		t2136 * L_61 = V_5;
		t2136 * L_62 = L_61;
		int32_t L_63 = (L_62->f8);
		L_62->f8 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_01b9:
	{
		goto IL_0287;
	}

IL_01be:
	{
		t2136 * L_64 = V_5;
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
		t2136 * L_66 = V_5;
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
		uint16_t L_72 = m2739(L_70, ((int32_t)((int32_t)L_71+(int32_t)1)), &m2739_MI);
		V_9 = L_72;
		uint16_t L_73 = V_9;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_01fd;
		}
	}
	{
		t2136 * L_74 = V_5;
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
		t2136 * L_80 = V_5;
		L_80->f7 = 0;
		t2136 * L_81 = V_5;
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
		t2136 * L_83 = V_5;
		int32_t L_84 = (L_83->f2);
		if ((!(((uint32_t)L_84) == ((uint32_t)(-1)))))
		{
			goto IL_024c;
		}
	}
	{
		t2136 * L_85 = V_5;
		int32_t L_86 = V_7;
		L_85->f2 = L_86;
	}

IL_024c:
	{
		goto IL_0287;
	}

IL_024e:
	{
		t2136 * L_87 = V_5;
		t2136 * L_88 = L_87;
		int32_t L_89 = (L_88->f12);
		L_88->f12 = ((int32_t)((int32_t)L_89+(int32_t)1));
		goto IL_0287;
	}

IL_025f:
	{
		t2136 * L_90 = V_5;
		t2136 * L_91 = L_90;
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
		t2136 * L_94 = V_5;
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
		t2136 * L_101 = V_5;
		int32_t L_102 = (L_101->f8);
		if (L_102)
		{
			goto IL_02aa;
		}
	}
	{
		t2136 * L_103 = V_5;
		L_103->f7 = 0;
		goto IL_02b2;
	}

IL_02aa:
	{
		t2136 * L_104 = V_5;
		L_104->f5 = 0;
	}

IL_02b2:
	{
		t2136 * L_105 = V_5;
		int32_t L_106 = (L_105->f1);
		if (L_106)
		{
			goto IL_02c3;
		}
	}
	{
		t2136 * L_107 = V_5;
		L_107->f2 = (-1);
	}

IL_02c3:
	{
		t2136 * L_108 = V_5;
		t2136 * L_109 = L_108;
		int32_t L_110 = (L_109->f11);
		int32_t L_111 = V_6;
		L_109->f11 = ((int32_t)((int32_t)L_110+(int32_t)((int32_t)((int32_t)L_111*(int32_t)3))));
		t2136 * L_112 = V_5;
		return L_112;
	}
}
extern MethodInfo m11677_MI;
extern "C" t2* m11677 (t2136 * __this, t2* p0, int32_t p1, int32_t p2, t1555 * p3, bool p4, t322 * p5, t322 * p6, t322 * p7, MethodInfo* method)
{
	t322 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1095* V_7 = {0};
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
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		t1555 * L_1 = p3;
		t1095* L_2 = m8753(L_1, &m8753_MI);
		V_7 = L_2;
		t1555 * L_3 = p3;
		t2* L_4 = m8752(L_3, &m8752_MI);
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
		t1095* L_6 = V_7;
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00e7;
		}
	}
	{
		t322 * L_7 = p5;
		int32_t L_8 = m5885(L_7, &m5885_MI);
		V_9 = L_8;
		V_14 = 0;
		goto IL_0073;
	}

IL_0059:
	{
		int32_t L_9 = V_10;
		t1095* L_10 = V_7;
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
		t1095* L_18 = V_7;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		t1095* L_19 = V_7;
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
		t1095* L_29 = V_7;
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
		t1095* L_34 = V_7;
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
		uint16_t L_50 = m2739(L_48, L_49, &m2739_MI);
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
		t322 * L_55 = V_0;
		uint16_t L_56 = V_17;
		m2758(L_55, L_56, &m2758_MI);
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
		t322 * L_68 = V_0;
		t2* L_69 = p0;
		int32_t L_70 = V_16;
		uint16_t L_71 = m2739(L_69, L_70, &m2739_MI);
		m2758(L_68, L_71, &m2758_MI);
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
		t322 * L_79 = p5;
		int32_t L_80 = m5885(L_79, &m5885_MI);
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
		t322 * L_83 = V_0;
		t322 * L_84 = p5;
		int32_t L_85 = V_5;
		int32_t L_86 = L_85;
		V_5 = ((int32_t)((int32_t)L_86+(int32_t)1));
		uint16_t L_87 = m10891(L_84, L_86, &m10891_MI);
		m2758(L_83, L_87, &m2758_MI);
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
		t322 * L_93 = V_0;
		t2* L_94 = V_8;
		m1170(L_93, L_94, &m1170_MI);
		int32_t L_95 = V_11;
		int32_t L_96 = ((int32_t)((int32_t)L_95-(int32_t)1));
		V_11 = L_96;
		t1095* L_97 = V_7;
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
		t1095* L_99 = V_7;
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
		t322 * L_106 = p5;
		int32_t L_107 = m5885(L_106, &m5885_MI);
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
		t322 * L_110 = p6;
		int32_t L_111 = m5885(L_110, &m5885_MI);
		if ((((int32_t)L_109) >= ((int32_t)L_111)))
		{
			goto IL_0284;
		}
	}
	{
		t322 * L_112 = V_0;
		t322 * L_113 = p6;
		int32_t L_114 = V_6;
		int32_t L_115 = L_114;
		V_6 = ((int32_t)((int32_t)L_115+(int32_t)1));
		uint16_t L_116 = m10891(L_113, L_115, &m10891_MI);
		m2758(L_112, L_116, &m2758_MI);
	}

IL_0284:
	{
		goto IL_03c8;
	}

IL_0289:
	{
		t322 * L_117 = V_0;
		uint16_t L_118 = V_17;
		m2758(L_117, L_118, &m2758_MI);
		goto IL_03c8;
	}

IL_0297:
	{
		t322 * L_119 = p7;
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
		t322 * L_121 = V_0;
		uint16_t L_122 = V_17;
		m2758(L_121, L_122, &m2758_MI);
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
		uint16_t L_126 = m2739(L_124, L_125, &m2739_MI);
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
		uint16_t L_131 = m2739(L_129, L_130, &m2739_MI);
		if ((((int32_t)L_131) == ((int32_t)((int32_t)43))))
		{
			goto IL_02f0;
		}
	}
	{
		t2* L_132 = p0;
		int32_t L_133 = V_20;
		uint16_t L_134 = m2739(L_132, L_133, &m2739_MI);
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
		t322 * L_144 = V_0;
		uint16_t L_145 = V_17;
		m2758(L_144, L_145, &m2758_MI);
		t322 * L_146 = V_0;
		t322 * L_147 = p7;
		m5740(L_146, L_147, &m5740_MI);
		p7 = (t322 *)NULL;
		goto IL_0343;
	}

IL_033a:
	{
		t322 * L_148 = V_0;
		uint16_t L_149 = V_17;
		m2758(L_148, L_149, &m2758_MI);
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
		t322 * L_153 = V_0;
		t322 * L_154 = p5;
		int32_t L_155 = V_5;
		int32_t L_156 = L_155;
		V_5 = ((int32_t)((int32_t)L_156+(int32_t)1));
		uint16_t L_157 = m10891(L_154, L_156, &m10891_MI);
		m2758(L_153, L_157, &m2758_MI);
	}

IL_0372:
	{
		int32_t L_158 = V_5;
		t322 * L_159 = p5;
		int32_t L_160 = m5885(L_159, &m5885_MI);
		if ((((int32_t)L_158) < ((int32_t)L_160)))
		{
			goto IL_035d;
		}
	}

IL_037d:
	{
		t322 * L_161 = p6;
		int32_t L_162 = m5885(L_161, &m5885_MI);
		if ((((int32_t)L_162) <= ((int32_t)0)))
		{
			goto IL_0395;
		}
	}
	{
		t322 * L_163 = V_0;
		t1555 * L_164 = p3;
		t2* L_165 = m8751(L_164, &m8751_MI);
		m1170(L_163, L_165, &m1170_MI);
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
		t322 * L_166 = V_0;
		t1555 * L_167 = p3;
		t2* L_168 = m8762(L_167, &m8762_MI);
		m1170(L_166, L_168, &m1170_MI);
		goto IL_03c8;
	}

IL_03ad:
	{
		t322 * L_169 = V_0;
		t1555 * L_170 = p3;
		t2* L_171 = m8763(L_170, &m8763_MI);
		m1170(L_169, L_171, &m1170_MI);
		goto IL_03c8;
	}

IL_03bd:
	{
		t322 * L_172 = V_0;
		uint16_t L_173 = V_17;
		m2758(L_172, L_173, &m2758_MI);
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
		t322 * L_179 = V_0;
		t1555 * L_180 = p3;
		t2* L_181 = m8749(L_180, &m8749_MI);
		m10900(L_179, 0, L_181, &m10900_MI);
	}

IL_03eb:
	{
		t322 * L_182 = V_0;
		t2* L_183 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_182);
		return L_183;
	}
}
#include "t2137.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2137_TI;
#include "t2137MD.h"

#include "t1872.h"
extern TypeInfo t1872_TI;
#include "t1872MD.h"
extern MethodInfo m8666_MI;
extern MethodInfo m11053_MI;
extern MethodInfo m11707_MI;
extern MethodInfo m11680_MI;
extern MethodInfo m11685_MI;
extern MethodInfo m11686_MI;
extern MethodInfo m11683_MI;
extern MethodInfo m11687_MI;
extern MethodInfo m11688_MI;
extern MethodInfo m11681_MI;
extern MethodInfo m11692_MI;
extern MethodInfo m11689_MI;
extern MethodInfo m11693_MI;
extern MethodInfo m11694_MI;
extern MethodInfo m11682_MI;
extern MethodInfo m11690_MI;
extern MethodInfo m11691_MI;
extern MethodInfo m11719_MI;
extern MethodInfo m7484_MI;
extern MethodInfo m11684_MI;
extern MethodInfo m11702_MI;
extern MethodInfo m8768_MI;
extern MethodInfo m11715_MI;
extern MethodInfo m11717_MI;
extern MethodInfo m11716_MI;
extern MethodInfo m11718_MI;
extern MethodInfo m11720_MI;
extern MethodInfo m11042_MI;
extern MethodInfo m11678_MI;
extern MethodInfo m11721_MI;
extern MethodInfo m11695_MI;
extern MethodInfo m11742_MI;
extern MethodInfo m11722_MI;
extern MethodInfo m11696_MI;
extern MethodInfo m11698_MI;
extern MethodInfo m11697_MI;
extern MethodInfo m11699_MI;
extern MethodInfo m11706_MI;
extern MethodInfo m8747_MI;
extern MethodInfo m8764_MI;
extern MethodInfo m8748_MI;
extern MethodInfo m11749_MI;
extern MethodInfo m11743_MI;
extern MethodInfo m11748_MI;
extern MethodInfo m11700_MI;
extern MethodInfo m11728_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m11729_MI;
extern MethodInfo m11730_MI;
extern MethodInfo m11731_MI;
extern MethodInfo m11750_MI;
extern MethodInfo m11701_MI;
extern MethodInfo m11705_MI;
extern MethodInfo m11766_MI;
extern MethodInfo m4358_MI;
extern MethodInfo m11744_MI;
extern MethodInfo m11745_MI;
extern MethodInfo m11753_MI;
extern MethodInfo m11747_MI;
extern MethodInfo m11751_MI;
extern MethodInfo m11752_MI;
extern MethodInfo m11746_MI;
extern MethodInfo m11755_MI;
extern MethodInfo m8738_MI;
extern MethodInfo m11714_MI;
extern MethodInfo m11708_MI;
extern MethodInfo m8743_MI;
extern MethodInfo m8744_MI;
extern MethodInfo m11703_MI;
extern MethodInfo m8742_MI;
extern MethodInfo m8741_MI;
extern MethodInfo m8740_MI;
extern MethodInfo m11763_MI;
extern MethodInfo m8739_MI;
extern MethodInfo m11762_MI;
extern MethodInfo m11767_MI;
extern MethodInfo m8750_MI;
extern MethodInfo m11760_MI;
extern MethodInfo m11771_MI;
extern MethodInfo m11710_MI;
extern MethodInfo m11713_MI;
extern MethodInfo m11754_MI;
extern MethodInfo m8754_MI;
extern MethodInfo m8756_MI;
extern MethodInfo m11769_MI;
extern MethodInfo m8761_MI;
extern MethodInfo m8760_MI;
extern MethodInfo m8759_MI;
extern MethodInfo m8758_MI;
extern MethodInfo m8757_MI;
extern MethodInfo m11765_MI;
extern MethodInfo m11764_MI;
extern MethodInfo m11711_MI;
extern MethodInfo m11770_MI;
extern MethodInfo m11758_MI;
extern MethodInfo m11712_MI;
extern MethodInfo m11759_MI;
extern MethodInfo m11709_MI;
extern MethodInfo m11761_MI;
extern MethodInfo m10902_MI;
extern MethodInfo m10901_MI;
extern MethodInfo m8765_MI;
extern MethodInfo m11757_MI;
extern MethodInfo m10894_MI;
extern MethodInfo m11756_MI;
extern MethodInfo m10897_MI;
extern MethodInfo m11768_MI;
extern MethodInfo m11704_MI;
extern MethodInfo m10892_MI;
extern MethodInfo m7059_MI;


extern TypeInfo* t312_TI_var;
extern "C" void m11678 (t2137 * __this, t1872 * p0, MethodInfo* method)
{
	static bool m11678_init;
	if (!m11678_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m11678_init = true;
	}
	{
		m336(__this, &m336_MI);
		__this->f23 = ((t312*)SZArrayNew(t312_TI_var, 0));
		t1872 * L_0 = p0;
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
		t1872 * L_1 = p0;
		__this->f6 = L_1;
		t1872 * L_2 = (__this->f6);
		t901 * L_3 = m11053(L_2, &m11053_MI);
		m11707(__this, L_3, &m11707_MI);
		return;
	}
}
extern MethodInfo m11679_MI;
extern "C" void m11679 (t9 * __this , MethodInfo* method)
{
	{
		m11680(NULL, (&((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f0), (&((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f1), (&((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f2), (&((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f3), (&((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f4), (&((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5), &m11680_MI);
		return;
	}
}
extern "C" void m11680 (t9 * __this , uint64_t** p0, int32_t** p1, uint16_t** p2, uint16_t** p3, int64_t** p4, int32_t** p5, MethodInfo* method)
{
	typedef void (*m11680_ftn) (uint64_t**, int32_t**, uint16_t**, uint16_t**, int64_t**, int32_t**);
	static m11680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11680_ftn)il2cpp_codegen_resolve_icall ("System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern "C" int64_t m11681 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int64_t* L_0 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f4;
		int32_t L_1 = p0;
		return (*((int64_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)8))))));
	}
}
extern "C" void m11682 (t2137 * __this, uint32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_5 = m11685(NULL, L_4, &m11685_MI);
		__this->f20 = L_5;
	}

IL_0029:
	{
		uint32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_7 = m11686(NULL, L_6, &m11686_MI);
		__this->f19 = L_7;
		return;
	}
}
extern "C" void m11683 (t2137 * __this, uint64_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_9 = m11686(NULL, L_8, &m11686_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_12 = m11686(NULL, (((int32_t)L_11)), &m11686_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_15 = m11686(NULL, (((int32_t)L_14)), &m11686_MI);
		__this->f19 = L_15;
	}

IL_006b:
	{
		return;
	}
}
extern "C" void m11684 (t2137 * __this, uint32_t p0, uint64_t p1, MethodInfo* method)
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
		m11683(__this, L_1, &m11683_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_18 = m11686(NULL, (((int32_t)L_17)), &m11686_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_34 = m11686(NULL, (((int32_t)L_33)), &m11686_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_40 = m11686(NULL, (((int32_t)L_39)), &m11686_MI);
		__this->f22 = L_40;
	}

IL_0108:
	{
		uint64_t L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_42 = m11686(NULL, (((int32_t)L_41)), &m11686_MI);
		__this->f21 = L_42;
		return;
	}
}
extern "C" uint32_t m11685 (t9 * __this , int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t* L_1 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5;
		int32_t L_2 = p0;
		return (*((int32_t*)((intptr_t)((intptr_t)L_1+(int32_t)((int32_t)((int32_t)L_2*(int32_t)4))))));
	}

IL_0010:
	{
		int32_t L_3 = p0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t* L_4 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5;
		int32_t L_5 = V_0;
		int32_t* L_6 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5;
		int32_t L_7 = p0;
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))))<<(int32_t)8))|(int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_6+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)((int32_t)((int32_t)L_8*(int32_t)((int32_t)100)))))*(int32_t)4))))))));
	}
}
extern "C" uint32_t m11686 (t9 * __this , int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_5 = m11685(NULL, L_4, &m11685_MI);
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)));
	}

IL_0029:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_8 = m11685(NULL, L_7, &m11685_MI);
		return ((int32_t)((int32_t)L_6|(int32_t)L_8));
	}
}
extern "C" int32_t m11687 (t9 * __this , int32_t p0, MethodInfo* method)
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
extern "C" int32_t m11688 (t9 * __this , uint32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_2 = m11687(NULL, L_1, &m11687_MI);
		return L_2;
	}

IL_000f:
	{
		uint32_t L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_4 = m11687(NULL, ((int32_t)((uint32_t)L_3>>((int32_t)16))), &m11687_MI);
		return ((int32_t)((int32_t)4+(int32_t)L_4));
	}
}
extern "C" int32_t m11689 (t2137 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_2 = m11688(NULL, L_1, &m11688_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_5 = m11688(NULL, L_4, &m11688_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_8 = m11688(NULL, L_7, &m11688_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_11 = m11688(NULL, L_10, &m11688_MI);
		return L_11;
	}

IL_0058:
	{
		return 0;
	}
}
extern "C" int32_t m11690 (t9 * __this , int64_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int64_t L_2 = m11681(NULL, L_1, &m11681_MI);
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
extern "C" int32_t m11691 (t2137 * __this, MethodInfo* method)
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
		int32_t L_8 = m11572(NULL, ((int32_t)((int32_t)L_6+(int32_t)2)), L_7, &m11572_MI);
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
		int32_t L_12 = m11572(NULL, ((int32_t)((int32_t)L_10+(int32_t)2)), ((int32_t)((int32_t)L_11+(int32_t)1)), &m11572_MI);
		return L_12;
	}

IL_0066:
	{
		int32_t L_13 = (__this->f15);
		return L_13;
	}
}
extern "C" int32_t m11692 (t9 * __this , t2* p0, MethodInfo* method)
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
		uint16_t L_2 = m2739(L_0, L_1, &m2739_MI);
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
		int32_t L_11 = m2724(L_10, &m2724_MI);
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
extern "C" void m11693 (t2137 * __this, t2* p0, MethodInfo* method)
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
		int32_t L_10 = m2724(L_9, &m2724_MI);
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
		uint16_t L_12 = m2739(L_11, 0, &m2739_MI);
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
		int32_t L_20 = m2724(L_19, &m2724_MI);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		t2* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_22 = m11692(NULL, L_21, &m11692_MI);
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
extern "C" void m11694 (t2137 * __this, uint64_t p0, MethodInfo* method)
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
		int32_t L_8 = m11689(__this, &m11689_MI);
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
extern "C" void m11695 (t2137 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11693(__this, L_0, &m11693_MI);
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
		m11694(__this, (((int64_t)L_5)), &m11694_MI);
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
		m11682(__this, L_8, &m11682_MI);
		int32_t L_9 = m11689(__this, &m11689_MI);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->f16 = L_10;
		int32_t L_11 = V_0;
		__this->f18 = L_11;
		return;
	}
}
extern "C" void m11696 (t2137 * __this, t2* p0, uint32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11693(__this, L_0, &m11693_MI);
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
		m11694(__this, (((uint64_t)L_4)), &m11694_MI);
		return;
	}

IL_002b:
	{
		uint32_t L_5 = p1;
		m11682(__this, L_5, &m11682_MI);
		int32_t L_6 = m11689(__this, &m11689_MI);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f16 = L_7;
		int32_t L_8 = V_0;
		__this->f18 = L_8;
		return;
	}
}
extern "C" void m11697 (t2137 * __this, t2* p0, int64_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11693(__this, L_0, &m11693_MI);
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
		m11694(__this, L_4, &m11694_MI);
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
		m11683(__this, L_7, &m11683_MI);
		int32_t L_8 = m11689(__this, &m11689_MI);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f16 = L_9;
		int32_t L_10 = V_0;
		__this->f18 = L_10;
		return;
	}
}
extern "C" void m11698 (t2137 * __this, t2* p0, uint64_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11693(__this, L_0, &m11693_MI);
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
		m11694(__this, L_3, &m11694_MI);
		return;
	}

IL_002b:
	{
		uint64_t L_4 = p1;
		m11683(__this, L_4, &m11683_MI);
		int32_t L_5 = m11689(__this, &m11689_MI);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->f16 = L_6;
		int32_t L_7 = V_0;
		__this->f18 = L_7;
		return;
	}
}
extern "C" void m11699 (t2137 * __this, t2* p0, double p1, int32_t p2, MethodInfo* method)
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
		m11693(__this, L_0, &m11693_MI);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		double L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		int64_t L_3 = m11158(NULL, L_2, &m11158_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_14 = m11690(NULL, L_13, &m11690_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int64_t L_19 = m11681(NULL, ((-L_18)), &m11681_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint64_t* L_23 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f0;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t* L_43 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f1;
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		int32_t L_46 = V_11;
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_43+(int32_t)((int32_t)((int32_t)L_44*(int32_t)4))))))+(int32_t)L_45))+(int32_t)L_46));
		int32_t L_47 = m11691(__this, &m11691_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int64_t L_52 = m11681(NULL, ((int32_t)((int32_t)L_50-(int32_t)L_51)), &m11681_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int64_t L_59 = m11681(NULL, L_58, &m11681_MI);
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
		m11683(__this, L_62, &m11683_MI);
		int32_t L_63 = m11719(__this, &m11719_MI);
		__this->f17 = L_63;
		int32_t L_64 = V_11;
		int32_t L_65 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_64-(int32_t)L_65));
		return;
	}
}
extern "C" void m11700 (t2137 * __this, t2* p0, t904  p1, MethodInfo* method)
{
	t1095* V_0 = {0};
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		m11693(__this, L_0, &m11693_MI);
		__this->f15 = ((int32_t)100);
		t904  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t904_TI));
		t1095* L_2 = m7484(NULL, L_1, &m7484_MI);
		V_0 = L_2;
		t1095* L_3 = V_0;
		int32_t L_4 = 3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4))&(int32_t)((int32_t)2031616)))>>(int32_t)((int32_t)16)));
		t1095* L_5 = V_0;
		int32_t L_6 = 3;
		__this->f12 = ((((int32_t)((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1095* L_7 = V_0;
		int32_t L_8 = 0;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)))
		{
			goto IL_0058;
		}
	}
	{
		t1095* L_9 = V_0;
		int32_t L_10 = 1;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)))
		{
			goto IL_0058;
		}
	}
	{
		t1095* L_11 = V_0;
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
		t1095* L_14 = V_0;
		int32_t L_15 = 2;
		t1095* L_16 = V_0;
		int32_t L_17 = 1;
		t1095* L_18 = V_0;
		int32_t L_19 = 0;
		m11684(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15)), ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_17))))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)))))))), &m11684_MI);
		int32_t L_20 = m11689(__this, &m11689_MI);
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
		int32_t L_25 = m11719(__this, &m11719_MI);
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
extern TypeInfo* t312_TI_var;
extern "C" void m11701 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	static bool m11701_init;
	if (!m11701_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m11701_init = true;
	}
	{
		__this->f24 = 0;
		t312* L_0 = (__this->f23);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = p0;
		__this->f23 = ((t312*)SZArrayNew(t312_TI_var, L_2));
	}

IL_001e:
	{
		return;
	}
}
extern TypeInfo* t312_TI_var;
extern "C" void m11702 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	static bool m11702_init;
	if (!m11702_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m11702_init = true;
	}
	t312* V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = ((t312*)SZArrayNew(t312_TI_var, L_0));
		t312* L_1 = (__this->f23);
		t312* L_2 = V_0;
		int32_t L_3 = (__this->f24);
		m5941(NULL, (t121 *)(t121 *)L_1, (t121 *)(t121 *)L_2, L_3, &m5941_MI);
		t312* L_4 = V_0;
		__this->f23 = L_4;
		return;
	}
}
extern "C" void m11703 (t2137 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		t312* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m11702(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), &m11702_MI);
	}

IL_001f:
	{
		t312* L_3 = (__this->f23);
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
extern "C" void m11704 (t2137 * __this, uint16_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		int32_t L_1 = p1;
		t312* L_2 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) <= ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = (__this->f24);
		int32_t L_4 = p1;
		m11702(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)((int32_t)10))), &m11702_MI);
	}

IL_0023:
	{
		goto IL_003e;
	}

IL_0025:
	{
		t312* L_5 = (__this->f23);
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
extern "C" void m11705 (t2137 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2724(L_0, &m2724_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f24);
		int32_t L_3 = V_0;
		t312* L_4 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = (__this->f24);
		int32_t L_6 = V_0;
		m11702(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))+(int32_t)((int32_t)10))), &m11702_MI);
	}

IL_002a:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_002e:
	{
		t312* L_7 = (__this->f23);
		int32_t L_8 = (__this->f24);
		int32_t L_9 = L_8;
		V_2 = L_9;
		__this->f24 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_2;
		t2* L_11 = p0;
		int32_t L_12 = V_1;
		uint16_t L_13 = m2739(L_11, L_12, &m2739_MI);
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
extern "C" t1555 * m11706 (t2137 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1555 * L_0 = (__this->f7);
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
		t1555 * L_2 = (__this->f7);
		return L_2;
	}

IL_0012:
	{
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1555_TI));
		t1555 * L_4 = m8768(NULL, L_3, &m8768_MI);
		return L_4;
	}
}
extern "C" void m11707 (t2137 * __this, t901 * p0, MethodInfo* method)
{
	{
		t901 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		t901 * L_1 = p0;
		bool L_2 = m8666(L_1, &m8666_MI);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t901 * L_3 = p0;
		t1555 * L_4 = (t1555 *)VirtFuncInvoker0< t1555 * >::Invoke(&m8664_MI, L_3);
		__this->f7 = L_4;
		goto IL_0020;
	}

IL_0019:
	{
		__this->f7 = (t1555 *)NULL;
	}

IL_0020:
	{
		return;
	}
}
extern "C" int32_t m11708 (t2137 * __this, MethodInfo* method)
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
extern "C" int32_t m11709 (t2137 * __this, MethodInfo* method)
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
extern "C" bool m11710 (t2137 * __this, MethodInfo* method)
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
extern "C" bool m11711 (t2137 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11712 (t2137 * __this, MethodInfo* method)
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
extern "C" void m11713 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		m11715(__this, ((int32_t)((int32_t)L_0-(int32_t)L_1)), &m11715_MI);
		return;
	}
}
extern "C" bool m11714 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = (__this->f18);
		int32_t L_2 = p0;
		bool L_3 = m11715(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), &m11715_MI);
		return L_3;
	}
}
extern "C" bool m11715 (t2137 * __this, int32_t p0, MethodInfo* method)
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
		m11717(__this, &m11717_MI);
		int32_t L_29 = m11689(__this, &m11689_MI);
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
		m11716(__this, &m11716_MI);
		bool L_36 = V_2;
		return L_36;
	}
}
extern "C" void m11716 (t2137 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11719(__this, &m11719_MI);
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
extern "C" void m11717 (t2137 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_4 = m11718(NULL, L_3, &m11718_MI);
		__this->f22 = L_4;
		goto IL_0060;
	}

IL_004f:
	{
		uint32_t L_5 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_6 = m11718(NULL, L_5, &m11718_MI);
		__this->f21 = L_6;
	}

IL_0060:
	{
		goto IL_0073;
	}

IL_0062:
	{
		uint32_t L_7 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_8 = m11718(NULL, L_7, &m11718_MI);
		__this->f20 = L_8;
	}

IL_0073:
	{
		goto IL_0086;
	}

IL_0075:
	{
		uint32_t L_9 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_10 = m11718(NULL, L_9, &m11718_MI);
		__this->f19 = L_10;
	}

IL_0086:
	{
		return;
	}
}
extern "C" uint32_t m11718 (t9 * __this , uint32_t p0, MethodInfo* method)
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
extern "C" int32_t m11719 (t2137 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_2 = m11720(NULL, L_1, &m11720_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_5 = m11720(NULL, L_4, &m11720_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_8 = m11720(NULL, L_7, &m11720_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_11 = m11720(NULL, L_10, &m11720_MI);
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)24)));
	}

IL_0058:
	{
		int32_t L_12 = (__this->f16);
		return L_12;
	}
}
extern "C" int32_t m11720 (t9 * __this , uint32_t p0, MethodInfo* method)
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
extern "C" t2137 * m11721 (t9 * __this , MethodInfo* method)
{
	t2137 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = ((t2137_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2137_TI)))->f25;
		V_0 = L_0;
		((t2137_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2137_TI)))->f25 = (t2137 *)NULL;
		t2137 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1872 * L_2 = m11042(NULL, &m11042_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_3 = (t2137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2137_TI));
		m11678(L_3, L_2, &m11678_MI);
		return L_3;
	}

IL_001a:
	{
		t2137 * L_4 = V_0;
		return L_4;
	}
}
extern "C" void m11722 (t2137 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		((t2137_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2137_TI)))->f25 = __this;
		return;
	}
}
extern MethodInfo m11723_MI;
extern "C" void m11723 (t9 * __this , t901 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = ((t2137_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2137_TI)))->f25;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_1 = ((t2137_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2137_TI)))->f25;
		t901 * L_2 = p0;
		m11707(L_1, L_2, &m11707_MI);
	}

IL_0012:
	{
		return;
	}
}
extern MethodInfo m11724_MI;
extern "C" t2* m11724 (t9 * __this , t2* p0, int8_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		int8_t L_3 = p1;
		m11695(L_1, L_2, (((int32_t)L_3)), 3, &m11695_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11725_MI;
extern "C" t2* m11725 (t9 * __this , t2* p0, uint8_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		uint8_t L_3 = p1;
		m11695(L_1, L_2, L_3, 3, &m11695_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11726_MI;
extern "C" t2* m11726 (t9 * __this , t2* p0, uint16_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		uint16_t L_3 = p1;
		m11695(L_1, L_2, L_3, 5, &m11695_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11727_MI;
extern "C" t2* m11727 (t9 * __this , t2* p0, int16_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		int16_t L_3 = p1;
		m11695(L_1, L_2, L_3, 5, &m11695_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11728 (t9 * __this , t2* p0, uint32_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		uint32_t L_3 = p1;
		m11696(L_1, L_2, L_3, ((int32_t)10), &m11696_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11729 (t9 * __this , t2* p0, int32_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		int32_t L_3 = p1;
		m11695(L_1, L_2, L_3, ((int32_t)10), &m11695_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11730 (t9 * __this , t2* p0, uint64_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		uint64_t L_3 = p1;
		m11698(L_1, L_2, L_3, &m11698_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11731 (t9 * __this , t2* p0, int64_t p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		int64_t L_3 = p1;
		m11697(L_1, L_2, L_3, &m11697_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11742(L_4, L_5, L_6, &m11742_MI);
		V_1 = L_7;
		t2137 * L_8 = V_0;
		m11722(L_8, &m11722_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11732_MI;
extern "C" t2* m11732 (t9 * __this , t2* p0, float p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t1555 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		float L_3 = p1;
		m11699(L_1, L_2, (((double)L_3)), 7, &m11699_MI);
		t2137 * L_4 = V_0;
		t9 * L_5 = p2;
		t1555 * L_6 = m11706(L_4, L_5, &m11706_MI);
		V_1 = L_6;
		t2137 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1555 * L_9 = V_1;
		t2* L_10 = m8747(L_9, &m8747_MI);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t2137 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t2137 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1555 * L_15 = V_1;
		t2* L_16 = m8764(L_15, &m8764_MI);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1555 * L_17 = V_1;
		t2* L_18 = m8748(L_17, &m8748_MI);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t2137 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t2137 * L_21 = V_0;
		float L_22 = p1;
		t1555 * L_23 = V_1;
		t2* L_24 = m11749(L_21, L_22, L_23, &m11749_MI);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t2137 * L_25 = V_0;
		t2* L_26 = p0;
		t1555 * L_27 = V_1;
		t2* L_28 = m11743(L_25, L_26, L_27, &m11743_MI);
		V_2 = L_28;
	}

IL_0069:
	{
		t2137 * L_29 = V_0;
		m11722(L_29, &m11722_MI);
		t2* L_30 = V_2;
		return L_30;
	}
}
extern MethodInfo m11733_MI;
extern "C" t2* m11733 (t9 * __this , t2* p0, double p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t1555 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		double L_3 = p1;
		m11699(L_1, L_2, L_3, ((int32_t)15), &m11699_MI);
		t2137 * L_4 = V_0;
		t9 * L_5 = p2;
		t1555 * L_6 = m11706(L_4, L_5, &m11706_MI);
		V_1 = L_6;
		t2137 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1555 * L_9 = V_1;
		t2* L_10 = m8747(L_9, &m8747_MI);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t2137 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t2137 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1555 * L_15 = V_1;
		t2* L_16 = m8764(L_15, &m8764_MI);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1555 * L_17 = V_1;
		t2* L_18 = m8748(L_17, &m8748_MI);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t2137 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t2137 * L_21 = V_0;
		double L_22 = p1;
		t1555 * L_23 = V_1;
		t2* L_24 = m11748(L_21, L_22, L_23, &m11748_MI);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t2137 * L_25 = V_0;
		t2* L_26 = p0;
		t1555 * L_27 = V_1;
		t2* L_28 = m11743(L_25, L_26, L_27, &m11743_MI);
		V_2 = L_28;
	}

IL_0069:
	{
		t2137 * L_29 = V_0;
		m11722(L_29, &m11722_MI);
		t2* L_30 = V_2;
		return L_30;
	}
}
extern MethodInfo m11734_MI;
extern "C" t2* m11734 (t9 * __this , t2* p0, t904  p1, t9 * p2, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t2* L_2 = p0;
		t904  L_3 = p1;
		m11700(L_1, L_2, L_3, &m11700_MI);
		t2137 * L_4 = V_0;
		t2* L_5 = p0;
		t2137 * L_6 = V_0;
		t9 * L_7 = p2;
		t1555 * L_8 = m11706(L_6, L_7, &m11706_MI);
		t2* L_9 = m11743(L_4, L_5, L_8, &m11743_MI);
		V_1 = L_9;
		t2137 * L_10 = V_0;
		m11722(L_10, &m11722_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11735_MI;
extern "C" t2* m11735 (t9 * __this , uint32_t p0, t9 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2* L_3 = m11728(NULL, (t2*)NULL, L_1, L_2, &m11728_MI);
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_4 = m11721(NULL, &m11721_MI);
		V_0 = L_4;
		t2137 * L_5 = V_0;
		uint32_t L_6 = p0;
		t9 * L_7 = p1;
		t2* L_8 = m11741(L_5, L_6, L_7, &m11741_MI);
		V_1 = L_8;
		t2137 * L_9 = V_0;
		m11722(L_9, &m11722_MI);
		t2* L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m11736_MI;
extern "C" t2* m11736 (t9 * __this , int32_t p0, t9 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2* L_4 = m11729(NULL, (t2*)NULL, L_2, L_3, &m11729_MI);
		return L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_5 = m11721(NULL, &m11721_MI);
		V_0 = L_5;
		t2137 * L_6 = V_0;
		int32_t L_7 = p0;
		t9 * L_8 = p1;
		t2* L_9 = m11741(L_6, L_7, L_8, &m11741_MI);
		V_1 = L_9;
		t2137 * L_10 = V_0;
		m11722(L_10, &m11722_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11737_MI;
extern "C" t2* m11737 (t9 * __this , uint64_t p0, t9 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2* L_3 = m11730(NULL, (t2*)NULL, L_1, L_2, &m11730_MI);
		return L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_4 = m11721(NULL, &m11721_MI);
		V_0 = L_4;
		t2137 * L_5 = V_0;
		uint64_t L_6 = p0;
		t9 * L_7 = p1;
		t2* L_8 = m11741(L_5, (((int32_t)L_6)), L_7, &m11741_MI);
		V_1 = L_8;
		t2137 * L_9 = V_0;
		m11722(L_9, &m11722_MI);
		t2* L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m11738_MI;
extern "C" t2* m11738 (t9 * __this , int64_t p0, t9 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2* L_4 = m11731(NULL, (t2*)NULL, L_2, L_3, &m11731_MI);
		return L_4;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_5 = m11721(NULL, &m11721_MI);
		V_0 = L_5;
		t2137 * L_6 = V_0;
		int64_t L_7 = p0;
		t9 * L_8 = p1;
		t2* L_9 = m11741(L_6, (((int32_t)L_7)), L_8, &m11741_MI);
		V_1 = L_9;
		t2137 * L_10 = V_0;
		m11722(L_10, &m11722_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11739_MI;
extern "C" t2* m11739 (t9 * __this , float p0, t9 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t1555 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		float L_2 = p0;
		m11699(L_1, (t2*)NULL, (((double)L_2)), 7, &m11699_MI);
		t2137 * L_3 = V_0;
		t9 * L_4 = p1;
		t1555 * L_5 = m11706(L_3, L_4, &m11706_MI);
		V_1 = L_5;
		t2137 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1555 * L_8 = V_1;
		t2* L_9 = m8747(L_8, &m8747_MI);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t2137 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t2137 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1555 * L_14 = V_1;
		t2* L_15 = m8764(L_14, &m8764_MI);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1555 * L_16 = V_1;
		t2* L_17 = m8748(L_16, &m8748_MI);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t2137 * L_18 = V_0;
		t1555 * L_19 = V_1;
		t2* L_20 = m11750(L_18, (-1), L_19, &m11750_MI);
		V_2 = L_20;
	}

IL_0054:
	{
		t2137 * L_21 = V_0;
		m11722(L_21, &m11722_MI);
		t2* L_22 = V_2;
		return L_22;
	}
}
extern MethodInfo m11740_MI;
extern "C" t2* m11740 (t9 * __this , double p0, t9 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t1555 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		t2137 * L_0 = m11721(NULL, &m11721_MI);
		V_0 = L_0;
		t2137 * L_1 = V_0;
		t9 * L_2 = p1;
		t1555 * L_3 = m11706(L_1, L_2, &m11706_MI);
		V_1 = L_3;
		t2137 * L_4 = V_0;
		double L_5 = p0;
		m11699(L_4, (t2*)NULL, L_5, ((int32_t)15), &m11699_MI);
		t2137 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1555 * L_8 = V_1;
		t2* L_9 = m8747(L_8, &m8747_MI);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t2137 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t2137 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1555 * L_14 = V_1;
		t2* L_15 = m8764(L_14, &m8764_MI);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1555 * L_16 = V_1;
		t2* L_17 = m8748(L_16, &m8748_MI);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t2137 * L_18 = V_0;
		t1555 * L_19 = V_1;
		t2* L_20 = m11750(L_18, (-1), L_19, &m11750_MI);
		V_2 = L_20;
	}

IL_0054:
	{
		t2137 * L_21 = V_0;
		m11722(L_21, &m11722_MI);
		t2* L_22 = V_2;
		return L_22;
	}
}
extern "C" t2* m11741 (t2137 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		t1555 * L_2 = m11706(__this, L_1, &m11706_MI);
		t2* L_3 = m8749(L_2, &m8749_MI);
		V_0 = L_3;
		t2* L_4 = V_0;
		int32_t L_5 = m2724(L_4, &m2724_MI);
		m11701(__this, ((int32_t)((int32_t)8+(int32_t)L_5)), &m11701_MI);
		int32_t L_6 = p0;
		p0 = ((-L_6));
		t2* L_7 = V_0;
		m11705(__this, L_7, &m11705_MI);
		goto IL_0035;
	}

IL_002e:
	{
		m11701(__this, 8, &m11701_MI);
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
		m11766(__this, L_10, 0, &m11766_MI);
		int32_t L_11 = p0;
		int32_t L_12 = V_1;
		m11766(__this, ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)10000))))), 1, &m11766_MI);
		goto IL_0067;
	}

IL_005f:
	{
		int32_t L_13 = p0;
		m11766(__this, L_13, 0, &m11766_MI);
	}

IL_0067:
	{
		t312* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_16 = m4378(L_16, L_14, 0, L_15, &m4358_MI);
		return L_16;
	}
}
extern "C" t2* m11742 (t2137 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1555 * V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		t9 * L_0 = p1;
		t1555 * L_1 = m11706(__this, L_0, &m11706_MI);
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
		t1555 * L_6 = V_0;
		t2* L_7 = m11744(__this, L_5, L_6, &m11744_MI);
		return L_7;
	}

IL_0068:
	{
		int32_t L_8 = (__this->f14);
		t1555 * L_9 = V_0;
		t2* L_10 = m11745(__this, L_8, L_9, &m11745_MI);
		return L_10;
	}

IL_0076:
	{
		int32_t L_11 = (__this->f14);
		t1555 * L_12 = V_0;
		t2* L_13 = m11753(__this, L_11, L_12, &m11753_MI);
		return L_13;
	}

IL_0084:
	{
		int32_t L_14 = (__this->f14);
		t1555 * L_15 = V_0;
		t2* L_16 = m11747(__this, L_14, L_15, &m11747_MI);
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
		t1555 * L_18 = V_0;
		t2* L_19 = m11745(__this, (-1), L_18, &m11745_MI);
		return L_19;
	}

IL_00a4:
	{
		int32_t L_20 = (__this->f14);
		t1555 * L_21 = V_0;
		t2* L_22 = m11750(__this, L_20, L_21, &m11750_MI);
		return L_22;
	}

IL_00b2:
	{
		int32_t L_23 = (__this->f14);
		t1555 * L_24 = V_0;
		t2* L_25 = m11751(__this, L_23, L_24, &m11751_MI);
		return L_25;
	}

IL_00c0:
	{
		int32_t L_26 = (__this->f14);
		t1555 * L_27 = V_0;
		t2* L_28 = m11752(__this, L_26, L_27, &m11752_MI);
		return L_28;
	}

IL_00ce:
	{
		int32_t L_29 = (__this->f14);
		t2* L_30 = m11746(__this, L_29, &m11746_MI);
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
		t1555 * L_33 = V_0;
		t2* L_34 = m11755(__this, L_32, L_33, &m11755_MI);
		return L_34;
	}

IL_00ec:
	{
		t2* L_35 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_36 = m399(NULL, (t2*) &_stringLiteral2776, L_35, (t2*) &_stringLiteral2777, &m399_MI);
		t890 * L_37 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_37, L_36, &m4313_MI);
		il2cpp_codegen_raise_exception(L_37);
	}
}
extern "C" t2* m11743 (t2137 * __this, t2* p0, t1555 * p1, MethodInfo* method)
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
		t1555 * L_5 = p1;
		t2* L_6 = m11744(__this, L_4, L_5, &m11744_MI);
		return L_6;
	}

IL_004e:
	{
		int32_t L_7 = (__this->f14);
		t1555 * L_8 = p1;
		t2* L_9 = m11753(__this, L_7, L_8, &m11753_MI);
		return L_9;
	}

IL_005c:
	{
		int32_t L_10 = (__this->f14);
		t1555 * L_11 = p1;
		t2* L_12 = m11747(__this, L_10, L_11, &m11747_MI);
		return L_12;
	}

IL_006a:
	{
		int32_t L_13 = (__this->f14);
		t1555 * L_14 = p1;
		t2* L_15 = m11750(__this, L_13, L_14, &m11750_MI);
		return L_15;
	}

IL_0078:
	{
		int32_t L_16 = (__this->f14);
		t1555 * L_17 = p1;
		t2* L_18 = m11751(__this, L_16, L_17, &m11751_MI);
		return L_18;
	}

IL_0086:
	{
		int32_t L_19 = (__this->f14);
		t1555 * L_20 = p1;
		t2* L_21 = m11752(__this, L_19, L_20, &m11752_MI);
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
		t1555 * L_24 = p1;
		t2* L_25 = m11755(__this, L_23, L_24, &m11755_MI);
		return L_25;
	}

IL_00a5:
	{
		t2* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_27 = m399(NULL, (t2*) &_stringLiteral2776, L_26, (t2*) &_stringLiteral2777, &m399_MI);
		t890 * L_28 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_28, L_27, &m4313_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" t2* m11744 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
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
		t1555 * L_2 = p1;
		int32_t L_3 = m8738(L_2, &m8738_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = p0;
		m11714(__this, L_4, &m11714_MI);
		int32_t L_5 = m11708(__this, &m11708_MI);
		int32_t L_6 = p0;
		m11701(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)((int32_t)((int32_t)L_6*(int32_t)2))))+(int32_t)((int32_t)16))), &m11701_MI);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1555 * L_8 = p1;
		int32_t L_9 = m8743(L_8, &m8743_MI);
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
		t1555 * L_11 = p1;
		t2* L_12 = m8744(L_11, &m8744_MI);
		m11705(__this, L_12, &m11705_MI);
		goto IL_0075;
	}

IL_005f:
	{
		t1555 * L_13 = p1;
		t2* L_14 = m8744(L_13, &m8744_MI);
		m11705(__this, L_14, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_01e1;
	}

IL_007a:
	{
		t1555 * L_15 = p1;
		int32_t L_16 = m8742(L_15, &m8742_MI);
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
		m11703(__this, ((int32_t)40), &m11703_MI);
		t1555 * L_18 = p1;
		t2* L_19 = m8744(L_18, &m8744_MI);
		m11705(__this, L_19, &m11705_MI);
		goto IL_01e1;
	}

IL_00e5:
	{
		t1555 * L_20 = p1;
		t2* L_21 = m8749(L_20, &m8749_MI);
		m11705(__this, L_21, &m11705_MI);
		t1555 * L_22 = p1;
		t2* L_23 = m8744(L_22, &m8744_MI);
		m11705(__this, L_23, &m11705_MI);
		goto IL_01e1;
	}

IL_0102:
	{
		t1555 * L_24 = p1;
		t2* L_25 = m8744(L_24, &m8744_MI);
		m11705(__this, L_25, &m11705_MI);
		t1555 * L_26 = p1;
		t2* L_27 = m8749(L_26, &m8749_MI);
		m11705(__this, L_27, &m11705_MI);
		goto IL_01e1;
	}

IL_011f:
	{
		t1555 * L_28 = p1;
		t2* L_29 = m8744(L_28, &m8744_MI);
		m11705(__this, L_29, &m11705_MI);
		goto IL_01e1;
	}

IL_0130:
	{
		m11703(__this, ((int32_t)40), &m11703_MI);
		goto IL_01e1;
	}

IL_013d:
	{
		t1555 * L_30 = p1;
		t2* L_31 = m8749(L_30, &m8749_MI);
		m11705(__this, L_31, &m11705_MI);
		goto IL_01e1;
	}

IL_014e:
	{
		t1555 * L_32 = p1;
		t2* L_33 = m8749(L_32, &m8749_MI);
		m11705(__this, L_33, &m11705_MI);
		goto IL_01e1;
	}

IL_015f:
	{
		t1555 * L_34 = p1;
		t2* L_35 = m8749(L_34, &m8749_MI);
		m11705(__this, L_35, &m11705_MI);
		t1555 * L_36 = p1;
		t2* L_37 = m8744(L_36, &m8744_MI);
		m11705(__this, L_37, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		goto IL_01e1;
	}

IL_0181:
	{
		t1555 * L_38 = p1;
		t2* L_39 = m8744(L_38, &m8744_MI);
		m11705(__this, L_39, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		goto IL_01e1;
	}

IL_0197:
	{
		t1555 * L_40 = p1;
		t2* L_41 = m8744(L_40, &m8744_MI);
		m11705(__this, L_41, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_42 = p1;
		t2* L_43 = m8749(L_42, &m8749_MI);
		m11705(__this, L_43, &m11705_MI);
		goto IL_01e1;
	}

IL_01b9:
	{
		m11703(__this, ((int32_t)40), &m11703_MI);
		t1555 * L_44 = p1;
		t2* L_45 = m8744(L_44, &m8744_MI);
		m11705(__this, L_45, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		goto IL_01e1;
	}

IL_01d7:
	{
		m11703(__this, ((int32_t)40), &m11703_MI);
		goto IL_01e1;
	}

IL_01e1:
	{
		t1555 * L_46 = p1;
		t1095* L_47 = m8741(L_46, &m8741_MI);
		t1555 * L_48 = p1;
		t2* L_49 = m8740(L_48, &m8740_MI);
		m11763(__this, L_47, L_49, &m11763_MI);
		int32_t L_50 = p0;
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_020a;
		}
	}
	{
		t1555 * L_51 = p1;
		t2* L_52 = m8739(L_51, &m8739_MI);
		m11705(__this, L_52, &m11705_MI);
		int32_t L_53 = p0;
		m11762(__this, L_53, &m11762_MI);
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
		t1555 * L_55 = p1;
		int32_t L_56 = m8743(L_55, &m8743_MI);
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
		t1555 * L_58 = p1;
		t2* L_59 = m8744(L_58, &m8744_MI);
		m11705(__this, L_59, &m11705_MI);
		goto IL_0253;
	}

IL_023d:
	{
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_60 = p1;
		t2* L_61 = m8744(L_60, &m8744_MI);
		m11705(__this, L_61, &m11705_MI);
		goto IL_0253;
	}

IL_0253:
	{
		goto IL_03bf;
	}

IL_0258:
	{
		t1555 * L_62 = p1;
		int32_t L_63 = m8742(L_62, &m8742_MI);
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
		m11703(__this, ((int32_t)41), &m11703_MI);
		goto IL_03bf;
	}

IL_02b7:
	{
		t1555 * L_65 = p1;
		t2* L_66 = m8749(L_65, &m8749_MI);
		m11705(__this, L_66, &m11705_MI);
		goto IL_03bf;
	}

IL_02c8:
	{
		t1555 * L_67 = p1;
		t2* L_68 = m8744(L_67, &m8744_MI);
		m11705(__this, L_68, &m11705_MI);
		m11703(__this, ((int32_t)41), &m11703_MI);
		goto IL_03bf;
	}

IL_02e1:
	{
		t1555 * L_69 = p1;
		t2* L_70 = m8744(L_69, &m8744_MI);
		m11705(__this, L_70, &m11705_MI);
		goto IL_03bf;
	}

IL_02f2:
	{
		t1555 * L_71 = p1;
		t2* L_72 = m8749(L_71, &m8749_MI);
		m11705(__this, L_72, &m11705_MI);
		t1555 * L_73 = p1;
		t2* L_74 = m8744(L_73, &m8744_MI);
		m11705(__this, L_74, &m11705_MI);
		goto IL_03bf;
	}

IL_030f:
	{
		t1555 * L_75 = p1;
		t2* L_76 = m8744(L_75, &m8744_MI);
		m11705(__this, L_76, &m11705_MI);
		t1555 * L_77 = p1;
		t2* L_78 = m8749(L_77, &m8749_MI);
		m11705(__this, L_78, &m11705_MI);
		goto IL_03bf;
	}

IL_032c:
	{
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_79 = p1;
		t2* L_80 = m8744(L_79, &m8744_MI);
		m11705(__this, L_80, &m11705_MI);
		goto IL_03bf;
	}

IL_0345:
	{
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_81 = p1;
		t2* L_82 = m8744(L_81, &m8744_MI);
		m11705(__this, L_82, &m11705_MI);
		t1555 * L_83 = p1;
		t2* L_84 = m8749(L_83, &m8749_MI);
		m11705(__this, L_84, &m11705_MI);
		goto IL_03bf;
	}

IL_0367:
	{
		t1555 * L_85 = p1;
		t2* L_86 = m8749(L_85, &m8749_MI);
		m11705(__this, L_86, &m11705_MI);
		goto IL_03bf;
	}

IL_0375:
	{
		t1555 * L_87 = p1;
		t2* L_88 = m8749(L_87, &m8749_MI);
		m11705(__this, L_88, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_89 = p1;
		t2* L_90 = m8744(L_89, &m8744_MI);
		m11705(__this, L_90, &m11705_MI);
		goto IL_03bf;
	}

IL_0397:
	{
		m11703(__this, ((int32_t)41), &m11703_MI);
		goto IL_03bf;
	}

IL_03a1:
	{
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_91 = p1;
		t2* L_92 = m8744(L_91, &m8744_MI);
		m11705(__this, L_92, &m11705_MI);
		m11703(__this, ((int32_t)41), &m11703_MI);
		goto IL_03bf;
	}

IL_03bf:
	{
		t312* L_93 = (__this->f23);
		int32_t L_94 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_95 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_95 = m4378(L_95, L_93, 0, L_94, &m4358_MI);
		return L_95;
	}
}
extern "C" t2* m11745 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
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
		return (t2*) &_stringLiteral690;
	}

IL_001c:
	{
		int32_t L_4 = p0;
		m11701(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), &m11701_MI);
		bool L_5 = (__this->f12);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		t1555 * L_6 = p1;
		t2* L_7 = m8749(L_6, &m8749_MI);
		m11705(__this, L_7, &m11705_MI);
	}

IL_0039:
	{
		int32_t L_8 = p0;
		m11767(__this, 0, L_8, &m11767_MI);
		t312* L_9 = (__this->f23);
		int32_t L_10 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_11 = m4378(L_11, L_9, 0, L_10, &m4358_MI);
		return L_11;
	}
}
extern "C" t2* m11746 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t* V_1 = {0};
	uint64_t V_2 = 0;
	uint16_t* G_B3_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f18);
		int32_t L_2 = m6904(NULL, L_0, L_1, &m6904_MI);
		V_0 = L_2;
		bool L_3 = (__this->f11);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint16_t* L_4 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f3;
		G_B3_0 = L_4;
		goto IL_0021;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint16_t* L_5 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f2;
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_1 = (uint16_t*)G_B3_0;
		int32_t L_6 = V_0;
		m11701(__this, L_6, &m11701_MI);
		int32_t L_7 = V_0;
		__this->f24 = L_7;
		uint32_t L_8 = (__this->f19);
		uint32_t L_9 = (__this->f20);
		V_2 = ((int64_t)((int64_t)(((uint64_t)L_8))|(int64_t)((int64_t)((int64_t)(((uint64_t)L_9))<<(int32_t)((int32_t)32)))));
		goto IL_0061;
	}

IL_0045:
	{
		t312* L_10 = (__this->f23);
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
		t312* L_17 = (__this->f23);
		int32_t L_18 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4378(L_19, L_17, 0, L_18, &m4358_MI);
		return L_19;
	}
}
extern "C" t2* m11747 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		t1555 * L_1 = p1;
		int32_t L_2 = m8750(L_1, &m8750_MI);
		p0 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p0;
		m11714(__this, L_3, &m11714_MI);
		int32_t L_4 = m11708(__this, &m11708_MI);
		int32_t L_5 = p0;
		m11701(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)2)), &m11701_MI);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1555 * L_7 = p1;
		t2* L_8 = m8749(L_7, &m8749_MI);
		m11705(__this, L_8, &m11705_MI);
	}

IL_003a:
	{
		int32_t L_9 = m11708(__this, &m11708_MI);
		m11760(__this, L_9, &m11760_MI);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		t1555 * L_11 = p1;
		t2* L_12 = m8751(L_11, &m8751_MI);
		m11705(__this, L_12, &m11705_MI);
		int32_t L_13 = p0;
		m11762(__this, L_13, &m11762_MI);
	}

IL_005d:
	{
		t312* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_16 = m4378(L_16, L_14, 0, L_15, &m4358_MI);
		return L_16;
	}
}
extern "C" t2* m11748 (t2137 * __this, double p0, t1555 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		t2137 * L_0 = m11771(__this, &m11771_MI);
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
		t1555 * L_4 = p1;
		t2* L_5 = m11750(__this, L_3, L_4, &m11750_MI);
		V_1 = L_5;
		double L_6 = p0;
		t2* L_7 = V_1;
		t1555 * L_8 = p1;
		double L_9 = m7454(NULL, L_7, L_8, &m7454_MI);
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
		t2137 * L_11 = V_0;
		int32_t L_12 = (__this->f15);
		t1555 * L_13 = p1;
		t2* L_14 = m11750(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)), L_13, &m11750_MI);
		return L_14;
	}
}
extern "C" t2* m11749 (t2137 * __this, float p0, t1555 * p1, MethodInfo* method)
{
	t2137 * V_0 = {0};
	t2* V_1 = {0};
	{
		t2137 * L_0 = m11771(__this, &m11771_MI);
		V_0 = L_0;
		int32_t L_1 = (__this->f15);
		t1555 * L_2 = p1;
		t2* L_3 = m11750(__this, L_1, L_2, &m11750_MI);
		V_1 = L_3;
		float L_4 = p0;
		t2* L_5 = V_1;
		t1555 * L_6 = p1;
		float L_7 = m7426(NULL, L_5, L_6, &m7426_MI);
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
		t2137 * L_9 = V_0;
		int32_t L_10 = (__this->f15);
		t1555 * L_11 = p1;
		t2* L_12 = m11750(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), L_11, &m11750_MI);
		return L_12;
	}
}
extern "C" t2* m11750 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
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
		bool L_1 = m11710(__this, &m11710_MI);
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
		m11713(__this, L_5, &m11713_MI);
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
		t1555 * L_15 = p1;
		t2* L_16 = m11754(__this, ((int32_t)((int32_t)L_14-(int32_t)1)), L_15, 2, &m11754_MI);
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
		m11701(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20))+(int32_t)3)), &m11701_MI);
		bool L_21 = (__this->f12);
		if (L_21)
		{
			goto IL_0082;
		}
	}
	{
		t1555 * L_22 = p1;
		t2* L_23 = m8749(L_22, &m8749_MI);
		m11705(__this, L_23, &m11705_MI);
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
		m11703(__this, ((int32_t)48), &m11703_MI);
		goto IL_0099;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		m11767(__this, ((int32_t)((int32_t)L_25-(int32_t)L_26)), L_27, &m11767_MI);
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
		t1555 * L_29 = p1;
		t2* L_30 = m8751(L_29, &m8751_MI);
		m11705(__this, L_30, &m11705_MI);
		int32_t L_31 = V_3;
		m11767(__this, 0, L_31, &m11767_MI);
	}

IL_00b1:
	{
		t312* L_32 = (__this->f23);
		int32_t L_33 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_34 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_34 = m4378(L_34, L_32, 0, L_33, &m4358_MI);
		return L_34;
	}
}
extern "C" t2* m11751 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
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
		t1555 * L_2 = p1;
		int32_t L_3 = m8750(L_2, &m8750_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = m11708(__this, &m11708_MI);
		int32_t L_5 = p0;
		m11701(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4*(int32_t)3))+(int32_t)L_5)), &m11701_MI);
		int32_t L_6 = p0;
		m11714(__this, L_6, &m11714_MI);
		bool L_7 = (__this->f12);
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1555 * L_8 = p1;
		int32_t L_9 = m8754(L_8, &m8754_MI);
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
		m11703(__this, ((int32_t)40), &m11703_MI);
		goto IL_007a;
	}

IL_0056:
	{
		t1555 * L_11 = p1;
		t2* L_12 = m8749(L_11, &m8749_MI);
		m11705(__this, L_12, &m11705_MI);
		goto IL_007a;
	}

IL_0064:
	{
		t1555 * L_13 = p1;
		t2* L_14 = m8749(L_13, &m8749_MI);
		m11705(__this, L_14, &m11705_MI);
		m11703(__this, ((int32_t)32), &m11703_MI);
		goto IL_007a;
	}

IL_007a:
	{
		t1555 * L_15 = p1;
		t1095* L_16 = m8753(L_15, &m8753_MI);
		t1555 * L_17 = p1;
		t2* L_18 = m8752(L_17, &m8752_MI);
		m11763(__this, L_16, L_18, &m11763_MI);
		int32_t L_19 = p0;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		t1555 * L_20 = p1;
		t2* L_21 = m8751(L_20, &m8751_MI);
		m11705(__this, L_21, &m11705_MI);
		int32_t L_22 = p0;
		m11762(__this, L_22, &m11762_MI);
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
		t1555 * L_24 = p1;
		int32_t L_25 = m8754(L_24, &m8754_MI);
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
		m11703(__this, ((int32_t)41), &m11703_MI);
		goto IL_00fc;
	}

IL_00d8:
	{
		t1555 * L_27 = p1;
		t2* L_28 = m8749(L_27, &m8749_MI);
		m11705(__this, L_28, &m11705_MI);
		goto IL_00fc;
	}

IL_00e6:
	{
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_29 = p1;
		t2* L_30 = m8749(L_29, &m8749_MI);
		m11705(__this, L_30, &m11705_MI);
		goto IL_00fc;
	}

IL_00fc:
	{
		t312* L_31 = (__this->f23);
		int32_t L_32 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_33 = m4378(L_33, L_31, 0, L_32, &m4358_MI);
		return L_33;
	}
}
extern "C" t2* m11752 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
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
		t1555 * L_2 = p1;
		int32_t L_3 = m8756(L_2, &m8756_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		m11769(__this, 2, &m11769_MI);
		int32_t L_4 = p0;
		m11714(__this, L_4, &m11714_MI);
		int32_t L_5 = m11708(__this, &m11708_MI);
		int32_t L_6 = p0;
		m11701(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)L_6))+(int32_t)((int32_t)16))), &m11701_MI);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		t1555 * L_8 = p1;
		int32_t L_9 = m8761(L_8, &m8761_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		t1555 * L_10 = p1;
		t2* L_11 = m8762(L_10, &m8762_MI);
		m11705(__this, L_11, &m11705_MI);
	}

IL_0050:
	{
		goto IL_00a3;
	}

IL_0052:
	{
		t1555 * L_12 = p1;
		int32_t L_13 = m8760(L_12, &m8760_MI);
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
		t1555 * L_15 = p1;
		t2* L_16 = m8749(L_15, &m8749_MI);
		m11705(__this, L_16, &m11705_MI);
		goto IL_00a3;
	}

IL_007b:
	{
		t1555 * L_17 = p1;
		t2* L_18 = m8749(L_17, &m8749_MI);
		m11705(__this, L_18, &m11705_MI);
		goto IL_00a3;
	}

IL_0089:
	{
		t1555 * L_19 = p1;
		t2* L_20 = m8749(L_19, &m8749_MI);
		m11705(__this, L_20, &m11705_MI);
		t1555 * L_21 = p1;
		t2* L_22 = m8762(L_21, &m8762_MI);
		m11705(__this, L_22, &m11705_MI);
		goto IL_00a3;
	}

IL_00a3:
	{
		t1555 * L_23 = p1;
		t1095* L_24 = m8759(L_23, &m8759_MI);
		t1555 * L_25 = p1;
		t2* L_26 = m8758(L_25, &m8758_MI);
		m11763(__this, L_24, L_26, &m11763_MI);
		int32_t L_27 = p0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		t1555 * L_28 = p1;
		t2* L_29 = m8757(L_28, &m8757_MI);
		m11705(__this, L_29, &m11705_MI);
		int32_t L_30 = p0;
		m11762(__this, L_30, &m11762_MI);
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
		t1555 * L_32 = p1;
		int32_t L_33 = m8761(L_32, &m8761_MI);
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
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_36 = p1;
		t2* L_37 = m8762(L_36, &m8762_MI);
		m11705(__this, L_37, &m11705_MI);
		goto IL_0108;
	}

IL_00fa:
	{
		t1555 * L_38 = p1;
		t2* L_39 = m8762(L_38, &m8762_MI);
		m11705(__this, L_39, &m11705_MI);
		goto IL_0108;
	}

IL_0108:
	{
		goto IL_013e;
	}

IL_010a:
	{
		t1555 * L_40 = p1;
		int32_t L_41 = m8760(L_40, &m8760_MI);
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
		m11703(__this, ((int32_t)32), &m11703_MI);
		t1555 * L_44 = p1;
		t2* L_45 = m8762(L_44, &m8762_MI);
		m11705(__this, L_45, &m11705_MI);
		goto IL_013e;
	}

IL_0130:
	{
		t1555 * L_46 = p1;
		t2* L_47 = m8762(L_46, &m8762_MI);
		m11705(__this, L_47, &m11705_MI);
		goto IL_013e;
	}

IL_013e:
	{
		t312* L_48 = (__this->f23);
		int32_t L_49 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_50 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_50 = m4378(L_50, L_48, 0, L_49, &m4358_MI);
		return L_50;
	}
}
extern "C" t2* m11753 (t2137 * __this, int32_t p0, t1555 * p1, MethodInfo* method)
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
		m11713(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), &m11713_MI);
		int32_t L_2 = p0;
		t1555 * L_3 = p1;
		t2* L_4 = m11754(__this, L_2, L_3, 3, &m11754_MI);
		return L_4;
	}
}
extern "C" t2* m11754 (t2137 * __this, int32_t p0, t1555 * p1, int32_t p2, MethodInfo* method)
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
		m11701(__this, ((int32_t)((int32_t)L_5+(int32_t)8)), &m11701_MI);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1555 * L_7 = p1;
		t2* L_8 = m8749(L_7, &m8749_MI);
		m11705(__this, L_8, &m11705_MI);
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		m11765(__this, ((int32_t)((int32_t)L_9-(int32_t)1)), &m11765_MI);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		t1555 * L_11 = p1;
		t2* L_12 = m8751(L_11, &m8751_MI);
		m11705(__this, L_12, &m11705_MI);
		int32_t L_13 = V_1;
		int32_t L_14 = p0;
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->f18);
		m11767(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))-(int32_t)1)), ((int32_t)((int32_t)L_15-(int32_t)L_16)), &m11767_MI);
	}

IL_0066:
	{
		t1555 * L_17 = p1;
		int32_t L_18 = V_2;
		int32_t L_19 = p2;
		m11764(__this, L_17, L_18, L_19, &m11764_MI);
		t312* L_20 = (__this->f23);
		int32_t L_21 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_22 = m4378(L_22, L_20, 0, L_21, &m4358_MI);
		return L_22;
	}
}
extern "C" t2* m11755 (t2137 * __this, t2* p0, t1555 * p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t2136 * V_3 = {0};
	t322 * V_4 = {0};
	t322 * V_5 = {0};
	t322 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t2* G_B4_0 = {0};
	t322 * G_B8_0 = {0};
	t322 * G_B21_0 = {0};
	t322 * G_B20_0 = {0};
	int32_t G_B22_0 = 0;
	t322 * G_B22_1 = {0};
	{
		bool L_0 = (__this->f12);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		t2* L_1 = p0;
		bool L_2 = m11711(__this, &m11711_MI);
		m11675(NULL, L_1, (&V_0), L_2, (&V_1), (&V_2), &m11675_MI);
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
		t1555 * L_6 = p1;
		t2* L_7 = m8749(L_6, &m8749_MI);
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
		t1555 * L_12 = p1;
		t2136 * L_13 = m11676(NULL, L_9, L_10, L_11, L_12, &m11676_MI);
		V_3 = L_13;
		t2136 * L_14 = V_3;
		int32_t L_15 = (L_14->f4);
		t322 * L_16 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_16, ((int32_t)((int32_t)L_15*(int32_t)2)), &m4355_MI);
		V_4 = L_16;
		t2136 * L_17 = V_3;
		int32_t L_18 = (L_17->f1);
		t322 * L_19 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_19, ((int32_t)((int32_t)L_18*(int32_t)2)), &m4355_MI);
		V_5 = L_19;
		t2136 * L_20 = V_3;
		bool L_21 = (L_20->f7);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		t2136 * L_22 = V_3;
		int32_t L_23 = (L_22->f8);
		t322 * L_24 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_24, ((int32_t)((int32_t)L_23*(int32_t)2)), &m4355_MI);
		G_B8_0 = L_24;
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = ((t322 *)(NULL));
	}

IL_007d:
	{
		V_6 = G_B8_0;
		V_7 = 0;
		t2136 * L_25 = V_3;
		int32_t L_26 = (L_25->f12);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		t2136 * L_27 = V_3;
		int32_t L_28 = (L_27->f12);
		m11769(__this, ((int32_t)((int32_t)2*(int32_t)L_28)), &m11769_MI);
	}

IL_0099:
	{
		t2136 * L_29 = V_3;
		int32_t L_30 = (L_29->f13);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		t2136 * L_31 = V_3;
		int32_t L_32 = (L_31->f13);
		m11769(__this, ((int32_t)((int32_t)3*(int32_t)L_32)), &m11769_MI);
	}

IL_00b0:
	{
		t2136 * L_33 = V_3;
		int32_t L_34 = (L_33->f11);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		t2136 * L_35 = V_3;
		int32_t L_36 = (L_35->f11);
		m11770(__this, L_36, &m11770_MI);
	}

IL_00c5:
	{
		V_8 = 1;
		t2136 * L_37 = V_3;
		bool L_38 = (L_37->f7);
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		t2136 * L_39 = V_3;
		int32_t L_40 = (L_39->f1);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		t2136 * L_41 = V_3;
		int32_t L_42 = (L_41->f4);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}

IL_00e2:
	{
		bool L_43 = m11711(__this, &m11711_MI);
		if (L_43)
		{
			goto IL_011b;
		}
	}
	{
		t2136 * L_44 = V_3;
		int32_t L_45 = (L_44->f1);
		t2136 * L_46 = V_3;
		int32_t L_47 = (L_46->f4);
		m11713(__this, ((int32_t)((int32_t)L_45+(int32_t)L_47)), &m11713_MI);
		int32_t L_48 = V_7;
		int32_t L_49 = (__this->f18);
		t2136 * L_50 = V_3;
		int32_t L_51 = (L_50->f4);
		V_7 = ((int32_t)((int32_t)L_48-(int32_t)((int32_t)((int32_t)L_49-(int32_t)L_51))));
		t2136 * L_52 = V_3;
		int32_t L_53 = (L_52->f4);
		__this->f18 = L_53;
	}

IL_011b:
	{
		int32_t L_54 = V_7;
		V_8 = ((((int32_t)((((int32_t)L_54) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t322 * L_55 = V_6;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		m11758(NULL, G_B22_1, G_B22_0, &m11758_MI);
		goto IL_0147;
	}

IL_013a:
	{
		t2136 * L_59 = V_3;
		int32_t L_60 = (L_59->f1);
		m11714(__this, L_60, &m11714_MI);
	}

IL_0147:
	{
		t2136 * L_61 = V_3;
		int32_t L_62 = (L_61->f4);
		if (L_62)
		{
			goto IL_0157;
		}
	}
	{
		bool L_63 = m11712(__this, &m11712_MI);
		if (L_63)
		{
			goto IL_0165;
		}
	}

IL_0157:
	{
		int32_t L_64 = m11708(__this, &m11708_MI);
		t322 * L_65 = V_4;
		m11759(__this, L_64, L_65, &m11759_MI);
	}

IL_0165:
	{
		int32_t L_66 = m11709(__this, &m11709_MI);
		t322 * L_67 = V_5;
		m11761(__this, L_66, L_67, &m11761_MI);
		t2136 * L_68 = V_3;
		bool L_69 = (L_68->f7);
		if (!L_69)
		{
			goto IL_0217;
		}
	}
	{
		t2136 * L_70 = V_3;
		int32_t L_71 = (L_70->f1);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		t2136 * L_72 = V_3;
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
		t322 * L_74 = V_4;
		int32_t L_75 = m5885(L_74, &m5885_MI);
		t2136 * L_76 = V_3;
		int32_t L_77 = (L_76->f4);
		if ((((int32_t)L_75) >= ((int32_t)L_77)))
		{
			goto IL_01c2;
		}
	}
	{
		t322 * L_78 = V_4;
		t2136 * L_79 = V_3;
		int32_t L_80 = (L_79->f4);
		t322 * L_81 = V_4;
		int32_t L_82 = m5885(L_81, &m5885_MI);
		m10902(L_78, 0, (t2*) &_stringLiteral690, ((int32_t)((int32_t)L_80-(int32_t)L_82)), &m10902_MI);
	}

IL_01c2:
	{
		goto IL_01cf;
	}

IL_01c4:
	{
		t322 * L_83 = V_6;
		m10901(L_83, 0, ((int32_t)48), &m10901_MI);
	}

IL_01cf:
	{
		t322 * L_84 = V_6;
		int32_t L_85 = m5885(L_84, &m5885_MI);
		t2136 * L_86 = V_3;
		int32_t L_87 = (L_86->f8);
		t2136 * L_88 = V_3;
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
		t2136 * L_91 = V_3;
		bool L_92 = (L_91->f10);
		if (L_92)
		{
			goto IL_0202;
		}
	}
	{
		t322 * L_93 = V_6;
		t1555 * L_94 = p1;
		t2* L_95 = m8765(L_94, &m8765_MI);
		m10900(L_93, 0, L_95, &m10900_MI);
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
		t322 * L_97 = V_6;
		t1555 * L_98 = p1;
		t2* L_99 = m8749(L_98, &m8749_MI);
		m10900(L_97, 0, L_99, &m10900_MI);
	}

IL_0215:
	{
		goto IL_0277;
	}

IL_0217:
	{
		t322 * L_100 = V_4;
		int32_t L_101 = m5885(L_100, &m5885_MI);
		t2136 * L_102 = V_3;
		int32_t L_103 = (L_102->f4);
		t2136 * L_104 = V_3;
		int32_t L_105 = (L_104->f5);
		if ((((int32_t)L_101) >= ((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_105)))))
		{
			goto IL_0250;
		}
	}
	{
		t322 * L_106 = V_4;
		t2136 * L_107 = V_3;
		int32_t L_108 = (L_107->f4);
		t2136 * L_109 = V_3;
		int32_t L_110 = (L_109->f5);
		t322 * L_111 = V_4;
		int32_t L_112 = m5885(L_111, &m5885_MI);
		m10902(L_106, 0, (t2*) &_stringLiteral690, ((int32_t)((int32_t)((int32_t)((int32_t)L_108-(int32_t)L_110))-(int32_t)L_112)), &m10902_MI);
	}

IL_0250:
	{
		t2136 * L_113 = V_3;
		int32_t L_114 = (L_113->f4);
		t2136 * L_115 = V_3;
		int32_t L_116 = (L_115->f5);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_116))))
		{
			goto IL_0277;
		}
	}
	{
		t322 * L_117 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		bool L_118 = m11757(NULL, L_117, &m11757_MI);
		if (!L_118)
		{
			goto IL_0277;
		}
	}
	{
		t322 * L_119 = V_4;
		t322 * L_120 = V_4;
		int32_t L_121 = m5885(L_120, &m5885_MI);
		m10894(L_119, 0, L_121, &m10894_MI);
	}

IL_0277:
	{
		t322 * L_122 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		m11756(NULL, L_122, 1, &m11756_MI);
		goto IL_028b;
	}

IL_0281:
	{
		t322 * L_123 = V_5;
		m2758(L_123, ((int32_t)48), &m2758_MI);
	}

IL_028b:
	{
		t322 * L_124 = V_5;
		int32_t L_125 = m5885(L_124, &m5885_MI);
		t2136 * L_126 = V_3;
		int32_t L_127 = (L_126->f1);
		t2136 * L_128 = V_3;
		int32_t L_129 = (L_128->f3);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)((int32_t)L_127-(int32_t)L_129)))))
		{
			goto IL_0281;
		}
	}
	{
		t322 * L_130 = V_5;
		int32_t L_131 = m5885(L_130, &m5885_MI);
		t2136 * L_132 = V_3;
		int32_t L_133 = (L_132->f1);
		if ((((int32_t)L_131) <= ((int32_t)L_133)))
		{
			goto IL_02cc;
		}
	}
	{
		t322 * L_134 = V_5;
		t2136 * L_135 = V_3;
		int32_t L_136 = (L_135->f1);
		t322 * L_137 = V_5;
		int32_t L_138 = m5885(L_137, &m5885_MI);
		t2136 * L_139 = V_3;
		int32_t L_140 = (L_139->f1);
		m10894(L_134, L_136, ((int32_t)((int32_t)L_138-(int32_t)L_140)), &m10894_MI);
	}

IL_02cc:
	{
		t2136 * L_141 = V_3;
		t2* L_142 = p0;
		int32_t L_143 = V_1;
		int32_t L_144 = V_2;
		t1555 * L_145 = p1;
		bool L_146 = (__this->f12);
		t322 * L_147 = V_4;
		t322 * L_148 = V_5;
		t322 * L_149 = V_6;
		t2* L_150 = m11677(L_141, L_142, L_143, L_144, L_145, L_146, L_147, L_148, L_149, &m11677_MI);
		return L_150;
	}
}
extern "C" void m11756 (t9 * __this , t322 * p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = 0;
		t322 * L_0 = p0;
		int32_t L_1 = m5885(L_0, &m5885_MI);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0022;
	}

IL_000d:
	{
		t322 * L_2 = p0;
		int32_t L_3 = V_1;
		uint16_t L_4 = m10891(L_2, L_3, &m10891_MI);
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
		t322 * L_11 = p0;
		t322 * L_12 = p0;
		int32_t L_13 = m5885(L_12, &m5885_MI);
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		m10894(L_11, ((int32_t)((int32_t)L_13-(int32_t)L_14)), L_15, &m10894_MI);
	}

IL_0048:
	{
		return;
	}
}
extern "C" bool m11757 (t9 * __this , t322 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		t322 * L_0 = p0;
		int32_t L_1 = V_0;
		uint16_t L_2 = m10891(L_0, L_1, &m10891_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_3 = m5926(NULL, L_2, &m5926_MI);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t322 * L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m10891(L_4, L_5, &m10891_MI);
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
		t322 * L_9 = p0;
		int32_t L_10 = m5885(L_9, &m5885_MI);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
extern "C" void m11758 (t9 * __this , t322 * p0, int32_t p1, MethodInfo* method)
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
		t563 * L_1 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_1, &m11138_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t L_3 = m11690(NULL, (((int64_t)L_2)), &m11690_MI);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = p1;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int64_t L_6 = m11681(NULL, L_5, &m11681_MI);
		V_1 = ((int32_t)((int32_t)L_4/(int32_t)(((int32_t)L_6))));
		t322 * L_7 = p0;
		int32_t L_8 = V_1;
		m2758(L_7, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_8)))), &m2758_MI);
		int32_t L_9 = p1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		int64_t L_12 = m11681(NULL, L_11, &m11681_MI);
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
extern "C" void m11759 (t2137 * __this, int32_t p0, t322 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t322 * L_1 = p1;
		int32_t L_2 = p0;
		m10897(L_1, ((int32_t)48), L_2, &m10897_MI);
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
		t322 * L_5 = p1;
		int32_t L_6 = p0;
		int32_t L_7 = (__this->f18);
		m10897(L_5, ((int32_t)48), ((int32_t)((int32_t)L_6-(int32_t)L_7)), &m10897_MI);
	}

IL_002e:
	{
		int32_t L_8 = (__this->f16);
		int32_t L_9 = (__this->f18);
		int32_t L_10 = (__this->f16);
		t322 * L_11 = p1;
		m11768(__this, ((int32_t)((int32_t)L_8-(int32_t)L_9)), L_10, L_11, &m11768_MI);
		return;
	}
}
extern "C" void m11760 (t2137 * __this, int32_t p0, MethodInfo* method)
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
		m11704(__this, ((int32_t)48), L_1, &m11704_MI);
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
		m11704(__this, ((int32_t)48), ((int32_t)((int32_t)L_4-(int32_t)L_5)), &m11704_MI);
	}

IL_002c:
	{
		int32_t L_6 = (__this->f16);
		int32_t L_7 = (__this->f18);
		int32_t L_8 = (__this->f16);
		m11767(__this, ((int32_t)((int32_t)L_6-(int32_t)L_7)), L_8, &m11767_MI);
		return;
	}
}
extern "C" void m11761 (t2137 * __this, int32_t p0, t322 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		t322 * L_5 = p1;
		m11768(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), L_5, &m11768_MI);
		return;
	}
}
extern "C" void m11762 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		m11767(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), &m11767_MI);
		return;
	}
}
extern "C" void m11763 (t2137 * __this, t1095* p0, t2* p1, MethodInfo* method)
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
		bool L_0 = m11712(__this, &m11712_MI);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		m11703(__this, ((int32_t)48), &m11703_MI);
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
		t1095* L_2 = p0;
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
		t1095* L_10 = p0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_0038:
	{
		t1095* L_11 = p0;
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
		t1095* L_13 = p0;
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
		t1095* L_23 = p0;
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
		t1095* L_28 = p0;
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
		m11767(__this, ((int32_t)((int32_t)L_45-(int32_t)L_46)), ((int32_t)((int32_t)L_47-(int32_t)L_48)), &m11767_MI);
		goto IL_0118;
	}

IL_00d9:
	{
		int32_t L_49 = (__this->f16);
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		int32_t L_52 = (__this->f16);
		int32_t L_53 = V_6;
		m11767(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_49-(int32_t)L_50))-(int32_t)L_51)), ((int32_t)((int32_t)L_52-(int32_t)L_53)), &m11767_MI);
		int32_t L_54 = V_6;
		int32_t L_55 = V_3;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)L_55));
		t2* L_56 = p1;
		m11705(__this, L_56, &m11705_MI);
		int32_t L_57 = V_1;
		int32_t L_58 = ((int32_t)((int32_t)L_57-(int32_t)1));
		V_1 = L_58;
		t1095* L_59 = p0;
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
		t1095* L_61 = p0;
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
		m11767(__this, ((int32_t)((int32_t)L_65-(int32_t)L_66)), L_67, &m11767_MI);
	}

IL_0133:
	{
		return;
	}
}
extern "C" void m11764 (t2137 * __this, t1555 * p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m11703(__this, ((int32_t)69), &m11703_MI);
		goto IL_0024;
	}

IL_001c:
	{
		m11703(__this, ((int32_t)101), &m11703_MI);
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
		t1555 * L_3 = p0;
		t2* L_4 = m8765(L_3, &m8765_MI);
		m11705(__this, L_4, &m11705_MI);
		goto IL_0048;
	}

IL_0036:
	{
		t1555 * L_5 = p0;
		t2* L_6 = m8749(L_5, &m8749_MI);
		m11705(__this, L_6, &m11705_MI);
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
		m11704(__this, ((int32_t)48), L_9, &m11704_MI);
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
		m11704(__this, ((int32_t)48), ((int32_t)((int32_t)L_11-(int32_t)1)), &m11704_MI);
		int32_t L_12 = p1;
		m11703(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_12)))), &m11703_MI);
		goto IL_00ae;
	}

IL_0073:
	{
		int32_t L_13 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		uint32_t L_14 = m11685(NULL, L_13, &m11685_MI);
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
		m11703(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((uint32_t)L_17>>8)))))), &m11703_MI);
	}

IL_0090:
	{
		uint32_t L_18 = V_0;
		m11703(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_18>>4))&(int32_t)((int32_t)15))))))), &m11703_MI);
		uint32_t L_19 = V_0;
		m11703(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)15))))))), &m11703_MI);
	}

IL_00ae:
	{
		return;
	}
}
extern "C" void m11765 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f24);
		t312* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m11702(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), &m11702_MI);
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
		t312* L_16 = (__this->f23);
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
extern "C" void m11766 (t2137 * __this, int32_t p0, bool p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t* L_4 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5;
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
		t312* L_8 = (__this->f23);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_11>>(int32_t)4))))));
	}

IL_0043:
	{
		t312* L_12 = (__this->f23);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)15)))))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t* L_16 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5;
		int32_t L_17 = p0;
		int32_t L_18 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_16+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)100)))))*(int32_t)4))))));
		goto IL_0074;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2137_TI));
		int32_t* L_19 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f5;
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
		t312* L_23 = (__this->f23);
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_26>>(int32_t)4))))));
	}

IL_008f:
	{
		t312* L_27 = (__this->f23);
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
extern "C" void m11767 (t2137 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
		t312* L_6 = (__this->f23);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((t121 *)L_6)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		m11702(__this, ((int32_t)((int32_t)L_7+(int32_t)((int32_t)10))), &m11702_MI);
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
		t312* L_28 = (__this->f23);
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
		t312* L_35 = (__this->f23);
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
		t312* L_40 = (__this->f23);
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
		t312* L_45 = (__this->f23);
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
		t312* L_50 = (__this->f23);
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
		t312* L_55 = (__this->f23);
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
		t312* L_60 = (__this->f23);
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
		t312* L_65 = (__this->f23);
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
extern "C" void m11768 (t2137 * __this, int32_t p0, int32_t p1, t322 * p2, MethodInfo* method)
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
		t322 * L_2 = p2;
		int32_t L_3 = m5885(L_2, &m5885_MI);
		int32_t L_4 = p1;
		int32_t L_5 = p0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))));
		t322 * L_6 = p2;
		int32_t L_7 = V_0;
		m5990(L_6, L_7, &m5990_MI);
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
		t322 * L_27 = p2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)((int32_t)L_28-(int32_t)1));
		V_0 = L_29;
		uint32_t L_30 = V_2;
		m10892(L_27, L_29, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15))))))), &m10892_MI);
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
		t322 * L_34 = p2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)((int32_t)L_35-(int32_t)1));
		V_0 = L_36;
		uint32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)((uint32_t)L_37>>4));
		V_2 = L_38;
		m10892(L_34, L_36, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)15))))))), &m10892_MI);
		goto IL_00e3;
	}

IL_00e3:
	{
		t322 * L_39 = p2;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		V_0 = L_41;
		uint32_t L_42 = V_2;
		int32_t L_43 = ((int32_t)((uint32_t)L_42>>4));
		V_2 = L_43;
		m10892(L_39, L_41, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)15))))))), &m10892_MI);
		goto IL_00fc;
	}

IL_00fc:
	{
		t322 * L_44 = p2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)((int32_t)L_45-(int32_t)1));
		V_0 = L_46;
		uint32_t L_47 = V_2;
		int32_t L_48 = ((int32_t)((uint32_t)L_47>>4));
		V_2 = L_48;
		m10892(L_44, L_46, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)15))))))), &m10892_MI);
		goto IL_0115;
	}

IL_0115:
	{
		t322 * L_49 = p2;
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)((int32_t)L_50-(int32_t)1));
		V_0 = L_51;
		uint32_t L_52 = V_2;
		int32_t L_53 = ((int32_t)((uint32_t)L_52>>4));
		V_2 = L_53;
		m10892(L_49, L_51, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)15))))))), &m10892_MI);
		goto IL_012e;
	}

IL_012e:
	{
		t322 * L_54 = p2;
		int32_t L_55 = V_0;
		int32_t L_56 = ((int32_t)((int32_t)L_55-(int32_t)1));
		V_0 = L_56;
		uint32_t L_57 = V_2;
		int32_t L_58 = ((int32_t)((uint32_t)L_57>>4));
		V_2 = L_58;
		m10892(L_54, L_56, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)15))))))), &m10892_MI);
		goto IL_0147;
	}

IL_0147:
	{
		t322 * L_59 = p2;
		int32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)((int32_t)L_60-(int32_t)1));
		V_0 = L_61;
		uint32_t L_62 = V_2;
		int32_t L_63 = ((int32_t)((uint32_t)L_62>>4));
		V_2 = L_63;
		m10892(L_59, L_61, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_63&(int32_t)((int32_t)15))))))), &m10892_MI);
		goto IL_0160;
	}

IL_0160:
	{
		t322 * L_64 = p2;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)((int32_t)L_65-(int32_t)1));
		V_0 = L_66;
		uint32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((uint32_t)L_67>>4));
		V_2 = L_68;
		m10892(L_64, L_66, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)15))))))), &m10892_MI);
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
extern "C" void m11769 (t2137 * __this, int32_t p0, MethodInfo* method)
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
extern "C" void m11770 (t2137 * __this, int32_t p0, MethodInfo* method)
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
extern "C" t2137 * m11771 (t2137 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = m7059(__this, &m7059_MI);
		return ((t2137 *)Castclass(L_0, InitializedTypeInfo(&t2137_TI)));
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m6912 (t1530 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2778, &m7847_MI);
		m5714(__this, L_0, &m5714_MI);
		t2* L_1 = p0;
		__this->f12 = L_1;
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2778, &m7847_MI);
		__this->f13 = L_2;
		return;
	}
}
extern MethodInfo m11772_MI;
extern "C" void m11772 (t1530 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		m5714(__this, L_0, &m5714_MI);
		t2* L_1 = p0;
		__this->f12 = L_1;
		t2* L_2 = p1;
		__this->f13 = L_2;
		return;
	}
}
extern MethodInfo m11773_MI;
extern "C" void m11773 (t1530 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11569(__this, L_0, L_1, &m11569_MI);
		t1100 * L_2 = p0;
		t2* L_3 = m5741(L_2, (t2*) &_stringLiteral2779, &m5741_MI);
		__this->f12 = L_3;
		return;
	}
}
extern MethodInfo m11774_MI;
extern "C" t2* m11774 (t1530 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m11775_MI;
extern "C" void m11775 (t1530 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m4498(__this, L_0, L_1, &m4498_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f12);
		m5744(L_2, (t2*) &_stringLiteral2779, L_3, &m5744_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t2118_TI;
extern TypeInfo t1196_TI;
extern MethodInfo m11897_MI;
extern MethodInfo m11895_MI;


extern "C" void m11776 (t2117 * __this, int32_t p0, t1196 * p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_0;
		m336(__this, &m336_MI);
		t1196 * L_1 = p1;
		bool L_2 = m11897(NULL, L_1, (t1196 *)NULL, &m11897_MI);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral466, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		int32_t L_4 = p0;
		__this->f0 = L_4;
		t1196 * L_5 = p1;
		__this->f1 = L_5;
		return;
	}
}
extern MethodInfo m11777_MI;
extern "C" int32_t m11777 (t2117 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11778_MI;
extern "C" void m11778 (t2117 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		int32_t L_1 = (__this->f0);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t2118_TI), &L_2);
		m5744(L_0, (t2*) &_stringLiteral2780, L_3, &m5744_MI);
		t1100 * L_4 = p0;
		t1196 * L_5 = (__this->f1);
		m5744(L_4, (t2*) &_stringLiteral2781, L_5, &m5744_MI);
		t1100 * L_6 = p0;
		t2* L_7 = (__this->f2);
		m5744(L_6, (t2*) &_stringLiteral2782, L_7, &m5744_MI);
		return;
	}
}
extern MethodInfo m11779_MI;
extern "C" t2* m11779 (t2117 * __this, MethodInfo* method)
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
		V_0 = (t2*) &_stringLiteral2783;
		goto IL_0078;
	}

IL_003b:
	{
		V_0 = (t2*) &_stringLiteral2784;
		goto IL_0078;
	}

IL_0043:
	{
		V_0 = (t2*) &_stringLiteral2785;
		goto IL_0078;
	}

IL_004b:
	{
		V_0 = (t2*) &_stringLiteral2786;
		goto IL_0078;
	}

IL_0053:
	{
		V_0 = (t2*) &_stringLiteral2787;
		goto IL_0078;
	}

IL_005b:
	{
		V_0 = (t2*) &_stringLiteral2788;
		goto IL_0078;
	}

IL_0063:
	{
		V_0 = (t2*) &_stringLiteral2789;
		goto IL_0078;
	}

IL_006b:
	{
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral2790, &m7847_MI);
		V_0 = L_3;
		goto IL_0078;
	}

IL_0078:
	{
		t2* L_4 = V_0;
		t1196 * L_5 = (__this->f1);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11895_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m399(NULL, L_4, (t2*) &_stringLiteral163, L_6, &m399_MI);
		return L_7;
	}
}
#include "t2138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2138_TI;
#include "t2138MD.h"



extern MethodInfo m11780_MI;
extern "C" void m11780 (t2138 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2791, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2147024882), &m4458_MI);
		return;
	}
}
extern MethodInfo m11781_MI;
extern "C" void m11781 (t2138 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11782_MI;
extern "C" void m11782 (t2139 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2792, &m7847_MI);
		m6887(__this, L_0, &m6887_MI);
		m4458(__this, ((int32_t)-2146233066), &m4458_MI);
		return;
	}
}
extern "C" void m11783 (t2139 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m6887(__this, L_0, &m6887_MI);
		m4458(__this, ((int32_t)-2146233066), &m4458_MI);
		return;
	}
}
extern MethodInfo m11784_MI;
extern "C" void m11784 (t2139 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11151(__this, L_0, L_1, &m11151_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t2118MD.h"



#include "t798.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t798_TI;
#include "t798MD.h"

extern MethodInfo m4325_MI;


extern MethodInfo m11785_MI;
extern "C" void m11785 (t798 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m4324(NULL, &m4324_MI);
		m4325(__this, L_0, &m4325_MI);
		return;
	}
}
extern TypeInfo* t1095_TI_var;
extern "C" void m4325 (t798 * __this, int32_t p0, MethodInfo* method)
{
	static bool m4325_init;
	if (!m4325_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m4325_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->f2 = ((t1095*)SZArrayNew(t1095_TI_var, ((int32_t)56)));
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = abs(L_0);
		V_1 = ((int32_t)((int32_t)((int32_t)161803398)-(int32_t)L_1));
		t1095* L_2 = (__this->f2);
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
		t1095* L_5 = (__this->f2);
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
		t1095* L_12 = (__this->f2);
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
		t1095* L_17 = (__this->f2);
		int32_t L_18 = V_5;
		int32_t* L_19 = ((int32_t*)(int32_t*)SZArrayLdElema(L_17, L_18));
		t1095* L_20 = (__this->f2);
		int32_t L_21 = V_5;
		int32_t L_22 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21+(int32_t)((int32_t)30)))%(int32_t)((int32_t)55)))));
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_19))-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))));
		t1095* L_23 = (__this->f2);
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25))) >= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		t1095* L_26 = (__this->f2);
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
#include "t2140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2140_TI;
#include "t2140MD.h"



extern MethodInfo m11786_MI;
extern "C" void m11786 (t2140 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2793, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233065), &m4458_MI);
		return;
	}
}
extern MethodInfo m11787_MI;
extern "C" void m11787 (t2140 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233065), &m4458_MI);
		return;
	}
}
extern MethodInfo m11788_MI;
extern "C" void m11788 (t2140 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2141_TI;
#include "t2141MD.h"



#include "t1758.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1758_TI;
#include "t1758MD.h"

#include "t1342.h"
extern TypeInfo t58_TI;
extern TypeInfo t1342_TI;
#include "t1342MD.h"
extern Il2CppType t1761_0_0_0;
extern MethodInfo m9631_MI;
extern MethodInfo m11791_MI;
extern MethodInfo m5733_MI;
extern MethodInfo m9542_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m7576_MI;


extern MethodInfo m11789_MI;
extern "C" void m11789 (t1758 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m11790_MI;
extern "C" void m11790 (t1758 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t1761 * V_0 = {0};
	t1758  V_1 = {0};
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1761_0_0_0), &m329_MI);
		t9 * L_4 = m5732(L_2, (t2*) &_stringLiteral2794, L_3, &m5732_MI);
		V_0 = ((t1761 *)Castclass(L_4, InitializedTypeInfo(&t1761_TI)));
		t1761 * L_5 = V_0;
		t1758  L_6 = (t1758 )VirtFuncInvoker0< t1758  >::Invoke(&m9631_MI, L_5);
		V_1 = L_6;
		t58 L_7 = m11791((&V_1), &m11791_MI);
		__this->f0 = L_7;
		t58 L_8 = (__this->f0);
		t58 L_9 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_10 = m4461(NULL, L_8, L_9, &m4461_MI);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		t2* L_11 = m7847(NULL, (t2*) &_stringLiteral1279, &m7847_MI);
		t1342 * L_12 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5733(L_12, L_11, &m5733_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005f:
	{
		return;
	}
}
extern "C" t58 m11791 (t1758 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11792_MI;
extern "C" void m11792 (t1758 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t58 L_2 = (__this->f0);
		t58 L_3 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_4 = m4461(NULL, L_2, L_3, &m4461_MI);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1342 * L_5 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5733(L_5, (t2*) &_stringLiteral1280, &m5733_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		t1100 * L_6 = p0;
		t914 * L_7 = m9542(NULL, (*(t1758 *)__this), &m9542_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t1761_0_0_0), &m329_MI);
		m5729(L_6, (t2*) &_stringLiteral2794, ((t1761 *)Castclass(L_7, InitializedTypeInfo(&t1761_TI))), L_8, &m5729_MI);
		return;
	}
}
extern MethodInfo m11793_MI;
extern "C" bool m11793 (t1758 * __this, t9 * p0, MethodInfo* method)
{
	t1758  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t1758  L_1 = (*(t1758 *)__this);
		t9 * L_2 = Box(InitializedTypeInfo(&t1758_TI), &L_1);
		t126 * L_3 = m2511(L_2, &m2511_MI);
		t9 * L_4 = p0;
		t126 * L_5 = m2511(L_4, &m2511_MI);
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
		V_0 = ((*(t1758 *)((t1758 *)UnBox (L_7, InitializedTypeInfo(&t1758_TI)))));
		t58 L_8 = m11791((&V_0), &m11791_MI);
		bool L_9 = m4461(NULL, L_6, L_8, &m4461_MI);
		return L_9;
	}
}
extern MethodInfo m11794_MI;
extern "C" int32_t m11794 (t1758 * __this, MethodInfo* method)
{
	{
		t58* L_0 = &(__this->f0);
		int32_t L_1 = m7576(L_0, &m7576_MI);
		return L_1;
	}
}
#include "t880.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t880_TI;
#include "t880MD.h"

#include "t2142.h"
#include "t2143.h"
extern TypeInfo t2142_TI;
extern TypeInfo t2143_TI;
extern TypeInfo t185_TI;
#include "t2142MD.h"
#include "t2143MD.h"
extern MethodInfo m11800_MI;
extern MethodInfo m11804_MI;
extern MethodInfo m12156_MI;
extern MethodInfo m11969_MI;
extern MethodInfo m12157_MI;
extern MethodInfo m671_MI;
extern MethodInfo m672_MI;
extern MethodInfo m12158_MI;


extern MethodInfo m11795_MI;
extern "C" void m11795 (t880 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11796_MI;
extern "C" void m11796 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = m4359(NULL, &m4359_MI);
		t2142 * L_1 = (t2142 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2142_TI));
		m11800(L_1, L_0, 1, &m11800_MI);
		((t880_SFs*)InitializedTypeInfo(&t880_TI)->static_fields)->f0 = L_1;
		t901 * L_2 = m4359(NULL, &m4359_MI);
		t2142 * L_3 = (t2142 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2142_TI));
		m11800(L_3, L_2, 0, &m11800_MI);
		((t880_SFs*)InitializedTypeInfo(&t880_TI)->static_fields)->f1 = L_3;
		t2143 * L_4 = (t2143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2143_TI));
		m11804(L_4, 1, &m11804_MI);
		((t880_SFs*)InitializedTypeInfo(&t880_TI)->static_fields)->f2 = L_4;
		t2143 * L_5 = (t2143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2143_TI));
		m11804(L_5, 0, &m11804_MI);
		((t880_SFs*)InitializedTypeInfo(&t880_TI)->static_fields)->f3 = L_5;
		return;
	}
}
extern MethodInfo m5765_MI;
extern "C" t880 * m5765 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t880_TI));
		t880 * L_0 = ((t880_SFs*)InitializedTypeInfo(&t880_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m4245_MI;
extern "C" t880 * m4245 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t880_TI));
		t880 * L_0 = ((t880_SFs*)InitializedTypeInfo(&t880_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m11797_MI;
extern "C" int32_t m11797 (t880 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		int32_t L_10 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m12156_MI, __this, L_8, L_9);
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
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_13, &m11138_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003d:
	{
		t9 * L_14 = V_2;
		t9 * L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11969_MI, L_14, L_15);
		return L_16;
	}
}
extern MethodInfo m11798_MI;
extern "C" bool m11798 (t880 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		bool L_10 = (bool)VirtFuncInvoker2< bool, t2*, t2* >::Invoke(&m12157_MI, __this, L_8, L_9);
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
extern MethodInfo m11799_MI;
extern "C" int32_t m11799 (t880 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1407, &m339_MI);
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
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, t2* >::Invoke(&m12158_MI, __this, L_6);
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

#include "t1546.h"
#include "t1547.h"
#include "t1617.h"
extern TypeInfo t1546_TI;
extern TypeInfo t1547_TI;
extern TypeInfo t1617_TI;
#include "t1546MD.h"
#include "t1617MD.h"
extern MethodInfo m6971_MI;
extern MethodInfo m6972_MI;
extern MethodInfo m11801_MI;
extern MethodInfo m8635_MI;
extern MethodInfo m7950_MI;


extern "C" void m11800 (t2142 * __this, t901 * p0, bool p1, MethodInfo* method)
{
	{
		m11795(__this, &m11795_MI);
		t901 * L_0 = p0;
		t1546 * L_1 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m6971_MI, L_0);
		__this->f5 = L_1;
		bool L_2 = p1;
		__this->f4 = L_2;
		return;
	}
}
extern "C" int32_t m11801 (t2142 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		t1546 * L_1 = (__this->f5);
		t2* L_2 = p0;
		t2* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6972_MI, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
extern MethodInfo m11802_MI;
extern "C" bool m11802 (t2142 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m11801_MI, __this, L_0, L_1);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11803_MI;
extern "C" int32_t m11803 (t2142 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1076, &m339_MI);
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
		t1546 * L_3 = (__this->f5);
		t2* L_4 = p0;
		int32_t L_5 = V_0;
		t1617 * L_6 = (t1617 *)VirtFuncInvoker2< t1617 *, t2*, int32_t >::Invoke(&m8635_MI, L_3, L_4, L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7950_MI, L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7359_MI;
extern MethodInfo m7358_MI;
extern MethodInfo m11805_MI;
extern MethodInfo m7388_MI;
extern MethodInfo m4232_MI;


extern "C" void m11804 (t2143 * __this, bool p0, MethodInfo* method)
{
	{
		m11795(__this, &m11795_MI);
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m11805 (t2143 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		int32_t L_3 = m7359(NULL, L_1, 0, ((int32_t)2147483647), L_2, 0, ((int32_t)2147483647), &m7359_MI);
		return L_3;
	}

IL_001c:
	{
		t2* L_4 = p0;
		t2* L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m7358(NULL, L_4, 0, ((int32_t)2147483647), L_5, 0, ((int32_t)2147483647), &m7358_MI);
		return L_6;
	}
}
extern MethodInfo m11806_MI;
extern "C" bool m11806 (t2143 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m11805_MI, __this, L_1, L_2);
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
extern MethodInfo m11807_MI;
extern "C" int32_t m11807 (t2143 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1076, &m339_MI);
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
		int32_t L_4 = m7388(L_3, &m7388_MI);
		return L_4;
	}

IL_001d:
	{
		t2* L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, L_5);
		return L_6;
	}
}
#include "t884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t884_TI;
#include "t884MD.h"



#include "t1355.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1355_TI;
#include "t1355MD.h"



#include "t1369.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1369_TI;

extern MethodInfo m4459_MI;


extern MethodInfo m11808_MI;
extern "C" void m11808 (t1369 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2795, &m7847_MI);
		m379(__this, L_0, &m379_MI);
		m4458(__this, ((int32_t)-2146233087), &m4458_MI);
		return;
	}
}
extern "C" void m5901 (t1369 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		m4458(__this, ((int32_t)-2146233087), &m4458_MI);
		return;
	}
}
extern "C" void m11809 (t1369 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m7029(__this, L_0, L_1, &m7029_MI);
		return;
	}
}
extern "C" void m11810 (t1369 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m4459(__this, L_0, L_1, &m4459_MI);
		m4458(__this, ((int32_t)-2146233087), &m4458_MI);
		return;
	}
}
#include "t2144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2144_TI;
#include "t2144MD.h"



extern MethodInfo m11811_MI;
extern "C" void m11811 (t2144 * __this, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2199.h"
#include "t2200.h"
extern TypeInfo t2199_TI;
extern TypeInfo t2200_TI;
#include "t2199MD.h"
#include "t2200MD.h"
extern Il2CppType t2199_0_0_0;
extern Il2CppType t2200_0_0_0;
extern MethodInfo m11816_MI;
extern MethodInfo m12159_MI;
extern MethodInfo m12160_MI;
extern MethodInfo m11828_MI;
extern MethodInfo m11836_MI;
extern MethodInfo m7452_MI;
extern MethodInfo m7453_MI;
extern MethodInfo m7124_MI;
extern MethodInfo m11827_MI;
extern MethodInfo m11839_MI;
extern Il2CppGenericMethod m12159_GM;
extern Il2CppGenericMethod m12160_GM;


extern "C" void m11812 (t304 * __this, int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m11813 (t304 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		int64_t L_3 = m11816(NULL, 0, L_0, L_1, L_2, 0, &m11816_MI);
		__this->f3 = L_3;
		return;
	}
}
extern "C" void m11814 (t304 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		int64_t L_5 = m11816(NULL, L_0, L_1, L_2, L_3, L_4, &m11816_MI);
		__this->f3 = L_5;
		return;
	}
}
extern MethodInfo m11815_MI;
extern TypeInfo* t2199_TI_var;
extern TypeInfo* t2200_TI_var;
extern MethodInfo* m12159_MI_var;
extern MethodInfo* m12160_MI_var;
extern "C" void m11815 (t9 * __this , MethodInfo* method)
{
	static bool m11815_init;
	if (!m11815_init)
	{
		t2199_TI_var = il2cpp_codegen_class_from_type(&t2199_0_0_0);
		t2200_TI_var = il2cpp_codegen_class_from_type(&t2200_0_0_0);
		m12159_MI_var = il2cpp_codegen_genericmethod_get_method(&m12159_GM);
		m12160_MI_var = il2cpp_codegen_genericmethod_get_method(&m12160_GM);
		m11815_init = true;
	}
	t2199 * V_0 = {0};
	t2200 * V_1 = {0};
	{
		t304  L_0 = {0};
		m11812(&L_0, ((int64_t)std::numeric_limits<int64_t>::max()), &m11812_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0 = L_0;
		t304  L_1 = {0};
		m11812(&L_1, ((int64_t)std::numeric_limits<int64_t>::min()), &m11812_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1 = L_1;
		t304  L_2 = {0};
		m11812(&L_2, (((int64_t)0)), &m11812_MI);
		((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2131_TI));
		bool L_3 = ((t2131_SFs*)InitializedTypeInfo(&t2131_TI)->static_fields)->f0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		t2199 * L_4 = (t2199 *)il2cpp_codegen_object_new (t2199_TI_var);
		m12159(L_4, m12159_MI_var);
		V_0 = L_4;
		t2200 * L_5 = (t2200 *)il2cpp_codegen_object_new (t2200_TI_var);
		m12160(L_5, m12160_MI_var);
		V_1 = L_5;
	}

IL_0045:
	{
		return;
	}
}
extern "C" int64_t m11816 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		t2* L_30 = m7847(NULL, (t2*) &_stringLiteral2796, &m7847_MI);
		t903 * L_31 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_31, L_30, &m5722_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a3:
	{
		int64_t L_32 = V_2;
		return L_32;
	}
}
extern "C" int32_t m11817 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))));
	}
}
extern "C" int32_t m11818 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)864000000000LL)))/(int64_t)((int64_t)36000000000LL)))));
	}
}
extern MethodInfo m11819_MI;
extern "C" int32_t m11819 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)((int32_t)10000)))))));
	}
}
extern "C" int32_t m11820 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)36000000000LL)))/(int64_t)(((int64_t)((int32_t)600000000)))))));
	}
}
extern "C" int32_t m11821 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)600000000)))))/(int64_t)(((int64_t)((int32_t)10000000)))))));
	}
}
extern "C" int64_t m11822 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m11823_MI;
extern "C" double m11823 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(864000000000.0)));
	}
}
extern MethodInfo m11824_MI;
extern "C" double m11824 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(36000000000.0)));
	}
}
extern "C" double m11825 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000.0)));
	}
}
extern "C" double m11826 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(600000000.0)));
	}
}
extern MethodInfo m1108_MI;
extern "C" double m1108 (t304 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000000.0)));
	}
}
extern "C" t304  m11827 (t304 * __this, t304  p0, MethodInfo* method)
{
	t304  V_0 = {0};
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
			int64_t L_1 = m11822((&p0), &m11822_MI);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL - (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 < (int64_t)(int64_t)-9223372036854775808LL - (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t304  L_2 = {0};
			m11812(&L_2, ((int64_t)((int64_t)L_0+(int64_t)L_1)), &m11812_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2139_TI, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral2797, &m7847_MI);
		t2139 * L_4 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_4, L_3, &m11783_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t304  L_5 = V_0;
		return L_5;
	}
}
extern "C" int32_t m11828 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
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
extern MethodInfo m11829_MI;
extern "C" int32_t m11829 (t304 * __this, t9 * p0, MethodInfo* method)
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t304_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2798, &m7847_MI);
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_3, L_2, (t2*) &_stringLiteral606, &m5720_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t9 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		int32_t L_5 = m11828(NULL, (*(t304 *)__this), ((*(t304 *)((t304 *)UnBox (L_4, InitializedTypeInfo(&t304_TI))))), &m11828_MI);
		return L_5;
	}
}
extern MethodInfo m11830_MI;
extern "C" int32_t m11830 (t304 * __this, t304  p0, MethodInfo* method)
{
	{
		t304  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		int32_t L_1 = m11828(NULL, (*(t304 *)__this), L_0, &m11828_MI);
		return L_1;
	}
}
extern MethodInfo m11831_MI;
extern "C" bool m11831 (t304 * __this, t304  p0, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = (__this->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m11832_MI;
extern "C" t304  m11832 (t304 * __this, MethodInfo* method)
{
	t304  V_0 = {0};
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
			t304  L_2 = {0};
			m11812(&L_2, L_1, &m11812_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2139_TI, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral2799, &m7847_MI);
		t2139 * L_4 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_4, L_3, &m11783_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		t304  L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m11833_MI;
extern "C" bool m11833 (t304 * __this, t9 * p0, MethodInfo* method)
{
	t304  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t304_TI))))
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
		V_0 = ((*(t304 *)((t304 *)UnBox (L_2, InitializedTypeInfo(&t304_TI)))));
		int64_t L_3 = ((&V_0)->f3);
		return ((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
extern "C" t304  m11834 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = m11836(NULL, L_0, (((int64_t)((int32_t)600000000))), &m11836_MI);
		return L_1;
	}
}
extern MethodInfo m11835_MI;
extern "C" t304  m11835 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = m11836(NULL, L_0, (((int64_t)((int32_t)10000000))), &m11836_MI);
		return L_1;
	}
}
extern MethodInfo m1107_MI;
extern "C" t304  m1107 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = m11836(NULL, L_0, (((int64_t)((int32_t)10000))), &m11836_MI);
		return L_1;
	}
}
extern "C" t304  m11836 (t9 * __this , double p0, int64_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	t304  V_1 = {0};
	t304  V_2 = {0};
	t304  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		double L_0 = p0;
		bool L_1 = m7451(NULL, L_0, &m7451_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2800, &m7847_MI);
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_3, L_2, (t2*) &_stringLiteral606, &m5720_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		double L_4 = p0;
		bool L_5 = m7452(NULL, L_4, &m7452_MI);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m7453(NULL, L_6, &m7453_MI);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		double L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_9 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		V_1 = L_9;
		int64_t L_10 = m11822((&V_1), &m11822_MI);
		if ((((double)L_8) < ((double)(((double)L_10)))))
		{
			goto IL_004f;
		}
	}
	{
		double L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_12 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		V_2 = L_12;
		int64_t L_13 = m11822((&V_2), &m11822_MI);
		if ((!(((double)L_11) > ((double)(((double)L_13))))))
		{
			goto IL_005f;
		}
	}

IL_004f:
	{
		t2* L_14 = m7847(NULL, (t2*) &_stringLiteral2801, &m7847_MI);
		t2139 * L_15 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_15, L_14, &m11783_MI);
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
			t304  L_21 = {0};
			m11812(&L_21, ((int64_t)((int64_t)L_20*(int64_t)(((int64_t)((int32_t)10000))))), &m11812_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2139_TI, e.ex->object.klass))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.OverflowException)
		t2* L_22 = m7847(NULL, (t2*) &_stringLiteral2797, &m7847_MI);
		t2139 * L_23 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_23, L_22, &m11783_MI);
		il2cpp_codegen_raise_exception(L_23);
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		t304  L_24 = V_3;
		return L_24;
	}
}
extern "C" int32_t m11837 (t304 * __this, MethodInfo* method)
{
	{
		int64_t* L_0 = &(__this->f3);
		int32_t L_1 = m7124(L_0, &m7124_MI);
		return L_1;
	}
}
extern MethodInfo m11838_MI;
extern "C" t304  m11838 (t304 * __this, MethodInfo* method)
{
	t304  V_0 = {0};
	{
		int64_t L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f1;
		V_0 = L_1;
		int64_t L_2 = ((&V_0)->f3);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral2802, &m7847_MI);
		t2139 * L_4 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_4, L_3, &m11783_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int64_t L_5 = (__this->f3);
		t304  L_6 = {0};
		m11812(&L_6, ((-L_5)), &m11812_MI);
		return L_6;
	}
}
extern "C" t304  m11839 (t304 * __this, t304  p0, MethodInfo* method)
{
	t304  V_0 = {0};
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
			int64_t L_1 = m11822((&p0), &m11822_MI);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 < (int64_t)-9223372036854775808LL + (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL + (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t304  L_2 = {0};
			m11812(&L_2, ((int64_t)((int64_t)L_0-(int64_t)L_1)), &m11812_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2139_TI, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral2797, &m7847_MI);
		t2139 * L_4 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11783(L_4, L_3, &m11783_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t304  L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m11840_MI;
extern "C" t2* m11840 (t304 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_0, ((int32_t)14), &m4355_MI);
		V_0 = L_0;
		int64_t L_1 = (__this->f3);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t322 * L_2 = V_0;
		m2758(L_2, ((int32_t)45), &m2758_MI);
	}

IL_001b:
	{
		int32_t L_3 = m11817(__this, &m11817_MI);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		t322 * L_4 = V_0;
		int32_t L_5 = m11817(__this, &m11817_MI);
		int32_t L_6 = abs(L_5);
		m5815(L_4, L_6, &m5815_MI);
		t322 * L_7 = V_0;
		m2758(L_7, ((int32_t)46), &m2758_MI);
	}

IL_003e:
	{
		t322 * L_8 = V_0;
		int32_t L_9 = m11818(__this, &m11818_MI);
		int32_t L_10 = abs(L_9);
		V_2 = L_10;
		t2* L_11 = m5898((&V_2), (t2*) &_stringLiteral2803, &m5898_MI);
		m1170(L_8, L_11, &m1170_MI);
		t322 * L_12 = V_0;
		m2758(L_12, ((int32_t)58), &m2758_MI);
		t322 * L_13 = V_0;
		int32_t L_14 = m11820(__this, &m11820_MI);
		int32_t L_15 = abs(L_14);
		V_3 = L_15;
		t2* L_16 = m5898((&V_3), (t2*) &_stringLiteral2803, &m5898_MI);
		m1170(L_13, L_16, &m1170_MI);
		t322 * L_17 = V_0;
		m2758(L_17, ((int32_t)58), &m2758_MI);
		t322 * L_18 = V_0;
		int32_t L_19 = m11821(__this, &m11821_MI);
		int32_t L_20 = abs(L_19);
		V_4 = L_20;
		t2* L_21 = m5898((&V_4), (t2*) &_stringLiteral2803, &m5898_MI);
		m1170(L_18, L_21, &m1170_MI);
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
		t322 * L_25 = V_0;
		m2758(L_25, ((int32_t)46), &m2758_MI);
		t322 * L_26 = V_0;
		t2* L_27 = m5898((&V_1), (t2*) &_stringLiteral2804, &m5898_MI);
		m1170(L_26, L_27, &m1170_MI);
	}

IL_00e1:
	{
		t322 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_28);
		return L_29;
	}
}
extern "C" t304  m11841 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		t304  L_0 = p1;
		t304  L_1 = m11827((&p0), L_0, &m11827_MI);
		return L_1;
	}
}
extern "C" bool m11842 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11843 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11844 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11845 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11846 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11847 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t304  m11848 (t9 * __this , t304  p0, t304  p1, MethodInfo* method)
{
	{
		t304  L_0 = p1;
		t304  L_1 = m11839((&p0), L_0, &m11839_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2146.h"
#include "t1707.h"
extern TypeInfo t2146_TI;
extern TypeInfo t1707_TI;
#include "t2146MD.h"
#include "t1707MD.h"
extern MethodInfo m11859_MI;
extern MethodInfo m12161_MI;
extern MethodInfo m11853_MI;
extern MethodInfo m8722_MI;
extern MethodInfo m8723_MI;
extern MethodInfo m8724_MI;
extern MethodInfo m11857_MI;


extern MethodInfo m11849_MI;
extern "C" void m11849 (t2145 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11850_MI;
extern "C" void m11850 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		int64_t L_0 = m11429(NULL, &m11429_MI);
		t2146 * L_1 = (t2146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2146_TI));
		m11859(L_1, L_0, &m11859_MI);
		((t2145_SFs*)InitializedTypeInfo(&t2145_TI)->static_fields)->f0 = L_1;
		return;
	}
}
extern "C" t2145 * m11851 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		t2145 * L_0 = ((t2145_SFs*)InitializedTypeInfo(&t2145_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m11852_MI;
extern "C" bool m11852 (t2145 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m11431((&p0), &m11431_MI);
		t1707 * L_2 = (t1707 *)VirtFuncInvoker1< t1707 *, int32_t >::Invoke(&m12161_MI, __this, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2145_TI));
		bool L_3 = m11853(NULL, L_0, L_2, &m11853_MI);
		return L_3;
	}
}
extern "C" bool m11853 (t9 * __this , t270  p0, t1707 * p1, MethodInfo* method)
{
	t270  V_0 = {0};
	t270  V_1 = {0};
	t270  V_2 = {0};
	t270  V_3 = {0};
	t270  V_4 = {0};
	t270  V_5 = {0};
	t270  V_6 = {0};
	t270  V_7 = {0};
	t270  V_8 = {0};
	t270  V_9 = {0};
	{
		t1707 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2805, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1707 * L_2 = p1;
		t270  L_3 = m8722(L_2, &m8722_MI);
		V_0 = L_3;
		int64_t L_4 = m6980((&V_0), &m6980_MI);
		t1707 * L_5 = p1;
		t270  L_6 = m8723(L_5, &m8723_MI);
		V_1 = L_6;
		int64_t L_7 = m6980((&V_1), &m6980_MI);
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
		t1707 * L_8 = p1;
		t270  L_9 = m8722(L_8, &m8722_MI);
		V_2 = L_9;
		int64_t L_10 = m6980((&V_2), &m6980_MI);
		t1707 * L_11 = p1;
		t270  L_12 = m8723(L_11, &m8723_MI);
		V_3 = L_12;
		int64_t L_13 = m6980((&V_3), &m6980_MI);
		if ((((int64_t)L_10) >= ((int64_t)L_13)))
		{
			goto IL_0080;
		}
	}
	{
		t1707 * L_14 = p1;
		t270  L_15 = m8722(L_14, &m8722_MI);
		V_4 = L_15;
		int64_t L_16 = m6980((&V_4), &m6980_MI);
		int64_t L_17 = m6980((&p0), &m6980_MI);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		t1707 * L_18 = p1;
		t270  L_19 = m8723(L_18, &m8723_MI);
		V_5 = L_19;
		int64_t L_20 = m6980((&V_5), &m6980_MI);
		int64_t L_21 = m6980((&p0), &m6980_MI);
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
		int32_t L_22 = m11431((&p0), &m11431_MI);
		t1707 * L_23 = p1;
		t270  L_24 = m8722(L_23, &m8722_MI);
		V_6 = L_24;
		int32_t L_25 = m11431((&V_6), &m11431_MI);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_26 = m11431((&p0), &m11431_MI);
		t1707 * L_27 = p1;
		t270  L_28 = m8723(L_27, &m8723_MI);
		V_7 = L_28;
		int32_t L_29 = m11431((&V_7), &m11431_MI);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00e2;
		}
	}
	{
		int64_t L_30 = m6980((&p0), &m6980_MI);
		t1707 * L_31 = p1;
		t270  L_32 = m8723(L_31, &m8723_MI);
		V_8 = L_32;
		int64_t L_33 = m6980((&V_8), &m6980_MI);
		if ((((int64_t)L_30) < ((int64_t)L_33)))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_34 = m6980((&p0), &m6980_MI);
		t1707 * L_35 = p1;
		t270  L_36 = m8722(L_35, &m8722_MI);
		V_9 = L_36;
		int64_t L_37 = m6980((&V_9), &m6980_MI);
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
extern "C" t270  m11854 (t2145 * __this, t270  p0, MethodInfo* method)
{
	t304  V_0 = {0};
	t270  V_1 = {0};
	t1707 * V_2 = {0};
	t304  V_3 = {0};
	t270  V_4 = {0};
	t304  V_5 = {0};
	t270  V_6 = {0};
	{
		int32_t L_0 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		t270  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t270  L_2 = p0;
		t304  L_3 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m11822((&V_0), &m11822_MI);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_5 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		t304  L_6 = V_0;
		t270  L_7 = m11470(NULL, L_5, L_6, &m11470_MI);
		t270  L_8 = p0;
		bool L_9 = m5853(NULL, L_7, L_8, &m5853_MI);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_10 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		t270  L_11 = m11441(NULL, L_10, 2, &m11441_MI);
		return L_11;
	}

IL_003e:
	{
		goto IL_0076;
	}

IL_0040:
	{
		int64_t L_12 = m11822((&V_0), &m11822_MI);
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_13 = m6980((&p0), &m6980_MI);
		int64_t L_14 = m11822((&V_0), &m11822_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_15 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		V_4 = L_15;
		int64_t L_16 = m6980((&V_4), &m6980_MI);
		if ((((int64_t)((int64_t)((int64_t)L_13+(int64_t)L_14))) >= ((int64_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_17 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		t270  L_18 = m11441(NULL, L_17, 2, &m11441_MI);
		return L_18;
	}

IL_0076:
	{
		t304  L_19 = V_0;
		t270  L_20 = m11433((&p0), L_19, &m11433_MI);
		V_1 = L_20;
		int32_t L_21 = m11431((&p0), &m11431_MI);
		t1707 * L_22 = (t1707 *)VirtFuncInvoker1< t1707 *, int32_t >::Invoke(&m12161_MI, __this, L_21);
		V_2 = L_22;
		t1707 * L_23 = V_2;
		t304  L_24 = m8724(L_23, &m8724_MI);
		V_5 = L_24;
		int64_t L_25 = m11822((&V_5), &m11822_MI);
		if (L_25)
		{
			goto IL_00a6;
		}
	}
	{
		t270  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_27 = m11441(NULL, L_26, 2, &m11441_MI);
		return L_27;
	}

IL_00a6:
	{
		t270  L_28 = V_1;
		t1707 * L_29 = V_2;
		t270  L_30 = m8723(L_29, &m8723_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_31 = m5853(NULL, L_28, L_30, &m5853_MI);
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		t1707 * L_32 = V_2;
		t270  L_33 = m8723(L_32, &m8723_MI);
		V_6 = L_33;
		t1707 * L_34 = V_2;
		t304  L_35 = m8724(L_34, &m8724_MI);
		t270  L_36 = m11462((&V_6), L_35, &m11462_MI);
		t270  L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_38 = m5852(NULL, L_36, L_37, &m5852_MI);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		t270  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_40 = m11441(NULL, L_39, 2, &m11441_MI);
		return L_40;
	}

IL_00d9:
	{
		t270  L_41 = V_1;
		t304  L_42 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, __this, L_41);
		V_3 = L_42;
		t304  L_43 = V_3;
		t270  L_44 = m11433((&p0), L_43, &m11433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_45 = m11441(NULL, L_44, 2, &m11441_MI);
		return L_45;
	}
}
extern "C" t270  m11855 (t2145 * __this, t270  p0, MethodInfo* method)
{
	t304  V_0 = {0};
	{
		int32_t L_0 = m11432((&p0), &m11432_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		t270  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t270  L_2 = p0;
		t304  L_3 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m11822((&V_0), &m11822_MI);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_5 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		t304  L_6 = V_0;
		t270  L_7 = m11466(NULL, L_5, L_6, &m11466_MI);
		t270  L_8 = p0;
		bool L_9 = m5853(NULL, L_7, L_8, &m5853_MI);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_10 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f2;
		t270  L_11 = m11441(NULL, L_10, 1, &m11441_MI);
		return L_11;
	}

IL_003e:
	{
		goto IL_006a;
	}

IL_0040:
	{
		int64_t L_12 = m11822((&V_0), &m11822_MI);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_13 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		t304  L_14 = V_0;
		t270  L_15 = m11466(NULL, L_13, L_14, &m11466_MI);
		t270  L_16 = p0;
		bool L_17 = m5854(NULL, L_15, L_16, &m5854_MI);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_18 = ((t270_SFs*)InitializedTypeInfo(&t270_TI)->static_fields)->f3;
		t270  L_19 = m11441(NULL, L_18, 1, &m11441_MI);
		return L_19;
	}

IL_006a:
	{
		int64_t L_20 = m6980((&p0), &m6980_MI);
		int64_t L_21 = m11822((&V_0), &m11822_MI);
		t270  L_22 = {0};
		m11399(&L_22, ((int64_t)((int64_t)L_20-(int64_t)L_21)), &m11399_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_23 = m11441(NULL, L_22, 1, &m11441_MI);
		return L_23;
	}
}
extern "C" t304  m11856 (t2145 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		t270  L_1 = p0;
		t304  L_2 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, __this, L_1);
		t304  L_3 = m11857(__this, L_0, L_2, &m11857_MI);
		return L_3;
	}
}
extern "C" t304  m11857 (t2145 * __this, t270  p0, t304  p1, MethodInfo* method)
{
	t1707 * V_0 = {0};
	t270  V_1 = {0};
	t304  V_2 = {0};
	t270  V_3 = {0};
	t270  V_4 = {0};
	{
		int32_t L_0 = m11431((&p0), &m11431_MI);
		t1707 * L_1 = (t1707 *)VirtFuncInvoker1< t1707 *, int32_t >::Invoke(&m12161_MI, __this, L_0);
		V_0 = L_1;
		t1707 * L_2 = V_0;
		t304  L_3 = m8724(L_2, &m8724_MI);
		V_2 = L_3;
		int64_t L_4 = m11822((&V_2), &m11822_MI);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		t304  L_5 = p1;
		return L_5;
	}

IL_0020:
	{
		t304  L_6 = p1;
		t270  L_7 = m11433((&p0), L_6, &m11433_MI);
		V_1 = L_7;
		t270  L_8 = V_1;
		t1707 * L_9 = V_0;
		t270  L_10 = m8723(L_9, &m8723_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_11 = m5853(NULL, L_8, L_10, &m5853_MI);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1707 * L_12 = V_0;
		t270  L_13 = m8723(L_12, &m8723_MI);
		V_3 = L_13;
		t1707 * L_14 = V_0;
		t304  L_15 = m8724(L_14, &m8724_MI);
		t270  L_16 = m11462((&V_3), L_15, &m11462_MI);
		t270  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_18 = m5852(NULL, L_16, L_17, &m5852_MI);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		t304  L_19 = p1;
		return L_19;
	}

IL_0055:
	{
		t270  L_20 = V_1;
		t1707 * L_21 = V_0;
		t270  L_22 = m8722(L_21, &m8722_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_23 = m5754(NULL, L_20, L_22, &m5754_MI);
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		t1707 * L_24 = V_0;
		t270  L_25 = m8722(L_24, &m8722_MI);
		V_4 = L_25;
		t1707 * L_26 = V_0;
		t304  L_27 = m8724(L_26, &m8724_MI);
		t270  L_28 = m11433((&V_4), L_27, &m11433_MI);
		t270  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		bool L_30 = m5854(NULL, L_28, L_29, &m5854_MI);
		if (!L_30)
		{
			goto IL_008d;
		}
	}
	{
		t304  L_31 = p1;
		t1707 * L_32 = V_0;
		t304  L_33 = m8724(L_32, &m8724_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_34 = m11848(NULL, L_31, L_33, &m11848_MI);
		return L_34;
	}

IL_008d:
	{
		t270  L_35 = V_1;
		t304  L_36 = (t304 )VirtFuncInvoker1< t304 , t270  >::Invoke(&m12137_MI, __this, L_35);
		return L_36;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11861_MI;
extern MethodInfo m11865_MI;
extern MethodInfo m11864_MI;
extern MethodInfo m8721_MI;


extern MethodInfo m11858_MI;
extern "C" void m11858 (t2146 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5919(L_0, 1, &m5919_MI);
		__this->f3 = L_0;
		m11849(__this, &m11849_MI);
		return;
	}
}
extern "C" void m11859 (t2146 * __this, int64_t p0, MethodInfo* method)
{
	t1565* V_0 = {0};
	t221* V_1 = {0};
	t270  V_2 = {0};
	t1707 * V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5919(L_0, 1, &m5919_MI);
		__this->f3 = L_0;
		m11849(__this, &m11849_MI);
		int64_t L_1 = p0;
		m11399((&V_2), L_1, &m11399_MI);
		int32_t L_2 = m11431((&V_2), &m11431_MI);
		bool L_3 = m11861(NULL, L_2, (&V_0), (&V_1), &m11861_MI);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		t2* L_4 = m7847(NULL, (t2*) &_stringLiteral2806, &m7847_MI);
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, L_4, &m5735_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003c:
	{
		t221* L_6 = V_1;
		int32_t L_7 = 0;
		t2* L_8 = m7847(NULL, (*(t2**)(t2**)SZArrayLdElema(L_6, L_7)), &m7847_MI);
		__this->f1 = L_8;
		t221* L_9 = V_1;
		int32_t L_10 = 1;
		t2* L_11 = m7847(NULL, (*(t2**)(t2**)SZArrayLdElema(L_9, L_10)), &m7847_MI);
		__this->f2 = L_11;
		t1565* L_12 = V_0;
		int32_t L_13 = 2;
		__this->f4 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_12, L_13));
		t1565* L_14 = V_0;
		t1707 * L_15 = m11865(__this, L_14, &m11865_MI);
		V_3 = L_15;
		t1158 * L_16 = (__this->f3);
		int32_t L_17 = m11431((&V_2), &m11431_MI);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t125_TI), &L_18);
		t1707 * L_20 = V_3;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5737_MI, L_16, L_19, L_20);
		t1707 * L_21 = V_3;
		m11864(__this, L_21, &m11864_MI);
		return;
	}
}
extern MethodInfo m11860_MI;
extern "C" void m11860 (t2146 * __this, t9 * p0, MethodInfo* method)
{
	{
		m11864(__this, (t1707 *)NULL, &m11864_MI);
		return;
	}
}
extern "C" bool m11861 (t9 * __this , int32_t p0, t1565** p1, t221** p2, MethodInfo* method)
{
	typedef bool (*m11861_ftn) (int32_t, t1565**, t221**);
	static m11861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11861_ftn)il2cpp_codegen_resolve_icall ("System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m11862_MI;
extern "C" t1707 * m11862 (t2146 * __this, int32_t p0, MethodInfo* method)
{
	t1158 * V_0 = {0};
	t1707 * V_1 = {0};
	t1565* V_2 = {0};
	t221* V_3 = {0};
	t1707 * V_4 = {0};
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
		t2* L_5 = m7847(NULL, (t2*) &_stringLiteral2808, &m7847_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m511(NULL, L_4, L_5, &m511_MI);
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_7, (t2*) &_stringLiteral2807, L_6, &m4361_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002c:
	{
		int32_t L_8 = p0;
		int32_t L_9 = ((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		t1707 * L_10 = ((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f8;
		return L_10;
	}

IL_003a:
	{
		t1158 * L_11 = (__this->f3);
		V_0 = L_11;
		t1158 * L_12 = V_0;
		m1083(NULL, L_12, &m1083_MI);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			t1158 * L_13 = (__this->f3);
			int32_t L_14 = p0;
			int32_t L_15 = L_14;
			t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
			t9 * L_17 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5736_MI, L_13, L_16);
			V_1 = ((t1707 *)Castclass(L_17, InitializedTypeInfo(&t1707_TI)));
			t1707 * L_18 = V_1;
			if (L_18)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			int32_t L_19 = p0;
			bool L_20 = m11861(NULL, L_19, (&V_2), (&V_3), &m11861_MI);
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
			t2* L_24 = m511(NULL, (t2*) &_stringLiteral2809, L_23, &m511_MI);
			t2* L_25 = m7847(NULL, L_24, &m7847_MI);
			t563 * L_26 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
			m2910(L_26, L_25, &m2910_MI);
			il2cpp_codegen_raise_exception(L_26);
		}

IL_0088:
		{
			t1565* L_27 = V_2;
			t1707 * L_28 = m11865(__this, L_27, &m11865_MI);
			V_1 = L_28;
			t1158 * L_29 = (__this->f3);
			int32_t L_30 = p0;
			int32_t L_31 = L_30;
			t9 * L_32 = Box(InitializedTypeInfo(&t125_TI), &L_31);
			t1707 * L_33 = V_1;
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5737_MI, L_29, L_32, L_33);
		}

IL_00a2:
		{
			t1707 * L_34 = V_1;
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
		t1158 * L_35 = V_0;
		m1085(NULL, L_35, &m1085_MI);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00b0:
	{
		t1707 * L_36 = V_4;
		return L_36;
	}
}
extern MethodInfo m11863_MI;
extern "C" t304  m11863 (t2146 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t270  >::Invoke(&m11852_MI, __this, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		t304  L_2 = (__this->f6);
		return L_2;
	}

IL_0010:
	{
		t304  L_3 = (__this->f5);
		return L_3;
	}
}
extern "C" void m11864 (t2146 * __this, t1707 * p0, MethodInfo* method)
{
	t1565* V_0 = {0};
	t221* V_1 = {0};
	t270  V_2 = {0};
	t270  V_3 = {0};
	t304  V_4 = {0};
	{
		t1707 * L_0 = p0;
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_1 = m1100(NULL, &m1100_MI);
		V_2 = L_1;
		int32_t L_2 = m11431((&V_2), &m11431_MI);
		((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f7 = L_2;
		int32_t L_3 = ((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f7;
		bool L_4 = m11861(NULL, L_3, (&V_0), (&V_1), &m11861_MI);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f7;
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m511(NULL, (t2*) &_stringLiteral2809, L_7, &m511_MI);
		t2* L_9 = m7847(NULL, L_8, &m7847_MI);
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_10, L_9, &m2910_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		t1565* L_11 = V_0;
		t1707 * L_12 = m11865(__this, L_11, &m11865_MI);
		p0 = L_12;
		goto IL_0064;
	}

IL_0051:
	{
		t1707 * L_13 = p0;
		t270  L_14 = m8722(L_13, &m8722_MI);
		V_3 = L_14;
		int32_t L_15 = m11431((&V_3), &m11431_MI);
		((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f7 = L_15;
	}

IL_0064:
	{
		int64_t L_16 = (__this->f4);
		t304  L_17 = {0};
		m11812(&L_17, L_16, &m11812_MI);
		__this->f5 = L_17;
		int64_t L_18 = (__this->f4);
		t1707 * L_19 = p0;
		t304  L_20 = m8724(L_19, &m8724_MI);
		V_4 = L_20;
		int64_t L_21 = m11822((&V_4), &m11822_MI);
		t304  L_22 = {0};
		m11812(&L_22, ((int64_t)((int64_t)L_18+(int64_t)L_21)), &m11812_MI);
		__this->f6 = L_22;
		t1707 * L_23 = p0;
		((t2146_SFs*)InitializedTypeInfo(&t2146_TI)->static_fields)->f8 = L_23;
		return;
	}
}
extern "C" t1707 * m11865 (t2146 * __this, t1565* p0, MethodInfo* method)
{
	{
		t1565* L_0 = p0;
		int32_t L_1 = 0;
		t270  L_2 = {0};
		m11399(&L_2, (*(int64_t*)(int64_t*)SZArrayLdElema(L_0, L_1)), &m11399_MI);
		t1565* L_3 = p0;
		int32_t L_4 = 1;
		t270  L_5 = {0};
		m11399(&L_5, (*(int64_t*)(int64_t*)SZArrayLdElema(L_3, L_4)), &m11399_MI);
		t1565* L_6 = p0;
		int32_t L_7 = 3;
		t304  L_8 = {0};
		m11812(&L_8, (*(int64_t*)(int64_t*)SZArrayLdElema(L_6, L_7)), &m11812_MI);
		t1707 * L_9 = (t1707 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1707_TI));
		m8721(L_9, L_2, L_5, L_8, &m8721_MI);
		return L_9;
	}
}
#include "t1556.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1556_TI;
#include "t1556MD.h"



#include "t2147.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2147_TI;
#include "t2147MD.h"



extern MethodInfo m11866_MI;
extern "C" void m11866 (t2147 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		t1100 * L_2 = p0;
		t2* L_3 = m5741(L_2, (t2*) &_stringLiteral1249, &m5741_MI);
		__this->f11 = L_3;
		return;
	}
}
extern MethodInfo m11867_MI;
extern "C" void m11867 (t2147 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m4498(__this, L_0, L_1, &m4498_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5744(L_2, (t2*) &_stringLiteral1249, L_3, &m5744_MI);
		return;
	}
}
#include "t2110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2110_TI;



extern MethodInfo m11868_MI;
extern "C" void m11868 (t2110 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2812, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233054), &m4458_MI);
		return;
	}
}
extern "C" void m11869 (t2110 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233054), &m4458_MI);
		return;
	}
}
extern "C" void m11870 (t2110 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		t1100 * L_2 = p0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0016:
	{
		t1100 * L_4 = p0;
		t2* L_5 = m5741(L_4, (t2*) &_stringLiteral2813, &m5741_MI);
		__this->f12 = L_5;
		t1100 * L_6 = p0;
		t2* L_7 = m5741(L_6, (t2*) &_stringLiteral2814, &m5741_MI);
		__this->f13 = L_7;
		return;
	}
}
extern MethodInfo m11871_MI;
extern "C" t2* m11871 (t2110 * __this, MethodInfo* method)
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
		bool L_4 = m2738(NULL, L_2, L_3, &m2738_MI);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2* L_5 = (__this->f12);
		t2* L_6 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m1214(NULL, (t2*) &_stringLiteral2810, L_5, L_6, &m1214_MI);
		return L_7;
	}

IL_0039:
	{
		t2* L_8 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m590(NULL, (t2*) &_stringLiteral2811, L_8, &m590_MI);
		return L_9;
	}

IL_004a:
	{
		t2* L_10 = m1099(__this, &m1099_MI);
		return L_10;
	}
}
extern MethodInfo m11872_MI;
extern "C" void m11872 (t2110 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		t1101  L_3 = p1;
		m4498(__this, L_2, L_3, &m4498_MI);
		t1100 * L_4 = p0;
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5729(L_4, (t2*) &_stringLiteral2813, L_5, L_6, &m5729_MI);
		t1100 * L_7 = p0;
		t2* L_8 = (__this->f13);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5729(L_7, (t2*) &_stringLiteral2814, L_8, L_9, &m5729_MI);
		t1100 * L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t126 * L_12 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5729(L_10, (t2*) &_stringLiteral2815, L_11, L_12, &m5729_MI);
		t1100 * L_13 = p0;
		int32_t L_14 = 0;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		t126 * L_16 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		m5729(L_13, (t2*) &_stringLiteral2816, L_15, L_16, &m5729_MI);
		return;
	}
}
#include "t2148.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2148_TI;
#include "t2148MD.h"



extern MethodInfo m11873_MI;
extern "C" void m11873 (t2148 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral2817, &m7847_MI);
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233088), &m4458_MI);
		return;
	}
}
extern MethodInfo m11874_MI;
extern "C" void m11874 (t2148 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5901(__this, L_0, &m5901_MI);
		m4458(__this, ((int32_t)-2146233088), &m4458_MI);
		return;
	}
}
extern MethodInfo m11875_MI;
extern "C" void m11875 (t2148 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t2149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2149_TI;
#include "t2149MD.h"



#include "t2150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2150_TI;
#include "t2150MD.h"



#include "t2151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2151_TI;

extern TypeInfo t1568_TI;
#include "t1568MD.h"
extern Il2CppType t2151_0_0_0;
extern MethodInfo m5743_MI;
extern MethodInfo m5731_MI;
extern MethodInfo m9567_MI;
extern MethodInfo m9565_MI;
extern MethodInfo m9468_MI;


extern MethodInfo m11876_MI;
extern "C" void m11876 (t2151 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		t2* L_1 = m5741(L_0, (t2*) &_stringLiteral1274, &m5741_MI);
		__this->f0 = L_1;
		t1100 * L_2 = p0;
		int32_t L_3 = m5743(L_2, (t2*) &_stringLiteral2818, &m5743_MI);
		__this->f1 = (((uint8_t)L_3));
		t1100 * L_4 = p0;
		t2* L_5 = m5741(L_4, (t2*) &_stringLiteral2024, &m5741_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m11877 (t9 * __this , t126 * p0, t1100 * p1, t1101  p2, MethodInfo* method)
{
	{
		t1100 * L_0 = p1;
		t126 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_1);
		m5744(L_0, (t2*) &_stringLiteral1274, L_2, &m5744_MI);
		t1100 * L_3 = p1;
		m5731(L_3, (t2*) &_stringLiteral2818, 4, &m5731_MI);
		t1100 * L_4 = p1;
		t126 * L_5 = p0;
		t1345 * L_6 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5772_MI, L_5);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9452_MI, L_6);
		m5744(L_4, (t2*) &_stringLiteral2024, L_7, &m5744_MI);
		t1100 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2151_0_0_0), &m329_MI);
		m10327(L_8, L_9, &m10327_MI);
		return;
	}
}
extern "C" void m11878 (t9 * __this , t2101 * p0, t1100 * p1, t1101  p2, MethodInfo* method)
{
	{
		t1100 * L_0 = p1;
		m5744(L_0, (t2*) &_stringLiteral1274, NULL, &m5744_MI);
		t1100 * L_1 = p1;
		m5731(L_1, (t2*) &_stringLiteral2818, 2, &m5731_MI);
		t1100 * L_2 = p1;
		t2101 * L_3 = p0;
		t126 * L_4 = m2511(L_3, &m2511_MI);
		t1345 * L_5 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5772_MI, L_4);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9452_MI, L_5);
		m5744(L_2, (t2*) &_stringLiteral2024, L_6, &m5744_MI);
		t1100 * L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t2151_0_0_0), &m329_MI);
		m10327(L_7, L_8, &m10327_MI);
		return;
	}
}
extern MethodInfo m11879_MI;
extern "C" void m11879 (t9 * __this , t1568 * p0, t1100 * p1, t1101  p2, MethodInfo* method)
{
	{
		t1100 * L_0 = p1;
		t1568 * L_1 = p0;
		t2* L_2 = m9567(L_1, &m9567_MI);
		m5744(L_0, (t2*) &_stringLiteral1274, L_2, &m5744_MI);
		t1100 * L_3 = p1;
		m5731(L_3, (t2*) &_stringLiteral2818, 5, &m5731_MI);
		t1100 * L_4 = p1;
		t1568 * L_5 = p0;
		t1345 * L_6 = m9565(L_5, &m9565_MI);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9452_MI, L_6);
		m5744(L_4, (t2*) &_stringLiteral2024, L_7, &m5744_MI);
		t1100 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2151_0_0_0), &m329_MI);
		m10327(L_8, L_9, &m10327_MI);
		return;
	}
}
extern MethodInfo m11880_MI;
extern "C" void m11880 (t2151 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11881_MI;
extern "C" t9 * m11881 (t2151 * __this, t1101  p0, MethodInfo* method)
{
	t1345 * V_0 = {0};
	t1345 * V_1 = {0};
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
		t1345 * L_3 = m9463(NULL, L_2, &m9463_MI);
		V_0 = L_3;
		t1345 * L_4 = V_0;
		t2* L_5 = (__this->f0);
		t126 * L_6 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5773_MI, L_4, L_5);
		return L_6;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2101_TI));
		t2101 * L_7 = ((t2101_SFs*)InitializedTypeInfo(&t2101_TI)->static_fields)->f0;
		return L_7;
	}

IL_0044:
	{
		t2* L_8 = (__this->f2);
		t1345 * L_9 = m9463(NULL, L_8, &m9463_MI);
		V_1 = L_9;
		t1345 * L_10 = V_1;
		t2* L_11 = (__this->f0);
		t1568 * L_12 = (t1568 *)VirtFuncInvoker1< t1568 *, t2* >::Invoke(&m9468_MI, L_10, L_11);
		return L_12;
	}

IL_005d:
	{
		t2* L_13 = (__this->f0);
		t1345 * L_14 = m9463(NULL, L_13, &m9463_MI);
		return L_14;
	}

IL_0069:
	{
		t2* L_15 = m7847(NULL, (t2*) &_stringLiteral2819, &m7847_MI);
		t169 * L_16 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_16, L_15, &m5735_MI);
		il2cpp_codegen_raise_exception(L_16);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11885_MI;
extern MethodInfo m4445_MI;
extern MethodInfo m5906_MI;
extern MethodInfo m11892_MI;
extern MethodInfo m11893_MI;
extern MethodInfo m11898_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m11884_MI;
extern MethodInfo m5991_MI;


extern MethodInfo m11882_MI;
extern "C" void m11882 (t1196 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m11885(__this, 2, 0, 0, (-1), (-1), &m11885_MI);
		return;
	}
}
extern MethodInfo m11883_MI;
extern TypeInfo* t312_TI_var;
extern "C" void m11883 (t1196 * __this, t2* p0, MethodInfo* method)
{
	static bool m11883_init;
	if (!m11883_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m11883_init = true;
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
		m339(L_1, (t2*) &_stringLiteral466, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		t2* L_2 = p0;
		t312* L_3 = ((t312*)SZArrayNew(t312_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)46);
		t221* L_4 = m4445(L_2, L_3, &m4445_MI);
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
		t2* L_8 = m7847(NULL, (t2*) &_stringLiteral2820, &m7847_MI);
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_9, L_8, &m2910_MI);
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
		int32_t L_13 = m5906(NULL, (*(t2**)(t2**)SZArrayLdElema(L_11, L_12)), &m5906_MI);
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
		int32_t L_17 = m5906(NULL, (*(t2**)(t2**)SZArrayLdElema(L_15, L_16)), &m5906_MI);
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
		int32_t L_21 = m5906(NULL, (*(t2**)(t2**)SZArrayLdElema(L_19, L_20)), &m5906_MI);
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
		int32_t L_25 = m5906(NULL, (*(t2**)(t2**)SZArrayLdElema(L_23, L_24)), &m5906_MI);
		V_5 = L_25;
	}

IL_0082:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		m11885(__this, L_26, L_27, L_28, L_29, L_30, &m11885_MI);
		return;
	}
}
extern MethodInfo m5746_MI;
extern "C" void m5746 (t1196 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		m11885(__this, 2, L_0, L_1, 0, 0, &m11885_MI);
		return;
	}
}
extern "C" void m11884 (t1196 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m11885(__this, 4, L_0, L_1, L_2, L_3, &m11885_MI);
		return;
	}
}
extern "C" void m11885 (t1196 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_1, (t2*) &_stringLiteral2821, &m5722_MI);
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
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_4, (t2*) &_stringLiteral2822, &m5722_MI);
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
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_8, (t2*) &_stringLiteral2823, &m5722_MI);
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
		t903 * L_12 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_12, (t2*) &_stringLiteral2824, &m5722_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0073:
	{
		int32_t L_13 = p4;
		__this->f4 = L_13;
		return;
	}
}
extern MethodInfo m11886_MI;
extern "C" int32_t m11886 (t1196 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m11887_MI;
extern "C" int32_t m11887 (t1196 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11888_MI;
extern "C" int32_t m11888 (t1196 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m11889_MI;
extern "C" int32_t m11889 (t1196 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m11890_MI;
extern "C" int32_t m11890 (t1196 * __this, t9 * p0, MethodInfo* method)
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
		if (((t1196 *)IsInst(L_1, InitializedTypeInfo(&t1196_TI))))
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral2825, &m7847_MI);
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_3, L_2, &m2910_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t9 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, t1196 * >::Invoke(&m11892_MI, __this, ((t1196 *)Castclass(L_4, InitializedTypeInfo(&t1196_TI))));
		return L_5;
	}
}
extern MethodInfo m11891_MI;
extern "C" bool m11891 (t1196 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t1196 * >::Invoke(&m11893_MI, __this, ((t1196 *)IsInst(L_0, InitializedTypeInfo(&t1196_TI))));
		return L_1;
	}
}
extern "C" int32_t m11892 (t1196 * __this, t1196 * p0, MethodInfo* method)
{
	{
		t1196 * L_0 = p0;
		bool L_1 = m11897(NULL, L_0, (t1196 *)NULL, &m11897_MI);
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
		t1196 * L_3 = p0;
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
		t1196 * L_6 = p0;
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
		t1196 * L_9 = p0;
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
		t1196 * L_12 = p0;
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
		t1196 * L_15 = p0;
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
		t1196 * L_18 = p0;
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
		t1196 * L_21 = p0;
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
		t1196 * L_24 = p0;
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
extern "C" bool m11893 (t1196 * __this, t1196 * p0, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		t1196 * L_0 = p0;
		bool L_1 = m11898(NULL, L_0, (t1196 *)NULL, &m11898_MI);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		t1196 * L_2 = p0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		t1196 * L_5 = p0;
		int32_t L_6 = (L_5->f2);
		int32_t L_7 = (__this->f2);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		t1196 * L_8 = p0;
		int32_t L_9 = (L_8->f3);
		int32_t L_10 = (__this->f3);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		t1196 * L_11 = p0;
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
extern MethodInfo m11894_MI;
extern "C" int32_t m11894 (t1196 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f3);
		int32_t L_2 = (__this->f2);
		int32_t L_3 = (__this->f1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
extern "C" t2* m11895 (t1196 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		int32_t* L_0 = &(__this->f1);
		t2* L_1 = m4301(L_0, &m4301_MI);
		int32_t* L_2 = &(__this->f2);
		t2* L_3 = m4301(L_2, &m4301_MI);
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
		t2* L_8 = m4301(L_7, &m4301_MI);
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
		t2* L_13 = m4301(L_12, &m4301_MI);
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
extern "C" t1196 * m11896 (t9 * __this , t2* p0, MethodInfo* method)
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
		t1196 * L_1 = (t1196 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1196_TI));
		m11884(L_1, 0, 0, 0, 0, &m11884_MI);
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
		uint16_t L_4 = m2739(L_2, L_3, &m2739_MI);
		V_7 = L_4;
		uint16_t L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_6 = m5926(NULL, L_5, &m5926_MI);
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
		int32_t L_23 = m2724(L_22, &m2724_MI);
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
		t1196 * L_35 = (t1196 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1196_TI));
		m11884(L_35, L_31, L_32, L_33, L_34, &m11884_MI);
		return L_35;
	}
}
extern "C" bool m11897 (t9 * __this , t1196 * p0, t1196 * p1, MethodInfo* method)
{
	{
		t1196 * L_0 = p0;
		t1196 * L_1 = p1;
		bool L_2 = m5991(NULL, L_0, L_1, &m5991_MI);
		return L_2;
	}
}
extern "C" bool m11898 (t9 * __this , t1196 * p0, t1196 * p1, MethodInfo* method)
{
	{
		t1196 * L_0 = p0;
		t1196 * L_1 = p1;
		bool L_2 = m5991(NULL, L_0, L_1, &m5991_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1921.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1921_TI;
#include "t1921MD.h"

#include "t1843.h"
#include "t1844.h"
#include "t1843MD.h"
extern MethodInfo m9777_MI;
extern MethodInfo m11901_MI;
extern MethodInfo m11903_MI;
extern MethodInfo m5734_MI;
extern MethodInfo m9778_MI;
extern MethodInfo m9779_MI;
extern MethodInfo m11905_MI;
extern MethodInfo m5730_MI;
extern MethodInfo m11904_MI;


extern MethodInfo m11899_MI;
extern "C" void m11899 (t1921 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11900_MI;
extern "C" void m11900 (t1921 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m11901(__this, L_0, 0, &m11901_MI);
		return;
	}
}
extern "C" void m11901 (t1921 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		bool L_0 = p1;
		__this->f0 = L_0;
		t9 * L_1 = p0;
		m11903(__this, L_1, &m11903_MI);
		return;
	}
}
extern MethodInfo m11902_MI;
extern "C" void m11902 (t1921 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1100 * L_2 = p0;
		bool L_3 = m5734(L_2, (t2*) &_stringLiteral2826, &m5734_MI);
		__this->f0 = L_3;
		t1100 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_6 = m5732(L_4, (t2*) &_stringLiteral2827, L_5, &m5732_MI);
		V_0 = L_6;
		t9 * L_7 = V_0;
		m11903(__this, L_7, &m11903_MI);
		return;
	}
}
extern "C" void m11903 (t1921 * __this, t9 * p0, MethodInfo* method)
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
		t1843  L_2 = m9778(NULL, L_1, 1, &m9778_MI);
		__this->f1 = L_2;
		goto IL_0024;
	}

IL_0017:
	{
		t9 * L_3 = p0;
		t1843  L_4 = m9778(NULL, L_3, 0, &m9778_MI);
		__this->f1 = L_4;
	}

IL_0024:
	{
		return;
	}
}
extern "C" t9 * m11904 (t1921 * __this, MethodInfo* method)
{
	{
		t1843 * L_0 = &(__this->f1);
		t9 * L_1 = m9777(L_0, &m9777_MI);
		return L_1;
	}
}
extern "C" bool m11905 (t1921 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11906_MI;
extern "C" void m11906 (t1921 * __this, MethodInfo* method)
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
		t1843 * L_0 = &(__this->f1);
		m9779(L_0, &m9779_MI);
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
extern MethodInfo m11907_MI;
extern "C" void m11907 (t1921 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11905_MI, __this);
		m5730(L_2, (t2*) &_stringLiteral2826, L_3, &m5730_MI);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t1100 * L_4 = p0;
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m11904_MI, __this);
		m5744(L_4, (t2*) &_stringLiteral2827, L_5, &m5744_MI);
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
		t1100 * L_6 = p0;
		m5744(L_6, (t2*) &_stringLiteral2827, NULL, &m5744_MI);
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
