#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1477.h"
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
extern TypeInfo t1477_TI;
#include "t1477MD.h"

#include "t58.h"
#include "t1588.h"
#include "t122.h"
#include "t124.h"
#include "t125.h"
#include "t9.h"
#include "mscorlib_ArrayTypes.h"
#include "t2.h"
#include "t132.h"
#include "t169.h"
#include "t556.h"
#include "t297.h"
#include "t292.h"
#include "t156.h"
#include "t896.h"
#include "t1587.h"
#include "t126.h"
#include "t1521.h"
extern TypeInfo t1588_TI;
extern TypeInfo t122_TI;
extern TypeInfo t124_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t556_TI;
extern TypeInfo t896_TI;
extern TypeInfo t1587_TI;
extern TypeInfo t126_TI;
extern TypeInfo t2_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t9_TI;
#include "t1587MD.h"
#include "t58MD.h"
#include "t1588MD.h"
#include "t1200MD.h"
#include "t1517MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t556MD.h"
#include "t297MD.h"
#include "t896MD.h"
#include "t1861MD.h"
#include "t294MD.h"
#include "t9MD.h"
#include "t126MD.h"
#include "t1521MD.h"
extern MethodInfo m9767_MI;
extern MethodInfo m4436_MI;
extern MethodInfo m7826_MI;
extern MethodInfo m5742_MI;
extern MethodInfo m7551_MI;
extern MethodInfo m11074_MI;
extern MethodInfo m6867_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5706_MI;
extern MethodInfo m5687_MI;
extern MethodInfo m5691_MI;
extern MethodInfo m11068_MI;
extern MethodInfo m11796_MI;
extern MethodInfo m5693_MI;
extern MethodInfo m9824_MI;
extern MethodInfo m11069_MI;
extern MethodInfo m9825_MI;
extern MethodInfo m1067_MI;
extern MethodInfo m9769_MI;
extern MethodInfo m1069_MI;
extern MethodInfo m11075_MI;
extern MethodInfo m9766_MI;
extern MethodInfo m11073_MI;
extern MethodInfo m9768_MI;
extern MethodInfo m2486_MI;
extern MethodInfo m4385_MI;
extern MethodInfo m6883_MI;
extern MethodInfo m646_MI;

#include "t121.h"

extern MethodInfo m11065_MI;
extern "C" void m11065 (t1477 * __this, MethodInfo* method)
{
	{
		m5742(__this, &m5742_MI);
		return;
	}
}
extern MethodInfo m11066_MI;
extern "C" void m11066 (t9 * __this , MethodInfo* method)
{
	{
		t58 L_0 = m7551(NULL, (-1), &m7551_MI);
		((t1477_SFs*)InitializedTypeInfo(&t1477_TI)->static_fields)->f3 = L_0;
		return;
	}
}
extern MethodInfo m11067_MI;
extern "C" void m11067 (t1477 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m11074_MI, __this, 1);
		m6867(NULL, __this, &m6867_MI);
		return;
	}
}
extern "C" void m11068 (t9 * __this , t2075* p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1477 * V_1 = {0};
	t2075* V_2 = {0};
	int32_t V_3 = 0;
	{
		t2075* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2570, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2075* L_2 = p0;
		V_0 = (((int32_t)(((t121 *)L_2)->max_length)));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0022;
		}
	}
	{
		t169 * L_4 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_4, (t2*) &_stringLiteral2571, &m5706_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		t2075* L_5 = p0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_005b;
	}

IL_0028:
	{
		t2075* L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		V_1 = (*(t1477 **)(t1477 **)SZArrayLdElema(L_6, L_8));
		t1477 * L_9 = V_1;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		t132 * L_10 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m5687(L_10, (t2*) &_stringLiteral2570, (t2*) &_stringLiteral2572, &m5687_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003f:
	{
		t1477 * L_11 = V_1;
		t1588 * L_12 = (L_11->f2);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_13, (t2*) &_stringLiteral2573, (t2*) &_stringLiteral2574, &m5691_MI);
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
		t2075* L_16 = V_2;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
extern "C" int32_t m11069 (t9 * __this , t2075* p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef int32_t (*m11069_ftn) (t2075*, int32_t, bool);
	static m11069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11069_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m11070_MI;
extern "C" int32_t m11070 (t9 * __this , t2075* p0, t297  p1, bool p2, MethodInfo* method)
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
		t2075* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1477_TI));
		m11068(NULL, L_0, 0, &m11068_MI);
		double L_1 = m11796((&p1), &m11796_MI);
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
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_4, (t2*) &_stringLiteral442, &m5693_MI);
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
			m9824(NULL, &m9824_MI);
		}

IL_0031:
		{
			t2075* L_6 = p0;
			int64_t L_7 = V_0;
			bool L_8 = p2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1477_TI));
			int32_t L_9 = m11069(NULL, L_6, (((int32_t)L_7)), L_8, &m11069_MI);
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
			m9825(NULL, &m9825_MI);
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
extern MethodInfo m11071_MI;
extern "C" t58 m11071 (t1477 * __this, MethodInfo* method)
{
	{
		t1588 * L_0 = (__this->f2);
		t58 L_1 = m9767(L_0, &m9767_MI);
		return L_1;
	}
}
extern MethodInfo m11072_MI;
extern "C" void m11072 (t1477 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1477_TI));
		t58 L_1 = ((t1477_SFs*)InitializedTypeInfo(&t1477_TI)->static_fields)->f3;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1477_TI));
		t58 L_3 = ((t1477_SFs*)InitializedTypeInfo(&t1477_TI)->static_fields)->f3;
		t1588 * L_4 = (t1588 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1588_TI));
		m7826(L_4, L_3, 0, &m7826_MI);
		__this->f2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		t58 L_5 = p0;
		t1588 * L_6 = (t1588 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1588_TI));
		m7826(L_6, L_5, 1, &m7826_MI);
		__this->f2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
extern "C" bool m11073 (t1477 * __this, t58 p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef bool (*m11073_ftn) (t1477 *, t58, int32_t, bool);
	static m11073_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11073_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" void m11074 (t1477 * __this, bool p0, MethodInfo* method)
{
	t1477 * V_0 = {0};
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
		t1588 * L_1 = (__this->f2);
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
		t1477 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1588 * L_3 = (__this->f2);
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_0028:
		{
			t1588 * L_4 = (__this->f2);
			VirtActionInvoker0::Invoke(&m9769_MI, L_4);
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
		t1477 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
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
extern MethodInfo m6965_MI;
extern "C" bool m6965 (t1477 * __this, MethodInfo* method)
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
		m11075(__this, &m11075_MI);
		V_0 = 0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1588 * L_0 = (__this->f2);
			m9766(L_0, (&V_0), &m9766_MI);
			t1588 * L_1 = (__this->f2);
			t58 L_2 = m9767(L_1, &m9767_MI);
			bool L_3 = m11073(__this, L_2, (-1), 0, &m11073_MI);
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
			t1588 * L_5 = (__this->f2);
			m9768(L_5, &m9768_MI);
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
extern MethodInfo m6997_MI;
extern "C" bool m6997 (t1477 * __this, int32_t p0, bool p1, MethodInfo* method)
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
		m11075(__this, &m11075_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_1, (t2*) &_stringLiteral2552, &m5693_MI);
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
			m9824(NULL, &m9824_MI);
		}

IL_001f:
		{
			t1588 * L_3 = (__this->f2);
			m9766(L_3, (&V_0), &m9766_MI);
			t1588 * L_4 = (__this->f2);
			t58 L_5 = m9767(L_4, &m9767_MI);
			int32_t L_6 = p0;
			bool L_7 = p1;
			bool L_8 = m11073(__this, L_5, L_6, L_7, &m11073_MI);
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
			m9825(NULL, &m9825_MI);
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
			t1588 * L_11 = (__this->f2);
			m9768(L_11, &m9768_MI);
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
extern "C" void m11075 (t1477 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		t1588 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0021;
		}
	}

IL_0010:
	{
		t126 * L_2 = m2486(__this, &m2486_MI);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_2);
		t1521 * L_4 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_4, L_3, &m6883_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m11076_MI;
extern "C" void m11076 (t1477 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m11074_MI, __this, 0);
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
#include "t2076.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2076_TI;
#include "t2076MD.h"

#include "t1093.h"
#include "t1094.h"
#include "t1582MD.h"
#include "t1360MD.h"
#include "t138MD.h"
extern MethodInfo m7818_MI;
extern MethodInfo m5872_MI;
extern MethodInfo m4433_MI;
extern MethodInfo m11780_MI;


extern MethodInfo m11077_MI;
extern "C" void m11077 (t2076 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2575, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467261), &m4433_MI);
		return;
	}
}
extern MethodInfo m11078_MI;
extern "C" void m11078 (t2076 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2077.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2077_TI;
#include "t2077MD.h"

extern MethodInfo m11082_MI;


extern MethodInfo m11079_MI;
extern "C" void m11079 (t2077 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11080_MI;
extern "C" void m11080 (t2077 * __this, MethodInfo* method)
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
		m11082(__this, 0, &m11082_MI);
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
extern MethodInfo m11081_MI;
extern "C" void m11081 (t2077 * __this, MethodInfo* method)
{
	{
		m11082(__this, 1, &m11082_MI);
		m6867(NULL, __this, &m6867_MI);
		return;
	}
}
extern "C" void m11082 (t2077 * __this, bool p0, MethodInfo* method)
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
#include "t1338.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1338_TI;
#include "t1338MD.h"

#include "t926.h"
#include "t918.h"
#include "t894.h"
#include "t819.h"
#include "t315.h"
#include "t907.h"
#include "t927.h"
#include "t2117.h"
#include "t2124.h"
#include "t1564.h"
#include "t127.h"
extern TypeInfo t158_TI;
extern TypeInfo t926_TI;
extern TypeInfo t152_TI;
extern TypeInfo t919_TI;
extern TypeInfo t819_TI;
extern TypeInfo t918_TI;
extern TypeInfo t907_TI;
extern TypeInfo t1797_TI;
extern TypeInfo t928_TI;
extern TypeInfo t927_TI;
extern TypeInfo t315_TI;
extern TypeInfo t2117_TI;
extern TypeInfo t894_TI;
extern TypeInfo t2124_TI;
extern TypeInfo t1564_TI;
#include "t926MD.h"
#include "t2MD.h"
#include "t315MD.h"
#include "t2117MD.h"
#include "t1842MD.h"
#include "t907MD.h"
#include "t819MD.h"
#include "t2124MD.h"
extern Il2CppType t158_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t1578_0_0_0;
extern Il2CppType t1579_0_0_0;
extern Il2CppType t122_0_0_0;
extern Il2CppType t1577_0_0_0;
extern MethodInfo m5746_MI;
extern MethodInfo m11085_MI;
extern MethodInfo m9479_MI;
extern MethodInfo m11086_MI;
extern MethodInfo m11087_MI;
extern MethodInfo m7773_MI;
extern MethodInfo m511_MI;
extern MethodInfo m11955_MI;
extern MethodInfo m11987_MI;
extern MethodInfo m7733_MI;
extern MethodInfo m11089_MI;
extern MethodInfo m1150_MI;
extern MethodInfo m7770_MI;
extern MethodInfo m1154_MI;
extern MethodInfo m5856_MI;
extern MethodInfo m5961_MI;
extern MethodInfo m1190_MI;
extern MethodInfo m11562_MI;
extern MethodInfo m11088_MI;
extern MethodInfo m7729_MI;
extern MethodInfo m7819_MI;
extern MethodInfo m9776_MI;
extern MethodInfo m12000_MI;
extern MethodInfo m11997_MI;
extern MethodInfo m11586_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m7769_MI;
extern MethodInfo m610_MI;
extern MethodInfo m11564_MI;
extern MethodInfo m4392_MI;
extern MethodInfo m329_MI;
extern MethodInfo m7722_MI;


extern MethodInfo m11083_MI;
extern "C" t9 * m11083 (t9 * __this , t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t9 * L_1 = m5746(NULL, L_0, 0, &m5746_MI);
		return L_1;
	}
}
extern MethodInfo m11084_MI;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m11084 (t9 * __this , t126 * p0, t158* p1, MethodInfo* method)
{
	static bool m11084_init;
	if (!m11084_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11084_init = true;
	}
	{
		t126 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = m11085(NULL, L_0, L_1, ((t158*)SZArrayNew(t158_TI_var, 0)), &m11085_MI);
		return L_2;
	}
}
extern "C" t9 * m11085 (t9 * __this , t126 * p0, t158* p1, t158* p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_1 = m9479(NULL, &m9479_MI);
		t158* L_2 = p1;
		t158* L_3 = p2;
		t9 * L_4 = m11086(NULL, L_0, 0, L_1, L_2, (t894 *)NULL, L_3, &m11086_MI);
		return L_4;
	}
}
extern TypeInfo* t152_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" t9 * m11086 (t9 * __this , t126 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, t158* p5, MethodInfo* method)
{
	static bool m11086_init;
	if (!m11086_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11086_init = true;
	}
	int32_t V_0 = 0;
	t152* V_1 = {0};
	int32_t V_2 = 0;
	t819 * V_3 = {0};
	t315 * V_4 = {0};
	t126 * V_5 = {0};
	t152* V_6 = {0};
	int32_t V_7 = 0;
	t2* V_8 = {0};
	t9 * V_9 = {0};
	t152* G_B9_0 = {0};
	t315 * G_B23_0 = {0};
	t315 * G_B22_0 = {0};
	t2* G_B24_0 = {0};
	t315 * G_B24_1 = {0};
	{
		t126 * L_0 = p0;
		m11087(NULL, L_0, &m11087_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_3, (t2*) &_stringLiteral2576, &m511_MI);
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_5, L_4, (t2*) &_stringLiteral1109, &m5691_MI);
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
		t126 * L_21 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_18, L_20)), &m2486_MI);
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
		t926 * L_25 = p2;
		if (L_25)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_26 = m9479(NULL, &m9479_MI);
		p2 = L_26;
	}

IL_0074:
	{
		t926 * L_27 = p2;
		int32_t L_28 = p1;
		t126 * L_29 = p0;
		int32_t L_30 = p1;
		t919* L_31 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m11955_MI, L_29, L_30);
		t152* L_32 = V_1;
		t907 * L_33 = (t907 *)VirtFuncInvoker4< t907 *, int32_t, t1797*, t152*, t928* >::Invoke(&m11987_MI, L_27, L_28, (t1797*)(t1797*)L_31, L_32, (t928*)(t928*)NULL);
		V_3 = ((t819 *)Castclass(L_33, InitializedTypeInfo(&t819_TI)));
		t819 * L_34 = V_3;
		if (L_34)
		{
			goto IL_0125;
		}
	}
	{
		t126 * L_35 = p0;
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_35);
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
		t9 * L_39 = m11089(NULL, L_38, &m11089_MI);
		return L_39;
	}

IL_00a4:
	{
		t315 * L_40 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_40, &m1150_MI);
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
		t315 * L_45 = V_4;
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
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_47);
		G_B24_0 = L_48;
		G_B24_1 = G_B22_0;
		goto IL_00ce;
	}

IL_00c9:
	{
		G_B24_0 = (t2*) &_stringLiteral2577;
		G_B24_1 = G_B23_0;
	}

IL_00ce:
	{
		m1154(G_B24_1, G_B24_0, &m1154_MI);
		t315 * L_49 = V_4;
		m1154(L_49, (t2*) &_stringLiteral388, &m1154_MI);
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
		t315 * L_53 = V_4;
		int32_t L_54 = m5856(L_53, &m5856_MI);
		if ((((int32_t)L_54) <= ((int32_t)2)))
		{
			goto IL_0108;
		}
	}
	{
		t315 * L_55 = V_4;
		t315 * L_56 = L_55;
		int32_t L_57 = m5856(L_56, &m5856_MI);
		m5961(L_56, ((int32_t)((int32_t)L_57-(int32_t)2)), &m5961_MI);
	}

IL_0108:
	{
		t2* L_58 = m7818(NULL, (t2*) &_stringLiteral2578, &m7818_MI);
		t126 * L_59 = p0;
		t2* L_60 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_59);
		t315 * L_61 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_62 = m1190(NULL, L_58, L_60, L_61, &m1190_MI);
		t2117 * L_63 = (t2117 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2117_TI));
		m11562(L_63, L_62, &m11562_MI);
		il2cpp_codegen_raise_exception(L_63);
	}

IL_0125:
	{
		t126 * L_64 = p0;
		m11088(NULL, L_64, &m11088_MI);
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
		bool L_68 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7729_MI, L_67);
		if (L_68)
		{
			goto IL_0161;
		}
	}
	{
		t158* L_69 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_70 = p0;
		t2* L_71 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_70);
		ArrayElementTypeCheck (L_69, L_71);
		*((t9 **)(t9 **)SZArrayLdElema(L_69, 0)) = (t9 *)L_71;
		t2* L_72 = m7819(NULL, (t2*) &_stringLiteral2579, L_69, &m7819_MI);
		V_8 = L_72;
		t2* L_73 = V_8;
		t169 * L_74 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_74, L_73, &m5706_MI);
		il2cpp_codegen_raise_exception(L_74);
	}

IL_0161:
	{
		t126 * L_75 = p0;
		t158* L_76 = p5;
		t9 * L_77 = m9776(NULL, L_75, L_76, &m9776_MI);
		V_9 = L_77;
		t9 * L_78 = V_9;
		if (!L_78)
		{
			goto IL_0180;
		}
	}
	{
		t819 * L_79 = V_3;
		t9 * L_80 = V_9;
		int32_t L_81 = p1;
		t926 * L_82 = p2;
		t158* L_83 = p3;
		t894 * L_84 = p4;
		VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_79, L_80, L_81, L_82, L_83, L_84);
		t9 * L_85 = V_9;
		return L_85;
	}

IL_0180:
	{
		t819 * L_86 = V_3;
		int32_t L_87 = p1;
		t926 * L_88 = p2;
		t158* L_89 = p3;
		t894 * L_90 = p4;
		t9 * L_91 = (t9 *)VirtFuncInvoker4< t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m11997_MI, L_86, L_87, L_88, L_89, L_90);
		return L_91;
	}
}
extern "C" t9 * m5746 (t9 * __this , t126 * p0, bool p1, MethodInfo* method)
{
	t819 * V_0 = {0};
	t2124 * V_1 = {0};
	int32_t V_2 = {0};
	{
		t126 * L_0 = p0;
		m11087(NULL, L_0, &m11087_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_3, (t2*) &_stringLiteral2576, &m511_MI);
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_5, L_4, (t2*) &_stringLiteral1109, &m5691_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0024:
	{
		t126 * L_6 = p0;
		m11088(NULL, L_6, &m11088_MI);
		t126 * L_7 = p0;
		V_1 = ((t2124 *)IsInst(L_7, InitializedTypeInfo(&t2124_TI)));
		t2124 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		t2124 * L_9 = V_1;
		t819 * L_10 = m11586(L_9, &m11586_MI);
		V_0 = L_10;
		bool L_11 = p1;
		if (L_11)
		{
			goto IL_004b;
		}
	}
	{
		t819 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t819 * L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4366_MI, L_13);
		if (L_14)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = (t819 *)NULL;
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
		t819 * L_20 = (t819 *)VirtFuncInvoker5< t819 *, int32_t, t926 *, int32_t, t152*, t928* >::Invoke(&m7769_MI, L_17, L_18, (t926 *)NULL, 3, L_19, (t928*)(t928*)NULL);
		V_0 = L_20;
	}

IL_0068:
	{
		t819 * L_21 = V_0;
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		t126 * L_22 = p0;
		bool L_23 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_22);
		if (!L_23)
		{
			goto IL_007a;
		}
	}
	{
		t126 * L_24 = p0;
		t9 * L_25 = m11089(NULL, L_24, &m11089_MI);
		return L_25;
	}

IL_007a:
	{
		t2* L_26 = m7818(NULL, (t2*) &_stringLiteral2580, &m7818_MI);
		t126 * L_27 = p0;
		t2* L_28 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_27);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_29 = m610(NULL, (t2*) &_stringLiteral2581, L_28, &m610_MI);
		t2117 * L_30 = (t2117 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2117_TI));
		m11564(L_30, L_26, L_29, &m11564_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009a:
	{
		t819 * L_31 = V_0;
		t9 * L_32 = m4392(L_31, (t158*)(t158*)NULL, &m4392_MI);
		return L_32;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11087 (t9 * __this , t126 * p0, MethodInfo* method)
{
	static bool m11087_init;
	if (!m11087_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11087_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1109, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1578_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_2) == ((t9*)(t126 *)L_3)))
		{
			goto IL_0042;
		}
	}
	{
		t126 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t1579_0_0_0), &m329_MI);
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
		t126 * L_9 = m329(NULL, LoadTypeToken(&t1577_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_8) == ((t9*)(t126 *)L_9))))
		{
			goto IL_0063;
		}
	}

IL_0042:
	{
		t158* L_10 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_11 = p0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_11);
		ArrayElementTypeCheck (L_10, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 0)) = (t9 *)L_12;
		t2* L_13 = m7819(NULL, (t2*) &_stringLiteral2582, L_10, &m7819_MI);
		V_0 = L_13;
		t2* L_14 = V_0;
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_15, L_14, &m5706_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0063:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11088 (t9 * __this , t126 * p0, MethodInfo* method)
{
	static bool m11088_init;
	if (!m11088_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11088_init = true;
	}
	t2* V_0 = {0};
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7722_MI, L_0);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t126 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_4;
		t2* L_5 = m7819(NULL, (t2*) &_stringLiteral2583, L_2, &m7819_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		t2117 * L_7 = (t2117 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2117_TI));
		m11562(L_7, L_6, &m11562_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0029:
	{
		return;
	}
}
extern "C" t9 * m11089 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t9 * (*m11089_ftn) (t126 *);
	static m11089_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11089_ftn)il2cpp_codegen_resolve_icall ("System.Activator::CreateInstanceInternal(System.Type)");
	return _il2cpp_icall_func(p0);
}
#include "t2027.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2027_TI;
#include "t2027MD.h"

#include "t1735.h"
#include "t1739.h"
#include "t1742.h"
#include "t1336.h"
#include "t1791.h"
#include "t1711.h"
#include "t1852.h"
#include "t911.h"
extern TypeInfo t1735_TI;
extern TypeInfo t1711_TI;
extern TypeInfo t911_TI;
#include "t1735MD.h"
#include "t1711MD.h"
#include "t911MD.h"
extern MethodInfo m11091_MI;
extern MethodInfo m9067_MI;
extern MethodInfo m11097_MI;
extern MethodInfo m2699_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m11095_MI;
extern MethodInfo m8823_MI;
extern MethodInfo m11526_MI;
extern MethodInfo m11532_MI;
extern MethodInfo m11100_MI;
extern MethodInfo m11090_MI;


extern "C" t2* m11090 (t2027 * __this, MethodInfo* method)
{
	typedef t2* (*m11090_ftn) (t2027 *);
	static m11090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11090_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::getFriendlyName()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2027 * m11091 (t9 * __this , MethodInfo* method)
{
	typedef t2027 * (*m11091_ftn) ();
	static m11091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11091_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::getCurDomain()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11092_MI;
extern "C" t2027 * m11092 (t9 * __this , MethodInfo* method)
{
	{
		t2027 * L_0 = m11091(NULL, &m11091_MI);
		return L_0;
	}
}
extern MethodInfo m11093_MI;
extern "C" t1735 * m11093 (t2027 * __this, t1739 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1739 * L_0 = p0;
		int32_t L_1 = p1;
		t1735 * L_2 = (t1735 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1735_TI));
		m9067(L_2, L_0, (t2*)NULL, L_1, 1, &m9067_MI);
		return L_2;
	}
}
extern MethodInfo m11094_MI;
extern "C" t9 * m11094 (t2027 * __this, MethodInfo* method)
{
	{
		return NULL;
	}
}
extern "C" t1336 * m11095 (t2027 * __this, t2* p0, t1791 * p1, bool p2, MethodInfo* method)
{
	typedef t1336 * (*m11095_ftn) (t2027 *, t2*, t1791 *, bool);
	static m11095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11095_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m11096_MI;
extern "C" t1336 * m11096 (t2027 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t1336 * L_1 = m11097(__this, L_0, (t1791 *)NULL, 0, &m11097_MI);
		return L_1;
	}
}
extern "C" t1336 * m11097 (t2027 * __this, t2* p0, t1791 * p1, bool p2, MethodInfo* method)
{
	t1336 * V_0 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2584, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral2585, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		t1791 * L_6 = p1;
		bool L_7 = p2;
		t1336 * L_8 = m11095(__this, L_5, L_6, L_7, &m11095_MI);
		V_0 = L_8;
		t1336 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_10 = p0;
		t1711 * L_11 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8823(L_11, (t2*)NULL, L_10, &m8823_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0036:
	{
		t1336 * L_12 = V_0;
		return L_12;
	}
}
extern MethodInfo m11098_MI;
extern "C" t1852 * m11098 (t9 * __this , MethodInfo* method)
{
	typedef t1852 * (*m11098_ftn) ();
	static m11098_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11098_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetContext()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11099_MI;
extern "C" t1852 * m11099 (t9 * __this , MethodInfo* method)
{
	typedef t1852 * (*m11099_ftn) ();
	static m11099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11099_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetDefaultContext()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11100 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t2* (*m11100_ftn) (t2*);
	static m11100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11100_ftn)il2cpp_codegen_resolve_icall ("System.AppDomain::InternalGetProcessGuid(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m11101_MI;
extern "C" t2* m11101 (t9 * __this , MethodInfo* method)
{
	t911  V_0 = {0};
	{
		t2* L_0 = ((t2027_SFs*)InitializedTypeInfo(&t2027_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		t911  L_1 = m11526(NULL, &m11526_MI);
		V_0 = L_1;
		t2* L_2 = m11532((&V_0), &m11532_MI);
		t2* L_3 = m11100(NULL, L_2, &m11100_MI);
		((t2027_SFs*)InitializedTypeInfo(&t2027_TI)->static_fields)->f2 = L_3;
	}

IL_001e:
	{
		t2* L_4 = ((t2027_SFs*)InitializedTypeInfo(&t2027_TI)->static_fields)->f2;
		return L_4;
	}
}
extern MethodInfo m11102_MI;
extern "C" t2* m11102 (t2027 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11090(__this, &m11090_MI);
		return L_0;
	}
}
#include "t2078.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2078_TI;
#include "t2078MD.h"



#include "t2084.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2084_TI;
#include "t2084MD.h"

extern MethodInfo m336_MI;


extern MethodInfo m11103_MI;
extern "C" void m11103 (t2084 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t2087.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2087_TI;
#include "t2087MD.h"

extern MethodInfo m379_MI;
extern MethodInfo m7000_MI;


extern MethodInfo m11104_MI;
extern "C" void m11104 (t2087 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2586, &m7818_MI);
		m379(__this, L_0, &m379_MI);
		m4433(__this, ((int32_t)-2146232832), &m4433_MI);
		return;
	}
}
extern MethodInfo m11105_MI;
extern "C" void m11105 (t2087 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		m4433(__this, ((int32_t)-2146232832), &m4433_MI);
		return;
	}
}
extern MethodInfo m11106_MI;
extern "C" void m11106 (t2087 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m7000(__this, L_0, L_1, &m7000_MI);
		return;
	}
}
#include "t2079.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2079_TI;
#include "t2079MD.h"



extern MethodInfo m11107_MI;
extern "C" void m11107 (t2079 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
extern MethodInfo m11108_MI;
extern "C" t2* m11108 (t2079 * __this, MethodInfo* method)
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
extern TypeInfo t1093_TI;
extern TypeInfo t1094_TI;
#include "t886MD.h"
#include "t1093MD.h"
extern MethodInfo m11112_MI;
extern MethodInfo m1083_MI;
extern MethodInfo m5775_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m11781_MI;
extern MethodInfo m5712_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m5715_MI;


extern MethodInfo m11109_MI;
extern "C" void m11109 (t556 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2588, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147024809), &m4433_MI);
		return;
	}
}
extern "C" void m2885 (t556 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147024809), &m4433_MI);
		return;
	}
}
extern MethodInfo m5827_MI;
extern "C" void m5827 (t556 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11781(__this, L_0, L_1, &m11781_MI);
		m4433(__this, ((int32_t)-2147024809), &m4433_MI);
		return;
	}
}
extern "C" void m5691 (t556 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		t2* L_1 = p1;
		__this->f12 = L_1;
		m4433(__this, ((int32_t)-2147024809), &m4433_MI);
		return;
	}
}
extern MethodInfo m11110_MI;
extern "C" void m11110 (t556 * __this, t2* p0, t2* p1, t138 * p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p2;
		m11781(__this, L_0, L_1, &m11781_MI);
		t2* L_2 = p1;
		__this->f12 = L_2;
		m4433(__this, ((int32_t)-2147024809), &m4433_MI);
		return;
	}
}
extern MethodInfo m11111_MI;
extern "C" void m11111 (t556 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral2589, &m5712_MI);
		__this->f12 = L_3;
		return;
	}
}
extern "C" t2* m11112 (t556 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m11113_MI;
extern "C" t2* m11113 (t556 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11112_MI, __this);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11112_MI, __this);
		int32_t L_2 = m2699(L_1, &m2699_MI);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_3 = m1083(__this, &m1083_MI);
		t2* L_4 = m5775(NULL, &m5775_MI);
		t2* L_5 = m7818(NULL, (t2*) &_stringLiteral2587, &m7818_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11112_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m4419(NULL, L_3, L_4, L_5, L_6, &m4419_MI);
		return L_7;
	}

IL_0036:
	{
		t2* L_8 = m1083(__this, &m1083_MI);
		return L_8;
	}
}
extern MethodInfo m11114_MI;
extern "C" void m11114 (t556 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m4473(__this, L_0, L_1, &m4473_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11112_MI, __this);
		m5715(L_2, (t2*) &_stringLiteral2589, L_3, &m5715_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11115_MI;
extern "C" void m11115 (t132 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2590, &m7818_MI);
		m2885(__this, L_0, &m2885_MI);
		m4433(__this, ((int32_t)-2147467261), &m4433_MI);
		return;
	}
}
extern "C" void m339 (t132 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2590, &m7818_MI);
		t2* L_1 = p0;
		m5691(__this, L_0, L_1, &m5691_MI);
		m4433(__this, ((int32_t)-2147467261), &m4433_MI);
		return;
	}
}
extern "C" void m5687 (t132 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t2* L_1 = p0;
		m5691(__this, L_0, L_1, &m5691_MI);
		m4433(__this, ((int32_t)-2147467261), &m4433_MI);
		return;
	}
}
extern MethodInfo m11116_MI;
extern "C" void m11116 (t132 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11111(__this, L_0, L_1, &m11111_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2395_MI;


extern MethodInfo m5870_MI;
extern "C" void m5870 (t896 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2591, &m7818_MI);
		m2885(__this, L_0, &m2885_MI);
		m4433(__this, ((int32_t)-2146233086), &m4433_MI);
		return;
	}
}
extern "C" void m5693 (t896 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2591, &m7818_MI);
		t2* L_1 = p0;
		m5691(__this, L_0, L_1, &m5691_MI);
		m4433(__this, ((int32_t)-2146233086), &m4433_MI);
		return;
	}
}
extern MethodInfo m4336_MI;
extern "C" void m4336 (t896 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t2* L_1 = p0;
		m5691(__this, L_0, L_1, &m5691_MI);
		m4433(__this, ((int32_t)-2146233086), &m4433_MI);
		return;
	}
}
extern MethodInfo m11117_MI;
extern "C" void m11117 (t896 * __this, t2* p0, t9 * p1, t2* p2, MethodInfo* method)
{
	{
		t2* L_0 = p2;
		t2* L_1 = p0;
		m5691(__this, L_0, L_1, &m5691_MI);
		t9 * L_2 = p1;
		__this->f13 = L_2;
		m4433(__this, ((int32_t)-2146233086), &m4433_MI);
		return;
	}
}
extern MethodInfo m11118_MI;
extern "C" void m11118 (t896 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11111(__this, L_0, L_1, &m11111_MI);
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral2592, &m5712_MI);
		__this->f13 = L_3;
		return;
	}
}
extern MethodInfo m11119_MI;
extern "C" t2* m11119 (t896 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = m11113(__this, &m11113_MI);
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
		t2* L_4 = m5775(NULL, &m5775_MI);
		t9 * L_5 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m2395(NULL, L_3, L_4, L_5, &m2395_MI);
		return L_6;
	}
}
extern MethodInfo m11120_MI;
extern "C" void m11120 (t896 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11114(__this, L_0, L_1, &m11114_MI);
		t1093 * L_2 = p0;
		t9 * L_3 = (__this->f13);
		m5715(L_2, (t2*) &_stringLiteral2592, L_3, &m5715_MI);
		return;
	}
}
#include "t1515.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1515_TI;
#include "t1515MD.h"



extern MethodInfo m11121_MI;
extern "C" void m11121 (t1515 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2593, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147024362), &m4433_MI);
		return;
	}
}
extern MethodInfo m6858_MI;
extern "C" void m6858 (t1515 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147024362), &m4433_MI);
		return;
	}
}
extern MethodInfo m11122_MI;
extern "C" void m11122 (t1515 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2088.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2088_TI;
#include "t2088MD.h"



extern MethodInfo m11123_MI;
extern "C" void m11123 (t2088 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2594, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233085), &m4433_MI);
		return;
	}
}
extern MethodInfo m11124_MI;
extern "C" void m11124 (t2088 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233085), &m4433_MI);
		return;
	}
}
extern MethodInfo m11125_MI;
extern "C" void m11125 (t2088 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2089.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2089_TI;
#include "t2089MD.h"



#include "t1549.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1549_TI;
#include "t1549MD.h"



#include "t1334.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1334_TI;
#include "t1334MD.h"

#include "t568.h"
#include "t296.h"
extern TypeInfo t723_TI;
extern TypeInfo t568_TI;
extern Il2CppType t723_0_0_0;
extern MethodInfo m11128_MI;
extern MethodInfo m11127_MI;
extern MethodInfo m11133_MI;
extern MethodInfo m11135_MI;
extern MethodInfo m11132_MI;
extern MethodInfo m11136_MI;
extern MethodInfo m11131_MI;
extern MethodInfo m11134_MI;
extern MethodInfo m11137_MI;
extern MethodInfo m4330_MI;
extern MethodInfo m2733_MI;
extern MethodInfo m1156_MI;


extern MethodInfo m11126_MI;
extern "C" void m11126 (t9 * __this , MethodInfo* method)
{
	{
		bool L_0 = m11128(NULL, &m11128_MI);
		((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f0 = L_0;
		bool L_1 = m11127(NULL, &m11127_MI);
		((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1 = L_1;
		return;
	}
}
extern "C" bool m11127 (t9 * __this , MethodInfo* method)
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
extern "C" bool m11128 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m11129_MI;
extern "C" int64_t m11129 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		t723* L_1 = m11133(NULL, L_0, &m11133_MI);
		int64_t L_2 = m11135(NULL, L_1, 0, &m11135_MI);
		return L_2;
	}
}
extern MethodInfo m11130_MI;
extern "C" double m11130 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		t723* L_1 = m11132(NULL, L_0, &m11132_MI);
		double L_2 = m11136(NULL, L_1, 0, &m11136_MI);
		return L_2;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m11131 (t9 * __this , uint8_t* p0, int32_t p1, MethodInfo* method)
{
	static bool m11131_init;
	if (!m11131_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m11131_init = true;
	}
	t723* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((t723*)SZArrayNew(t723_TI_var, L_0));
		V_1 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		t723* L_1 = V_0;
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
		t723* L_8 = V_0;
		return L_8;
	}
}
extern "C" t723* m11132 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		t723* L_0 = m11131(NULL, (uint8_t*)(uint8_t*)(&p0), 8, &m11131_MI);
		return L_0;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m11133 (t9 * __this , double p0, MethodInfo* method)
{
	static bool m11133_init;
	if (!m11133_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m11133_init = true;
	}
	t723* V_0 = {0};
	uint8_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		V_0 = ((t723*)SZArrayNew(t723_TI_var, 8));
		V_1 = (uint8_t*)(&p0);
		t723* L_1 = V_0;
		uint8_t* L_2 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_2+(int32_t)4))));
		t723* L_3 = V_0;
		uint8_t* L_4 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)5))));
		t723* L_5 = V_0;
		uint8_t* L_6 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)6))));
		t723* L_7 = V_0;
		uint8_t* L_8 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)7))));
		t723* L_9 = V_0;
		uint8_t* L_10 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 4)) = (uint8_t)(*((uint8_t*)L_10));
		t723* L_11 = V_0;
		uint8_t* L_12 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)1))));
		t723* L_13 = V_0;
		uint8_t* L_14 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)2))));
		t723* L_15 = V_0;
		uint8_t* L_16 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 7)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)3))));
		t723* L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		t723* L_18 = m11131(NULL, (uint8_t*)(uint8_t*)(&p0), 8, &m11131_MI);
		return L_18;
	}
}
extern "C" void m11134 (t9 * __this , uint8_t* p0, t723* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t723* L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral611, &m339_MI);
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
		t723* L_4 = p1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1)))))
		{
			goto IL_002a;
		}
	}

IL_001a:
	{
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_5, (t2*) &_stringLiteral1117, (t2*) &_stringLiteral2595, &m4336_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t723* L_6 = p1;
		int32_t L_7 = p3;
		int32_t L_8 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, (t2*) &_stringLiteral2596, &m2885_MI);
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
		t723* L_12 = p1;
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
extern "C" int64_t m11135 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		t723* L_0 = p0;
		int32_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		m11134(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, 8, &m11134_MI);
		int64_t L_2 = V_0;
		return L_2;
	}
}
extern "C" double m11136 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	double V_0 = 0.0;
	uint8_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0090;
		}
	}
	{
		V_1 = (uint8_t*)(&V_0);
		t723* L_1 = p0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, (t2*) &_stringLiteral611, &m339_MI);
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
		t723* L_5 = p0;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))-(int32_t)1)))))
		{
			goto IL_0037;
		}
	}

IL_0027:
	{
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_6, (t2*) &_stringLiteral1117, (t2*) &_stringLiteral2595, &m4336_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0037:
	{
		t723* L_7 = p0;
		int32_t L_8 = p1;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)8))) >= ((int32_t)L_8)))
		{
			goto IL_004a;
		}
	}
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, (t2*) &_stringLiteral2596, &m2885_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		uint8_t* L_10 = V_1;
		t723* L_11 = p0;
		int32_t L_12 = p1;
		int32_t L_13 = ((int32_t)((int32_t)L_12+(int32_t)4));
		*((int8_t*)(L_10)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_13));
		uint8_t* L_14 = V_1;
		t723* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)5));
		*((int8_t*)(((intptr_t)((intptr_t)L_14+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_17));
		uint8_t* L_18 = V_1;
		t723* L_19 = p0;
		int32_t L_20 = p1;
		int32_t L_21 = ((int32_t)((int32_t)L_20+(int32_t)6));
		*((int8_t*)(((intptr_t)((intptr_t)L_18+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_21));
		uint8_t* L_22 = V_1;
		t723* L_23 = p0;
		int32_t L_24 = p1;
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)7));
		*((int8_t*)(((intptr_t)((intptr_t)L_22+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25));
		uint8_t* L_26 = V_1;
		t723* L_27 = p0;
		int32_t L_28 = p1;
		int32_t L_29 = L_28;
		*((int8_t*)(((intptr_t)((intptr_t)L_26+(int32_t)4)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_29));
		uint8_t* L_30 = V_1;
		t723* L_31 = p0;
		int32_t L_32 = p1;
		int32_t L_33 = ((int32_t)((int32_t)L_32+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_30+(int32_t)5)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_31, L_33));
		uint8_t* L_34 = V_1;
		t723* L_35 = p0;
		int32_t L_36 = p1;
		int32_t L_37 = ((int32_t)((int32_t)L_36+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_34+(int32_t)6)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_35, L_37));
		uint8_t* L_38 = V_1;
		t723* L_39 = p0;
		int32_t L_40 = p1;
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)3));
		*((int8_t*)(((intptr_t)((intptr_t)L_38+(int32_t)7)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41));
		double L_42 = V_0;
		return L_42;
	}

IL_0090:
	{
		t723* L_43 = p0;
		int32_t L_44 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		m11134(NULL, (uint8_t*)(uint8_t*)(&V_0), L_43, L_44, 8, &m11134_MI);
		double L_45 = V_0;
		return L_45;
	}
}
extern MethodInfo m6949_MI;
extern "C" t2* m6949 (t9 * __this , t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral611, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t723* L_2 = p0;
		t723* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		t2* L_4 = m11137(NULL, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m11137_MI);
		return L_4;
	}
}
extern "C" t2* m11137 (t9 * __this , t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	{
		t723* L_0 = p0;
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
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = p1;
		t723* L_4 = p0;
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
		t723* L_6 = p0;
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
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_8, (t2*) &_stringLiteral1117, (t2*) &_stringLiteral2595, &m4336_MI);
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
		t896 * L_10 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_10, (t2*) &_stringLiteral1118, (t2*) &_stringLiteral2598, &m4336_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004a:
	{
		int32_t L_11 = p1;
		t723* L_12 = p0;
		int32_t L_13 = p2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)L_13)))))
		{
			goto IL_005d;
		}
	}
	{
		t556 * L_14 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_14, (t2*) &_stringLiteral2599, &m2885_MI);
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
		t315 * L_18 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_18, ((int32_t)((int32_t)((int32_t)((int32_t)L_17*(int32_t)3))-(int32_t)1)), &m4330_MI);
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
		t315 * L_24 = V_0;
		m2733(L_24, ((int32_t)45), &m2733_MI);
	}

IL_0086:
	{
		t723* L_25 = p0;
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		V_3 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_27))>>(int32_t)4))&(int32_t)((int32_t)15)))));
		t723* L_28 = p0;
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
		t315 * L_39 = V_0;
		uint16_t L_40 = V_3;
		m2733(L_39, L_40, &m2733_MI);
		t315 * L_41 = V_0;
		uint16_t L_42 = V_4;
		m2733(L_41, L_42, &m2733_MI);
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
		t315 * L_46 = V_0;
		t2* L_47 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_46);
		return L_47;
	}
}
#include "t1345.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1345_TI;
#include "t1345MD.h"

extern MethodInfo m11139_MI;
extern MethodInfo m11140_MI;
extern MethodInfo m11138_MI;


extern "C" int32_t m11138 (t9 * __this , t121 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m11139(NULL, L_2, &m11139_MI);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = m7818(NULL, (t2*) &_stringLiteral2600, &m7818_MI);
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, L_5, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m5764_MI;
extern "C" void m5764 (t9 * __this , t121 * p0, int32_t p1, t121 * p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2601, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral2602, &m339_MI);
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
		t2* L_5 = m7818(NULL, (t2*) &_stringLiteral1151, &m7818_MI);
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_6, (t2*) &_stringLiteral2603, L_5, &m4336_MI);
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
		t2* L_8 = m7818(NULL, (t2*) &_stringLiteral1151, &m7818_MI);
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_9, (t2*) &_stringLiteral2604, L_8, &m4336_MI);
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
		t2* L_11 = m7818(NULL, (t2*) &_stringLiteral1151, &m7818_MI);
		t896 * L_12 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_12, (t2*) &_stringLiteral493, L_11, &m4336_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0068:
	{
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		t121 * L_15 = p2;
		int32_t L_16 = p3;
		int32_t L_17 = p4;
		bool L_18 = m11140(NULL, L_13, L_14, L_15, L_16, L_17, &m11140_MI);
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
		int32_t L_22 = m11138(NULL, L_21, &m11138_MI);
		int32_t L_23 = p4;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)((int32_t)L_22-(int32_t)L_23)))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_24 = p3;
		t121 * L_25 = p2;
		int32_t L_26 = m11138(NULL, L_25, &m11138_MI);
		int32_t L_27 = p4;
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)((int32_t)L_26-(int32_t)L_27)))))
		{
			goto IL_009f;
		}
	}

IL_008f:
	{
		t2* L_28 = m7818(NULL, (t2*) &_stringLiteral2605, &m7818_MI);
		t556 * L_29 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_29, L_28, &m2885_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009f:
	{
		return;
	}
}
extern "C" int32_t m11139 (t9 * __this , t121 * p0, MethodInfo* method)
{
	typedef int32_t (*m11139_ftn) (t121 *);
	static m11139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11139_ftn)il2cpp_codegen_resolve_icall ("System.Buffer::ByteLengthInternal(System.Array)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m11140 (t9 * __this , t121 * p0, int32_t p1, t121 * p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	typedef bool (*m11140_ftn) (t121 *, int32_t, t121 *, int32_t, int32_t);
	static m11140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11140_ftn)il2cpp_codegen_resolve_icall ("System.Buffer::BlockCopyInternal(System.Array,System.Int32,System.Array,System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
#include "t2090.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2090_TI;
#include "t2090MD.h"

#include "t1332.h"
extern TypeInfo t296_TI;
extern TypeInfo t1332_TI;
#include "t1332MD.h"
extern MethodInfo m11144_MI;
extern MethodInfo m5685_MI;
extern MethodInfo m2714_MI;


extern MethodInfo m11141_MI;
extern "C" void m11141 (t2090 * __this, t2* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = (-1);
		t2* L_1 = p0;
		int32_t L_2 = m2699(L_1, &m2699_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m11142_MI;
extern "C" t9 * m11142 (t2090 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(&m11144_MI, __this);
		uint16_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t296_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m11143_MI;
extern "C" void m11143 (t2090 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" uint16_t m11144 (t2090 * __this, MethodInfo* method)
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
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral2606, &m7818_MI);
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_4, L_3, &m5685_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t2* L_5 = (__this->f0);
		int32_t L_6 = (__this->f1);
		uint16_t L_7 = m2714(L_5, L_6, &m2714_MI);
		return L_7;
	}
}
extern MethodInfo m11145_MI;
extern "C" bool m11145 (t2090 * __this, MethodInfo* method)
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
#include "t1362.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1362_TI;
#include "t1362MD.h"

#include "t1361.h"
#include "t722.h"
#include "t291.h"
#include "t1732.h"
#include "t1726.h"
#include "t1731.h"
#include "t1656.h"
#include "t1178.h"
#include "t289.h"
#include "t1723.h"
extern TypeInfo t722_TI;
extern TypeInfo t1732_TI;
extern TypeInfo t1726_TI;
extern TypeInfo t1361_TI;
extern TypeInfo t1731_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t289_TI;
extern TypeInfo t1723_TI;
extern TypeInfo t1540_TI;
extern TypeInfo t1719_TI;
#include "t722MD.h"
#include "t1732MD.h"
#include "t1726MD.h"
#include "t1361MD.h"
#include "t1731MD.h"
#include "t1656MD.h"
#include "t289MD.h"
#include "t1723MD.h"
#include "t1719MD.h"
extern MethodInfo m11502_MI;
extern MethodInfo m10832_MI;
extern MethodInfo m10831_MI;
extern MethodInfo m10834_MI;
extern MethodInfo m11147_MI;
extern MethodInfo m11149_MI;
extern MethodInfo m9061_MI;
extern MethodInfo m8991_MI;
extern MethodInfo m9038_MI;
extern MethodInfo m11151_MI;
extern MethodInfo m11150_MI;
extern MethodInfo m9053_MI;
extern MethodInfo m9021_MI;
extern MethodInfo m8836_MI;
extern MethodInfo m8941_MI;
extern MethodInfo m8915_MI;
extern MethodInfo m11148_MI;
extern MethodInfo m8914_MI;
extern MethodInfo m8913_MI;


extern MethodInfo m11146_MI;
extern "C" void m11146 (t9 * __this , MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = m11502(NULL, &m11502_MI);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_1 = m10832(NULL, &m10832_MI);
		t722 * L_2 = L_1;
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f4 = L_2;
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f3 = L_2;
		goto IL_005c;
	}

IL_0019:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		m10831(NULL, (&V_0), &m10831_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_6 = m10834(NULL, &m10834_MI);
		t722 * L_7 = L_6;
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f4 = L_7;
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f3 = L_7;
		goto IL_005c;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_8 = m10832(NULL, &m10832_MI);
		t722 * L_9 = L_8;
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f4 = L_9;
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f3 = L_9;
	}

IL_005c:
	{
		t722 * L_10 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f3;
		t722 * L_11 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f4;
		m11147(NULL, L_10, L_11, &m11147_MI);
		return;
	}
}
extern "C" void m11147 (t9 * __this , t722 * p0, t722 * p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1362_TI));
		t291 * L_0 = m11149(NULL, 0, &m11149_MI);
		t722 * L_1 = p1;
		t1732 * L_2 = (t1732 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1732_TI));
		m9061(L_2, L_0, L_1, &m9061_MI);
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f1 = L_2;
		t1361 * L_3 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f1;
		VirtActionInvoker1< bool >::Invoke(&m8991_MI, ((t1726 *)Castclass(L_3, InitializedTypeInfo(&t1726_TI))), 1);
		t1361 * L_4 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1361_TI));
		t1361 * L_5 = m9038(NULL, L_4, 1, &m9038_MI);
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f1 = L_5;
		t291 * L_6 = m11151(NULL, 0, &m11151_MI);
		t722 * L_7 = p1;
		t1732 * L_8 = (t1732 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1732_TI));
		m9061(L_8, L_6, L_7, &m9061_MI);
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f0 = L_8;
		t1361 * L_9 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f0;
		VirtActionInvoker1< bool >::Invoke(&m8991_MI, ((t1726 *)Castclass(L_9, InitializedTypeInfo(&t1726_TI))), 1);
		t1361 * L_10 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f0;
		t1361 * L_11 = m9038(NULL, L_10, 1, &m9038_MI);
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f0 = L_11;
		t291 * L_12 = m11150(NULL, 0, &m11150_MI);
		t722 * L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t1731 * L_14 = (t1731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1731_TI));
		m9053(L_14, L_12, L_13, &m9053_MI);
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f2 = L_14;
		t1656 * L_15 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
		t1656 * L_16 = m9021(NULL, L_15, &m9021_MI);
		((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f2 = L_16;
		t1361 * L_17 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f0;
		m6867(NULL, L_17, &m6867_MI);
		t1361 * L_18 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f1;
		m6867(NULL, L_18, &m6867_MI);
		t1656 * L_19 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f2;
		m6867(NULL, L_19, &m6867_MI);
		return;
	}
}
extern MethodInfo m5919_MI;
extern "C" t1361 * m5919 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1362_TI));
		t1361 * L_0 = ((t1362_SFs*)InitializedTypeInfo(&t1362_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t291 * m11148 (t9 * __this , t58 p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t291 * V_0 = {0};
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
			t289 * L_4 = (t289 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t289_TI));
			m8836(L_4, L_0, L_1, 0, L_2, 0, ((((int32_t)L_3) == ((int32_t)0))? 1 : 0), &m8836_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t1540_TI, e.ex->object.klass))
			goto CATCH_0013;
		throw e;
	}

CATCH_0013:
	{ // begin catch(System.IO.IOException)
		{
			t1723 * L_5 = (t1723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1723_TI));
			m8941(L_5, &m8941_MI);
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
		t291 * L_6 = V_0;
		return L_6;
	}
}
extern "C" t291 * m11149 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_0 = m8915(NULL, &m8915_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1362_TI));
		t291 * L_2 = m11148(NULL, L_0, 2, L_1, &m11148_MI);
		return L_2;
	}
}
extern "C" t291 * m11150 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_0 = m8914(NULL, &m8914_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1362_TI));
		t291 * L_2 = m11148(NULL, L_0, 1, L_1, &m11148_MI);
		return L_2;
	}
}
extern "C" t291 * m11151 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_0 = m8913(NULL, &m8913_MI);
		int32_t L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1362_TI));
		t291 * L_2 = m11148(NULL, L_0, 2, L_1, &m11148_MI);
		return L_2;
	}
}
#include "t2091.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2091_TI;
#include "t2091MD.h"



extern MethodInfo m11152_MI;
extern "C" void m11152 (t2091 * __this, MethodInfo* method)
{
	{
		m5742(__this, &m5742_MI);
		return;
	}
}
#include "t884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t884_TI;
#include "t884MD.h"

#include "t2092.h"
#include "t2032.h"
#include "t897.h"
#include "t123.h"
#include "t186.h"
#include "t327.h"
#include "t168.h"
#include "t882.h"
#include "t302.h"
#include "t2130.h"
#include "t2113.h"
#include "t269.h"
#include "t1695.h"
#include "t1546.h"
extern TypeInfo t2092_TI;
extern TypeInfo t2032_TI;
extern TypeInfo t897_TI;
extern TypeInfo t184_TI;
extern TypeInfo t899_TI;
extern TypeInfo t2130_TI;
extern TypeInfo t2113_TI;
extern TypeInfo t269_TI;
extern TypeInfo t156_TI;
extern TypeInfo t327_TI;
extern TypeInfo t125_TI;
extern TypeInfo t292_TI;
extern TypeInfo t186_TI;
extern TypeInfo t123_TI;
extern TypeInfo t302_TI;
extern TypeInfo t168_TI;
extern TypeInfo t882_TI;
extern TypeInfo t1695_TI;
extern TypeInfo t1546_TI;
#include "t2092MD.h"
#include "t2005MD.h"
#include "t2032MD.h"
#include "t897MD.h"
#include "t124MD.h"
#include "t2130MD.h"
#include "t160MD.h"
#include "t156MD.h"
#include "t123MD.h"
#include "t568MD.h"
#include "t2113MD.h"
#include "t296MD.h"
#include "t269MD.h"
#include "t327MD.h"
#include "t125MD.h"
#include "t292MD.h"
#include "t186MD.h"
#include "t302MD.h"
#include "t168MD.h"
#include "t882MD.h"
#include "t894MD.h"
extern Il2CppType t9_0_0_0;
extern Il2CppType t2092_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t296_0_0_0;
extern Il2CppType t186_0_0_0;
extern Il2CppType t568_0_0_0;
extern Il2CppType t327_0_0_0;
extern Il2CppType t302_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t292_0_0_0;
extern Il2CppType t882_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t156_0_0_0;
extern Il2CppType t897_0_0_0;
extern Il2CppType t269_0_0_0;
extern Il2CppType t2_0_0_0;
extern MethodInfo m11154_MI;
extern MethodInfo m11155_MI;
extern MethodInfo m10615_MI;
extern MethodInfo m10731_MI;
extern MethodInfo m5800_MI;
extern MethodInfo m7433_MI;
extern MethodInfo m7513_MI;
extern MethodInfo m7538_MI;
extern MethodInfo m11168_MI;
extern MethodInfo m12091_MI;
extern MethodInfo m11754_MI;
extern MethodInfo m7515_MI;
extern MethodInfo m7516_MI;
extern MethodInfo m11544_MI;
extern MethodInfo m7493_MI;
extern MethodInfo m7422_MI;
extern MethodInfo m7421_MI;
extern MethodInfo m4238_MI;
extern MethodInfo m7394_MI;
extern MethodInfo m7393_MI;
extern MethodInfo m7180_MI;
extern MethodInfo m7178_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m11537_MI;
extern MethodInfo m7291_MI;
extern MethodInfo m12093_MI;
extern MethodInfo m11418_MI;
extern MethodInfo m12094_MI;
extern MethodInfo m7505_MI;
extern MethodInfo m7501_MI;
extern MethodInfo m7510_MI;
extern MethodInfo m7509_MI;
extern MethodInfo m7507_MI;
extern MethodInfo m7502_MI;
extern MethodInfo m7503_MI;
extern MethodInfo m7471_MI;
extern MethodInfo m7506_MI;
extern MethodInfo m7508_MI;
extern MethodInfo m7504_MI;
extern MethodInfo m12095_MI;
extern MethodInfo m7512_MI;
extern MethodInfo m7425_MI;
extern MethodInfo m12096_MI;
extern MethodInfo m7495_MI;
extern MethodInfo m7232_MI;
extern MethodInfo m11244_MI;
extern MethodInfo m12097_MI;
extern MethodInfo m7497_MI;
extern MethodInfo m7062_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m11947_MI;
extern MethodInfo m7432_MI;
extern MethodInfo m7499_MI;
extern MethodInfo m7101_MI;
extern MethodInfo m7099_MI;
extern MethodInfo m11274_MI;
extern MethodInfo m12098_MI;
extern MethodInfo m7494_MI;
extern MethodInfo m7204_MI;
extern MethodInfo m12099_MI;
extern MethodInfo m7511_MI;
extern MethodInfo m7397_MI;
extern MethodInfo m12100_MI;
extern MethodInfo m11304_MI;
extern MethodInfo m12101_MI;
extern MethodInfo m673_MI;
extern MethodInfo m7496_MI;
extern MethodInfo m7259_MI;
extern MethodInfo m11318_MI;
extern MethodInfo m12102_MI;
extern MethodInfo m7498_MI;
extern MethodInfo m7129_MI;
extern MethodInfo m12103_MI;
extern MethodInfo m7500_MI;
extern MethodInfo m7152_MI;
extern MethodInfo m11346_MI;
extern MethodInfo m12104_MI;
extern MethodInfo m6941_MI;
extern MethodInfo m8636_MI;
extern MethodInfo m8635_MI;
extern MethodInfo m11348_MI;
extern MethodInfo m12105_MI;


extern MethodInfo m11153_MI;
extern TypeInfo* t152_TI_var;
extern "C" void m11153 (t9 * __this , MethodInfo* method)
{
	static bool m11153_init;
	if (!m11153_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m11153_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2092_TI));
		t2092 * L_0 = ((t2092_SFs*)InitializedTypeInfo(&t2092_TI)->static_fields)->f0;
		((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f0 = L_0;
		t152* L_1 = ((t152*)SZArrayNew(t152_TI_var, ((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_1, L_2);
		*((t126 **)(t126 **)SZArrayLdElema(L_1, 1)) = (t126 *)L_2;
		t152* L_3 = L_1;
		t126 * L_4 = m329(NULL, LoadTypeToken(&t2092_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_3, L_4);
		*((t126 **)(t126 **)SZArrayLdElema(L_3, 2)) = (t126 *)L_4;
		t152* L_5 = L_3;
		t126 * L_6 = m329(NULL, LoadTypeToken(&t124_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_5, L_6);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, 3)) = (t126 *)L_6;
		t152* L_7 = L_5;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t296_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_7, L_8);
		*((t126 **)(t126 **)SZArrayLdElema(L_7, 4)) = (t126 *)L_8;
		t152* L_9 = L_7;
		t126 * L_10 = m329(NULL, LoadTypeToken(&t186_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_9, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_9, 5)) = (t126 *)L_10;
		t152* L_11 = L_9;
		t126 * L_12 = m329(NULL, LoadTypeToken(&t568_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_11, L_12);
		*((t126 **)(t126 **)SZArrayLdElema(L_11, 6)) = (t126 *)L_12;
		t152* L_13 = L_11;
		t126 * L_14 = m329(NULL, LoadTypeToken(&t327_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_13, L_14);
		*((t126 **)(t126 **)SZArrayLdElema(L_13, 7)) = (t126 *)L_14;
		t152* L_15 = L_13;
		t126 * L_16 = m329(NULL, LoadTypeToken(&t302_0_0_0), &m329_MI);
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
		t126 * L_22 = m329(NULL, LoadTypeToken(&t292_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_21, L_22);
		*((t126 **)(t126 **)SZArrayLdElema(L_21, ((int32_t)11))) = (t126 *)L_22;
		t152* L_23 = L_21;
		t126 * L_24 = m329(NULL, LoadTypeToken(&t882_0_0_0), &m329_MI);
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
		t126 * L_30 = m329(NULL, LoadTypeToken(&t897_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_29, L_30);
		*((t126 **)(t126 **)SZArrayLdElema(L_29, ((int32_t)15))) = (t126 *)L_30;
		t152* L_31 = L_29;
		t126 * L_32 = m329(NULL, LoadTypeToken(&t269_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_31, L_32);
		*((t126 **)(t126 **)SZArrayLdElema(L_31, ((int32_t)16))) = (t126 *)L_32;
		t152* L_33 = L_31;
		t126 * L_34 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		ArrayElementTypeCheck (L_33, L_34);
		*((t126 **)(t126 **)SZArrayLdElema(L_33, ((int32_t)18))) = (t126 *)L_34;
		((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1 = L_33;
		return;
	}
}
extern "C" t723* m11154 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	typedef t723* (*m11154_ftn) (t2*, bool);
	static m11154_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11154_ftn)il2cpp_codegen_resolve_icall ("System.Convert::InternalFromBase64String(System.String,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m6914_MI;
extern TypeInfo* t723_TI_var;
extern "C" t723* m6914 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m6914_init;
	if (!m6914_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m6914_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1081, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return ((t723*)SZArrayNew(t723_TI_var, 0));
	}

IL_001d:
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t723* L_5 = m11154(NULL, L_4, 1, &m11154_MI);
		return L_5;
	}
}
extern MethodInfo m4298_MI;
extern "C" t2* m4298 (t9 * __this , t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2607, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t723* L_2 = p0;
		t723* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t2* L_4 = m11155(NULL, L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m11155_MI);
		return L_4;
	}
}
extern "C" t2* m11155 (t9 * __this , t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t723* V_0 = {0};
	{
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2607, &m339_MI);
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
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_4, (t2*) &_stringLiteral2608, &m5693_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		int32_t L_5 = p1;
		t723* L_6 = p0;
		int32_t L_7 = p2;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))-(int32_t)L_7)))))
		{
			goto IL_0034;
		}
	}
	{
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_8, (t2*) &_stringLiteral2609, &m5693_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		t723* L_9 = p0;
		int32_t L_10 = p1;
		int32_t L_11 = p2;
		t723* L_12 = m10615(NULL, L_9, L_10, L_11, &m10615_MI);
		V_0 = L_12;
		t2032 * L_13 = (t2032 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2032_TI));
		m10731(L_13, &m10731_MI);
		t723* L_14 = V_0;
		t2* L_15 = (t2*)VirtFuncInvoker1< t2*, t723* >::Invoke(&m5800_MI, L_13, L_14);
		return L_15;
	}
}
extern MethodInfo m11156_MI;
extern "C" bool m11156 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11157_MI;
extern "C" bool m11157 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7433(&L_1, 0, &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7513(NULL, L_0, L_1, &m7513_MI);
		return L_2;
	}
}
extern MethodInfo m11158_MI;
extern "C" bool m11158 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return ((((int32_t)((((double)L_0) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11159_MI;
extern "C" bool m11159 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return ((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11160_MI;
extern "C" bool m11160 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11161_MI;
extern "C" bool m11161 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11162_MI;
extern "C" bool m11162 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return ((((int32_t)((((int32_t)(((int32_t)L_0))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11163_MI;
extern "C" bool m11163 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11164_MI;
extern "C" bool m11164 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		bool L_2 = m7538(NULL, L_1, &m7538_MI);
		return L_2;
	}
}
extern MethodInfo m11165_MI;
extern "C" bool m11165 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11166_MI;
extern "C" bool m11166 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11167_MI;
extern "C" bool m11167 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4292_MI;
extern "C" bool m4292 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		bool L_2 = m11168(NULL, L_1, (t9 *)NULL, &m11168_MI);
		return L_2;
	}
}
extern "C" bool m11168 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		bool L_3 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12091_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11169_MI;
extern "C" uint8_t m11169 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11170_MI;
extern "C" uint8_t m11170 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2610, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11171_MI;
extern "C" uint8_t m11171 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7433(&L_1, ((int32_t)255), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, 0, &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2611, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		uint8_t L_10 = m7493(NULL, L_9, &m7493_MI);
		return L_10;
	}
}
extern MethodInfo m11172_MI;
extern "C" uint8_t m11172 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2611, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		bool L_5 = m7422(NULL, L_4, &m7422_MI);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m7421(NULL, L_6, &m7421_MI);
		if (!L_7)
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		t2* L_8 = m7818(NULL, (t2*) &_stringLiteral2612, &m7818_MI);
		t2130 * L_9 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_9, L_8, &m11754_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0048:
	{
		double L_10 = p0;
		double L_11 = round(L_10);
		return (((uint8_t)L_11));
	}
}
extern MethodInfo m11173_MI;
extern "C" uint8_t m11173 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2613, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		bool L_5 = m7394(NULL, L_4, &m7394_MI);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = p0;
		bool L_7 = m7393(NULL, L_6, &m7393_MI);
		if (!L_7)
		{
			goto IL_0040;
		}
	}

IL_0030:
	{
		t2* L_8 = m7818(NULL, (t2*) &_stringLiteral2614, &m7818_MI);
		t2130 * L_9 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_9, L_8, &m11754_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		float L_10 = p0;
		double L_11 = round((((double)L_10)));
		return (((uint8_t)L_11));
	}
}
extern MethodInfo m11174_MI;
extern "C" uint8_t m11174 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2611, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11175_MI;
extern "C" uint8_t m11175 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2611, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11176_MI;
extern "C" uint8_t m11176 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2615, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11177_MI;
extern "C" uint8_t m11177 (t9 * __this , int16_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2611, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int16_t L_4 = p0;
		return (((uint8_t)L_4));
	}
}
extern MethodInfo m11178_MI;
extern "C" uint8_t m11178 (t9 * __this , t2* p0, MethodInfo* method)
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
		uint8_t L_2 = m7180(NULL, L_1, &m7180_MI);
		return L_2;
	}
}
extern MethodInfo m11179_MI;
extern "C" uint8_t m11179 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint8_t L_3 = m7178(NULL, L_1, L_2, &m7178_MI);
		return L_3;
	}
}
extern MethodInfo m11180_MI;
extern "C" uint8_t m11180 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2610, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11181_MI;
extern "C" uint8_t m11181 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)255)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2610, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11182_MI;
extern "C" uint8_t m11182 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2610, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((uint8_t)L_3));
	}
}
extern MethodInfo m11183_MI;
extern "C" uint8_t m11183 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint8_t L_3 = (uint8_t)InterfaceFuncInvoker1< uint8_t, t9 * >::Invoke(&m12092_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m6916_MI;
extern "C" uint16_t m6916 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint16_t)L_0));
	}
}
extern MethodInfo m11184_MI;
extern "C" uint16_t m11184 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2616, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11185_MI;
extern "C" uint16_t m11185 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2616, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11186_MI;
extern "C" uint16_t m11186 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11187_MI;
extern "C" uint16_t m11187 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2618, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11188_MI;
extern "C" uint16_t m11188 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2618, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11189_MI;
extern "C" uint16_t m11189 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		uint16_t L_1 = m7291(NULL, L_0, &m7291_MI);
		return L_1;
	}
}
extern MethodInfo m11190_MI;
extern "C" uint16_t m11190 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2619, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11191_MI;
extern "C" uint16_t m11191 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)65535)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2619, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11192_MI;
extern "C" uint16_t m11192 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11193_MI;
extern "C" uint16_t m11193 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint16_t L_3 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12093_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11194_MI;
extern "C" t269  m11194 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_1 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		return L_1;
	}

IL_0009:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_4 = m11418(NULL, L_2, L_3, &m11418_MI);
		return L_4;
	}
}
extern MethodInfo m11195_MI;
extern "C" t269  m11195 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11196_MI;
extern "C" t269  m11196 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11197_MI;
extern "C" t269  m11197 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11198_MI;
extern "C" t269  m11198 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11199_MI;
extern "C" t269  m11199 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_1 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		return L_1;
	}

IL_0009:
	{
		t9 * L_2 = p0;
		t9 * L_3 = p1;
		t269  L_4 = (t269 )InterfaceFuncInvoker1< t269 , t9 * >::Invoke(&m12094_MI, ((t9 *)Castclass(L_2, InitializedTypeInfo(&t184_TI))), L_3);
		return L_4;
	}
}
extern MethodInfo m11200_MI;
extern "C" t269  m11200 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11201_MI;
extern "C" t269  m11201 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11202_MI;
extern "C" t269  m11202 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11203_MI;
extern "C" t269  m11203 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_0, (t2*) &_stringLiteral2617, &m11537_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11204_MI;
extern "C" t897  m11204 (t9 * __this , bool p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7505(NULL, G_B3_0, &m7505_MI);
		return L_1;
	}
}
extern MethodInfo m11205_MI;
extern "C" t897  m11205 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7501(NULL, L_0, &m7501_MI);
		return L_1;
	}
}
extern MethodInfo m11206_MI;
extern "C" t897  m11206 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7510(NULL, L_0, &m7510_MI);
		return L_1;
	}
}
extern MethodInfo m11207_MI;
extern "C" t897  m11207 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7509(NULL, L_0, &m7509_MI);
		return L_1;
	}
}
extern MethodInfo m11208_MI;
extern "C" t897  m11208 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7505(NULL, L_0, &m7505_MI);
		return L_1;
	}
}
extern MethodInfo m11209_MI;
extern "C" t897  m11209 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7507(NULL, L_0, &m7507_MI);
		return L_1;
	}
}
extern MethodInfo m11210_MI;
extern "C" t897  m11210 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7502(NULL, L_0, &m7502_MI);
		return L_1;
	}
}
extern MethodInfo m11211_MI;
extern "C" t897  m11211 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7503(NULL, L_0, &m7503_MI);
		return L_1;
	}
}
extern MethodInfo m11212_MI;
extern "C" t897  m11212 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t897  L_1 = {0};
		m7433(&L_1, 0, &m7433_MI);
		return L_1;
	}

IL_000a:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_4 = m7471(NULL, L_2, L_3, &m7471_MI);
		return L_4;
	}
}
extern MethodInfo m11213_MI;
extern "C" t897  m11213 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7506(NULL, L_0, &m7506_MI);
		return L_1;
	}
}
extern MethodInfo m11214_MI;
extern "C" t897  m11214 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7508(NULL, L_0, &m7508_MI);
		return L_1;
	}
}
extern MethodInfo m11215_MI;
extern "C" t897  m11215 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7504(NULL, L_0, &m7504_MI);
		return L_1;
	}
}
extern MethodInfo m11216_MI;
extern "C" t897  m11216 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		t897  L_1 = {0};
		m7433(&L_1, 0, &m7433_MI);
		return L_1;
	}

IL_000a:
	{
		t9 * L_2 = p0;
		t9 * L_3 = p1;
		t897  L_4 = (t897 )InterfaceFuncInvoker1< t897 , t9 * >::Invoke(&m12095_MI, ((t9 *)Castclass(L_2, InitializedTypeInfo(&t184_TI))), L_3);
		return L_4;
	}
}
extern MethodInfo m11217_MI;
extern "C" double m11217 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11218_MI;
extern "C" double m11218 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11219_MI;
extern "C" double m11219 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		double L_1 = m7512(NULL, L_0, &m7512_MI);
		return L_1;
	}
}
extern MethodInfo m11220_MI;
extern "C" double m11220 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11221_MI;
extern "C" double m11221 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11222_MI;
extern "C" double m11222 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11223_MI;
extern "C" double m11223 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11224_MI;
extern "C" double m11224 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11225_MI;
extern "C" double m11225 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m11226_MI;
extern "C" double m11226 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		double L_3 = m7425(NULL, L_1, L_2, &m7425_MI);
		return L_3;
	}
}
extern MethodInfo m11227_MI;
extern "C" double m11227 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((double)(((double)L_0))));
	}
}
extern MethodInfo m11228_MI;
extern "C" double m11228 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return (((double)(((double)L_0))));
	}
}
extern MethodInfo m11229_MI;
extern "C" double m11229 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((double)L_0));
	}
}
extern MethodInfo m4351_MI;
extern "C" double m4351 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		double L_3 = (double)InterfaceFuncInvoker1< double, t9 * >::Invoke(&m12096_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11230_MI;
extern "C" int16_t m11230 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11231_MI;
extern "C" int16_t m11231 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11232_MI;
extern "C" int16_t m11232 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2620, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11233_MI;
extern "C" int16_t m11233 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7433(&L_1, ((int32_t)32767), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, ((int32_t)-32768), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2621, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		int16_t L_10 = m7495(NULL, L_9, &m7495_MI);
		return L_10;
	}
}
extern MethodInfo m11234_MI;
extern "C" int16_t m11234 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2621, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int16_t)L_5));
	}
}
extern MethodInfo m11235_MI;
extern "C" int16_t m11235 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2621, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int16_t)L_5));
	}
}
extern MethodInfo m11236_MI;
extern "C" int16_t m11236 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2621, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		int32_t L_4 = p0;
		return (((int16_t)L_4));
	}
}
extern MethodInfo m11237_MI;
extern "C" int16_t m11237 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2621, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = p0;
		return (((int16_t)L_4));
	}
}
extern MethodInfo m11238_MI;
extern "C" int16_t m11238 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int16_t)L_0));
	}
}
extern MethodInfo m11239_MI;
extern "C" int16_t m11239 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m6864_MI;
extern "C" int16_t m6864 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		int16_t L_3 = m7232(NULL, L_1, L_2, &m7232_MI);
		return L_3;
	}
}
extern MethodInfo m11240_MI;
extern "C" int16_t m11240 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((((int64_t)(((uint64_t)L_0))) <= ((int64_t)(((int64_t)((int32_t)32767))))))
		{
			goto IL_001a;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2620, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001a:
	{
		uint32_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11241_MI;
extern "C" int16_t m11241 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)32767)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2620, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11242_MI;
extern "C" int16_t m11242 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2620, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint16_t L_3 = p0;
		return (((int16_t)L_3));
	}
}
extern MethodInfo m11243_MI;
extern "C" int16_t m11243 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int16_t L_2 = m11244(NULL, L_1, (t9 *)NULL, &m11244_MI);
		return L_2;
	}
}
extern "C" int16_t m11244 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int16_t L_3 = (int16_t)InterfaceFuncInvoker1< int16_t, t9 * >::Invoke(&m12097_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11245_MI;
extern "C" int32_t m11245 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11246_MI;
extern "C" int32_t m11246 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11247_MI;
extern "C" int32_t m11247 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11248_MI;
extern "C" int32_t m11248 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7433(&L_1, ((int32_t)2147483647), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, ((int32_t)-2147483648), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2622, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		int32_t L_10 = m7497(NULL, L_9, &m7497_MI);
		return L_10;
	}
}
extern MethodInfo m11249_MI;
extern "C" int32_t m11249 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2622, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
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
extern MethodInfo m11250_MI;
extern "C" int32_t m11250 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2622, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
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
extern MethodInfo m11251_MI;
extern "C" int32_t m11251 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2622, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = p0;
		return (((int32_t)L_4));
	}
}
extern MethodInfo m11252_MI;
extern "C" int32_t m11252 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int32_t)L_0));
	}
}
extern MethodInfo m11253_MI;
extern "C" int32_t m11253 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11254_MI;
extern "C" int32_t m11254 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		int32_t L_3 = m7062(NULL, L_1, L_2, &m7062_MI);
		return L_3;
	}
}
extern MethodInfo m11255_MI;
extern "C" int32_t m11255 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2623, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11256_MI;
extern "C" int32_t m11256 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)2147483647)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2623, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((int32_t)L_3));
	}
}
extern MethodInfo m11257_MI;
extern "C" int32_t m11257 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m4289_MI;
extern "C" int32_t m4289 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int32_t L_2 = m6925(NULL, L_1, (t9 *)NULL, &m6925_MI);
		return L_2;
	}
}
extern "C" int32_t m6925 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11947_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11258_MI;
extern "C" int64_t m11258 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11259_MI;
extern "C" int64_t m11259 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11260_MI;
extern "C" int64_t m11260 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11261_MI;
extern "C" int64_t m11261 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7432(&L_1, (-1), ((int32_t)2147483647), 0, 0, 0, &m7432_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7432(&L_4, 0, ((int32_t)-2147483648), 0, (-1), 0, &m7432_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_003c;
		}
	}

IL_002c:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2624, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003c:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		int64_t L_10 = m7499(NULL, L_9, &m7499_MI);
		return L_10;
	}
}
extern MethodInfo m11262_MI;
extern "C" int64_t m11262 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2624, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int64_t)L_5));
	}
}
extern MethodInfo m11263_MI;
extern "C" int64_t m11263 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2624, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int64_t)L_5));
	}
}
extern MethodInfo m11264_MI;
extern "C" int64_t m11264 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11265_MI;
extern "C" int64_t m11265 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11266_MI;
extern "C" int64_t m11266 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11267_MI;
extern "C" int64_t m11267 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((int64_t)L_0));
	}
}
extern MethodInfo m11268_MI;
extern "C" int64_t m11268 (t9 * __this , t2* p0, MethodInfo* method)
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
		int64_t L_2 = m7101(NULL, L_1, &m7101_MI);
		return L_2;
	}
}
extern MethodInfo m11269_MI;
extern "C" int64_t m11269 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		int64_t L_3 = m7099(NULL, L_1, L_2, &m7099_MI);
		return L_3;
	}
}
extern MethodInfo m11270_MI;
extern "C" int64_t m11270 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11271_MI;
extern "C" int64_t m11271 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_001c;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2625, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001c:
	{
		uint64_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11272_MI;
extern "C" int64_t m11272 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11273_MI;
extern "C" int64_t m11273 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int64_t L_2 = m11274(NULL, L_1, (t9 *)NULL, &m11274_MI);
		return L_2;
	}
}
extern "C" int64_t m11274 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int64_t L_3 = (int64_t)InterfaceFuncInvoker1< int64_t, t9 * >::Invoke(&m12098_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11275_MI;
extern "C" int8_t m11275 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11276_MI;
extern "C" int8_t m11276 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2626, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint8_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11277_MI;
extern "C" int8_t m11277 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2626, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11278_MI;
extern "C" int8_t m11278 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7433(&L_1, ((int32_t)127), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, ((int32_t)-128), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}

IL_001e:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2627, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		int8_t L_10 = m7494(NULL, L_9, &m7494_MI);
		return L_10;
	}
}
extern MethodInfo m11279_MI;
extern "C" int8_t m11279 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2627, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((int8_t)L_5));
	}
}
extern MethodInfo m11280_MI;
extern "C" int8_t m11280 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2628, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((int8_t)L_5));
	}
}
extern MethodInfo m11281_MI;
extern "C" int8_t m11281 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2627, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11282_MI;
extern "C" int8_t m11282 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2627, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int64_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11283_MI;
extern "C" int8_t m11283 (t9 * __this , int16_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2627, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int16_t L_4 = p0;
		return (((int8_t)L_4));
	}
}
extern MethodInfo m11284_MI;
extern "C" int8_t m11284 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral611, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t9 * L_3 = p1;
		int8_t L_4 = m7204(NULL, L_2, L_3, &m7204_MI);
		return L_4;
	}
}
extern MethodInfo m11285_MI;
extern "C" int8_t m11285 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((((int64_t)(((uint64_t)L_0))) <= ((int64_t)(((int64_t)((int32_t)127))))))
		{
			goto IL_0017;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2626, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		uint32_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11286_MI;
extern "C" int8_t m11286 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)127)))))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2626, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		uint64_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11287_MI;
extern "C" int8_t m11287 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2626, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint16_t L_3 = p0;
		return (((int8_t)L_3));
	}
}
extern MethodInfo m11288_MI;
extern "C" int8_t m11288 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		int8_t L_3 = (int8_t)InterfaceFuncInvoker1< int8_t, t9 * >::Invoke(&m12099_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11289_MI;
extern "C" float m11289 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11290_MI;
extern "C" float m11290 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11291_MI;
extern "C" float m11291 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		float L_1 = m7511(NULL, L_0, &m7511_MI);
		return L_1;
	}
}
extern MethodInfo m11292_MI;
extern "C" float m11292 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11293_MI;
extern "C" float m11293 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11294_MI;
extern "C" float m11294 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11295_MI;
extern "C" float m11295 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11296_MI;
extern "C" float m11296 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11297_MI;
extern "C" float m11297 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11298_MI;
extern "C" float m11298 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		float L_3 = m7397(NULL, L_1, L_2, &m7397_MI);
		return L_3;
	}
}
extern MethodInfo m11299_MI;
extern "C" float m11299 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((float)(((double)L_0))));
	}
}
extern MethodInfo m11300_MI;
extern "C" float m11300 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		return (((float)(((double)L_0))));
	}
}
extern MethodInfo m11301_MI;
extern "C" float m11301 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((float)L_0));
	}
}
extern MethodInfo m11302_MI;
extern "C" float m11302 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		float L_3 = (float)InterfaceFuncInvoker1< float, t9 * >::Invoke(&m12100_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11303_MI;
extern "C" t2* m11303 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t2* L_1 = m11304(NULL, L_0, (t9 *)NULL, &m11304_MI);
		return L_1;
	}
}
extern "C" t2* m11304 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		t2* L_3 = (t2*)InterfaceFuncInvoker1< t2*, t9 * >::Invoke(&m12101_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
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
extern MethodInfo m11305_MI;
extern "C" uint16_t m11305 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11306_MI;
extern "C" uint16_t m11306 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11307_MI;
extern "C" uint16_t m11307 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11308_MI;
extern "C" uint16_t m11308 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7433(&L_1, ((int32_t)65535), &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, 0, &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2629, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		uint16_t L_10 = m7496(NULL, L_9, &m7496_MI);
		return L_10;
	}
}
extern MethodInfo m11309_MI;
extern "C" uint16_t m11309 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2629, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint16_t)L_5));
	}
}
extern MethodInfo m11310_MI;
extern "C" uint16_t m11310 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2629, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint16_t)L_5));
	}
}
extern MethodInfo m11311_MI;
extern "C" uint16_t m11311 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2629, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11312_MI;
extern "C" uint16_t m11312 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2629, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int64_t L_4 = p0;
		return (((uint16_t)L_4));
	}
}
extern MethodInfo m11313_MI;
extern "C" uint16_t m11313 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2630, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int8_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11314_MI;
extern "C" uint16_t m11314 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2630, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11315_MI;
extern "C" uint16_t m11315 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint16_t L_3 = m7259(NULL, L_1, L_2, &m7259_MI);
		return L_3;
	}
}
extern MethodInfo m11316_MI;
extern "C" uint16_t m11316 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2631, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		uint32_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m11317_MI;
extern "C" uint16_t m11317 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((int32_t)65535)))))))
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2631, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		uint64_t L_3 = p0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m4290_MI;
extern "C" uint16_t m4290 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		uint16_t L_2 = m11318(NULL, L_1, (t9 *)NULL, &m11318_MI);
		return L_2;
	}
}
extern "C" uint16_t m11318 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint16_t L_3 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12102_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11319_MI;
extern "C" uint32_t m11319 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11320_MI;
extern "C" uint32_t m11320 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11321_MI;
extern "C" uint32_t m11321 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11322_MI;
extern "C" uint32_t m11322 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7432(&L_1, (-1), 0, 0, 0, 0, &m7432_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, 0, &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2632, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		uint32_t L_10 = m7498(NULL, L_9, &m7498_MI);
		return L_10;
	}
}
extern MethodInfo m11323_MI;
extern "C" uint32_t m11323 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2632, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint32_t)L_5));
	}
}
extern MethodInfo m11324_MI;
extern "C" uint32_t m11324 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2632, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint32_t)L_5));
	}
}
extern MethodInfo m11325_MI;
extern "C" uint32_t m11325 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2633, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int32_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11326_MI;
extern "C" uint32_t m11326 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2632, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int64_t L_4 = p0;
		return (((uint32_t)L_4));
	}
}
extern MethodInfo m11327_MI;
extern "C" uint32_t m11327 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2633, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int8_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11328_MI;
extern "C" uint32_t m11328 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int64_t)(((int64_t)L_0))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2633, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int16_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11329_MI;
extern "C" uint32_t m11329 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint32_t L_3 = m7129(NULL, L_1, L_2, &m7129_MI);
		return L_3;
	}
}
extern MethodInfo m11330_MI;
extern "C" uint32_t m11330 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2634, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		uint64_t L_3 = p0;
		return (((uint32_t)L_3));
	}
}
extern MethodInfo m11331_MI;
extern "C" uint32_t m11331 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return L_0;
	}
}
extern MethodInfo m11332_MI;
extern "C" uint32_t m11332 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint32_t L_3 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t9 * >::Invoke(&m12103_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11333_MI;
extern "C" uint64_t m11333 (t9 * __this , bool p0, MethodInfo* method)
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
extern MethodInfo m11334_MI;
extern "C" uint64_t m11334 (t9 * __this , uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11335_MI;
extern "C" uint64_t m11335 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11336_MI;
extern "C" uint64_t m11336 (t9 * __this , t897  p0, MethodInfo* method)
{
	{
		t897  L_0 = p0;
		t897  L_1 = {0};
		m7432(&L_1, (-1), (-1), 0, 0, 0, &m7432_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_2 = m7515(NULL, L_0, L_1, &m7515_MI);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		t897  L_3 = p0;
		t897  L_4 = {0};
		m7433(&L_4, 0, &m7433_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_5 = m7516(NULL, L_3, L_4, &m7516_MI);
		if (!L_5)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral2635, &m7818_MI);
		t2130 * L_7 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_7, L_6, &m11754_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		t897  L_8 = p0;
		t897  L_9 = m11544(NULL, L_8, &m11544_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		uint64_t L_10 = m7500(NULL, L_9, &m7500_MI);
		return L_10;
	}
}
extern MethodInfo m11337_MI;
extern "C" uint64_t m11337 (t9 * __this , double p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2635, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		double L_4 = p0;
		double L_5 = round(L_4);
		return (((uint64_t)L_5));
	}
}
extern MethodInfo m11338_MI;
extern "C" uint64_t m11338 (t9 * __this , float p0, MethodInfo* method)
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
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2635, &m7818_MI);
		t2130 * L_3 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_3, L_2, &m11754_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		float L_4 = p0;
		double L_5 = round((((double)L_4)));
		return (((uint64_t)L_5));
	}
}
extern MethodInfo m11339_MI;
extern "C" uint64_t m11339 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2636, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t L_3 = p0;
		return (((int64_t)L_3));
	}
}
extern MethodInfo m11340_MI;
extern "C" uint64_t m11340 (t9 * __this , int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2636, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		int64_t L_3 = p0;
		return L_3;
	}
}
extern MethodInfo m11341_MI;
extern "C" uint64_t m11341 (t9 * __this , int8_t p0, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		if ((((int32_t)(((int32_t)L_0))) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t2130 * L_1 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_1, (t2*) &_stringLiteral2636, &m11754_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0010:
	{
		int8_t L_2 = p0;
		return (((int64_t)L_2));
	}
}
extern MethodInfo m11342_MI;
extern "C" uint64_t m11342 (t9 * __this , int16_t p0, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2636, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int16_t L_3 = p0;
		return (((int64_t)L_3));
	}
}
extern MethodInfo m11343_MI;
extern "C" uint64_t m11343 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
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
		uint64_t L_3 = m7152(NULL, L_1, L_2, &m7152_MI);
		return L_3;
	}
}
extern MethodInfo m11344_MI;
extern "C" uint64_t m11344 (t9 * __this , uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m11345_MI;
extern "C" uint64_t m11345 (t9 * __this , uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		return (((uint64_t)L_0));
	}
}
extern MethodInfo m4291_MI;
extern "C" uint64_t m4291 (t9 * __this , t9 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		uint64_t L_2 = m11346(NULL, L_1, (t9 *)NULL, &m11346_MI);
		return L_2;
	}
}
extern "C" uint64_t m11346 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		uint64_t L_3 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t9 * >::Invoke(&m12104_MI, ((t9 *)Castclass(L_1, InitializedTypeInfo(&t184_TI))), L_2);
		return L_3;
	}
}
extern MethodInfo m11347_MI;
extern "C" t9 * m11347 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	t894 * V_0 = {0};
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
		m339(L_2, (t2*) &_stringLiteral2637, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_3 = m6941(NULL, &m6941_MI);
		V_0 = L_3;
		t126 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t269_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_4) == ((t9*)(t126 *)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		t894 * L_6 = V_0;
		t1695 * L_7 = (t1695 *)VirtFuncInvoker0< t1695 * >::Invoke(&m8636_MI, L_6);
		V_1 = L_7;
		goto IL_0034;
	}

IL_002d:
	{
		t894 * L_8 = V_0;
		t1546 * L_9 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m8635_MI, L_8);
		V_1 = L_9;
	}

IL_0034:
	{
		t9 * L_10 = p0;
		t126 * L_11 = p1;
		t9 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t9 * L_13 = m11348(NULL, L_10, L_11, L_12, 1, &m11348_MI);
		return L_13;
	}
}
extern "C" t9 * m11348 (t9 * __this , t9 * p0, t126 * p1, t9 * p2, bool p3, MethodInfo* method)
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
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_2);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		t2113 * L_4 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_4, (t2*) &_stringLiteral2638, &m11537_MI);
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
		t2113 * L_6 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_6, (t2*) &_stringLiteral2639, &m11537_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		t9 * L_7 = p0;
		t126 * L_8 = m2486(L_7, &m2486_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_14 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_15 = 0;
		if ((!(((t9*)(t126 *)L_13) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_14, L_15))))))
		{
			goto IL_0056;
		}
	}
	{
		t132 * L_16 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_16, &m11115_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0056:
	{
		t126 * L_17 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_18 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_22 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_23 = 2;
		if ((!(((t9*)(t126 *)L_21) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_22, L_23))))))
		{
			goto IL_0077;
		}
	}
	{
		t2113 * L_24 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_24, (t2*) &_stringLiteral2640, &m11537_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0077:
	{
		t126 * L_25 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_26 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_27 = 3;
		if ((!(((t9*)(t126 *)L_25) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_26, L_27))))))
		{
			goto IL_008e;
		}
	}
	{
		t9 * L_28 = V_0;
		t9 * L_29 = p2;
		bool L_30 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12091_MI, L_28, L_29);
		bool L_31 = L_30;
		t9 * L_32 = Box(InitializedTypeInfo(&t124_TI), &L_31);
		return L_32;
	}

IL_008e:
	{
		t126 * L_33 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_34 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_35 = 4;
		if ((!(((t9*)(t126 *)L_33) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_34, L_35))))))
		{
			goto IL_00a5;
		}
	}
	{
		t9 * L_36 = V_0;
		t9 * L_37 = p2;
		uint16_t L_38 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12093_MI, L_36, L_37);
		uint16_t L_39 = L_38;
		t9 * L_40 = Box(InitializedTypeInfo(&t296_TI), &L_39);
		return L_40;
	}

IL_00a5:
	{
		t126 * L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_42 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_43 = 5;
		if ((!(((t9*)(t126 *)L_41) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_42, L_43))))))
		{
			goto IL_00bc;
		}
	}
	{
		t9 * L_44 = V_0;
		t9 * L_45 = p2;
		int8_t L_46 = (int8_t)InterfaceFuncInvoker1< int8_t, t9 * >::Invoke(&m12099_MI, L_44, L_45);
		int8_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t186_TI), &L_47);
		return L_48;
	}

IL_00bc:
	{
		t126 * L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_50 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_51 = 6;
		if ((!(((t9*)(t126 *)L_49) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_50, L_51))))))
		{
			goto IL_00d3;
		}
	}
	{
		t9 * L_52 = V_0;
		t9 * L_53 = p2;
		uint8_t L_54 = (uint8_t)InterfaceFuncInvoker1< uint8_t, t9 * >::Invoke(&m12092_MI, L_52, L_53);
		uint8_t L_55 = L_54;
		t9 * L_56 = Box(InitializedTypeInfo(&t568_TI), &L_55);
		return L_56;
	}

IL_00d3:
	{
		t126 * L_57 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_58 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_59 = 7;
		if ((!(((t9*)(t126 *)L_57) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_58, L_59))))))
		{
			goto IL_00ea;
		}
	}
	{
		t9 * L_60 = V_0;
		t9 * L_61 = p2;
		int16_t L_62 = (int16_t)InterfaceFuncInvoker1< int16_t, t9 * >::Invoke(&m12097_MI, L_60, L_61);
		int16_t L_63 = L_62;
		t9 * L_64 = Box(InitializedTypeInfo(&t327_TI), &L_63);
		return L_64;
	}

IL_00ea:
	{
		t126 * L_65 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_66 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_67 = 8;
		if ((!(((t9*)(t126 *)L_65) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_66, L_67))))))
		{
			goto IL_0101;
		}
	}
	{
		t9 * L_68 = V_0;
		t9 * L_69 = p2;
		uint16_t L_70 = (uint16_t)InterfaceFuncInvoker1< uint16_t, t9 * >::Invoke(&m12102_MI, L_68, L_69);
		uint16_t L_71 = L_70;
		t9 * L_72 = Box(InitializedTypeInfo(&t302_TI), &L_71);
		return L_72;
	}

IL_0101:
	{
		t126 * L_73 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_74 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_75 = ((int32_t)9);
		if ((!(((t9*)(t126 *)L_73) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_74, L_75))))))
		{
			goto IL_0119;
		}
	}
	{
		t9 * L_76 = V_0;
		t9 * L_77 = p2;
		int32_t L_78 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11947_MI, L_76, L_77);
		int32_t L_79 = L_78;
		t9 * L_80 = Box(InitializedTypeInfo(&t125_TI), &L_79);
		return L_80;
	}

IL_0119:
	{
		t126 * L_81 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_82 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_83 = ((int32_t)10);
		if ((!(((t9*)(t126 *)L_81) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_82, L_83))))))
		{
			goto IL_0131;
		}
	}
	{
		t9 * L_84 = V_0;
		t9 * L_85 = p2;
		uint32_t L_86 = (uint32_t)InterfaceFuncInvoker1< uint32_t, t9 * >::Invoke(&m12103_MI, L_84, L_85);
		uint32_t L_87 = L_86;
		t9 * L_88 = Box(InitializedTypeInfo(&t168_TI), &L_87);
		return L_88;
	}

IL_0131:
	{
		t126 * L_89 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_90 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_91 = ((int32_t)11);
		if ((!(((t9*)(t126 *)L_89) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_90, L_91))))))
		{
			goto IL_0149;
		}
	}
	{
		t9 * L_92 = V_0;
		t9 * L_93 = p2;
		int64_t L_94 = (int64_t)InterfaceFuncInvoker1< int64_t, t9 * >::Invoke(&m12098_MI, L_92, L_93);
		int64_t L_95 = L_94;
		t9 * L_96 = Box(InitializedTypeInfo(&t292_TI), &L_95);
		return L_96;
	}

IL_0149:
	{
		t126 * L_97 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_98 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_99 = ((int32_t)12);
		if ((!(((t9*)(t126 *)L_97) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_98, L_99))))))
		{
			goto IL_0161;
		}
	}
	{
		t9 * L_100 = V_0;
		t9 * L_101 = p2;
		uint64_t L_102 = (uint64_t)InterfaceFuncInvoker1< uint64_t, t9 * >::Invoke(&m12104_MI, L_100, L_101);
		uint64_t L_103 = L_102;
		t9 * L_104 = Box(InitializedTypeInfo(&t882_TI), &L_103);
		return L_104;
	}

IL_0161:
	{
		t126 * L_105 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_106 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_107 = ((int32_t)13);
		if ((!(((t9*)(t126 *)L_105) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_106, L_107))))))
		{
			goto IL_0179;
		}
	}
	{
		t9 * L_108 = V_0;
		t9 * L_109 = p2;
		float L_110 = (float)InterfaceFuncInvoker1< float, t9 * >::Invoke(&m12100_MI, L_108, L_109);
		float L_111 = L_110;
		t9 * L_112 = Box(InitializedTypeInfo(&t123_TI), &L_111);
		return L_112;
	}

IL_0179:
	{
		t126 * L_113 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_114 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_115 = ((int32_t)14);
		if ((!(((t9*)(t126 *)L_113) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_114, L_115))))))
		{
			goto IL_0191;
		}
	}
	{
		t9 * L_116 = V_0;
		t9 * L_117 = p2;
		double L_118 = (double)InterfaceFuncInvoker1< double, t9 * >::Invoke(&m12096_MI, L_116, L_117);
		double L_119 = L_118;
		t9 * L_120 = Box(InitializedTypeInfo(&t156_TI), &L_119);
		return L_120;
	}

IL_0191:
	{
		t126 * L_121 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_122 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_123 = ((int32_t)15);
		if ((!(((t9*)(t126 *)L_121) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_122, L_123))))))
		{
			goto IL_01a9;
		}
	}
	{
		t9 * L_124 = V_0;
		t9 * L_125 = p2;
		t897  L_126 = (t897 )InterfaceFuncInvoker1< t897 , t9 * >::Invoke(&m12095_MI, L_124, L_125);
		t897  L_127 = L_126;
		t9 * L_128 = Box(InitializedTypeInfo(&t897_TI), &L_127);
		return L_128;
	}

IL_01a9:
	{
		t126 * L_129 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_130 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_131 = ((int32_t)16);
		if ((!(((t9*)(t126 *)L_129) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_130, L_131))))))
		{
			goto IL_01c1;
		}
	}
	{
		t9 * L_132 = V_0;
		t9 * L_133 = p2;
		t269  L_134 = (t269 )InterfaceFuncInvoker1< t269 , t9 * >::Invoke(&m12094_MI, L_132, L_133);
		t269  L_135 = L_134;
		t9 * L_136 = Box(InitializedTypeInfo(&t269_TI), &L_135);
		return L_136;
	}

IL_01c1:
	{
		t126 * L_137 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t152* L_138 = ((t884_SFs*)InitializedTypeInfo(&t884_TI)->static_fields)->f1;
		int32_t L_139 = ((int32_t)18);
		if ((!(((t9*)(t126 *)L_137) == ((t9*)(t126 *)(*(t126 **)(t126 **)SZArrayLdElema(L_138, L_139))))))
		{
			goto IL_01d4;
		}
	}
	{
		t9 * L_140 = V_0;
		t9 * L_141 = p2;
		t2* L_142 = (t2*)InterfaceFuncInvoker1< t2*, t9 * >::Invoke(&m12101_MI, L_140, L_141);
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
		t9 * L_147 = (t9 *)InterfaceFuncInvoker2< t9 *, t126 *, t9 * >::Invoke(&m12105_MI, L_144, L_145, L_146);
		return L_147;
	}

IL_01e0:
	{
		t9 * L_148 = p0;
		t126 * L_149 = m2486(L_148, &m2486_MI);
		t2* L_150 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_149);
		t126 * L_151 = p1;
		t2* L_152 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_151);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_153 = m4419(NULL, (t2*) &_stringLiteral2641, L_150, (t2*) &_stringLiteral2642, L_152, &m4419_MI);
		t2* L_154 = m7818(NULL, L_153, &m7818_MI);
		t2113 * L_155 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11537(L_155, L_154, &m11537_MI);
		il2cpp_codegen_raise_exception(L_155);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2142MD.h"
extern MethodInfo m561_MI;
extern MethodInfo m11349_MI;
extern MethodInfo m11536_MI;
extern MethodInfo m11849_MI;


extern "C" void m11349 (t2092 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11350_MI;
extern "C" void m11350 (t2092 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11351_MI;
extern "C" void m11351 (t9 * __this , MethodInfo* method)
{
	{
		t2092 * L_0 = (t2092 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2092_TI));
		m11349(L_0, &m11349_MI);
		((t2092_SFs*)InitializedTypeInfo(&t2092_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m11352_MI;
extern "C" bool m11352 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11353_MI;
extern "C" uint8_t m11353 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11354_MI;
extern "C" uint16_t m11354 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11355_MI;
extern "C" t269  m11355 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11356_MI;
extern "C" t897  m11356 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11357_MI;
extern "C" double m11357 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11358_MI;
extern "C" int16_t m11358 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11359_MI;
extern "C" int32_t m11359 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11360_MI;
extern "C" int64_t m11360 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11361_MI;
extern "C" int8_t m11361 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11362_MI;
extern "C" float m11362 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11363_MI;
extern "C" t9 * m11363 (t2092 * __this, t126 * p0, t9 * p1, MethodInfo* method)
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
		t126 * L_4 = m329(NULL, LoadTypeToken(&t2092_0_0_0), &m329_MI);
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
		t2113 * L_5 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_5, &m11536_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m11364_MI;
extern "C" uint16_t m11364 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11365_MI;
extern "C" uint32_t m11365 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11366_MI;
extern "C" uint64_t m11366 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11367_MI;
extern "C" void m11367 (t2092 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11849(NULL, __this, L_0, L_1, &m11849_MI);
		return;
	}
}
extern MethodInfo m11368_MI;
extern "C" t2* m11368 (t2092 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m11369_MI;
extern "C" t2* m11369 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
#include "t2093.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2093_TI;
#include "t2093MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1691.h"
#include "t2136.h"
#include "t2094.h"
#include "t2184.h"
#include "t2185.h"
#include "t2163.h"
#include "t2162.h"
#include "t306.h"
#include "t2122.h"
#include "t1516.h"
#include "t910.h"
#include "t883.h"
extern TypeInfo t2136_TI;
extern TypeInfo t297_TI;
extern TypeInfo t221_TI;
extern TypeInfo t1088_TI;
extern TypeInfo t2163_TI;
extern TypeInfo t2122_TI;
extern TypeInfo t2184_TI;
extern TypeInfo t2185_TI;
extern TypeInfo t883_TI;
#include "t2136MD.h"
#include "t2163MD.h"
#include "t307MD.h"
#include "t2122MD.h"
#include "t2184MD.h"
#include "t2185MD.h"
#include "t910MD.h"
#include "t883MD.h"
#include "t1695MD.h"
#include "t2095MD.h"
extern Il2CppType t221_0_0_0;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t2184_0_0_0;
extern Il2CppType t2185_0_0_0;
extern MethodInfo m11392_MI;
extern MethodInfo m11788_MI;
extern MethodInfo m11789_MI;
extern MethodInfo m11791_MI;
extern MethodInfo m11792_MI;
extern MethodInfo m11400_MI;
extern MethodInfo m11370_MI;
extern MethodInfo m11822_MI;
extern MethodInfo m11827_MI;
extern MethodInfo m11437_MI;
extern MethodInfo m11793_MI;
extern MethodInfo m1084_MI;
extern MethodInfo m11402_MI;
extern MethodInfo m11393_MI;
extern MethodInfo m11394_MI;
extern MethodInfo m11371_MI;
extern MethodInfo m11374_MI;
extern MethodInfo m11783_MI;
extern MethodInfo m6951_MI;
extern MethodInfo m11372_MI;
extern MethodInfo m11413_MI;
extern MethodInfo m11391_MI;
extern MethodInfo m11785_MI;
extern MethodInfo m11415_MI;
extern MethodInfo m11373_MI;
extern MethodInfo m1107_MI;
extern MethodInfo m12106_MI;
extern MethodInfo m12107_MI;
extern MethodInfo m11435_MI;
extern MethodInfo m11417_MI;
extern MethodInfo m11405_MI;
extern MethodInfo m5724_MI;
extern MethodInfo m11817_MI;
extern MethodInfo m11814_MI;
extern MethodInfo m11406_MI;
extern MethodInfo m11813_MI;
extern MethodInfo m4380_MI;
extern MethodInfo m5789_MI;
extern MethodInfo m11419_MI;
extern MethodInfo m11420_MI;
extern MethodInfo m11444_MI;
extern MethodInfo m4288_MI;
extern MethodInfo m8654_MI;
extern MethodInfo m11421_MI;
extern MethodInfo m11429_MI;
extern MethodInfo m8674_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m8685_MI;
extern MethodInfo m11432_MI;
extern MethodInfo m8671_MI;
extern MethodInfo m5897_MI;
extern MethodInfo m11424_MI;
extern MethodInfo m4334_MI;
extern MethodInfo m7010_MI;
extern MethodInfo m11428_MI;
extern MethodInfo m8666_MI;
extern MethodInfo m2713_MI;
extern MethodInfo m8678_MI;
extern MethodInfo m8667_MI;
extern MethodInfo m8669_MI;
extern MethodInfo m11426_MI;
extern MethodInfo m2765_MI;
extern MethodInfo m11461_MI;
extern MethodInfo m5958_MI;
extern MethodInfo m5777_MI;
extern MethodInfo m11425_MI;
extern MethodInfo m8664_MI;
extern MethodInfo m11423_MI;
extern MethodInfo m8662_MI;
extern MethodInfo m5898_MI;
extern MethodInfo m331_MI;
extern MethodInfo m11427_MI;
extern MethodInfo m11422_MI;
extern MethodInfo m8665_MI;
extern MethodInfo m8663_MI;
extern MethodInfo m4235_MI;
extern MethodInfo m11401_MI;
extern MethodInfo m6948_MI;
extern MethodInfo m11395_MI;
extern MethodInfo m11439_MI;
extern MethodInfo m11442_MI;
extern MethodInfo m11784_MI;
extern MethodInfo m11443_MI;
extern MethodInfo m11456_MI;
extern MethodInfo m11819_MI;
extern MethodInfo m11430_MI;
extern MethodInfo m11431_MI;
extern MethodInfo m11436_MI;
extern MethodInfo m4381_MI;
extern MethodInfo m11463_MI;
extern MethodInfo m11825_MI;
extern MethodInfo m11826_MI;
extern MethodInfo m11812_MI;
extern MethodInfo m11815_MI;
extern MethodInfo m11816_MI;
extern MethodInfo m11818_MI;
extern FieldInfo t2163_f50_FieldInfo;
extern FieldInfo t2163_f51_FieldInfo;
extern Il2CppGenericMethod m12106_GM;
extern Il2CppGenericMethod m12107_GM;


extern TypeInfo* t158_TI_var;
extern "C" void m11370 (t269 * __this, int64_t p0, MethodInfo* method)
{
	static bool m11370_init;
	if (!m11370_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11370_init = true;
	}
	t2* V_0 = {0};
	t269  V_1 = {0};
	t269  V_2 = {0};
	t269  V_3 = {0};
	t269  V_4 = {0};
	{
		int64_t L_0 = p0;
		t297  L_1 = {0};
		m11783(&L_1, L_0, &m11783_MI);
		__this->f0 = L_1;
		int64_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_3 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		V_1 = L_3;
		int64_t L_4 = m6951((&V_1), &m6951_MI);
		if ((((int64_t)L_2) < ((int64_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		int64_t L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_6 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		V_2 = L_6;
		int64_t L_7 = m6951((&V_2), &m6951_MI);
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
		t9 * L_11 = Box(InitializedTypeInfo(&t292_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 0)) = (t9 *)L_11;
		t158* L_12 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_13 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		V_3 = L_13;
		int64_t L_14 = m6951((&V_3), &m6951_MI);
		int64_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t292_TI), &L_15);
		ArrayElementTypeCheck (L_12, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 1)) = (t9 *)L_16;
		t158* L_17 = L_12;
		t269  L_18 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		V_4 = L_18;
		int64_t L_19 = m6951((&V_4), &m6951_MI);
		int64_t L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t292_TI), &L_20);
		ArrayElementTypeCheck (L_17, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 2)) = (t9 *)L_21;
		t2* L_22 = m7819(NULL, (t2*) &_stringLiteral2643, L_17, &m7819_MI);
		V_0 = L_22;
		t2* L_23 = V_0;
		t896 * L_24 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_24, (t2*) &_stringLiteral2644, L_23, &m4336_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_007d:
	{
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11371 (t269 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		m11372(__this, L_0, L_1, L_2, 0, 0, 0, 0, &m11372_MI);
		return;
	}
}
extern "C" void m11372 (t269 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_8 = m11413(NULL, L_6, L_7, &m11413_MI);
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
		t896 * L_17 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_17, (t2*) &_stringLiteral2645, &m5693_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_005d:
	{
		int32_t L_18 = p0;
		int32_t L_19 = p1;
		int32_t L_20 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_21 = m11391(NULL, L_18, L_19, L_20, &m11391_MI);
		int32_t L_22 = p3;
		int32_t L_23 = p4;
		int32_t L_24 = p5;
		int32_t L_25 = p6;
		t297  L_26 = {0};
		m11785(&L_26, L_21, L_22, L_23, L_24, L_25, &m11785_MI);
		__this->f0 = L_26;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11373 (t269 * __this, bool p0, t297  p1, MethodInfo* method)
{
	t269  V_0 = {0};
	t269  V_1 = {0};
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int64_t L_1 = m11793((&p1), &m11793_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_2 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		V_0 = L_2;
		int64_t L_3 = m6951((&V_0), &m6951_MI);
		if ((((int64_t)L_1) < ((int64_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		int64_t L_4 = m11793((&p1), &m11793_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_5 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		V_1 = L_5;
		int64_t L_6 = m6951((&V_1), &m6951_MI);
		if ((((int64_t)L_4) <= ((int64_t)L_6)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_7, &m5870_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		t297  L_8 = p1;
		__this->f0 = L_8;
		__this->f1 = 0;
		return;
	}
}
extern "C" void m11374 (t269 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		m11370(__this, L_0, &m11370_MI);
		int32_t L_1 = p1;
		m11415(__this, L_1, &m11415_MI);
		int32_t L_2 = p1;
		__this->f1 = L_2;
		return;
	}
}
extern MethodInfo m11375_MI;
extern TypeInfo* t221_TI_var;
extern TypeInfo* t1088_TI_var;
extern TypeInfo* t2184_TI_var;
extern TypeInfo* t2185_TI_var;
extern MethodInfo* m12106_MI_var;
extern MethodInfo* m12107_MI_var;
extern "C" void m11375 (t9 * __this , MethodInfo* method)
{
	static bool m11375_init;
	if (!m11375_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		t2184_TI_var = il2cpp_codegen_class_from_type(&t2184_0_0_0);
		t2185_TI_var = il2cpp_codegen_class_from_type(&t2185_0_0_0);
		m12106_MI_var = il2cpp_codegen_genericmethod_get_method(&m12106_GM);
		m12107_MI_var = il2cpp_codegen_genericmethod_get_method(&m12107_GM);
		m11375_init = true;
	}
	t2184 * V_0 = {0};
	t2185 * V_1 = {0};
	{
		t297  L_0 = {0};
		m11783(&L_0, ((int64_t)3155378975999999999LL), &m11783_MI);
		t269  L_1 = {0};
		m11373(&L_1, 0, L_0, &m11373_MI);
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2 = L_1;
		t297  L_2 = {0};
		m11783(&L_2, (((int64_t)0)), &m11783_MI);
		t269  L_3 = {0};
		m11373(&L_3, 0, L_2, &m11373_MI);
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3 = L_3;
		t221* L_4 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)9)));
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2646);
		*((t2**)(t2**)SZArrayLdElema(L_4, 0)) = (t2*)(t2*) &_stringLiteral2646;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2647);
		*((t2**)(t2**)SZArrayLdElema(L_5, 1)) = (t2*)(t2*) &_stringLiteral2647;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2648);
		*((t2**)(t2**)SZArrayLdElema(L_6, 2)) = (t2*)(t2*) &_stringLiteral2648;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2649);
		*((t2**)(t2**)SZArrayLdElema(L_7, 3)) = (t2*)(t2*) &_stringLiteral2649;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral2650);
		*((t2**)(t2**)SZArrayLdElema(L_8, 4)) = (t2*)(t2*) &_stringLiteral2650;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral2651);
		*((t2**)(t2**)SZArrayLdElema(L_9, 5)) = (t2*)(t2*) &_stringLiteral2651;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral2652);
		*((t2**)(t2**)SZArrayLdElema(L_10, 6)) = (t2*)(t2*) &_stringLiteral2652;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral2653);
		*((t2**)(t2**)SZArrayLdElema(L_11, 7)) = (t2*)(t2*) &_stringLiteral2653;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral2654);
		*((t2**)(t2**)SZArrayLdElema(L_12, 8)) = (t2*)(t2*) &_stringLiteral2654;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f4 = L_12;
		t221* L_13 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)10)));
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_13, 0)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_14, 1)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_15, 2)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral2658);
		*((t2**)(t2**)SZArrayLdElema(L_16, 3)) = (t2*)(t2*) &_stringLiteral2658;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral2659);
		*((t2**)(t2**)SZArrayLdElema(L_17, 4)) = (t2*)(t2*) &_stringLiteral2659;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral2660);
		*((t2**)(t2**)SZArrayLdElema(L_18, 5)) = (t2*)(t2*) &_stringLiteral2660;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_19, 6)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral2662);
		*((t2**)(t2**)SZArrayLdElema(L_20, 7)) = (t2*)(t2*) &_stringLiteral2662;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral2663);
		*((t2**)(t2**)SZArrayLdElema(L_21, 8)) = (t2*)(t2*) &_stringLiteral2663;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral2664);
		*((t2**)(t2**)SZArrayLdElema(L_22, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2664;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f5 = L_22;
		t221* L_23 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)12)));
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_23, 0)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_24, 1)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_25, 2)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_26, 3)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_27, 4)) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral2667);
		*((t2**)(t2**)SZArrayLdElema(L_28, 5)) = (t2*)(t2*) &_stringLiteral2667;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_29, 6)) = (t2*)(t2*) &_stringLiteral2668;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_30, 7)) = (t2*)(t2*) &_stringLiteral2669;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral2670);
		*((t2**)(t2**)SZArrayLdElema(L_31, 8)) = (t2*)(t2*) &_stringLiteral2670;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral2671);
		*((t2**)(t2**)SZArrayLdElema(L_32, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2671;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral2672);
		*((t2**)(t2**)SZArrayLdElema(L_33, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2672;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral2673);
		*((t2**)(t2**)SZArrayLdElema(L_34, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2673;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f6 = L_34;
		t221* L_35 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)15)));
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_35, 0)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_36, 1)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_37, 2)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_38, 3)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_39, 4)) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t2*) &_stringLiteral2660);
		*((t2**)(t2**)SZArrayLdElema(L_40, 5)) = (t2*)(t2*) &_stringLiteral2660;
		t221* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral2661);
		*((t2**)(t2**)SZArrayLdElema(L_41, 6)) = (t2*)(t2*) &_stringLiteral2661;
		t221* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_42, 7)) = (t2*)(t2*) &_stringLiteral2669;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral2670);
		*((t2**)(t2**)SZArrayLdElema(L_43, 8)) = (t2*)(t2*) &_stringLiteral2670;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral2674);
		*((t2**)(t2**)SZArrayLdElema(L_44, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2674;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral2675);
		*((t2**)(t2**)SZArrayLdElema(L_45, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2675;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral2676);
		*((t2**)(t2**)SZArrayLdElema(L_46, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2676;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral2672);
		*((t2**)(t2**)SZArrayLdElema(L_47, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral2672;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral2677);
		*((t2**)(t2**)SZArrayLdElema(L_48, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral2677;
		t221* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral2673);
		*((t2**)(t2**)SZArrayLdElema(L_49, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral2673;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f7 = L_49;
		t221* L_50 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)15)));
		ArrayElementTypeCheck (L_50, (t2*) &_stringLiteral2655);
		*((t2**)(t2**)SZArrayLdElema(L_50, 0)) = (t2*)(t2*) &_stringLiteral2655;
		t221* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t2*) &_stringLiteral2656);
		*((t2**)(t2**)SZArrayLdElema(L_51, 1)) = (t2*)(t2*) &_stringLiteral2656;
		t221* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral2657);
		*((t2**)(t2**)SZArrayLdElema(L_52, 2)) = (t2*)(t2*) &_stringLiteral2657;
		t221* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral2665);
		*((t2**)(t2**)SZArrayLdElema(L_53, 3)) = (t2*)(t2*) &_stringLiteral2665;
		t221* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral2666);
		*((t2**)(t2**)SZArrayLdElema(L_54, 4)) = (t2*)(t2*) &_stringLiteral2666;
		t221* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t2*) &_stringLiteral2667);
		*((t2**)(t2**)SZArrayLdElema(L_55, 5)) = (t2*)(t2*) &_stringLiteral2667;
		t221* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral2668);
		*((t2**)(t2**)SZArrayLdElema(L_56, 6)) = (t2*)(t2*) &_stringLiteral2668;
		t221* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t2*) &_stringLiteral2669);
		*((t2**)(t2**)SZArrayLdElema(L_57, 7)) = (t2*)(t2*) &_stringLiteral2669;
		t221* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t2*) &_stringLiteral2670);
		*((t2**)(t2**)SZArrayLdElema(L_58, 8)) = (t2*)(t2*) &_stringLiteral2670;
		t221* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t2*) &_stringLiteral2678);
		*((t2**)(t2**)SZArrayLdElema(L_59, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2678;
		t221* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t2*) &_stringLiteral2673);
		*((t2**)(t2**)SZArrayLdElema(L_60, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2673;
		t221* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral2679);
		*((t2**)(t2**)SZArrayLdElema(L_61, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral2679;
		t221* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t2*) &_stringLiteral2675);
		*((t2**)(t2**)SZArrayLdElema(L_62, ((int32_t)12))) = (t2*)(t2*) &_stringLiteral2675;
		t221* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t2*) &_stringLiteral2676);
		*((t2**)(t2**)SZArrayLdElema(L_63, ((int32_t)13))) = (t2*)(t2*) &_stringLiteral2676;
		t221* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t2*) &_stringLiteral2672);
		*((t2**)(t2**)SZArrayLdElema(L_64, ((int32_t)14))) = (t2*)(t2*) &_stringLiteral2672;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f8 = L_64;
		t221* L_65 = ((t221*)SZArrayNew(t221_TI_var, 3));
		ArrayElementTypeCheck (L_65, (t2*) &_stringLiteral2680);
		*((t2**)(t2**)SZArrayLdElema(L_65, 0)) = (t2*)(t2*) &_stringLiteral2680;
		t221* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t2*) &_stringLiteral2681);
		*((t2**)(t2**)SZArrayLdElema(L_66, 1)) = (t2*)(t2*) &_stringLiteral2681;
		t221* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t2*) &_stringLiteral2682);
		*((t2**)(t2**)SZArrayLdElema(L_67, 2)) = (t2*)(t2*) &_stringLiteral2682;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f9 = L_67;
		t221* L_68 = ((t221*)SZArrayNew(t221_TI_var, 3));
		ArrayElementTypeCheck (L_68, (t2*) &_stringLiteral2683);
		*((t2**)(t2**)SZArrayLdElema(L_68, 0)) = (t2*)(t2*) &_stringLiteral2683;
		t221* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t2*) &_stringLiteral2684);
		*((t2**)(t2**)SZArrayLdElema(L_69, 1)) = (t2*)(t2*) &_stringLiteral2684;
		t221* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t2*) &_stringLiteral2682);
		*((t2**)(t2**)SZArrayLdElema(L_70, 2)) = (t2*)(t2*) &_stringLiteral2682;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f10 = L_70;
		t1088* L_71 = ((t1088*)SZArrayNew(t1088_TI_var, ((int32_t)13)));
		m1107(NULL, (t121 *)(t121 *)L_71, LoadFieldToken(&t2163_f50_FieldInfo), &m1107_MI);
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f11 = L_71;
		t1088* L_72 = ((t1088*)SZArrayNew(t1088_TI_var, ((int32_t)13)));
		m1107(NULL, (t121 *)(t121 *)L_72, LoadFieldToken(&t2163_f51_FieldInfo), &m1107_MI);
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f12 = L_72;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		bool L_73 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f0;
		if (!L_73)
		{
			goto IL_02e6;
		}
	}
	{
		t2184 * L_74 = (t2184 *)il2cpp_codegen_object_new (t2184_TI_var);
		m12106(L_74, m12106_MI_var);
		V_0 = L_74;
		t2185 * L_75 = (t2185 *)il2cpp_codegen_object_new (t2185_TI_var);
		m12107(L_75, m12107_MI_var);
		V_1 = L_75;
	}

IL_02e6:
	{
		return;
	}
}
extern MethodInfo m11376_MI;
extern "C" bool m11376 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11377_MI;
extern "C" uint8_t m11377 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11378_MI;
extern "C" uint16_t m11378 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11379_MI;
extern "C" t269  m11379 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		return (*(t269 *)__this);
	}
}
extern MethodInfo m11380_MI;
extern "C" t897  m11380 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11381_MI;
extern "C" double m11381 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11382_MI;
extern "C" int16_t m11382 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11383_MI;
extern "C" int32_t m11383 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11384_MI;
extern "C" int64_t m11384 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11385_MI;
extern "C" int8_t m11385 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11386_MI;
extern "C" float m11386 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11387_MI;
extern "C" t9 * m11387 (t269 * __this, t126 * p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1079, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t269_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_2) == ((t9*)(t126 *)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		t269  L_4 = (*(t269 *)__this);
		t9 * L_5 = Box(InitializedTypeInfo(&t269_TI), &L_4);
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
		t2* L_9 = m11435(__this, L_8, &m11435_MI);
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
		t269  L_12 = (*(t269 *)__this);
		t9 * L_13 = Box(InitializedTypeInfo(&t269_TI), &L_12);
		return L_13;
	}

IL_0055:
	{
		t2113 * L_14 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_14, &m11536_MI);
		il2cpp_codegen_raise_exception(L_14);
	}
}
extern MethodInfo m11388_MI;
extern "C" uint16_t m11388 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11389_MI;
extern "C" uint32_t m11389 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11390_MI;
extern "C" uint64_t m11390 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2113 * L_0 = (t2113 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2113_TI));
		m11536(L_0, &m11536_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" int32_t m11391 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t1088* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1088* G_B3_0 = {0};
	{
		V_1 = 0;
		V_2 = 1;
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_1 = m11417(NULL, L_0, &m11417_MI);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t1088* L_2 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f12;
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t1088* L_3 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f11;
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
		t1088* L_5 = V_0;
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
extern "C" int32_t m11392 (t269 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t1088* V_5 = {0};
	int32_t V_6 = 0;
	{
		V_4 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t1088* L_0 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f11;
		V_5 = L_0;
		t297 * L_1 = &(__this->f0);
		int32_t L_2 = m11788(L_1, &m11788_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t1088* L_27 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f12;
		V_5 = L_27;
	}

IL_00ad:
	{
		goto IL_00be;
	}

IL_00af:
	{
		int32_t L_28 = V_6;
		t1088* L_29 = V_5;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = L_31;
		V_6 = ((int32_t)((int32_t)L_28-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_29, L_32))));
	}

IL_00be:
	{
		int32_t L_33 = V_6;
		t1088* L_34 = V_5;
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
extern "C" int32_t m11393 (t269 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11392(__this, 2, &m11392_MI);
		return L_0;
	}
}
extern "C" int32_t m11394 (t269 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11392(__this, 0, &m11392_MI);
		return L_0;
	}
}
extern "C" int32_t m11395 (t269 * __this, MethodInfo* method)
{
	{
		t297 * L_0 = &(__this->f0);
		int32_t L_1 = m11788(L_0, &m11788_MI);
		return (int32_t)(((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)1))%(int32_t)7)));
	}
}
extern MethodInfo m11396_MI;
extern "C" int32_t m11396 (t269 * __this, MethodInfo* method)
{
	{
		t297 * L_0 = &(__this->f0);
		int32_t L_1 = m11789(L_0, &m11789_MI);
		return L_1;
	}
}
extern MethodInfo m11397_MI;
extern "C" int32_t m11397 (t269 * __this, MethodInfo* method)
{
	{
		t297 * L_0 = &(__this->f0);
		int32_t L_1 = m11791(L_0, &m11791_MI);
		return L_1;
	}
}
extern MethodInfo m11398_MI;
extern "C" int32_t m11398 (t269 * __this, MethodInfo* method)
{
	{
		t297 * L_0 = &(__this->f0);
		int32_t L_1 = m11792(L_0, &m11792_MI);
		return L_1;
	}
}
extern MethodInfo m11399_MI;
extern "C" int64_t m11399 (t9 * __this , MethodInfo* method)
{
	typedef int64_t (*m11399_ftn) ();
	static m11399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11399_ftn)il2cpp_codegen_resolve_icall ("System.DateTime::GetTimeMonotonic()");
	return _il2cpp_icall_func();
}
extern "C" int64_t m11400 (t9 * __this , MethodInfo* method)
{
	typedef int64_t (*m11400_ftn) ();
	static m11400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11400_ftn)il2cpp_codegen_resolve_icall ("System.DateTime::GetNow()");
	return _il2cpp_icall_func();
}
extern "C" t269  m1084 (t9 * __this , MethodInfo* method)
{
	int64_t V_0 = 0;
	t269  V_1 = {0};
	t269  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int64_t L_0 = m11400(NULL, &m11400_MI);
		V_0 = L_0;
		int64_t L_1 = V_0;
		m11370((&V_1), L_1, &m11370_MI);
		int64_t L_2 = V_0;
		int64_t L_3 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f14;
		if ((((int64_t)((int64_t)((int64_t)L_2-(int64_t)L_3))) <= ((int64_t)(((int64_t)((int32_t)600000000))))))
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_4 = m11822(NULL, &m11822_MI);
		t269  L_5 = V_1;
		t297  L_6 = m11827(L_4, L_5, &m11827_MI);
		t297  L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t297_TI), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f13 = L_8;
		int64_t L_9 = V_0;
		((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f14 = L_9;
	}

IL_0038:
	{
		t269  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t9 * L_11 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f13;
		t269  L_12 = m11437(NULL, L_10, ((*(t297 *)((t297 *)UnBox (L_11, InitializedTypeInfo(&t297_TI))))), &m11437_MI);
		V_2 = L_12;
		(&V_2)->f1 = 2;
		t269  L_13 = V_2;
		return L_13;
	}
}
extern "C" int64_t m6951 (t269 * __this, MethodInfo* method)
{
	{
		t297 * L_0 = &(__this->f0);
		int64_t L_1 = m11793(L_0, &m11793_MI);
		return L_1;
	}
}
extern "C" t269  m11401 (t9 * __this , MethodInfo* method)
{
	t269  V_0 = {0};
	t269  V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_0 = m1084(NULL, &m1084_MI);
		V_0 = L_0;
		int32_t L_1 = m11402((&V_0), &m11402_MI);
		int32_t L_2 = m11393((&V_0), &m11393_MI);
		int32_t L_3 = m11394((&V_0), &m11394_MI);
		m11371((&V_1), L_1, L_2, L_3, &m11371_MI);
		int32_t L_4 = ((&V_0)->f1);
		(&V_1)->f1 = L_4;
		t269  L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m6906_MI;
extern "C" t269  m6906 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int64_t L_0 = m11400(NULL, &m11400_MI);
		t269  L_1 = {0};
		m11374(&L_1, L_0, 1, &m11374_MI);
		return L_1;
	}
}
extern "C" int32_t m11402 (t269 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11392(__this, 3, &m11392_MI);
		return L_0;
	}
}
extern MethodInfo m11403_MI;
extern "C" int32_t m11403 (t269 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11404_MI;
extern "C" t269  m11404 (t269 * __this, t297  p0, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		int64_t L_0 = m11793((&p0), &m11793_MI);
		t269  L_1 = m11405(__this, L_0, &m11405_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		(&V_0)->f1 = L_2;
		t269  L_3 = V_0;
		return L_3;
	}
}
extern "C" t269  m11405 (t269 * __this, int64_t p0, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		int64_t L_0 = p0;
		t297 * L_1 = &(__this->f0);
		int64_t L_2 = m11793(L_1, &m11793_MI);
		if ((((int64_t)((int64_t)((int64_t)L_0+(int64_t)L_2))) > ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_0029;
		}
	}
	{
		int64_t L_3 = p0;
		t297 * L_4 = &(__this->f0);
		int64_t L_5 = m11793(L_4, &m11793_MI);
		if ((((int64_t)((int64_t)((int64_t)L_3+(int64_t)L_5))) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_002f;
		}
	}

IL_0029:
	{
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_6, &m5870_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int64_t L_7 = p0;
		t297 * L_8 = &(__this->f0);
		int64_t L_9 = m11793(L_8, &m11793_MI);
		m11370((&V_0), ((int64_t)((int64_t)L_7+(int64_t)L_9)), &m11370_MI);
		int32_t L_10 = (__this->f1);
		(&V_0)->f1 = L_10;
		t269  L_11 = V_0;
		return L_11;
	}
}
extern "C" t269  m5724 (t269 * __this, double p0, MethodInfo* method)
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
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_2, &m5870_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0032:
	{
		double L_3 = p0;
		double L_4 = round(((double)((double)L_3*(double)(10000.0))));
		V_0 = (((int64_t)L_4));
		int64_t L_5 = V_0;
		t269  L_6 = m11405(__this, L_5, &m11405_MI);
		return L_6;
	}
}
extern "C" t269  m6948 (t269 * __this, double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		t269  L_1 = m5724(__this, ((double)((double)L_0*(double)(1000.0))), &m5724_MI);
		return L_1;
	}
}
extern "C" int32_t m11406 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11817(NULL, L_0, L_1, &m11817_MI);
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
		t297  L_3 = ((&p0)->f0);
		t297  L_4 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_5 = m11814(NULL, L_3, L_4, &m11814_MI);
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
extern MethodInfo m11407_MI;
extern "C" int32_t m11407 (t269 * __this, t9 * p0, MethodInfo* method)
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t269_TI))))
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2685, &m7818_MI);
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, L_2, &m2885_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t9 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_5 = m11406(NULL, (*(t269 *)__this), ((*(t269 *)((t269 *)UnBox (L_4, InitializedTypeInfo(&t269_TI))))), &m11406_MI);
		return L_5;
	}
}
extern MethodInfo m11408_MI;
extern "C" int32_t m11408 (t269 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_1 = m11406(NULL, (*(t269 *)__this), L_0, &m11406_MI);
		return L_1;
	}
}
extern MethodInfo m11409_MI;
extern "C" bool m11409 (t269 * __this, t269  p0, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11813(NULL, L_0, L_1, &m11813_MI);
		return L_2;
	}
}
extern MethodInfo m11410_MI;
extern "C" int64_t m11410 (t269 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	t269  V_1 = {0};
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
		int64_t L_3 = m6951(__this, &m6951_MI);
		return ((int64_t)((int64_t)L_3|(int64_t)((int64_t)4611686018427387904LL)));
	}

IL_0022:
	{
		t269  L_4 = m4380(__this, &m4380_MI);
		V_1 = L_4;
		int64_t L_5 = m6951((&V_1), &m6951_MI);
		return ((int64_t)((int64_t)L_5|(int64_t)((int64_t)std::numeric_limits<int64_t>::min())));
	}

IL_003b:
	{
		int64_t L_6 = m6951(__this, &m6951_MI);
		return L_6;
	}
}
extern MethodInfo m11411_MI;
extern "C" t269  m11411 (t9 * __this , int64_t p0, MethodInfo* method)
{
	uint64_t V_0 = 0;
	t269  V_1 = {0};
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
		t269  L_4 = {0};
		m11374(&L_4, ((int64_t)((int64_t)L_3^(int64_t)((int64_t)4611686018427387904LL))), 1, &m11374_MI);
		return L_4;
	}

IL_0023:
	{
		int64_t L_5 = p0;
		t269  L_6 = {0};
		m11374(&L_6, L_5, 0, &m11374_MI);
		return L_6;
	}

IL_002b:
	{
		int64_t L_7 = p0;
		m11374((&V_1), ((int64_t)((int64_t)L_7&(int64_t)((int64_t)4611686018427387903LL))), 1, &m11374_MI);
		t269  L_8 = m5789((&V_1), &m5789_MI);
		return L_8;
	}
}
extern MethodInfo m11412_MI;
extern "C" t269  m11412 (t9 * __this , t269  p0, int32_t p1, MethodInfo* method)
{
	{
		int64_t L_0 = m6951((&p0), &m6951_MI);
		int32_t L_1 = p1;
		t269  L_2 = {0};
		m11374(&L_2, L_0, L_1, &m11374_MI);
		return L_2;
	}
}
extern "C" int32_t m11413 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	t1088* V_0 = {0};
	t1088* G_B9_0 = {0};
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
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_2, &m5870_MI);
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
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_5, &m5870_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0021:
	{
		int32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_7 = m11417(NULL, L_6, &m11417_MI);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t1088* L_8 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f12;
		G_B9_0 = L_8;
		goto IL_0035;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t1088* L_9 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f11;
		G_B9_0 = L_9;
	}

IL_0035:
	{
		V_0 = G_B9_0;
		t1088* L_10 = V_0;
		int32_t L_11 = p1;
		int32_t L_12 = L_11;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12));
	}
}
extern MethodInfo m11414_MI;
extern "C" bool m11414 (t269 * __this, t9 * p0, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t269_TI))))
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
		V_0 = ((*(t269 *)((t269 *)UnBox (L_1, InitializedTypeInfo(&t269_TI)))));
		t297  L_2 = ((&V_0)->f0);
		t297  L_3 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_4 = m11813(NULL, L_2, L_3, &m11813_MI);
		return L_4;
	}
}
extern "C" void m11415 (t269 * __this, int32_t p0, MethodInfo* method)
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
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_3, (t2*) &_stringLiteral2686, (t2*) &_stringLiteral2687, &m5691_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		return;
	}
}
extern MethodInfo m11416_MI;
extern "C" int32_t m11416 (t269 * __this, MethodInfo* method)
{
	{
		t297 * L_0 = &(__this->f0);
		int64_t L_1 = m11793(L_0, &m11793_MI);
		return (((int32_t)L_1));
	}
}
extern "C" bool m11417 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_2, &m5870_MI);
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
extern "C" t269  m11418 (t9 * __this , t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_2 = m11419(NULL, L_0, L_1, 7, &m11419_MI);
		return L_2;
	}
}
extern "C" t269  m11419 (t9 * __this , t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	t269  V_0 = {0};
	t910  V_1 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1081, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_2 = (t138 *)NULL;
		t2* L_2 = p0;
		t9 * L_3 = p1;
		int32_t L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_5 = m11420(NULL, L_2, L_3, L_4, (&V_0), (&V_1), 1, (&V_2), &m11420_MI);
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
		t269  L_7 = V_0;
		return L_7;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" bool m11420 (t9 * __this , t2* p0, t9 * p1, int32_t p2, t269 * p3, t910 * p4, bool p5, t138 ** p6, MethodInfo* method)
{
	static bool m11420_init;
	if (!m11420_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11420_init = true;
	}
	t1695 * V_0 = {0};
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
		t910 * L_0 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		m11444(L_0, (((int64_t)0)), L_1, &m11444_MI);
		t2* L_2 = p0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m2699(L_3, &m2699_MI);
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
		t883 * L_7 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_7, (t2*) &_stringLiteral2688, &m4288_MI);
		*((t9 **)(L_6)) = (t9 *)L_7;
	}

IL_002a:
	{
		t269 * L_8 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_9 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_11 = m6941(NULL, &m6941_MI);
		p1 = L_11;
	}

IL_0043:
	{
		t9 * L_12 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_13 = m8654(NULL, L_12, &m8654_MI);
		V_0 = L_13;
		t1695 * L_14 = V_0;
		bool L_15 = p5;
		t138 ** L_16 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_17 = m11421(NULL, L_14, L_15, L_16, &m11421_MI);
		V_1 = L_17;
		t221* L_18 = V_1;
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		t269 * L_19 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_20 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
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
		t269 * L_27 = p3;
		t910 * L_28 = p4;
		t1695 * L_29 = V_0;
		int32_t L_30 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_31 = m11429(NULL, L_24, L_25, L_26, 0, L_27, L_28, L_29, L_30, 1, (&V_5), (&V_2), &m11429_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_35 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f4;
		int32_t L_36 = V_6;
		int32_t L_37 = L_36;
		t269 * L_38 = p3;
		t910 * L_39 = p4;
		t1695 * L_40 = V_0;
		int32_t L_41 = p2;
		bool L_42 = m11429(NULL, L_33, L_34, (*(t2**)(t2**)SZArrayLdElema(L_35, L_37)), 0, L_38, L_39, L_40, L_41, 1, (&V_5), (&V_2), &m11429_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_45 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f4;
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
		t1695 * L_49 = V_0;
		t2* L_50 = m8674(L_49, &m8674_MI);
		int32_t L_51 = m2770(L_50, ((int32_t)100), &m2770_MI);
		V_7 = L_51;
		t1695 * L_52 = V_0;
		t2* L_53 = m8674(L_52, &m8674_MI);
		int32_t L_54 = m2770(L_53, ((int32_t)77), &m2770_MI);
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
		t269 * L_57 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_58 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
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
		t1695 * L_62 = V_0;
		t2* L_63 = m8674(L_62, &m8674_MI);
		ArrayElementTypeCheck (L_61, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_61, 0)) = (t9 *)L_63;
		t2* L_64 = m7819(NULL, (t2*) &_stringLiteral2689, L_61, &m7819_MI);
		t883 * L_65 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_65, L_64, &m4288_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_69 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f10;
		G_B29_0 = L_69;
		goto IL_0146;
	}

IL_0141:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_70 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f9;
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
		t269 * L_76 = p3;
		t910 * L_77 = p4;
		t1695 * L_78 = V_0;
		int32_t L_79 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_80 = m11429(NULL, L_71, (*(t2**)(t2**)SZArrayLdElema(L_72, L_74)), L_75, 0, L_76, L_77, L_78, L_79, 1, (&V_12), (&V_2), &m11429_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_84 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f4;
		int32_t L_85 = V_13;
		int32_t L_86 = L_85;
		V_14 = (*(t2**)(t2**)SZArrayLdElema(L_84, L_86));
		V_15 = 0;
		t2* L_87 = p0;
		t2* L_88 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_89 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t269 * L_90 = p3;
		t910 * L_91 = p4;
		t1695 * L_92 = V_0;
		int32_t L_93 = p2;
		bool L_94 = m11429(NULL, L_87, L_88, L_89, 0, L_90, L_91, L_92, L_93, 0, (&V_15), (&V_2), &m11429_MI);
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
		t269 * L_101 = p3;
		t910 * L_102 = p4;
		t1695 * L_103 = V_0;
		int32_t L_104 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_105 = m11429(NULL, L_96, L_97, (*(t2**)(t2**)SZArrayLdElema(L_98, L_100)), 0, L_101, L_102, L_103, L_104, 0, (&V_15), (&V_2), &m11429_MI);
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
		int32_t L_114 = m2699(L_113, &m2699_MI);
		uint16_t L_115 = m2714(L_112, ((int32_t)((int32_t)L_114-(int32_t)1)), &m2714_MI);
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
		t269 * L_119 = p3;
		t910 * L_120 = p4;
		t1695 * L_121 = V_0;
		int32_t L_122 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_123 = m11429(NULL, L_116, L_117, L_118, 0, L_119, L_120, L_121, L_122, 0, (&V_15), (&V_2), &m11429_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_129 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f4;
		if ((((int32_t)L_128) < ((int32_t)(((int32_t)(((t121 *)L_129)->max_length))))))
		{
			goto IL_0185;
		}
	}
	{
		t2* L_130 = p0;
		t1695 * L_131 = V_0;
		t221* L_132 = m8685(L_131, &m8685_MI);
		t1695 * L_133 = V_0;
		int32_t L_134 = p2;
		t269 * L_135 = p3;
		bool L_136 = p5;
		t138 ** L_137 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_138 = m11432(NULL, L_130, L_132, L_133, L_134, L_135, 0, (&V_2), L_136, L_137, &m11432_MI);
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
		t883 * L_141 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_141, (t2*) &_stringLiteral2688, &m4288_MI);
		*((t9 **)(L_140)) = (t9 *)L_141;
		return 0;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t221* m11421 (t9 * __this , t1695 * p0, bool p1, t138 ** p2, MethodInfo* method)
{
	static bool m11421_init;
	if (!m11421_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11421_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t1695 * L_0 = p0;
		t2* L_1 = m8671(L_0, &m8671_MI);
		int32_t L_2 = m2770(L_1, ((int32_t)100), &m2770_MI);
		V_0 = L_2;
		t1695 * L_3 = p0;
		t2* L_4 = m8671(L_3, &m8671_MI);
		int32_t L_5 = m2770(L_4, ((int32_t)77), &m2770_MI);
		V_1 = L_5;
		t1695 * L_6 = p0;
		t2* L_7 = m8671(L_6, &m8671_MI);
		int32_t L_8 = m2770(L_7, ((int32_t)121), &m2770_MI);
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
		t1695 * L_15 = p0;
		t2* L_16 = m8671(L_15, &m8671_MI);
		ArrayElementTypeCheck (L_14, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_14, 0)) = (t9 *)L_16;
		t2* L_17 = m7819(NULL, (t2*) &_stringLiteral2690, L_14, &m7819_MI);
		t883 * L_18 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_18, L_17, &m4288_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_23 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f6;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_26 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f5;
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
		t1695 * L_30 = p0;
		t2* L_31 = m8671(L_30, &m8671_MI);
		ArrayElementTypeCheck (L_29, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_29, 0)) = (t9 *)L_31;
		t2* L_32 = m7819(NULL, (t2*) &_stringLiteral2691, L_29, &m7819_MI);
		t883 * L_33 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_33, L_32, &m4288_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_36 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f7;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t221* L_39 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f8;
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
		t1695 * L_43 = p0;
		t2* L_44 = m8671(L_43, &m8671_MI);
		ArrayElementTypeCheck (L_42, L_44);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 0)) = (t9 *)L_44;
		t2* L_45 = m7819(NULL, (t2*) &_stringLiteral2692, L_42, &m7819_MI);
		t883 * L_46 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_46, L_45, &m4288_MI);
		*((t9 **)(L_41)) = (t9 *)L_46;
	}

IL_00cf:
	{
		return (t221*)NULL;
	}
}
extern "C" int32_t m11422 (t9 * __this , t2* p0, int32_t p1, int32_t p2, int32_t p3, bool p4, bool p5, int32_t* p6, MethodInfo* method)
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
		uint16_t L_5 = m2714(L_3, L_4, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_6 = m5897(NULL, L_5, &m5897_MI);
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
		int32_t L_11 = m2699(L_10, &m2699_MI);
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
		int32_t L_20 = m2699(L_19, &m2699_MI);
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
		uint16_t L_27 = m2714(L_25, L_26, &m2714_MI);
		V_3 = L_27;
		uint16_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_29 = m5897(NULL, L_28, &m5897_MI);
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
extern "C" int32_t m11423 (t9 * __this , t2* p0, int32_t p1, t221* p2, t221* p3, bool p4, int32_t* p5, MethodInfo* method)
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
		int32_t L_5 = m2699((*(t2**)(t2**)SZArrayLdElema(L_2, L_4)), &m2699_MI);
		t221* L_6 = p2;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		int32_t L_9 = m2699((*(t2**)(t2**)SZArrayLdElema(L_6, L_8)), &m2699_MI);
		if ((((int32_t)L_5) <= ((int32_t)L_9)))
		{
			goto IL_005b;
		}
	}
	{
		t221* L_10 = p3;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = m2699((*(t2**)(t2**)SZArrayLdElema(L_10, L_12)), &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_20 = m11424(NULL, L_14, L_15, 0, (*(t2**)(t2**)SZArrayLdElema(L_16, L_18)), L_19, &m11424_MI);
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
		int32_t L_25 = m2699((*(t2**)(t2**)SZArrayLdElema(L_22, L_24)), &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_32 = m11424(NULL, L_26, L_27, 0, (*(t2**)(t2**)SZArrayLdElema(L_28, L_30)), L_31, &m11424_MI);
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
		int32_t L_37 = m2699((*(t2**)(t2**)SZArrayLdElema(L_34, L_36)), &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_44 = m11424(NULL, L_38, L_39, 0, (*(t2**)(t2**)SZArrayLdElema(L_40, L_42)), L_43, &m11424_MI);
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
		int32_t L_50 = m2699((*(t2**)(t2**)SZArrayLdElema(L_47, L_49)), &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_57 = m11424(NULL, L_51, L_52, 0, (*(t2**)(t2**)SZArrayLdElema(L_53, L_55)), L_56, &m11424_MI);
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
extern "C" bool m11424 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t* p4, MethodInfo* method)
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
		int32_t L_2 = m2699(L_1, &m2699_MI);
		p2 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		t2* L_5 = p0;
		int32_t L_6 = m2699(L_5, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_11 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_12 = m7010(NULL, L_7, L_8, L_9, 0, L_10, 1, L_11, &m7010_MI);
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
extern "C" bool m11425 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t1695 * p3, bool p4, int32_t* p5, int32_t* p6, MethodInfo* method)
{
	t1695 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_4 = m11428(NULL, L_2, L_3, &m11428_MI);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		t1695 * L_5 = p3;
		t2* L_6 = m8666(L_5, &m8666_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_8 = m2713(NULL, L_6, L_7, &m2713_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_12 = m8678(NULL, &m8678_MI);
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
		t1695 * L_17 = V_0;
		t2* L_18 = m8667(L_17, &m8667_MI);
		int32_t* L_19 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_20 = m11424(NULL, L_14, L_15, L_16, L_18, L_19, &m11424_MI);
		if (L_20)
		{
			goto IL_0077;
		}
	}

IL_0053:
	{
		t1695 * L_21 = p3;
		t2* L_22 = m8667(L_21, &m8667_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_24 = m2713(NULL, L_22, L_23, &m2713_MI);
		if (!L_24)
		{
			goto IL_007d;
		}
	}
	{
		t2* L_25 = p0;
		int32_t L_26 = p1;
		int32_t L_27 = p2;
		t1695 * L_28 = p3;
		t2* L_29 = m8667(L_28, &m8667_MI);
		int32_t* L_30 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_31 = m11424(NULL, L_25, L_26, L_27, L_29, L_30, &m11424_MI);
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
		t1695 * L_37 = V_0;
		t2* L_38 = m8666(L_37, &m8666_MI);
		int32_t* L_39 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_40 = m11424(NULL, L_34, L_35, L_36, L_38, L_39, &m11424_MI);
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
		t1695 * L_44 = p3;
		t2* L_45 = m8666(L_44, &m8666_MI);
		int32_t* L_46 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_47 = m11424(NULL, L_41, L_42, L_43, L_45, L_46, &m11424_MI);
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
extern "C" bool m11426 (t9 * __this , t2* p0, int32_t p1, t1695 * p2, bool p3, int32_t* p4, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		t1695 * L_2 = p2;
		t2* L_3 = m8669(L_2, &m8669_MI);
		int32_t* L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_5 = m11424(NULL, L_0, L_1, 0, L_3, L_4, &m11424_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_10 = m11424(NULL, L_7, L_8, 0, (t2*) &_stringLiteral343, L_9, &m11424_MI);
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
extern "C" bool m11427 (t9 * __this , t2* p0, int32_t p1, t1695 * p2, bool p3, int32_t* p4, MethodInfo* method)
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
		uint16_t L_4 = m2714(L_2, L_3, &m2714_MI);
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
		t1695 * L_7 = p2;
		bool L_8 = p3;
		int32_t* L_9 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_10 = m11426(NULL, L_5, L_6, L_7, L_8, L_9, &m11426_MI);
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		t2* L_11 = p0;
		int32_t L_12 = p1;
		uint16_t L_13 = m2714(L_11, L_12, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_14 = m5897(NULL, L_13, &m5897_MI);
		if (L_14)
		{
			goto IL_003d;
		}
	}
	{
		t2* L_15 = p0;
		int32_t L_16 = p1;
		uint16_t L_17 = m2714(L_15, L_16, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_18 = m2765(NULL, L_17, &m2765_MI);
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
extern "C" bool m11428 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p1;
		t2* L_1 = p0;
		int32_t L_2 = m2699(L_1, &m2699_MI);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = p1;
		uint16_t L_5 = m2714(L_3, L_4, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_6 = m2765(NULL, L_5, &m2765_MI);
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
extern "C" bool m11429 (t9 * __this , t2* p0, t2* p1, t2* p2, bool p3, t269 * p4, t910 * p5, t1695 * p6, int32_t p7, bool p8, bool* p9, bool* p10, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	t2* V_5 = {0};
	bool V_6 = false;
	t1695 * V_7 = {0};
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
	t269  V_36 = {0};
	t269  V_37 = {0};
	t269  V_38 = {0};
	t269  V_39 = {0};
	t297  V_40 = {0};
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
		t910 * L_0 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		m11444(L_0, (((int64_t)0)), L_1, &m11444_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_6 = m8678(NULL, &m8678_MI);
		V_7 = L_6;
		t2* L_7 = V_5;
		int32_t L_8 = m2699(L_7, &m2699_MI);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		t2* L_9 = V_5;
		uint16_t L_10 = m2714(L_9, 0, &m2714_MI);
		t1695 * L_11 = p6;
		t2* L_12 = m11461(NULL, L_10, L_11, (&V_0), (&V_1), &m11461_MI);
		V_5 = L_12;
	}

IL_0055:
	{
		t269 * L_13 = p4;
		m11370(L_13, (((int64_t)0)), &m11370_MI);
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
		t2* L_18 = m5958(L_17, (t305*)(t305*)NULL, &m5958_MI);
		V_5 = L_18;
		t2* L_19 = p0;
		t2* L_20 = m5958(L_19, (t305*)(t305*)NULL, &m5958_MI);
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
		t2* L_23 = m5777(L_22, (t305*)(t305*)NULL, &m5777_MI);
		V_5 = L_23;
		t2* L_24 = p0;
		t2* L_25 = m5777(L_24, (t305*)(t305*)NULL, &m5777_MI);
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
		t1695 * L_27 = V_7;
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
		int32_t L_31 = m2699(L_30, &m2699_MI);
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
		int32_t L_35 = m2699(L_34, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_41 = m11428(NULL, L_39, L_40, &m11428_MI);
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
		uint16_t L_45 = m2714(L_43, L_44, &m2714_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		m11424(NULL, L_46, L_47, 0, (t2*) &_stringLiteral2693, (&V_25), &m11424_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_52 = m11428(NULL, L_49, ((int32_t)((int32_t)L_50+(int32_t)L_51)), &m11428_MI);
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
		t1695 * L_58 = p6;
		bool L_59 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_60 = m11425(NULL, L_56, L_57, 0, L_58, L_59, (&V_25), (&V_20), &m11425_MI);
		if (!L_60)
		{
			goto IL_01a8;
		}
	}
	{
		t2* L_61 = p0;
		int32_t L_62 = V_4;
		int32_t L_63 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_64 = m11428(NULL, L_61, ((int32_t)((int32_t)L_62+(int32_t)L_63)), &m11428_MI);
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
		t1695 * L_73 = p6;
		t221* L_74 = m8664(L_73, &m8664_MI);
		t1695 * L_75 = V_7;
		t221* L_76 = m8664(L_75, &m8664_MI);
		bool L_77 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_78 = m11423(NULL, L_71, L_72, L_74, L_76, L_77, (&V_25), &m11423_MI);
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
		t1695 * L_82 = p6;
		t221* L_83 = m8662(L_82, &m8662_MI);
		t1695 * L_84 = V_7;
		t221* L_85 = m8662(L_84, &m8662_MI);
		bool L_86 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_87 = m11423(NULL, L_80, L_81, L_83, L_85, L_86, (&V_25), &m11423_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_92 = m11428(NULL, L_89, ((int32_t)((int32_t)L_90+(int32_t)L_91)), &m11428_MI);
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
		uint16_t L_97 = m2714(L_95, L_96, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_98 = m5898(NULL, L_97, &m5898_MI);
		if (L_98)
		{
			goto IL_022c;
		}
	}
	{
		t2* L_99 = p0;
		int32_t L_100 = V_4;
		uint16_t L_101 = m2714(L_99, L_100, &m2714_MI);
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
		int32_t L_111 = m2699(L_110, &m2699_MI);
		uint16_t L_112 = m2714(L_109, ((int32_t)((int32_t)L_111-(int32_t)1)), &m2714_MI);
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
		int32_t L_122 = m2699(L_121, &m2699_MI);
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
		uint16_t L_125 = m2714(L_123, L_124, &m2714_MI);
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
		uint16_t L_129 = m2714(L_126, ((int32_t)((int32_t)L_127+(int32_t)L_128)), &m2714_MI);
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
		int32_t L_132 = m2699(L_131, &m2699_MI);
		if ((((int32_t)L_130) == ((int32_t)L_132)))
		{
			goto IL_02f0;
		}
	}
	{
		t2* L_133 = p0;
		int32_t L_134 = V_4;
		uint16_t L_135 = m2714(L_133, L_134, &m2714_MI);
		t2* L_136 = V_8;
		int32_t L_137 = V_10;
		int32_t L_138 = V_11;
		uint16_t L_139 = m2714(L_136, ((int32_t)((int32_t)L_137+(int32_t)L_138)), &m2714_MI);
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
		uint16_t L_149 = m2714(L_147, L_148, &m2714_MI);
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
		uint16_t L_153 = m2714(L_150, ((int32_t)((int32_t)L_151+(int32_t)L_152)), &m2714_MI);
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
		int32_t L_156 = m2699(L_155, &m2699_MI);
		if ((((int32_t)L_154) == ((int32_t)L_156)))
		{
			goto IL_035c;
		}
	}
	{
		t2* L_157 = p0;
		int32_t L_158 = V_4;
		uint16_t L_159 = m2714(L_157, L_158, &m2714_MI);
		t2* L_160 = V_8;
		int32_t L_161 = V_10;
		int32_t L_162 = V_11;
		uint16_t L_163 = m2714(L_160, ((int32_t)((int32_t)L_161+(int32_t)L_162)), &m2714_MI);
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
		uint16_t L_173 = m2714(L_171, L_172, &m2714_MI);
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
		uint16_t L_180 = m2714(L_178, L_179, &m2714_MI);
		t2* L_181 = V_8;
		int32_t L_182 = V_10;
		uint16_t L_183 = m2714(L_181, L_182, &m2714_MI);
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
		uint16_t L_188 = m2714(L_186, L_187, &m2714_MI);
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
		uint16_t L_192 = m2714(L_190, L_191, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_193 = m5898(NULL, L_192, &m5898_MI);
		if (L_193)
		{
			goto IL_0424;
		}
	}
	{
		t2* L_194 = p0;
		int32_t L_195 = V_4;
		uint16_t L_196 = m2714(L_194, L_195, &m2714_MI);
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
		uint16_t L_200 = m2714(L_198, L_199, &m2714_MI);
		if ((((int32_t)L_200) == ((int32_t)((int32_t)47))))
		{
			goto IL_0424;
		}
	}

IL_0411:
	{
		t2* L_201 = V_8;
		int32_t L_202 = V_10;
		uint16_t L_203 = m2714(L_201, L_202, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_204 = m5898(NULL, L_203, &m5898_MI);
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
		uint16_t L_210 = m2714(L_208, L_209, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_211 = m5898(NULL, L_210, &m5898_MI);
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
		uint16_t L_216 = m2714(L_214, L_215, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_217 = m5898(NULL, L_216, &m5898_MI);
		if (L_217)
		{
			goto IL_0474;
		}
	}
	{
		t2* L_218 = p0;
		int32_t L_219 = V_28;
		uint16_t L_220 = m2714(L_218, L_219, &m2714_MI);
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
		int32_t L_224 = m2699(L_223, &m2699_MI);
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
		uint16_t L_229 = m2714(L_227, L_228, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_230 = m5898(NULL, L_229, &m5898_MI);
		if (L_230)
		{
			goto IL_04af;
		}
	}
	{
		t2* L_231 = V_8;
		int32_t L_232 = V_28;
		uint16_t L_233 = m2714(L_231, L_232, &m2714_MI);
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
		int32_t L_237 = m2699(L_236, &m2699_MI);
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
		int32_t L_242 = m2699(L_241, &m2699_MI);
		if ((((int32_t)L_240) >= ((int32_t)L_242)))
		{
			goto IL_04f8;
		}
	}
	{
		t2* L_243 = V_8;
		int32_t L_244 = V_10;
		uint16_t L_245 = m2714(L_243, L_244, &m2714_MI);
		if ((!(((uint32_t)L_245) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_04f8;
		}
	}
	{
		t2* L_246 = p0;
		int32_t L_247 = V_4;
		t1695 * L_248 = p6;
		bool L_249 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_250 = m11427(NULL, L_246, L_247, L_248, L_249, (&V_25), &m11427_MI);
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
		uint16_t L_258 = m2714(L_255, ((int32_t)((int32_t)((int32_t)((int32_t)L_256+(int32_t)L_257))+(int32_t)1)), &m2714_MI);
		t2* L_259 = V_8;
		int32_t L_260 = V_10;
		int32_t L_261 = V_11;
		uint16_t L_262 = m2714(L_259, ((int32_t)((int32_t)L_260+(int32_t)L_261)), &m2714_MI);
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
		uint16_t L_266 = m2714(L_264, L_265, &m2714_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_282 = m11422(NULL, L_279, L_280, 1, 2, 0, L_281, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_287 = m11422(NULL, L_284, L_285, 1, 2, 1, L_286, (&V_25), &m11422_MI);
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
		t1695 * L_291 = p6;
		t221* L_292 = m8662(L_291, &m8662_MI);
		t1695 * L_293 = V_7;
		t221* L_294 = m8662(L_293, &m8662_MI);
		bool L_295 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_296 = m11423(NULL, L_289, L_290, L_292, L_294, L_295, (&V_25), &m11423_MI);
		V_13 = L_296;
		goto IL_0655;
	}

IL_063a:
	{
		t2* L_297 = p0;
		int32_t L_298 = V_4;
		t1695 * L_299 = p6;
		t221* L_300 = m8664(L_299, &m8664_MI);
		t1695 * L_301 = V_7;
		t221* L_302 = m8664(L_301, &m8664_MI);
		bool L_303 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_304 = m11423(NULL, L_297, L_298, L_300, L_302, L_303, (&V_25), &m11423_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_312 = m11422(NULL, L_309, L_310, 1, 2, 0, L_311, (&V_25), &m11422_MI);
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
		t1695 * L_317 = p6;
		t221* L_318 = m8665(L_317, &m8665_MI);
		t1695 * L_319 = V_7;
		t221* L_320 = m8665(L_319, &m8665_MI);
		bool L_321 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_322 = m11423(NULL, L_315, L_316, L_318, L_320, L_321, (&V_25), &m11423_MI);
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
		t1695 * L_327 = p6;
		t221* L_328 = m8663(L_327, &m8663_MI);
		t1695 * L_329 = V_7;
		t221* L_330 = m8663(L_329, &m8663_MI);
		bool L_331 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_332 = m11423(NULL, L_325, L_326, L_328, L_330, L_331, (&V_25), &m11423_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_337 = m11422(NULL, L_334, L_335, 1, 2, 0, L_336, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_342 = m11422(NULL, L_339, L_340, 1, 2, 1, L_341, (&V_25), &m11422_MI);
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
		t1695 * L_346 = p6;
		t221* L_347 = m8663(L_346, &m8663_MI);
		t1695 * L_348 = V_7;
		t221* L_349 = m8663(L_348, &m8663_MI);
		bool L_350 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_351 = m11423(NULL, L_344, L_345, L_347, L_349, L_350, (&V_25), &m11423_MI);
		V_14 = ((int32_t)((int32_t)L_351+(int32_t)1));
		goto IL_0744;
	}

IL_0727:
	{
		t2* L_352 = p0;
		int32_t L_353 = V_4;
		t1695 * L_354 = p6;
		t221* L_355 = m8665(L_354, &m8665_MI);
		t1695 * L_356 = V_7;
		t221* L_357 = m8665(L_356, &m8665_MI);
		bool L_358 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_359 = m11423(NULL, L_352, L_353, L_355, L_357, L_358, (&V_25), &m11423_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_365 = m11422(NULL, L_362, L_363, 1, 2, 0, L_364, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_370 = m11422(NULL, L_367, L_368, 1, 2, 1, L_369, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_375 = m11422(NULL, G_B174_2, G_B174_1, G_B174_0, 4, 0, L_374, (&V_25), &m11422_MI);
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
		int32_t L_380 = m2699(L_379, &m2699_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_385 = m11422(NULL, L_382, L_383, 5, 5, 0, L_384, (&V_29), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_396 = m11422(NULL, L_393, L_394, 1, 2, 0, L_395, (&V_25), &m11422_MI);
		V_16 = L_396;
		goto IL_0825;
	}

IL_0815:
	{
		t2* L_397 = p0;
		int32_t L_398 = V_4;
		bool L_399 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_400 = m11422(NULL, L_397, L_398, 1, 2, 1, L_399, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_410 = m11422(NULL, L_407, L_408, 1, 2, 0, L_409, (&V_25), &m11422_MI);
		V_16 = L_410;
		goto IL_0870;
	}

IL_0860:
	{
		t2* L_411 = p0;
		int32_t L_412 = V_4;
		bool L_413 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_414 = m11422(NULL, L_411, L_412, 1, 2, 1, L_413, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_421 = m11422(NULL, L_418, L_419, 1, 2, 0, L_420, (&V_25), &m11422_MI);
		V_17 = L_421;
		goto IL_08aa;
	}

IL_089a:
	{
		t2* L_422 = p0;
		int32_t L_423 = V_4;
		bool L_424 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_425 = m11422(NULL, L_422, L_423, 1, 2, 1, L_424, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_432 = m11422(NULL, L_429, L_430, 1, 2, 0, L_431, (&V_25), &m11422_MI);
		V_18 = L_432;
		goto IL_08e4;
	}

IL_08d4:
	{
		t2* L_433 = p0;
		int32_t L_434 = V_4;
		bool L_435 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_436 = m11422(NULL, L_433, L_434, 1, 2, 1, L_435, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_445 = m11422(NULL, L_440, L_441, 0, ((int32_t)((int32_t)L_442+(int32_t)1)), L_443, L_444, (&V_25), &m11422_MI);
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
		t1695 * L_453 = p6;
		bool L_454 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_455 = m11425(NULL, G_B232_2, G_B232_1, G_B232_0, L_453, L_454, (&V_25), (&V_20), &m11425_MI);
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
		uint16_t L_459 = m2714(L_457, L_458, &m2714_MI);
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
		uint16_t L_462 = m2714(L_460, L_461, &m2714_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_468 = m11422(NULL, L_465, L_466, 1, 2, 0, L_467, (&V_25), &m11422_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_473 = m11422(NULL, L_470, L_471, 1, 2, 1, L_472, (&V_25), &m11422_MI);
		V_22 = L_473;
		goto IL_0a37;
	}

IL_09c6:
	{
		t2* L_474 = p0;
		int32_t L_475 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_476 = m11422(NULL, L_474, L_475, 1, 2, 1, 1, (&V_25), &m11422_MI);
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
		int32_t L_482 = m2699(L_481, &m2699_MI);
		if ((((int32_t)L_480) >= ((int32_t)L_482)))
		{
			goto IL_0a00;
		}
	}
	{
		t2* L_483 = p0;
		int32_t L_484 = V_4;
		uint16_t L_485 = m2714(L_483, L_484, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_486 = m5897(NULL, L_485, &m5897_MI);
		if (L_486)
		{
			goto IL_0a0f;
		}
	}

IL_0a00:
	{
		t2* L_487 = p0;
		int32_t L_488 = V_4;
		t1695 * L_489 = p6;
		bool L_490 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_491 = m11426(NULL, L_487, L_488, L_489, L_490, (&V_25), &m11426_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_497 = m11422(NULL, L_494, L_495, 1, 2, 1, L_496, (&V_25), &m11422_MI);
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
		uint16_t L_502 = m2714(L_500, L_501, &m2714_MI);
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
		uint16_t L_506 = m2714(L_504, L_505, &m2714_MI);
		if ((((int32_t)L_506) == ((int32_t)((int32_t)43))))
		{
			goto IL_0a70;
		}
	}
	{
		t2* L_507 = p0;
		int32_t L_508 = V_4;
		uint16_t L_509 = m2714(L_507, L_508, &m2714_MI);
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
		uint16_t L_513 = m2714(L_511, L_512, &m2714_MI);
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
		uint16_t L_516 = m2714(L_514, L_515, &m2714_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_521 = m11422(NULL, L_518, L_519, 0, 2, 1, L_520, (&V_25), &m11422_MI);
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
		uint16_t L_527 = m2714(L_525, L_526, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_528 = m5897(NULL, L_527, &m5897_MI);
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
		t1695 * L_531 = p6;
		t2* L_532 = m8669(L_531, &m8669_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_533 = m11424(NULL, L_529, L_530, 0, L_532, (&V_25), &m11424_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_539 = m11422(NULL, L_536, L_537, 0, 2, 1, L_538, (&V_25), &m11422_MI);
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
		uint16_t L_543 = m2714(L_541, L_542, &m2714_MI);
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
		uint16_t L_546 = m2714(L_544, L_545, &m2714_MI);
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
		int32_t L_551 = m2699(L_550, &m2699_MI);
		if ((((int32_t)((int32_t)((int32_t)L_549+(int32_t)2))) >= ((int32_t)L_551)))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_552 = V_8;
		int32_t L_553 = V_10;
		uint16_t L_554 = m2714(L_552, ((int32_t)((int32_t)L_553+(int32_t)1)), &m2714_MI);
		if ((!(((uint32_t)L_554) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_555 = p0;
		int32_t L_556 = V_4;
		uint16_t L_557 = m2714(L_555, ((int32_t)((int32_t)L_556+(int32_t)1)), &m2714_MI);
		if ((!(((uint32_t)L_557) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_558 = V_8;
		int32_t L_559 = V_10;
		uint16_t L_560 = m2714(L_558, ((int32_t)((int32_t)L_559+(int32_t)2)), &m2714_MI);
		if ((!(((uint32_t)L_560) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0b8c;
		}
	}
	{
		t2* L_561 = p0;
		int32_t L_562 = V_4;
		uint16_t L_563 = m2714(L_561, ((int32_t)((int32_t)L_562+(int32_t)2)), &m2714_MI);
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
		t1695 * L_566 = p6;
		bool L_567 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_568 = m11426(NULL, L_564, L_565, L_566, L_567, (&V_25), &m11426_MI);
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
		t1695 * L_571 = p6;
		bool L_572 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_573 = m11427(NULL, L_569, L_570, L_571, L_572, (&V_25), &m11427_MI);
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
		uint16_t L_576 = m2714(L_574, L_575, &m2714_MI);
		t2* L_577 = V_8;
		int32_t L_578 = V_10;
		uint16_t L_579 = m2714(L_577, L_578, &m2714_MI);
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
		uint16_t L_587 = m2714(L_585, L_586, &m2714_MI);
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
		int32_t L_594 = m2699(L_593, &m2699_MI);
		int32_t L_595 = V_4;
		if ((((int32_t)L_594) <= ((int32_t)L_595)))
		{
			goto IL_0c59;
		}
	}
	{
		t2* L_596 = p0;
		int32_t L_597 = V_4;
		uint16_t L_598 = m2714(L_596, L_597, &m2714_MI);
		if ((!(((uint32_t)L_598) == ((uint32_t)((int32_t)90)))))
		{
			goto IL_0c59;
		}
	}
	{
		int32_t L_599 = V_10;
		t2* L_600 = V_8;
		int32_t L_601 = m2699(L_600, &m2699_MI);
		if ((((int32_t)((int32_t)((int32_t)L_599+(int32_t)1))) == ((int32_t)L_601)))
		{
			goto IL_0c51;
		}
	}
	{
		t2* L_602 = V_8;
		int32_t L_603 = V_10;
		uint16_t L_604 = m2714(L_602, ((int32_t)((int32_t)L_603+(int32_t)1)), &m2714_MI);
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
		uint16_t L_612 = m2714(L_610, L_611, &m2714_MI);
		if ((!(((uint32_t)L_612) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0cb1;
		}
	}
	{
		t2* L_613 = V_8;
		int32_t L_614 = V_10;
		uint16_t L_615 = m2714(L_613, ((int32_t)((int32_t)L_614+(int32_t)1)), &m2714_MI);
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
		uint16_t L_622 = m2714(L_620, L_621, &m2714_MI);
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
		uint16_t L_628 = m2714(L_626, L_627, &m2714_MI);
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
		int32_t L_632 = m2699(L_631, &m2699_MI);
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
		uint16_t L_637 = m2714(L_635, L_636, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_638 = m5897(NULL, L_637, &m5897_MI);
		if (!L_638)
		{
			goto IL_0d06;
		}
	}
	{
		t2* L_639 = p0;
		int32_t L_640 = V_4;
		uint16_t L_641 = m2714(L_639, ((int32_t)((int32_t)L_640-(int32_t)1)), &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_642 = m5897(NULL, L_641, &m5897_MI);
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
		uint16_t L_645 = m2714(L_643, L_644, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_646 = m2765(NULL, L_645, &m2765_MI);
		if (!L_646)
		{
			goto IL_0d28;
		}
	}
	{
		t2* L_647 = p0;
		int32_t L_648 = V_4;
		uint16_t L_649 = m2714(L_647, ((int32_t)((int32_t)L_648-(int32_t)1)), &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_650 = m2765(NULL, L_649, &m2765_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_660 = m11401(NULL, &m11401_MI);
		V_36 = L_660;
		int32_t L_661 = m11394((&V_36), &m11394_MI);
		V_12 = L_661;
		t269  L_662 = m11401(NULL, &m11401_MI);
		V_37 = L_662;
		int32_t L_663 = m11393((&V_37), &m11393_MI);
		V_14 = L_663;
		t269  L_664 = m11401(NULL, &m11401_MI);
		V_38 = L_664;
		int32_t L_665 = m11402((&V_38), &m11402_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_670 = m11401(NULL, &m11401_MI);
		V_39 = L_670;
		int32_t L_671 = m11402((&V_39), &m11402_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int32_t L_686 = m11413(NULL, L_684, L_685, &m11413_MI);
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
		t269 * L_693 = p4;
		int32_t L_694 = V_15;
		int32_t L_695 = V_14;
		int32_t L_696 = V_12;
		int32_t L_697 = V_16;
		int32_t L_698 = V_17;
		int32_t L_699 = V_18;
		m11372(L_693, L_694, L_695, L_696, L_697, L_698, L_699, 0, &m11372_MI);
		t269 * L_700 = p4;
		t269 * L_701 = p4;
		double L_702 = V_19;
		t269  L_703 = m6948(L_701, L_702, &m6948_MI);
		*L_700 = L_703;
		int32_t L_704 = V_13;
		if ((((int32_t)L_704) == ((int32_t)(-1))))
		{
			goto IL_0e84;
		}
	}
	{
		int32_t L_705 = V_13;
		t269 * L_706 = p4;
		int32_t L_707 = m11395(L_706, &m11395_MI);
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
		t269 * L_709 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_710 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		bool L_711 = m11439(NULL, (*(t269 *)L_709), L_710, &m11439_MI);
		if (!L_711)
		{
			goto IL_0eaf;
		}
	}

IL_0e9c:
	try
	{ // begin try (depth: 1)
		t910 * L_712 = p5;
		t269 * L_713 = p4;
		m11442(L_712, (*(t269 *)L_713), &m11442_MI);
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
		t910 * L_719 = p5;
		t269 * L_720 = p4;
		int32_t L_721 = V_22;
		int32_t L_722 = V_23;
		t297  L_723 = {0};
		m11784(&L_723, L_721, L_722, 0, &m11784_MI);
		m11443(L_719, (*(t269 *)L_720), L_723, &m11443_MI);
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
		t269 * L_726 = p4;
		t297  L_727 = (L_726->f0);
		t910 * L_728 = p5;
		t297  L_729 = m11456(L_728, &m11456_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_730 = m11819(NULL, L_727, L_729, &m11819_MI);
		V_40 = L_730;
		int64_t L_731 = m11793((&V_40), &m11793_MI);
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
		t269 * L_734 = p4;
		int64_t L_735 = V_33;
		t297  L_736 = {0};
		m11783(&L_736, L_735, &m11783_MI);
		m11373(L_734, 0, L_736, &m11373_MI);
		t269 * L_737 = p4;
		L_737->f1 = 1;
		int32_t L_738 = p7;
		if (!((int32_t)((int32_t)L_738&(int32_t)((int32_t)128))))
		{
			goto IL_0f60;
		}
	}
	{
		t269 * L_739 = p4;
		t269 * L_740 = p4;
		t269  L_741 = m5789(L_740, &m5789_MI);
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
		t269 * L_744 = p4;
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
		t269 * L_746 = p4;
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
		t269 * L_749 = p4;
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
		t269 * L_752 = p4;
		t269 * L_753 = p4;
		t269  L_754 = m4380(L_753, &m4380_MI);
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
		t269 * L_756 = p4;
		t269 * L_757 = p4;
		t269  L_758 = m5789(L_757, &m5789_MI);
		*L_756 = L_758;
	}

IL_0fc8:
	{
		return 1;
	}
}
extern MethodInfo m6865_MI;
extern TypeInfo* t221_TI_var;
extern "C" t269  m6865 (t9 * __this , t2* p0, t2* p1, t9 * p2, int32_t p3, MethodInfo* method)
{
	static bool m6865_init;
	if (!m6865_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m6865_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1139, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_8 = m11430(NULL, L_4, L_5, L_6, L_7, &m11430_MI);
		return L_8;
	}
}
extern "C" t269  m11430 (t9 * __this , t2* p0, t221* p1, t9 * p2, int32_t p3, MethodInfo* method)
{
	t1695 * V_0 = {0};
	t269  V_1 = {0};
	bool V_2 = false;
	t138 * V_3 = {0};
	{
		t9 * L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_1 = m8654(NULL, L_0, &m8654_MI);
		V_0 = L_1;
		int32_t L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		m11431(NULL, L_2, &m11431_MI);
		t2* L_3 = p0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral1081, &m339_MI);
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
		m339(L_6, (t2*) &_stringLiteral2694, &m339_MI);
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
		t883 * L_8 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_8, (t2*) &_stringLiteral1548, &m4288_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0039:
	{
		V_2 = 0;
		V_3 = (t138 *)NULL;
		t2* L_9 = p0;
		t221* L_10 = p1;
		t1695 * L_11 = V_0;
		int32_t L_12 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_13 = m11432(NULL, L_9, L_10, L_11, L_12, (&V_1), 1, (&V_2), 1, (&V_3), &m11432_MI);
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
		t269  L_15 = V_1;
		return L_15;
	}
}
extern "C" void m11431 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_4, (t2*) &_stringLiteral2695, (t2*) &_stringLiteral1170, &m5691_MI);
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
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_7, (t2*) &_stringLiteral2696, (t2*) &_stringLiteral1170, &m5691_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0047:
	{
		return;
	}
}
extern "C" bool m11432 (t9 * __this , t2* p0, t221* p1, t1695 * p2, int32_t p3, t269 * p4, bool p5, bool* p6, bool p7, t138 ** p8, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	t269  V_2 = {0};
	t2* V_3 = {0};
	t910  V_4 = {0};
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
		t1695 * L_12 = p2;
		int32_t L_13 = p3;
		bool* L_14 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_15 = m11429(NULL, L_7, (*(t2**)(t2**)SZArrayLdElema(L_8, L_10)), (t2*)NULL, L_11, (&V_2), (&V_4), L_12, L_13, 0, (&V_1), L_14, &m11429_MI);
		if (!L_15)
		{
			goto IL_003f;
		}
	}
	{
		t269 * L_16 = p4;
		t269  L_17 = V_2;
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
		t883 * L_23 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_23, (t2*) &_stringLiteral2697, &m4288_MI);
		*((t9 **)(L_22)) = (t9 *)L_23;
	}

IL_005a:
	{
		t269 * L_24 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_25 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		*L_24 = L_25;
		return 0;
	}
}
extern MethodInfo m11433_MI;
extern "C" t269  m11433 (t269 * __this, t297  p0, MethodInfo* method)
{
	t297  V_0 = {0};
	t269  V_1 = {0};
	{
		t297 * L_0 = &(__this->f0);
		int64_t L_1 = m11793(L_0, &m11793_MI);
		t297  L_2 = {0};
		m11783(&L_2, L_1, &m11783_MI);
		t297  L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_4 = m11819(NULL, L_2, L_3, &m11819_MI);
		V_0 = L_4;
		t297  L_5 = V_0;
		m11373((&V_1), 1, L_5, &m11373_MI);
		int32_t L_6 = (__this->f1);
		(&V_1)->f1 = L_6;
		t269  L_7 = V_1;
		return L_7;
	}
}
extern MethodInfo m1082_MI;
extern "C" t2* m1082 (t269 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11436(__this, (t2*) &_stringLiteral357, &m11436_MI);
		return L_0;
	}
}
extern MethodInfo m11434_MI;
extern "C" t2* m11434 (t269 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4381(__this, (t2*) &_stringLiteral1173, (t9 *)NULL, &m4381_MI);
		return L_0;
	}
}
extern "C" t2* m11435 (t269 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = m4381(__this, (t2*)NULL, L_0, &m4381_MI);
		return L_1;
	}
}
extern "C" t2* m11436 (t269 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4381(__this, L_0, (t9 *)NULL, &m4381_MI);
		return L_1;
	}
}
extern "C" t2* m4381 (t269 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1695 * V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	uint16_t V_3 = 0x0;
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_1 = m8654(NULL, L_0, &m8654_MI);
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
		p0 = (t2*) &_stringLiteral1173;
	}

IL_0020:
	{
		V_1 = 0;
		V_2 = 0;
		t2* L_6 = p0;
		int32_t L_7 = m2699(L_6, &m2699_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		t2* L_8 = p0;
		uint16_t L_9 = m2714(L_8, 0, &m2714_MI);
		V_3 = L_9;
		uint16_t L_10 = V_3;
		t1695 * L_11 = V_0;
		t2* L_12 = m11461(NULL, L_10, L_11, (&V_1), (&V_2), &m11461_MI);
		p0 = L_12;
		uint16_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_0057;
		}
	}
	{
		t269  L_14 = m4380(__this, &m4380_MI);
		t2* L_15 = p0;
		t1695 * L_16 = V_0;
		t2* L_17 = m11463(NULL, L_14, L_15, L_16, &m11463_MI);
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
		t883 * L_19 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_19, (t2*) &_stringLiteral2698, &m4288_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0065:
	{
		t2* L_20 = p0;
		t1695 * L_21 = V_0;
		t2* L_22 = m11463(NULL, (*(t269 *)__this), L_20, L_21, &m11463_MI);
		return L_22;
	}
}
extern "C" t269  m5789 (t269 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_0 = m11822(NULL, &m11822_MI);
		t269  L_1 = (t269 )VirtFuncInvoker1< t269 , t269  >::Invoke(&m11825_MI, L_0, (*(t269 *)__this));
		return L_1;
	}
}
extern "C" t269  m4380 (t269 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_0 = m11822(NULL, &m11822_MI);
		t269  L_1 = (t269 )VirtFuncInvoker1< t269 , t269  >::Invoke(&m11826_MI, L_0, (*(t269 *)__this));
		return L_1;
	}
}
extern "C" t269  m11437 (t9 * __this , t269  p0, t297  p1, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_2 = m11812(NULL, L_0, L_1, &m11812_MI);
		m11373((&V_0), 1, L_2, &m11373_MI);
		int32_t L_3 = ((&p0)->f1);
		(&V_0)->f1 = L_3;
		t269  L_4 = V_0;
		return L_4;
	}
}
extern MethodInfo m11438_MI;
extern "C" bool m11438 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11813(NULL, L_0, L_1, &m11813_MI);
		return L_2;
	}
}
extern MethodInfo m5825_MI;
extern "C" bool m5825 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11814(NULL, L_0, L_1, &m11814_MI);
		return L_2;
	}
}
extern MethodInfo m5725_MI;
extern "C" bool m5725 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11815(NULL, L_0, L_1, &m11815_MI);
		return L_2;
	}
}
extern "C" bool m11439 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11816(NULL, L_0, L_1, &m11816_MI);
		return L_2;
	}
}
extern MethodInfo m5824_MI;
extern "C" bool m5824 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11817(NULL, L_0, L_1, &m11817_MI);
		return L_2;
	}
}
extern MethodInfo m5823_MI;
extern "C" bool m5823 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_2 = m11818(NULL, L_0, L_1, &m11818_MI);
		return L_2;
	}
}
extern MethodInfo m11440_MI;
extern "C" t297  m11440 (t9 * __this , t269  p0, t269  p1, MethodInfo* method)
{
	t297  V_0 = {0};
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = ((&p1)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_2 = m11819(NULL, L_0, L_1, &m11819_MI);
		V_0 = L_2;
		int64_t L_3 = m11793((&V_0), &m11793_MI);
		t297  L_4 = {0};
		m11783(&L_4, L_3, &m11783_MI);
		return L_4;
	}
}
extern MethodInfo m11441_MI;
extern "C" t269  m11441 (t9 * __this , t269  p0, t297  p1, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		t297  L_0 = ((&p0)->f0);
		t297  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_2 = m11819(NULL, L_0, L_1, &m11819_MI);
		m11373((&V_0), 1, L_2, &m11373_MI);
		int32_t L_3 = ((&p0)->f1);
		(&V_0)->f1 = L_3;
		t269  L_4 = V_0;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2094_TI;
#include "t2094MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t910_TI;

#include "t2186.h"
#include "t2187.h"
#include "t2096.h"
extern TypeInfo t2186_TI;
extern TypeInfo t2187_TI;
extern TypeInfo t2096_TI;
#include "t2186MD.h"
#include "t2187MD.h"
#include "t2096MD.h"
extern Il2CppType t2186_0_0_0;
extern Il2CppType t2187_0_0_0;
extern Il2CppType t2096_0_0_0;
extern MethodInfo m12108_MI;
extern MethodInfo m11457_MI;
extern MethodInfo m5703_MI;
extern MethodInfo m10304_MI;
extern MethodInfo m11805_MI;
extern MethodInfo m12109_MI;
extern MethodInfo m12110_MI;
extern MethodInfo m11450_MI;
extern MethodInfo m10301_MI;
extern MethodInfo m11797_MI;
extern MethodInfo m10300_MI;
extern MethodInfo m11808_MI;
extern MethodInfo m4383_MI;
extern MethodInfo m8673_MI;
extern MethodInfo m11462_MI;
extern MethodInfo m12111_MI;
extern MethodInfo m11464_MI;
extern MethodInfo m11455_MI;
extern Il2CppGenericMethod m12109_GM;
extern Il2CppGenericMethod m12110_GM;
extern Il2CppGenericMethod m12111_GM;


extern "C" void m11442 (t910 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_2 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		__this->f3 = L_2;
		goto IL_002f;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_3 = m11822(NULL, &m11822_MI);
		t269  L_4 = p0;
		t297  L_5 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, L_3, L_4);
		__this->f3 = L_5;
	}

IL_002f:
	{
		t269  L_6 = m11457(__this, &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_7 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		bool L_8 = m5824(NULL, L_6, L_7, &m5824_MI);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		t269  L_9 = m11457(__this, &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_10 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		bool L_11 = m5825(NULL, L_9, L_10, &m5825_MI);
		if (!L_11)
		{
			goto IL_005e;
		}
	}

IL_0053:
	{
		t896 * L_12 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_12, (t2*) &_stringLiteral2699, &m5693_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005e:
	{
		return;
	}
}
extern "C" void m11443 (t910 * __this, t269  p0, t297  p1, MethodInfo* method)
{
	{
		int32_t L_0 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		t297  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_2 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		bool L_3 = m11816(NULL, L_1, L_2, &m11816_MI);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral2700, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		int32_t L_5 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004a;
		}
	}
	{
		t297  L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_7 = m11822(NULL, &m11822_MI);
		t269  L_8 = p0;
		t297  L_9 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, L_7, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_10 = m11816(NULL, L_6, L_9, &m11816_MI);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_11, (t2*) &_stringLiteral2701, &m2885_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004a:
	{
		int64_t L_12 = m11793((&p1), &m11793_MI);
		if (!((int64_t)((int64_t)L_12%(int64_t)(((int64_t)((int32_t)600000000))))))
		{
			goto IL_0065;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_13, (t2*) &_stringLiteral2702, &m2885_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0065:
	{
		t297  L_14 = p1;
		t297  L_15 = {0};
		m11784(&L_15, ((int32_t)-14), 0, 0, &m11784_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_16 = m11817(NULL, L_14, L_15, &m11817_MI);
		if (L_16)
		{
			goto IL_0087;
		}
	}
	{
		t297  L_17 = p1;
		t297  L_18 = {0};
		m11784(&L_18, ((int32_t)14), 0, 0, &m11784_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		bool L_19 = m11814(NULL, L_17, L_18, &m11814_MI);
		if (!L_19)
		{
			goto IL_0092;
		}
	}

IL_0087:
	{
		t896 * L_20 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_20, (t2*) &_stringLiteral2703, &m5693_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0092:
	{
		t269  L_21 = p0;
		__this->f2 = L_21;
		t297  L_22 = p1;
		__this->f3 = L_22;
		t269  L_23 = m11457(__this, &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_24 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		bool L_25 = m5824(NULL, L_23, L_24, &m5824_MI);
		if (L_25)
		{
			goto IL_00c4;
		}
	}
	{
		t269  L_26 = m11457(__this, &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_27 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		bool L_28 = m5825(NULL, L_26, L_27, &m5825_MI);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}

IL_00c4:
	{
		t896 * L_29 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_29, (t2*) &_stringLiteral2704, &m5693_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00cf:
	{
		return;
	}
}
extern "C" void m11444 (t910 * __this, int64_t p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		t269  L_1 = {0};
		m11370(&L_1, L_0, &m11370_MI);
		t297  L_2 = p1;
		m11443(__this, L_1, L_2, &m11443_MI);
		return;
	}
}
extern MethodInfo m11445_MI;
extern "C" void m11445 (t910 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t269  V_0 = {0};
	int16_t V_1 = 0;
	{
		t1093 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t269_0_0_0), &m329_MI);
		t9 * L_2 = m5703(L_0, (t2*) &_stringLiteral2705, L_1, &m5703_MI);
		V_0 = ((*(t269 *)((t269 *)UnBox (L_2, InitializedTypeInfo(&t269_TI)))));
		t1093 * L_3 = p0;
		int16_t L_4 = m10304(L_3, (t2*) &_stringLiteral2706, &m10304_MI);
		V_1 = L_4;
		int16_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_6 = m11805(NULL, (((double)L_5)), &m11805_MI);
		__this->f3 = L_6;
		t297  L_7 = (__this->f3);
		t269  L_8 = m11404((&V_0), L_7, &m11404_MI);
		__this->f2 = L_8;
		return;
	}
}
extern MethodInfo m11446_MI;
extern TypeInfo* t2186_TI_var;
extern TypeInfo* t2187_TI_var;
extern MethodInfo* m12109_MI_var;
extern MethodInfo* m12110_MI_var;
extern "C" void m11446 (t9 * __this , MethodInfo* method)
{
	static bool m11446_init;
	if (!m11446_init)
	{
		t2186_TI_var = il2cpp_codegen_class_from_type(&t2186_0_0_0);
		t2187_TI_var = il2cpp_codegen_class_from_type(&t2187_0_0_0);
		m12109_MI_var = il2cpp_codegen_genericmethod_get_method(&m12109_GM);
		m12110_MI_var = il2cpp_codegen_genericmethod_get_method(&m12110_GM);
		m11446_init = true;
	}
	t2186 * V_0 = {0};
	t2187 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_0 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		t910  L_2 = {0};
		m11443(&L_2, L_0, L_1, &m11443_MI);
		((t910_SFs*)InitializedTypeInfo(&t910_TI)->static_fields)->f0 = L_2;
		t269  L_3 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		t297  L_4 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		t910  L_5 = {0};
		m11443(&L_5, L_3, L_4, &m11443_MI);
		((t910_SFs*)InitializedTypeInfo(&t910_TI)->static_fields)->f1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		bool L_6 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		t2186 * L_7 = (t2186 *)il2cpp_codegen_object_new (t2186_TI_var);
		m12109(L_7, m12109_MI_var);
		V_0 = L_7;
		t2187 * L_8 = (t2187 *)il2cpp_codegen_object_new (t2187_TI_var);
		m12110(L_8, m12110_MI_var);
		V_1 = L_8;
	}

IL_003b:
	{
		return;
	}
}
extern MethodInfo m11447_MI;
extern "C" int32_t m11447 (t910 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = m11450(__this, ((*(t910 *)((t910 *)UnBox (L_0, InitializedTypeInfo(&t910_TI))))), &m11450_MI);
		return L_1;
	}
}
extern MethodInfo m11448_MI;
extern "C" void m11448 (t910 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t269  V_0 = {0};
	t269  V_1 = {0};
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t269 * L_2 = &(__this->f2);
		int64_t L_3 = m6951(L_2, &m6951_MI);
		m11370((&V_1), L_3, &m11370_MI);
		t297  L_4 = (__this->f3);
		t269  L_5 = m11433((&V_1), L_4, &m11433_MI);
		V_0 = L_5;
		t1093 * L_6 = p0;
		t269  L_7 = V_0;
		m10301(L_6, (t2*) &_stringLiteral2705, L_7, &m10301_MI);
		t1093 * L_8 = p0;
		t297 * L_9 = &(__this->f3);
		double L_10 = m11797(L_9, &m11797_MI);
		m10300(L_8, (t2*) &_stringLiteral2706, (((int16_t)L_10)), &m10300_MI);
		return;
	}
}
extern MethodInfo m11449_MI;
extern "C" void m11449 (t910 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" int32_t m11450 (t910 * __this, t910  p0, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		t269  L_0 = m11457(__this, &m11457_MI);
		V_0 = L_0;
		t269  L_1 = m11457((&p0), &m11457_MI);
		int32_t L_2 = m11408((&V_0), L_1, &m11408_MI);
		return L_2;
	}
}
extern MethodInfo m11451_MI;
extern "C" bool m11451 (t910 * __this, t910  p0, MethodInfo* method)
{
	{
		t269  L_0 = m11457(__this, &m11457_MI);
		t269  L_1 = m11457((&p0), &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_2 = m11438(NULL, L_0, L_1, &m11438_MI);
		return L_2;
	}
}
extern MethodInfo m11452_MI;
extern "C" bool m11452 (t910 * __this, t9 * p0, MethodInfo* method)
{
	t910  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t910_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t269  L_1 = m11457(__this, &m11457_MI);
		t9 * L_2 = p0;
		V_0 = ((*(t910 *)((t910 *)UnBox (L_2, InitializedTypeInfo(&t910_TI)))));
		t269  L_3 = m11457((&V_0), &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_4 = m11438(NULL, L_1, L_3, &m11438_MI);
		return L_4;
	}

IL_0022:
	{
		return 0;
	}
}
extern MethodInfo m11453_MI;
extern "C" int32_t m11453 (t910 * __this, MethodInfo* method)
{
	{
		t269 * L_0 = &(__this->f2);
		int32_t L_1 = m11416(L_0, &m11416_MI);
		t297 * L_2 = &(__this->f3);
		int32_t L_3 = m11808(L_2, &m11808_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern MethodInfo m11454_MI;
extern "C" t2* m11454 (t910 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4383(__this, (t2*)NULL, (t9 *)NULL, &m4383_MI);
		return L_0;
	}
}
extern MethodInfo* m12111_MI_var;
extern "C" t2* m4383 (t910 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4383_init;
	if (!m4383_init)
	{
		m12111_MI_var = il2cpp_codegen_genericmethod_get_method(&m12111_GM);
		m4383_init = true;
	}
	t1695 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_1 = m8654(NULL, L_0, &m8654_MI);
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
		t1695 * L_6 = V_0;
		t2* L_7 = m8671(L_6, &m8671_MI);
		t1695 * L_8 = V_0;
		t2* L_9 = m8673(L_8, &m8673_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m4419(NULL, L_7, (t2*) &_stringLiteral168, L_9, (t2*) &_stringLiteral2707, &m4419_MI);
		p0 = L_10;
	}

IL_0036:
	{
		V_1 = 0;
		V_2 = 0;
		t2* L_11 = p0;
		int32_t L_12 = m2699(L_11, &m2699_MI);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		t2* L_13 = p0;
		uint16_t L_14 = m2714(L_13, 0, &m2714_MI);
		V_3 = L_14;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		uint16_t L_15 = V_3;
		t1695 * L_16 = V_0;
		t2* L_17 = m11462(NULL, L_15, L_16, (&V_1), (&V_2), 1, &m11462_MI);
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
		t883 * L_19 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_19, (t2*) &_stringLiteral2698, &m4288_MI);
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
		t269  L_21 = m11457(__this, &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_22 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		t2096  L_23 = {0};
		m12111(&L_23, L_22, m12111_MI_var);
		t2* L_24 = p0;
		t1695 * L_25 = V_0;
		t2* L_26 = m11464(NULL, L_21, L_23, L_24, L_25, &m11464_MI);
		G_B12_0 = L_26;
		goto IL_00a7;
	}

IL_008f:
	{
		t269  L_27 = m11455(__this, &m11455_MI);
		t297  L_28 = m11456(__this, &m11456_MI);
		t2096  L_29 = {0};
		m12111(&L_29, L_28, m12111_MI_var);
		t2* L_30 = p0;
		t1695 * L_31 = V_0;
		t2* L_32 = m11464(NULL, L_27, L_29, L_30, L_31, &m11464_MI);
		G_B12_0 = L_32;
	}

IL_00a7:
	{
		return G_B12_0;
	}
}
extern MethodInfo m4382_MI;
extern "C" t910  m4382 (t910 * __this, MethodInfo* method)
{
	{
		t269  L_0 = m11457(__this, &m11457_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		t910  L_2 = {0};
		m11443(&L_2, L_0, L_1, &m11443_MI);
		return L_2;
	}
}
extern "C" t269  m11455 (t910 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_1 = m11412(NULL, L_0, 0, &m11412_MI);
		return L_1;
	}
}
extern "C" t297  m11456 (t910 * __this, MethodInfo* method)
{
	{
		t297  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t269  m11457 (t910 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f2);
		t297  L_1 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_2 = m11441(NULL, L_0, L_1, &m11441_MI);
		t269  L_3 = m11412(NULL, L_2, 1, &m11412_MI);
		return L_3;
	}
}
#include "t2095.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2095_TI;

#include "t1690.h"
extern TypeInfo t1690_TI;
extern TypeInfo t1691_TI;
#include "t1690MD.h"
extern MethodInfo m7296_MI;
extern MethodInfo m8670_MI;
extern MethodInfo m8672_MI;
extern MethodInfo m399_MI;
extern MethodInfo m8676_MI;
extern MethodInfo m8682_MI;
extern MethodInfo m8681_MI;
extern MethodInfo m8683_MI;
extern MethodInfo m8684_MI;
extern MethodInfo m8675_MI;
extern MethodInfo m11458_MI;
extern MethodInfo m11459_MI;
extern MethodInfo m10862_MI;
extern MethodInfo m11541_MI;
extern MethodInfo m5786_MI;
extern MethodInfo m5869_MI;
extern MethodInfo m8679_MI;
extern MethodInfo m12112_MI;
extern MethodInfo m12113_MI;
extern MethodInfo m8689_MI;
extern MethodInfo m8688_MI;
extern MethodInfo m12114_MI;
extern MethodInfo m8659_MI;
extern MethodInfo m8661_MI;
extern MethodInfo m12115_MI;
extern MethodInfo m12116_MI;
extern MethodInfo m8660_MI;
extern MethodInfo m8668_MI;
extern MethodInfo m11460_MI;
extern Il2CppGenericMethod m12117_GM;
extern Il2CppGenericMethod m12118_GM;


extern "C" int32_t m11458 (t9 * __this , t2* p0, int32_t p1, uint16_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
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
		uint16_t L_8 = m2714(L_6, L_7, &m2714_MI);
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
extern "C" void m11459 (t9 * __this , t315 * p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t315 * L_13 = p0;
		uint16_t* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_17 = m7364(L_17, (uint16_t*)(uint16_t*)L_14, L_15, ((int32_t)((int32_t)((int32_t)16)-(int32_t)L_16)), &m7296_MI);
		m1154(L_13, L_17, &m1154_MI);
		return;
	}
}
extern "C" int32_t m11460 (t9 * __this , t2* p0, int32_t p1, t315 * p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		V_0 = L_1;
		int32_t L_2 = p1;
		V_1 = L_2;
		t2* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = L_4;
		p1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		uint16_t L_6 = m2714(L_3, L_5, &m2714_MI);
		V_2 = L_6;
		goto IL_0064;
	}

IL_001a:
	{
		t2* L_7 = p0;
		int32_t L_8 = p1;
		int32_t L_9 = L_8;
		p1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint16_t L_10 = m2714(L_7, L_9, &m2714_MI);
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
		t883 * L_18 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_18, (t2*) &_stringLiteral2708, &m4288_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0045:
	{
		t315 * L_19 = p2;
		t2* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = L_21;
		p1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		uint16_t L_23 = m2714(L_20, L_22, &m2714_MI);
		m2733(L_19, L_23, &m2733_MI);
		goto IL_0064;
	}

IL_005c:
	{
		t315 * L_24 = p2;
		uint16_t L_25 = V_3;
		m2733(L_24, L_25, &m2733_MI);
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
		t883 * L_28 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_28, (t2*) &_stringLiteral2708, &m4288_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" t2* m11461 (t9 * __this , uint16_t p0, t1695 * p1, bool* p2, bool* p3, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		t1695 * L_1 = p1;
		bool* L_2 = p2;
		bool* L_3 = p3;
		t2* L_4 = m11462(NULL, L_0, L_1, L_2, L_3, 0, &m11462_MI);
		return L_4;
	}
}
extern "C" t2* m11462 (t9 * __this , uint16_t p0, t1695 * p1, bool* p2, bool* p3, bool p4, MethodInfo* method)
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
		t1695 * L_8 = p1;
		t2* L_9 = m8671(L_8, &m8671_MI);
		V_0 = L_9;
		goto IL_01a9;
	}

IL_00bd:
	{
		t1695 * L_10 = p1;
		t2* L_11 = m8670(L_10, &m8670_MI);
		V_0 = L_11;
		goto IL_01a9;
	}

IL_00c9:
	{
		t1695 * L_12 = p1;
		t2* L_13 = m8670(L_12, &m8670_MI);
		t1695 * L_14 = p1;
		t2* L_15 = m8672(L_14, &m8672_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m399(NULL, L_13, (t2*) &_stringLiteral168, L_15, &m399_MI);
		V_0 = L_16;
		goto IL_01a9;
	}

IL_00e5:
	{
		t1695 * L_17 = p1;
		t2* L_18 = m8676(L_17, &m8676_MI);
		V_0 = L_18;
		goto IL_01a9;
	}

IL_00f1:
	{
		t1695 * L_19 = p1;
		t2* L_20 = m8671(L_19, &m8671_MI);
		t1695 * L_21 = p1;
		t2* L_22 = m8672(L_21, &m8672_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m399(NULL, L_20, (t2*) &_stringLiteral168, L_22, &m399_MI);
		V_0 = L_23;
		goto IL_01a9;
	}

IL_010d:
	{
		t1695 * L_24 = p1;
		t2* L_25 = m8671(L_24, &m8671_MI);
		t1695 * L_26 = p1;
		t2* L_27 = m8673(L_26, &m8673_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_28 = m399(NULL, L_25, (t2*) &_stringLiteral168, L_27, &m399_MI);
		V_0 = L_28;
		goto IL_01a9;
	}

IL_0129:
	{
		t1695 * L_29 = p1;
		t2* L_30 = m8674(L_29, &m8674_MI);
		V_0 = L_30;
		goto IL_01a9;
	}

IL_0135:
	{
		t1695 * L_31 = p1;
		t2* L_32 = m8682(L_31, &m8682_MI);
		V_0 = L_32;
		bool* L_33 = p3;
		*((int8_t*)(L_33)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0144:
	{
		t1695 * L_34 = p1;
		t2* L_35 = m8681(L_34, &m8681_MI);
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
		t1695 * L_39 = p1;
		t2* L_40 = m8683(L_39, &m8683_MI);
		V_0 = L_40;
		bool* L_41 = p3;
		*((int8_t*)(L_41)) = (int8_t)1;
		goto IL_01a9;
	}

IL_0163:
	{
		t1695 * L_42 = p1;
		t2* L_43 = m8672(L_42, &m8672_MI);
		V_0 = L_43;
		goto IL_01a9;
	}

IL_016c:
	{
		t1695 * L_44 = p1;
		t2* L_45 = m8673(L_44, &m8673_MI);
		V_0 = L_45;
		goto IL_01a9;
	}

IL_0175:
	{
		t1695 * L_46 = p1;
		t2* L_47 = m8684(L_46, &m8684_MI);
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
		t1695 * L_52 = p1;
		t2* L_53 = m8676(L_52, &m8676_MI);
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
		t1695 * L_55 = p1;
		t2* L_56 = m8675(L_55, &m8675_MI);
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
extern TypeInfo* t2096_TI_var;
extern "C" t2* m11463 (t9 * __this , t269  p0, t2* p1, t1695 * p2, MethodInfo* method)
{
	static bool m11463_init;
	if (!m11463_init)
	{
		t2096_TI_var = il2cpp_codegen_class_from_type(&t2096_0_0_0);
		m11463_init = true;
	}
	t2096  V_0 = {0};
	{
		t269  L_0 = p0;
		Initobj (t2096_TI_var, (&V_0));
		t2096  L_1 = V_0;
		t2* L_2 = p1;
		t1695 * L_3 = p2;
		t2* L_4 = m11464(NULL, L_0, L_1, L_2, L_3, &m11464_MI);
		return L_4;
	}
}
extern MethodInfo* m12117_MI_var;
extern MethodInfo* m12118_MI_var;
extern "C" t2* m11464 (t9 * __this , t269  p0, t2096  p1, t2* p2, t1695 * p3, MethodInfo* method)
{
	static bool m11464_init;
	if (!m11464_init)
	{
		m12117_MI_var = il2cpp_codegen_genericmethod_get_method(&m12117_GM);
		m12118_MI_var = il2cpp_codegen_genericmethod_get_method(&m12118_GM);
		m11464_init = true;
	}
	t315 * V_0 = {0};
	t1695 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint16_t V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	t2* V_9 = {0};
	t297  V_10 = {0};
	int32_t V_11 = 0;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t G_B17_0 = 0;
	t315 * G_B17_1 = {0};
	int32_t G_B16_0 = 0;
	t315 * G_B16_1 = {0};
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	t315 * G_B18_2 = {0};
	int32_t G_B21_0 = 0;
	t315 * G_B21_1 = {0};
	int32_t G_B20_0 = 0;
	t315 * G_B20_1 = {0};
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	t315 * G_B22_2 = {0};
	int32_t G_B25_0 = 0;
	t315 * G_B25_1 = {0};
	int32_t G_B24_0 = 0;
	t315 * G_B24_1 = {0};
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	t315 * G_B26_2 = {0};
	int32_t G_B29_0 = 0;
	t315 * G_B29_1 = {0};
	int32_t G_B28_0 = 0;
	t315 * G_B28_1 = {0};
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	t315 * G_B30_2 = {0};
	t2* G_B47_0 = {0};
	t297  G_B56_0 = {0};
	t297  G_B71_0 = {0};
	int32_t G_B81_0 = 0;
	t315 * G_B81_1 = {0};
	int32_t G_B80_0 = 0;
	t315 * G_B80_1 = {0};
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	t315 * G_B82_2 = {0};
	{
		t2* L_0 = p2;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		t315 * L_2 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_2, ((int32_t)((int32_t)L_1+(int32_t)((int32_t)10))), &m4330_MI);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_3 = m8678(NULL, &m8678_MI);
		V_1 = L_3;
		t2* L_4 = p2;
		t1695 * L_5 = V_1;
		t2* L_6 = m8681(L_5, &m8681_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_7 = m331(NULL, L_4, L_6, &m331_MI);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		t1695 * L_8 = V_1;
		p3 = L_8;
		goto IL_003d;
	}

IL_002a:
	{
		t2* L_9 = p2;
		t1695 * L_10 = V_1;
		t2* L_11 = m8684(L_10, &m8684_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_12 = m331(NULL, L_9, L_11, &m331_MI);
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		t1695 * L_13 = V_1;
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
		uint16_t L_16 = m2714(L_14, L_15, &m2714_MI);
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
		int32_t L_28 = m11458(NULL, L_25, L_26, L_27, &m11458_MI);
		V_3 = L_28;
		int32_t L_29 = m11396((&p0), &m11396_MI);
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
		t315 * L_31 = V_0;
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
		m11459(NULL, G_B18_2, G_B18_1, G_B18_0, &m11459_MI);
		goto IL_0610;
	}

IL_014f:
	{
		t2* L_34 = p2;
		int32_t L_35 = V_2;
		uint16_t L_36 = V_5;
		int32_t L_37 = m11458(NULL, L_34, L_35, L_36, &m11458_MI);
		V_3 = L_37;
		t315 * L_38 = V_0;
		int32_t L_39 = m11396((&p0), &m11396_MI);
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
		m11459(NULL, G_B22_2, G_B22_1, G_B22_0, &m11459_MI);
		goto IL_0610;
	}

IL_0173:
	{
		t2* L_41 = p2;
		int32_t L_42 = V_2;
		uint16_t L_43 = V_5;
		int32_t L_44 = m11458(NULL, L_41, L_42, L_43, &m11458_MI);
		V_3 = L_44;
		t315 * L_45 = V_0;
		int32_t L_46 = m11397((&p0), &m11397_MI);
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
		m11459(NULL, G_B26_2, G_B26_1, G_B26_0, &m11459_MI);
		goto IL_0610;
	}

IL_0197:
	{
		t2* L_48 = p2;
		int32_t L_49 = V_2;
		uint16_t L_50 = V_5;
		int32_t L_51 = m11458(NULL, L_48, L_49, L_50, &m11458_MI);
		V_3 = L_51;
		t315 * L_52 = V_0;
		int32_t L_53 = m11398((&p0), &m11398_MI);
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
		m11459(NULL, G_B30_2, G_B30_1, G_B30_0, &m11459_MI);
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
		int32_t L_58 = m11458(NULL, L_55, L_56, L_57, &m11458_MI);
		V_3 = L_58;
		int32_t L_59 = V_3;
		if ((((int32_t)L_59) <= ((int32_t)7)))
		{
			goto IL_01d9;
		}
	}
	{
		t883 * L_60 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_60, (t2*) &_stringLiteral2709, &m4288_MI);
		il2cpp_codegen_raise_exception(L_60);
	}

IL_01d9:
	{
		int64_t L_61 = m6951((&p0), &m6951_MI);
		int32_t L_62 = V_3;
		double L_63 = pow((10.0), (((double)((int32_t)((int32_t)7-(int32_t)L_62)))));
		V_7 = (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_61%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)L_63))))));
		t315 * L_64 = V_0;
		int32_t L_65 = m5856(L_64, &m5856_MI);
		V_8 = L_65;
		t315 * L_66 = V_0;
		int32_t L_67 = V_7;
		int32_t L_68 = V_3;
		m11459(NULL, L_66, L_67, L_68, &m11459_MI);
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
		t315 * L_70 = V_0;
		t315 * L_71 = L_70;
		int32_t L_72 = m5856(L_71, &m5856_MI);
		m5961(L_71, ((int32_t)((int32_t)L_72-(int32_t)1)), &m5961_MI);
	}

IL_0223:
	{
		t315 * L_73 = V_0;
		int32_t L_74 = m5856(L_73, &m5856_MI);
		int32_t L_75 = V_8;
		if ((((int32_t)L_74) <= ((int32_t)L_75)))
		{
			goto IL_023f;
		}
	}
	{
		t315 * L_76 = V_0;
		t315 * L_77 = V_0;
		int32_t L_78 = m5856(L_77, &m5856_MI);
		uint16_t L_79 = m10862(L_76, ((int32_t)((int32_t)L_78-(int32_t)1)), &m10862_MI);
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
		t315 * L_82 = V_0;
		int32_t L_83 = V_8;
		uint16_t L_84 = m10862(L_82, ((int32_t)((int32_t)L_83-(int32_t)1)), &m10862_MI);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0264;
		}
	}
	{
		t315 * L_85 = V_0;
		t315 * L_86 = L_85;
		int32_t L_87 = m5856(L_86, &m5856_MI);
		m5961(L_86, ((int32_t)((int32_t)L_87-(int32_t)1)), &m5961_MI);
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
		int32_t L_91 = m11458(NULL, L_88, L_89, L_90, &m11458_MI);
		V_3 = L_91;
		int32_t L_92 = m11396((&p0), &m11396_MI);
		if ((((int32_t)L_92) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0286;
		}
	}
	{
		t1695 * L_93 = p3;
		t2* L_94 = m8666(L_93, &m8666_MI);
		G_B47_0 = L_94;
		goto IL_028c;
	}

IL_0286:
	{
		t1695 * L_95 = p3;
		t2* L_96 = m8667(L_95, &m8667_MI);
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
		int32_t L_99 = m2699(L_98, &m2699_MI);
		if ((((int32_t)L_99) < ((int32_t)1)))
		{
			goto IL_02ab;
		}
	}
	{
		t315 * L_100 = V_0;
		t2* L_101 = V_9;
		uint16_t L_102 = m2714(L_101, 0, &m2714_MI);
		m2733(L_100, L_102, &m2733_MI);
	}

IL_02ab:
	{
		goto IL_02b6;
	}

IL_02ad:
	{
		t315 * L_103 = V_0;
		t2* L_104 = V_9;
		m1154(L_103, L_104, &m1154_MI);
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
		int32_t L_108 = m11458(NULL, L_105, L_106, L_107, &m11458_MI);
		V_3 = L_108;
		bool L_109 = m12117((&p1), m12117_MI_var);
		if (!L_109)
		{
			goto IL_02d7;
		}
	}
	{
		t297  L_110 = m12118((&p1), m12118_MI_var);
		G_B56_0 = L_110;
		goto IL_02e2;
	}

IL_02d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_111 = m11822(NULL, &m11822_MI);
		t269  L_112 = p0;
		t297  L_113 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, L_111, L_112);
		G_B56_0 = L_113;
	}

IL_02e2:
	{
		V_10 = G_B56_0;
		int64_t L_114 = m11793((&V_10), &m11793_MI);
		if ((((int64_t)L_114) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_02fa;
		}
	}
	{
		t315 * L_115 = V_0;
		m2733(L_115, ((int32_t)43), &m2733_MI);
		goto IL_0303;
	}

IL_02fa:
	{
		t315 * L_116 = V_0;
		m2733(L_116, ((int32_t)45), &m2733_MI);
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
		t315 * L_120 = V_0;
		int32_t L_121 = m11789((&V_10), &m11789_MI);
		int32_t L_122 = abs(L_121);
		m5786(L_120, L_122, &m5786_MI);
		goto IL_0397;
	}

IL_0327:
	{
		t315 * L_123 = V_0;
		int32_t L_124 = m11789((&V_10), &m11789_MI);
		int32_t L_125 = abs(L_124);
		V_14 = L_125;
		t2* L_126 = m5869((&V_14), (t2*) &_stringLiteral2710, &m5869_MI);
		m1154(L_123, L_126, &m1154_MI);
		goto IL_0397;
	}

IL_034a:
	{
		t315 * L_127 = V_0;
		int32_t L_128 = m11789((&V_10), &m11789_MI);
		int32_t L_129 = abs(L_128);
		V_15 = L_129;
		t2* L_130 = m5869((&V_15), (t2*) &_stringLiteral2710, &m5869_MI);
		m1154(L_127, L_130, &m1154_MI);
		t315 * L_131 = V_0;
		m2733(L_131, ((int32_t)58), &m2733_MI);
		t315 * L_132 = V_0;
		int32_t L_133 = m11791((&V_10), &m11791_MI);
		int32_t L_134 = abs(L_133);
		V_16 = L_134;
		t2* L_135 = m5869((&V_16), (t2*) &_stringLiteral2710, &m5869_MI);
		m1154(L_132, L_135, &m1154_MI);
		goto IL_0397;
	}

IL_0397:
	{
		goto IL_0610;
	}

IL_039c:
	{
		V_3 = 1;
		bool L_136 = m12117((&p1), m12117_MI_var);
		if (L_136)
		{
			goto IL_03b4;
		}
	}
	{
		int32_t L_137 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_137) == ((uint32_t)2))))
		{
			goto IL_043f;
		}
	}

IL_03b4:
	{
		bool L_138 = m12117((&p1), m12117_MI_var);
		if (!L_138)
		{
			goto IL_03c6;
		}
	}
	{
		t297  L_139 = m12118((&p1), m12118_MI_var);
		G_B71_0 = L_139;
		goto IL_03d1;
	}

IL_03c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_140 = m11822(NULL, &m11822_MI);
		t269  L_141 = p0;
		t297  L_142 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, L_140, L_141);
		G_B71_0 = L_142;
	}

IL_03d1:
	{
		V_10 = G_B71_0;
		int64_t L_143 = m11793((&V_10), &m11793_MI);
		if ((((int64_t)L_143) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_03e9;
		}
	}
	{
		t315 * L_144 = V_0;
		m2733(L_144, ((int32_t)43), &m2733_MI);
		goto IL_03f2;
	}

IL_03e9:
	{
		t315 * L_145 = V_0;
		m2733(L_145, ((int32_t)45), &m2733_MI);
	}

IL_03f2:
	{
		t315 * L_146 = V_0;
		int32_t L_147 = m11789((&V_10), &m11789_MI);
		int32_t L_148 = abs(L_147);
		V_13 = L_148;
		t2* L_149 = m5869((&V_13), (t2*) &_stringLiteral2710, &m5869_MI);
		m1154(L_146, L_149, &m1154_MI);
		t315 * L_150 = V_0;
		m2733(L_150, ((int32_t)58), &m2733_MI);
		t315 * L_151 = V_0;
		int32_t L_152 = m11791((&V_10), &m11791_MI);
		int32_t L_153 = abs(L_152);
		V_17 = L_153;
		t2* L_154 = m5869((&V_17), (t2*) &_stringLiteral2710, &m5869_MI);
		m1154(L_151, L_154, &m1154_MI);
		goto IL_0452;
	}

IL_043f:
	{
		int32_t L_155 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_155) == ((uint32_t)1))))
		{
			goto IL_0452;
		}
	}
	{
		t315 * L_156 = V_0;
		m2733(L_156, ((int32_t)90), &m2733_MI);
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
		int32_t L_160 = m11458(NULL, L_157, L_158, L_159, &m11458_MI);
		V_3 = L_160;
		int32_t L_161 = V_3;
		if ((((int32_t)L_161) > ((int32_t)2)))
		{
			goto IL_0481;
		}
	}
	{
		t315 * L_162 = V_0;
		t1695 * L_163 = p3;
		t1690 * L_164 = m8679(L_163, &m8679_MI);
		t269  L_165 = p0;
		int32_t L_166 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12112_MI, L_164, L_165);
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
		m11459(NULL, G_B82_2, G_B82_1, G_B82_0, &m11459_MI);
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
		t315 * L_169 = V_0;
		t1695 * L_170 = p3;
		t1695 * L_171 = p3;
		t1690 * L_172 = m8679(L_171, &m8679_MI);
		t269  L_173 = p0;
		int32_t L_174 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12113_MI, L_172, L_173);
		t2* L_175 = m8689(L_170, L_174, &m8689_MI);
		m1154(L_169, L_175, &m1154_MI);
		goto IL_04b9;
	}

IL_04a0:
	{
		t315 * L_176 = V_0;
		t1695 * L_177 = p3;
		t1695 * L_178 = p3;
		t1690 * L_179 = m8679(L_178, &m8679_MI);
		t269  L_180 = p0;
		int32_t L_181 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12113_MI, L_179, L_180);
		t2* L_182 = m8688(L_177, L_181, &m8688_MI);
		m1154(L_176, L_182, &m1154_MI);
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
		int32_t L_186 = m11458(NULL, L_183, L_184, L_185, &m11458_MI);
		V_3 = L_186;
		t1695 * L_187 = p3;
		t1690 * L_188 = m8679(L_187, &m8679_MI);
		t269  L_189 = p0;
		int32_t L_190 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12114_MI, L_188, L_189);
		V_11 = L_190;
		int32_t L_191 = V_3;
		if ((((int32_t)L_191) > ((int32_t)2)))
		{
			goto IL_04e5;
		}
	}
	{
		t315 * L_192 = V_0;
		int32_t L_193 = V_11;
		int32_t L_194 = V_3;
		m11459(NULL, L_192, L_193, L_194, &m11459_MI);
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
		t315 * L_196 = V_0;
		t1695 * L_197 = p3;
		int32_t L_198 = V_11;
		t2* L_199 = m8659(L_197, L_198, &m8659_MI);
		m1154(L_196, L_199, &m1154_MI);
		goto IL_0509;
	}

IL_04fa:
	{
		t315 * L_200 = V_0;
		t1695 * L_201 = p3;
		int32_t L_202 = V_11;
		t2* L_203 = m8661(L_201, L_202, &m8661_MI);
		m1154(L_200, L_203, &m1154_MI);
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
		int32_t L_207 = m11458(NULL, L_204, L_205, L_206, &m11458_MI);
		V_3 = L_207;
		int32_t L_208 = V_3;
		if ((((int32_t)L_208) > ((int32_t)2)))
		{
			goto IL_0534;
		}
	}
	{
		t315 * L_209 = V_0;
		t1695 * L_210 = p3;
		t1690 * L_211 = m8679(L_210, &m8679_MI);
		t269  L_212 = p0;
		int32_t L_213 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12115_MI, L_211, L_212);
		int32_t L_214 = V_3;
		m11459(NULL, L_209, ((int32_t)((int32_t)L_213%(int32_t)((int32_t)100))), L_214, &m11459_MI);
		goto IL_0547;
	}

IL_0534:
	{
		t315 * L_215 = V_0;
		t1695 * L_216 = p3;
		t1690 * L_217 = m8679(L_216, &m8679_MI);
		t269  L_218 = p0;
		int32_t L_219 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12115_MI, L_217, L_218);
		int32_t L_220 = V_3;
		m11459(NULL, L_215, L_219, L_220, &m11459_MI);
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
		int32_t L_224 = m11458(NULL, L_221, L_222, L_223, &m11458_MI);
		V_3 = L_224;
		t315 * L_225 = V_0;
		t1695 * L_226 = p3;
		t1695 * L_227 = p3;
		t1690 * L_228 = m8679(L_227, &m8679_MI);
		t269  L_229 = p0;
		int32_t L_230 = (int32_t)VirtFuncInvoker1< int32_t, t269  >::Invoke(&m12116_MI, L_228, L_229);
		t2* L_231 = m8660(L_226, L_230, &m8660_MI);
		m1154(L_225, L_231, &m1154_MI);
		goto IL_0610;
	}

IL_0574:
	{
		t315 * L_232 = V_0;
		t1695 * L_233 = p3;
		t2* L_234 = m8669(L_233, &m8669_MI);
		m1154(L_232, L_234, &m1154_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_0588:
	{
		t315 * L_235 = V_0;
		t1695 * L_236 = p3;
		t2* L_237 = m8668(L_236, &m8668_MI);
		m1154(L_235, L_237, &m1154_MI);
		V_3 = 1;
		goto IL_0610;
	}

IL_059c:
	{
		t2* L_238 = p2;
		int32_t L_239 = V_2;
		t315 * L_240 = V_0;
		int32_t L_241 = m11460(NULL, L_238, L_239, L_240, &m11460_MI);
		V_3 = L_241;
		goto IL_0610;
	}

IL_05a7:
	{
		int32_t L_242 = V_2;
		t2* L_243 = p2;
		int32_t L_244 = m2699(L_243, &m2699_MI);
		if ((((int32_t)L_242) < ((int32_t)((int32_t)((int32_t)L_244-(int32_t)1)))))
		{
			goto IL_05bd;
		}
	}
	{
		t883 * L_245 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_245, (t2*) &_stringLiteral2711, &m4288_MI);
		il2cpp_codegen_raise_exception(L_245);
	}

IL_05bd:
	{
		t2* L_246 = p2;
		int32_t L_247 = V_2;
		uint16_t L_248 = m2714(L_246, ((int32_t)((int32_t)L_247+(int32_t)1)), &m2714_MI);
		if ((!(((uint32_t)L_248) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_05d5;
		}
	}
	{
		t883 * L_249 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_249, (t2*) &_stringLiteral2712, &m4288_MI);
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
		int32_t L_252 = m2699(L_251, &m2699_MI);
		if ((((int32_t)L_250) < ((int32_t)((int32_t)((int32_t)L_252-(int32_t)1)))))
		{
			goto IL_05ef;
		}
	}
	{
		t883 * L_253 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_253, (t2*) &_stringLiteral2713, &m4288_MI);
		il2cpp_codegen_raise_exception(L_253);
	}

IL_05ef:
	{
		t315 * L_254 = V_0;
		t2* L_255 = p2;
		int32_t L_256 = V_2;
		uint16_t L_257 = m2714(L_255, ((int32_t)((int32_t)L_256+(int32_t)1)), &m2714_MI);
		m2733(L_254, L_257, &m2733_MI);
		V_3 = 2;
		goto IL_0610;
	}

IL_0603:
	{
		t315 * L_258 = V_0;
		uint16_t L_259 = V_5;
		m2733(L_258, L_259, &m2733_MI);
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
		int32_t L_264 = m2699(L_263, &m2699_MI);
		if ((((int32_t)L_262) < ((int32_t)L_264)))
		{
			goto IL_0044;
		}
	}
	{
		t315 * L_265 = V_0;
		t2* L_266 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_265);
		return L_266;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1691MD.h"



#include "t1553.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1553_TI;
#include "t1553MD.h"



#include "t2097.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2097_TI;
#include "t2097MD.h"

#include "t286.h"
#include "t821.h"
#include "t553.h"
#include "t1917.h"
extern TypeInfo t1336_TI;
extern TypeInfo t553_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t1917_TI;
#include "t1336MD.h"
#include "t286MD.h"
#include "t553MD.h"
#include "t1918MD.h"
#include "t1917MD.h"
extern MethodInfo m5743_MI;
extern MethodInfo m9423_MI;
extern MethodInfo m4438_MI;
extern MethodInfo m4428_MI;
extern MethodInfo m4367_MI;
extern MethodInfo m9434_MI;
extern MethodInfo m5744_MI;
extern MethodInfo m10064_MI;
extern MethodInfo m7750_MI;
extern MethodInfo m10060_MI;
extern MethodInfo m7583_MI;
extern MethodInfo m7586_MI;


extern MethodInfo m11465_MI;
extern "C" void m11465 (t2097 * __this, t286 * p0, t2* p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t286 * L_0 = p0;
		t126 * L_1 = m2486(L_0, &m2486_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		__this->f0 = L_2;
		t286 * L_3 = p0;
		t126 * L_4 = m2486(L_3, &m2486_MI);
		t1336 * L_5 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_4);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_5);
		__this->f1 = L_6;
		t2* L_7 = p1;
		__this->f2 = L_7;
		t286 * L_8 = p0;
		t821 * L_9 = m4438(L_8, &m4438_MI);
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_9);
		t1336 * L_11 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_10);
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_11);
		__this->f3 = L_12;
		t286 * L_13 = p0;
		t821 * L_14 = m4438(L_13, &m4438_MI);
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_14);
		t2* L_16 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_15);
		__this->f4 = L_16;
		t286 * L_17 = p0;
		t821 * L_18 = m4438(L_17, &m4438_MI);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_18);
		__this->f5 = L_19;
		return;
	}
}
extern MethodInfo m11466_MI;
extern "C" t286 * m11466 (t2097 * __this, t1093 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1336 * V_1 = {0};
	t126 * V_2 = {0};
	t286 * V_3 = {0};
	t1336 * V_4 = {0};
	t126 * V_5 = {0};
	t1336 * V_6 = {0};
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
		t1093 * L_1 = p0;
		t9 * L_2 = (__this->f2);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_5 = m5703(L_1, L_3, L_4, &m5703_MI);
		V_0 = L_5;
	}

IL_0026:
	{
		t2* L_6 = (__this->f1);
		t1336 * L_7 = m9434(NULL, L_6, &m9434_MI);
		V_1 = L_7;
		t1336 * L_8 = V_1;
		t2* L_9 = (__this->f0);
		t126 * L_10 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5744_MI, L_8, L_9);
		V_2 = L_10;
		t9 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		bool L_13 = m10064(NULL, L_12, &m10064_MI);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		t2* L_14 = (__this->f3);
		t1336 * L_15 = m9434(NULL, L_14, &m9434_MI);
		V_4 = L_15;
		t1336 * L_16 = V_4;
		t2* L_17 = (__this->f4);
		t126 * L_18 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5744_MI, L_16, L_17);
		V_5 = L_18;
		t126 * L_19 = V_5;
		t9 * L_20 = V_0;
		bool L_21 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7750_MI, L_19, L_20);
		if (L_21)
		{
			goto IL_007b;
		}
	}
	{
		t1917 * L_22 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_22, (t2*) &_stringLiteral2715, &m10060_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007b:
	{
		t126 * L_23 = V_2;
		t9 * L_24 = V_0;
		t2* L_25 = (__this->f5);
		t286 * L_26 = m7583(NULL, L_23, L_24, L_25, &m7583_MI);
		V_3 = L_26;
		goto IL_00b6;
	}

IL_008b:
	{
		t2* L_27 = (__this->f3);
		t1336 * L_28 = m9434(NULL, L_27, &m9434_MI);
		V_6 = L_28;
		t1336 * L_29 = V_6;
		t2* L_30 = (__this->f4);
		t126 * L_31 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5744_MI, L_29, L_30);
		V_7 = L_31;
		t126 * L_32 = V_2;
		t126 * L_33 = V_7;
		t2* L_34 = (__this->f5);
		t286 * L_35 = m7586(NULL, L_32, L_33, L_34, &m7586_MI);
		V_3 = L_35;
	}

IL_00b6:
	{
		t286 * L_36 = V_3;
		return L_36;
	}
}
#include "t2098.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2098_TI;
#include "t2098MD.h"

extern TypeInfo t1552_TI;
extern TypeInfo t286_TI;
extern Il2CppType t2097_0_0_0;
extern Il2CppType t1552_0_0_0;
extern Il2CppType t2098_0_0_0;
extern MethodInfo m7593_MI;
extern MethodInfo m7592_MI;
extern MethodInfo m4439_MI;
extern MethodInfo m10298_MI;


extern MethodInfo m11467_MI;
extern TypeInfo* t1552_TI_var;
extern "C" void m11467 (t2098 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	static bool m11467_init;
	if (!m11467_init)
	{
		t1552_TI_var = il2cpp_codegen_class_from_type(&t1552_0_0_0);
		m11467_init = true;
	}
	t2097 * V_0 = {0};
	int32_t V_1 = 0;
	t2097 * V_2 = {0};
	t1552* V_3 = {0};
	int32_t V_4 = 0;
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t2097_0_0_0), &m329_MI);
		t9 * L_2 = m5703(L_0, (t2*) &_stringLiteral2714, L_1, &m5703_MI);
		V_0 = ((t2097 *)Castclass(L_2, InitializedTypeInfo(&t2097_TI)));
		V_1 = 0;
		t2097 * L_3 = V_0;
		V_2 = L_3;
		goto IL_0032;
	}

IL_0027:
	{
		t2097 * L_4 = V_2;
		t2097 * L_5 = (L_4->f6);
		V_2 = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		t2097 * L_7 = V_2;
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
		t2097 * L_9 = V_0;
		t1093 * L_10 = p0;
		t286 * L_11 = m11466(L_9, L_10, &m11466_MI);
		__this->f0 = L_11;
		goto IL_007f;
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_3 = ((t1552*)SZArrayNew(t1552_TI_var, L_12));
		t2097 * L_13 = V_0;
		V_2 = L_13;
		V_4 = 0;
		goto IL_006e;
	}

IL_0056:
	{
		t1552* L_14 = V_3;
		int32_t L_15 = V_4;
		t2097 * L_16 = V_2;
		t1093 * L_17 = p0;
		t286 * L_18 = m11466(L_16, L_17, &m11466_MI);
		ArrayElementTypeCheck (L_14, L_18);
		*((t286 **)(t286 **)SZArrayLdElema(L_14, L_15)) = (t286 *)L_18;
		t2097 * L_19 = V_2;
		t2097 * L_20 = (L_19->f6);
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
		t1552* L_24 = V_3;
		t286 * L_25 = m7593(NULL, L_24, &m7593_MI);
		__this->f0 = L_25;
	}

IL_007f:
	{
		return;
	}
}
extern MethodInfo m11468_MI;
extern "C" void m11468 (t9 * __this , t286 * p0, t1093 * p1, t1094  p2, MethodInfo* method)
{
	t1552* V_0 = {0};
	t2097 * V_1 = {0};
	int32_t V_2 = 0;
	t286 * V_3 = {0};
	t2* V_4 = {0};
	t2097 * V_5 = {0};
	t2* G_B4_0 = {0};
	{
		t286 * L_0 = p0;
		t1552* L_1 = (t1552*)VirtFuncInvoker0< t1552* >::Invoke(&m7592_MI, L_0);
		V_0 = L_1;
		V_1 = (t2097 *)NULL;
		V_2 = 0;
		goto IL_006f;
	}

IL_000d:
	{
		t1552* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_3 = (*(t286 **)(t286 **)SZArrayLdElema(L_2, L_4));
		t286 * L_5 = V_3;
		t9 * L_6 = m4439(L_5, &m4439_MI);
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
		t2* L_10 = m511(NULL, (t2*) &_stringLiteral395, L_9, &m511_MI);
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
		t286 * L_11 = V_3;
		t2* L_12 = V_4;
		t2097 * L_13 = (t2097 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2097_TI));
		m11465(L_13, L_11, L_12, &m11465_MI);
		V_5 = L_13;
		t2097 * L_14 = V_1;
		if (L_14)
		{
			goto IL_004a;
		}
	}
	{
		t1093 * L_15 = p1;
		t2097 * L_16 = V_5;
		m5715(L_15, (t2*) &_stringLiteral2714, L_16, &m5715_MI);
		goto IL_0052;
	}

IL_004a:
	{
		t2097 * L_17 = V_1;
		t2097 * L_18 = V_5;
		L_17->f6 = L_18;
	}

IL_0052:
	{
		t2097 * L_19 = V_5;
		V_1 = L_19;
		t286 * L_20 = V_3;
		t9 * L_21 = m4439(L_20, &m4439_MI);
		if (!L_21)
		{
			goto IL_006b;
		}
	}
	{
		t1093 * L_22 = p1;
		t2* L_23 = V_4;
		t286 * L_24 = V_3;
		t9 * L_25 = m4439(L_24, &m4439_MI);
		m5715(L_22, L_23, L_25, &m5715_MI);
	}

IL_006b:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_27 = V_2;
		t1552* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		t1093 * L_29 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t2098_0_0_0), &m329_MI);
		m10298(L_29, L_30, &m10298_MI);
		return;
	}
}
extern MethodInfo m11469_MI;
extern "C" void m11469 (t2098 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11470_MI;
extern "C" t9 * m11470 (t2098 * __this, t1094  p0, MethodInfo* method)
{
	{
		t286 * L_0 = (__this->f0);
		return L_0;
	}
}
#include "t2099.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2099_TI;
#include "t2099MD.h"



extern MethodInfo m11471_MI;
extern "C" void m11471 (t2099 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2716, &m7818_MI);
		m6858(__this, L_0, &m6858_MI);
		m4433(__this, ((int32_t)-2147352558), &m4433_MI);
		return;
	}
}
extern MethodInfo m11472_MI;
extern "C" void m11472 (t2099 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11122(__this, L_0, L_1, &m11122_MI);
		return;
	}
}
#include "t2100.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2100_TI;
#include "t2100MD.h"

#include "t2101MD.h"
extern MethodInfo m11840_MI;
extern MethodInfo m11841_MI;


extern MethodInfo m11473_MI;
extern "C" void m11473 (t2100 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2717, &m7818_MI);
		m11840(__this, L_0, &m11840_MI);
		m4433(__this, ((int32_t)-2146233052), &m4433_MI);
		return;
	}
}
extern MethodInfo m11474_MI;
extern "C" void m11474 (t2100 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11841(__this, L_0, L_1, &m11841_MI);
		return;
	}
}
#include "t2102.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2102_TI;
#include "t2102MD.h"



extern MethodInfo m11475_MI;
extern "C" void m11475 (t2102 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2718, &m7818_MI);
		m11840(__this, L_0, &m11840_MI);
		m4433(__this, ((int32_t)-2146233053), &m4433_MI);
		return;
	}
}
extern MethodInfo m11476_MI;
extern "C" void m11476 (t2102 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11841(__this, L_0, L_1, &m11841_MI);
		return;
	}
}
#include "t2103.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2103_TI;
#include "t2103MD.h"



extern MethodInfo m11477_MI;
extern "C" void m11477 (t2103 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11478_MI;
extern "C" int32_t m11478 (t2103 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
extern MethodInfo m11479_MI;
extern "C" int32_t m11479 (t2103 * __this, int8_t p0, int8_t p1, MethodInfo* method)
{
	{
		int8_t L_0 = p0;
		int8_t L_1 = p1;
		return ((int32_t)((int32_t)(((uint8_t)L_0))-(int32_t)(((uint8_t)L_1))));
	}
}
#include "t2104.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2104_TI;
#include "t2104MD.h"



extern MethodInfo m11480_MI;
extern "C" void m11480 (t2104 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11481_MI;
extern "C" int32_t m11481 (t2104 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int16_t*)((int16_t*)UnBox (L_0, InitializedTypeInfo(&t327_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int16_t*)((int16_t*)UnBox (L_1, InitializedTypeInfo(&t327_TI)))));
		int16_t L_2 = V_0;
		int16_t L_3 = V_1;
		return ((int32_t)((int32_t)(((uint16_t)L_2))-(int32_t)(((uint16_t)L_3))));
	}
}
extern MethodInfo m11482_MI;
extern "C" int32_t m11482 (t2104 * __this, int16_t p0, int16_t p1, MethodInfo* method)
{
	{
		int16_t L_0 = p0;
		int16_t L_1 = p1;
		return ((int32_t)((int32_t)(((uint16_t)L_0))-(int32_t)(((uint16_t)L_1))));
	}
}
#include "t2105.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2105_TI;
#include "t2105MD.h"



extern MethodInfo m11483_MI;
extern "C" void m11483 (t2105 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11484_MI;
extern "C" int32_t m11484 (t2105 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
extern MethodInfo m11485_MI;
extern "C" int32_t m11485 (t2105 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
#include "t2106.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2106_TI;
#include "t2106MD.h"



extern MethodInfo m11486_MI;
extern "C" void m11486 (t2106 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11487_MI;
extern "C" int32_t m11487 (t2106 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_0, InitializedTypeInfo(&t292_TI)))));
		t9 * L_1 = p1;
		V_1 = ((*(int64_t*)((int64_t*)UnBox (L_1, InitializedTypeInfo(&t292_TI)))));
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
extern MethodInfo m11488_MI;
extern "C" int32_t m11488 (t2106 * __this, int64_t p0, int64_t p1, MethodInfo* method)
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
#include "t2107.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2107_TI;
#include "t2107MD.h"

#include "t1149.h"
extern TypeInfo t1149_TI;
extern TypeInfo t304_TI;
extern TypeInfo t1403_TI;
extern TypeInfo t1998_TI;
extern TypeInfo t2165_TI;
extern TypeInfo t2053_TI;
extern TypeInfo t1556_TI;
#include "t1149MD.h"
#include "t121MD.h"
extern Il2CppType t304_0_0_0;
extern Il2CppType t1403_0_0_0;
extern Il2CppType t1998_0_0_0;
extern Il2CppType t2165_0_0_0;
extern Il2CppType t2053_0_0_0;
extern Il2CppType t1556_0_0_0;
extern MethodInfo m5883_MI;
extern MethodInfo m11492_MI;
extern MethodInfo m5739_MI;
extern MethodInfo m5707_MI;
extern MethodInfo m5891_MI;
extern MethodInfo m11491_MI;
extern MethodInfo m7697_MI;
extern MethodInfo m5890_MI;
extern MethodInfo m11489_MI;


extern "C" void m11489 (t2107 * __this, t2107  p0, MethodInfo* method)
{
	{
		t126 * L_0 = ((&p0)->f0);
		__this->f0 = L_0;
		t121 * L_1 = ((&p0)->f1);
		__this->f1 = L_1;
		t221* L_2 = ((&p0)->f2);
		__this->f2 = L_2;
		t1149 * L_3 = ((&p0)->f3);
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m11490_MI;
extern "C" void m11490 (t9 * __this , MethodInfo* method)
{
	{
		t2103 * L_0 = (t2103 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2103_TI));
		m11477(L_0, &m11477_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f7 = L_0;
		t2104 * L_1 = (t2104 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2104_TI));
		m11480(L_1, &m11480_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f8 = L_1;
		t2105 * L_2 = (t2105 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2105_TI));
		m11483(L_2, &m11483_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f9 = L_2;
		t2106 * L_3 = (t2106 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2106_TI));
		m11486(L_3, &m11486_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f10 = L_3;
		t9 * L_4 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_4, &m336_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f6 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_5 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_5, &m5883_MI);
		((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f5 = L_5;
		return;
	}
}
extern "C" void m11491 (t9 * __this , t126 * p0, t2107 * p1, MethodInfo* method)
{
	typedef void (*m11491_ftn) (t126 *, t2107 *);
	static m11491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11491_ftn)il2cpp_codegen_resolve_icall ("System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" t1149 * m11492 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t1149 * L_0 = ((t2107_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2107_TI)))->f4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_1 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_1, &m5883_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		((t2107_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2107_TI)))->f4 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t1149 * L_2 = ((t2107_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2107_TI)))->f4;
		return L_2;
	}
}
extern MethodInfo m11493_MI;
extern TypeInfo* t723_TI_var;
extern TypeInfo* t304_TI_var;
extern TypeInfo* t1403_TI_var;
extern TypeInfo* t1998_TI_var;
extern TypeInfo* t1088_TI_var;
extern TypeInfo* t2165_TI_var;
extern TypeInfo* t2053_TI_var;
extern TypeInfo* t1556_TI_var;
extern "C" void m11493 (t9 * __this , t126 * p0, t2107 * p1, MethodInfo* method)
{
	static bool m11493_init;
	if (!m11493_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		t304_TI_var = il2cpp_codegen_class_from_type(&t304_0_0_0);
		t1403_TI_var = il2cpp_codegen_class_from_type(&t1403_0_0_0);
		t1998_TI_var = il2cpp_codegen_class_from_type(&t1998_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		t2165_TI_var = il2cpp_codegen_class_from_type(&t2165_0_0_0);
		t2053_TI_var = il2cpp_codegen_class_from_type(&t2053_0_0_0);
		t1556_TI_var = il2cpp_codegen_class_from_type(&t1556_0_0_0);
		m11493_init = true;
	}
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	int32_t V_3 = 0;
	t2107  V_4 = {0};
	t9 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t1149 * L_0 = m11492(NULL, &m11492_MI);
		t126 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5739_MI, L_0, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t2107 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t1149 * L_4 = ((t2107_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2107_TI)))->f4;
		t126 * L_5 = p0;
		t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_4, L_5);
		*L_3 = ((*(t2107 *)((t2107 *)UnBox (L_6, InitializedTypeInfo(&t2107_TI)))));
		return;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t9 * L_7 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f6;
		V_0 = L_7;
		t9 * L_8 = V_0;
		m1067(NULL, L_8, &m1067_MI);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
			t1149 * L_9 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f5;
			t126 * L_10 = p0;
			bool L_11 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5739_MI, L_9, L_10);
			if (!L_11)
			{
				goto IL_0066;
			}
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
			t1149 * L_12 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f5;
			t126 * L_13 = p0;
			t9 * L_14 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_12, L_13);
			V_1 = L_14;
			t1149 * L_15 = ((t2107_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2107_TI)))->f4;
			t126 * L_16 = p0;
			t9 * L_17 = V_1;
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5891_MI, L_15, L_16, L_17);
			t2107 * L_18 = p1;
			t9 * L_19 = V_1;
			*L_18 = ((*(t2107 *)((t2107 *)UnBox (L_19, InitializedTypeInfo(&t2107_TI)))));
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
		m1069(NULL, L_20, &m1069_MI);
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
		t2107 * L_22 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		m11491(NULL, L_21, L_22, &m11491_MI);
		V_2 = (t9 *)NULL;
		t2107 * L_23 = p1;
		t121 * L_24 = (L_23->f1);
		if (((t723*)IsInst(L_24, t723_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2107 * L_25 = p1;
		t121 * L_26 = (L_25->f1);
		if (((t304*)IsInst(L_26, t304_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2107 * L_27 = p1;
		t121 * L_28 = (L_27->f1);
		if (((t1403*)IsInst(L_28, t1403_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2107 * L_29 = p1;
		t121 * L_30 = (L_29->f1);
		if (((t1998*)IsInst(L_30, t1998_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		t2107 * L_31 = p1;
		t121 * L_32 = (L_31->f1);
		if (!((t1088*)IsInst(L_32, t1088_TI_var)))
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t2105 * L_33 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f9;
		V_2 = L_33;
		goto IL_0104;
	}

IL_00c7:
	{
		t2107 * L_34 = p1;
		t121 * L_35 = (L_34->f1);
		if (!((t2165*)IsInst(L_35, t2165_TI_var)))
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t2104 * L_36 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f8;
		V_2 = L_36;
		goto IL_0104;
	}

IL_00dc:
	{
		t2107 * L_37 = p1;
		t121 * L_38 = (L_37->f1);
		if (!((t2053*)IsInst(L_38, t2053_TI_var)))
		{
			goto IL_00f1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t2103 * L_39 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f7;
		V_2 = L_39;
		goto IL_0104;
	}

IL_00f1:
	{
		t2107 * L_40 = p1;
		t121 * L_41 = (L_40->f1);
		if (!((t1556*)IsInst(L_41, t1556_TI_var)))
		{
			goto IL_0104;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t2106 * L_42 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f10;
		V_2 = L_42;
	}

IL_0104:
	{
		t2107 * L_43 = p1;
		t121 * L_44 = (L_43->f1);
		t2107 * L_45 = p1;
		t221* L_46 = (L_45->f2);
		t9 * L_47 = V_2;
		m7697(NULL, L_44, (t121 *)(t121 *)L_46, L_47, &m7697_MI);
		t2107 * L_48 = p1;
		t221* L_49 = (L_48->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_49)->max_length)))) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0161;
		}
	}
	{
		t2107 * L_50 = p1;
		t2107 * L_51 = p1;
		t221* L_52 = (L_51->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_53 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5890(L_53, (((int32_t)(((t121 *)L_52)->max_length))), &m5890_MI);
		L_50->f3 = L_53;
		V_3 = 0;
		goto IL_0156;
	}

IL_0139:
	{
		t2107 * L_54 = p1;
		t1149 * L_55 = (L_54->f3);
		t2107 * L_56 = p1;
		t221* L_57 = (L_56->f2);
		int32_t L_58 = V_3;
		int32_t L_59 = L_58;
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		t9 * L_62 = Box(InitializedTypeInfo(&t125_TI), &L_61);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5891_MI, L_55, (*(t2**)(t2**)SZArrayLdElema(L_57, L_59)), L_62);
		int32_t L_63 = V_3;
		V_3 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0156:
	{
		int32_t L_64 = V_3;
		t2107 * L_65 = p1;
		t221* L_66 = (L_65->f2);
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)(((t121 *)L_66)->max_length))))))
		{
			goto IL_0139;
		}
	}

IL_0161:
	{
		t2107 * L_67 = p1;
		m11489((&V_4), (*(t2107 *)L_67), &m11489_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t9 * L_68 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f6;
		V_5 = L_68;
		t9 * L_69 = V_5;
		m1067(NULL, L_69, &m1067_MI);
	}

IL_017c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2107_TI));
		t1149 * L_70 = ((t2107_SFs*)InitializedTypeInfo(&t2107_TI)->static_fields)->f5;
		t126 * L_71 = p0;
		t2107  L_72 = V_4;
		t2107  L_73 = L_72;
		t9 * L_74 = Box(InitializedTypeInfo(&t2107_TI), &L_73);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5891_MI, L_70, L_71, L_74);
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
		m1069(NULL, L_75, &m1069_MI);
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
#include "t1530.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1530_TI;
#include "t1530MD.h"



#include "t886.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t886_TI;

#include "t2109.h"
#include "t2108.h"
#include "t1187.h"
#include "t1710.h"
extern TypeInfo t2108_TI;
extern TypeInfo t293_TI;
extern TypeInfo t1710_TI;
extern TypeInfo t305_TI;
extern TypeInfo t137_TI;
#include "t1187MD.h"
#include "t2108MD.h"
#include "t293MD.h"
#include "t295MD.h"
#include "t1710MD.h"
extern Il2CppType t305_0_0_0;
extern MethodInfo m11496_MI;
extern MethodInfo m11867_MI;
extern MethodInfo m11495_MI;
extern MethodInfo m11747_MI;
extern MethodInfo m11498_MI;
extern MethodInfo m11499_MI;
extern MethodInfo m11501_MI;
extern MethodInfo m1076_MI;
extern MethodInfo m1077_MI;
extern MethodInfo m8974_MI;
extern MethodInfo m4246_MI;
extern MethodInfo m2715_MI;
extern MethodInfo m2741_MI;
extern MethodInfo m4247_MI;
extern MethodInfo m4255_MI;
extern MethodInfo m8985_MI;
extern MethodInfo m365_MI;
extern MethodInfo m11503_MI;
extern MethodInfo m11500_MI;


extern MethodInfo m11494_MI;
extern "C" bool m11494 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m11494_ftn) ();
	static m11494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11494_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_SocketSecurityEnabled()");
	return _il2cpp_icall_func();
}
extern "C" t2* m5775 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m5775_ftn) ();
	static m5775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m5775_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_NewLine()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m11495 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m11495_ftn) ();
	static m11495_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11495_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_Platform()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11496 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m11496_ftn) ();
	static m11496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11496_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetOSVersionString()");
	return _il2cpp_icall_func();
}
extern MethodInfo m11497_MI;
extern "C" t2108 * m11497 (t9 * __this , MethodInfo* method)
{
	t1187 * V_0 = {0};
	int32_t V_1 = {0};
	{
		t2108 * L_0 = ((t886_SFs*)InitializedTypeInfo(&t886_TI)->static_fields)->f0;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		t2* L_1 = m11496(NULL, &m11496_MI);
		t1187 * L_2 = m11867(NULL, L_1, &m11867_MI);
		V_0 = L_2;
		int32_t L_3 = m11495(NULL, &m11495_MI);
		V_1 = L_3;
		int32_t L_4 = V_1;
		t1187 * L_5 = V_0;
		t2108 * L_6 = (t2108 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2108_TI));
		m11747(L_6, L_4, L_5, &m11747_MI);
		((t886_SFs*)InitializedTypeInfo(&t886_TI)->static_fields)->f0 = L_6;
	}

IL_0024:
	{
		t2108 * L_7 = ((t886_SFs*)InitializedTypeInfo(&t886_TI)->static_fields)->f0;
		return L_7;
	}
}
extern MethodInfo m4299_MI;
extern "C" int32_t m4299 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m4299_ftn) ();
	static m4299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4299_ftn)il2cpp_codegen_resolve_icall ("System.Environment::get_TickCount()");
	return _il2cpp_icall_func();
}
extern "C" t2* m11498 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t2* (*m11498_ftn) (t2*);
	static m11498_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11498_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetEnvironmentVariable(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6947_MI;
extern "C" t2* m6947 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m11498(NULL, L_0, &m11498_MI);
		return L_1;
	}
}
extern "C" t2* m11499 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t2* (*m11499_ftn) (int32_t);
	static m11499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11499_ftn)il2cpp_codegen_resolve_icall ("System.Environment::GetWindowsFolderPath(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m6923_MI;
extern "C" t2* m6923 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		V_0 = (t2*)NULL;
		bool L_0 = m11502(NULL, &m11502_MI);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = p0;
		t2* L_2 = m11499(NULL, L_1, &m11499_MI);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_3 = p0;
		t2* L_4 = m11501(NULL, L_3, &m11501_MI);
		V_0 = L_4;
	}

IL_0019:
	{
		t2* L_5 = V_0;
		return L_5;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" t2* m11500 (t9 * __this , t2* p0, t2* p1, t2* p2, t2* p3, MethodInfo* method)
{
	static bool m11500_init;
	if (!m11500_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m11500_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	t1710 * V_2 = {0};
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
		t2* L_1 = m11498(NULL, L_0, &m11498_MI);
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
		bool L_5 = m2713(NULL, L_3, L_4, &m2713_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_8 = m1076(NULL, L_7, (t2*) &_stringLiteral2719, &m1076_MI);
		V_1 = L_8;
		t2* L_9 = V_1;
		bool L_10 = m1077(NULL, L_9, &m1077_MI);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		t2* L_11 = p1;
		t2* L_12 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_13 = m1076(NULL, L_11, L_12, &m1076_MI);
		return L_13;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			t2* L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
			t1710 * L_15 = (t1710 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1710_TI));
			m8974(L_15, L_14, &m8974_MI);
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
				t2* L_17 = m4246(L_16, &m4246_MI);
				V_3 = L_17;
				t2* L_18 = V_3;
				int32_t L_19 = m2770(L_18, ((int32_t)61), &m2770_MI);
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
				t2* L_23 = m2715(L_21, 0, L_22, &m2715_MI);
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
				t2* L_28 = m2741(L_26, ((int32_t)((int32_t)L_27+(int32_t)1)), &m2741_MI);
				t305* L_29 = ((t305*)SZArrayNew(t305_TI_var, 1));
				*((uint16_t*)(uint16_t*)SZArrayLdElema(L_29, 0)) = (uint16_t)((int32_t)34);
				t2* L_30 = m4247(L_28, L_29, &m4247_MI);
				V_5 = L_30;
				V_6 = 0;
				t2* L_31 = V_5;
				bool L_32 = m4255(L_31, (t2*) &_stringLiteral2720, &m4255_MI);
				if (!L_32)
				{
					goto IL_00a7;
				}
			}

IL_0098:
			{
				V_6 = 1;
				t2* L_33 = V_5;
				t2* L_34 = m2741(L_33, 6, &m2741_MI);
				V_5 = L_34;
				goto IL_00b8;
			}

IL_00a7:
			{
				t2* L_35 = V_5;
				bool L_36 = m4255(L_35, (t2*) &_stringLiteral750, &m4255_MI);
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
				IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
				t2* L_40 = m1076(NULL, L_38, L_39, &m1076_MI);
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
				t1710 * L_42 = V_2;
				t2* L_43 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8985_MI, L_42);
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
				t1710 * L_45 = V_2;
				if (!L_45)
				{
					goto IL_00e4;
				}
			}

IL_00de:
			{
				t1710 * L_46 = V_2;
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
		if(il2cpp_codegen_class_is_assignable_from (&t1711_TI, e.ex->object.klass))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_49 = m1076(NULL, L_47, L_48, &m1076_MI);
		return L_49;
	}

IL_00f2:
	{
		t2* L_50 = V_7;
		return L_50;
	}
}
extern "C" t2* m11501 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = {0};
	{
		t2* L_0 = m11503(NULL, &m11503_MI);
		V_0 = L_0;
		t2* L_1 = m11498(NULL, (t2*) &_stringLiteral2721, &m11498_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_7 = m1076(NULL, L_6, (t2*) &_stringLiteral2722, &m1076_MI);
		V_1 = L_7;
		t2* L_8 = V_1;
		t2* L_9 = m1076(NULL, L_8, (t2*) &_stringLiteral1627, &m1076_MI);
		V_1 = L_9;
	}

IL_0039:
	{
		t2* L_10 = m11498(NULL, (t2*) &_stringLiteral2723, &m11498_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_16 = m1076(NULL, L_15, (t2*) &_stringLiteral2724, &m1076_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_21 = m1076(NULL, L_20, (t2*) &_stringLiteral2725, &m1076_MI);
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
		t2* L_26 = m11500(NULL, L_24, L_25, (t2*) &_stringLiteral2726, (t2*) &_stringLiteral2727, &m11500_MI);
		return L_26;
	}

IL_0142:
	{
		t2* L_27 = V_2;
		t2* L_28 = V_0;
		t2* L_29 = m11500(NULL, L_27, L_28, (t2*) &_stringLiteral2728, (t2*) &_stringLiteral2729, &m11500_MI);
		return L_29;
	}

IL_0154:
	{
		t2* L_30 = V_2;
		t2* L_31 = V_0;
		t2* L_32 = m11500(NULL, L_30, L_31, (t2*) &_stringLiteral2730, (t2*) &_stringLiteral2731, &m11500_MI);
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
		return (t2*) &_stringLiteral2732;
	}

IL_0172:
	{
		t556 * L_34 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_34, (t2*) &_stringLiteral2733, &m2885_MI);
		il2cpp_codegen_raise_exception(L_34);
	}
}
extern "C" bool m11502 (t9 * __this , MethodInfo* method)
{
	{
		int32_t L_0 = m11495(NULL, &m11495_MI);
		return ((((int32_t)L_0) < ((int32_t)4))? 1 : 0);
	}
}
extern "C" t2* m11503 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m11503_ftn) ();
	static m11503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11503_ftn)il2cpp_codegen_resolve_icall ("System.Environment::internalGetHome()");
	return _il2cpp_icall_func();
}
#include "t1427.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1427_TI;
#include "t1427MD.h"

extern MethodInfo m11504_MI;


extern "C" void m11504 (t1427 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11505_MI;
extern "C" void m11505 (t9 * __this , MethodInfo* method)
{
	{
		t1427 * L_0 = (t1427 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1427_TI));
		m11504(L_0, &m11504_MI);
		((t1427_SFs*)InitializedTypeInfo(&t1427_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t2110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2110_TI;
#include "t2110MD.h"



extern MethodInfo m11506_MI;
extern "C" void m11506 (t2110 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2734, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m11507_MI;
extern "C" void m11507 (t2110 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m11508_MI;
extern "C" void m11508 (t2110 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2111_TI;
#include "t2111MD.h"

#include "t2112MD.h"
extern MethodInfo m11547_MI;
extern MethodInfo m11548_MI;


extern MethodInfo m11509_MI;
extern "C" void m11509 (t2111 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2735, &m7818_MI);
		m11547(__this, L_0, &m11547_MI);
		m4433(__this, ((int32_t)-2146233081), &m4433_MI);
		return;
	}
}
extern MethodInfo m11510_MI;
extern "C" void m11510 (t2111 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11547(__this, L_0, &m11547_MI);
		m4433(__this, ((int32_t)-2146233081), &m4433_MI);
		return;
	}
}
extern MethodInfo m11511_MI;
extern "C" void m11511 (t2111 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11548(__this, L_0, L_1, &m11548_MI);
		return;
	}
}
#include "t608.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t608_TI;
#include "t608MD.h"

#include "t718MD.h"
extern MethodInfo m4240_MI;


extern MethodInfo m2967_MI;
extern "C" void m2967 (t608 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11512_MI;
extern "C" void m11512 (t883 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2736, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233033), &m4433_MI);
		return;
	}
}
extern "C" void m4288 (t883 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233033), &m4433_MI);
		return;
	}
}
extern MethodInfo m5963_MI;
extern "C" void m5963 (t883 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t1517.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1517_TI;



extern "C" void m6867 (t9 * __this , t9 * p0, MethodInfo* method)
{
	typedef void (*m6867_ftn) (t9 *);
	static m6867_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m6867_ftn)il2cpp_codegen_resolve_icall ("System.GC::SuppressFinalize(System.Object)");
	_il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif

#include "t2188.h"
#include "t2189.h"
#include "t1404.h"
#include "t1987.h"
extern TypeInfo t2188_TI;
extern TypeInfo t2189_TI;
extern TypeInfo t1404_TI;
extern TypeInfo t1987_TI;
#include "t1646MD.h"
#include "t2188MD.h"
#include "t2189MD.h"
#include "t1404MD.h"
#include "t1987MD.h"
extern Il2CppType t2188_0_0_0;
extern Il2CppType t2189_0_0_0;
extern MethodInfo m11518_MI;
extern MethodInfo m8257_MI;
extern MethodInfo m8256_MI;
extern MethodInfo m11514_MI;
extern MethodInfo m12119_MI;
extern MethodInfo m12120_MI;
extern MethodInfo m590_MI;
extern MethodInfo m11516_MI;
extern MethodInfo m11517_MI;
extern MethodInfo m11522_MI;
extern MethodInfo m11519_MI;
extern MethodInfo m6859_MI;
extern MethodInfo m6860_MI;
extern MethodInfo m11513_MI;
extern MethodInfo m10480_MI;
extern MethodInfo m11525_MI;
extern MethodInfo m11528_MI;
extern MethodInfo m11529_MI;
extern MethodInfo m11530_MI;
extern MethodInfo m11531_MI;
extern MethodInfo m7345_MI;
extern MethodInfo m4384_MI;
extern Il2CppGenericMethod m12119_GM;
extern Il2CppGenericMethod m12120_GM;


extern "C" void m11513 (t911 * __this, t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11518(NULL, L_0, ((int32_t)16), &m11518_MI);
		t723* L_1 = p0;
		int32_t L_2 = m8257(NULL, L_1, 0, &m8257_MI);
		__this->f0 = L_2;
		t723* L_3 = p0;
		int16_t L_4 = m8256(NULL, L_3, 4, &m8256_MI);
		__this->f1 = L_4;
		t723* L_5 = p0;
		int16_t L_6 = m8256(NULL, L_5, 6, &m8256_MI);
		__this->f2 = L_6;
		t723* L_7 = p0;
		int32_t L_8 = 8;
		__this->f3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8));
		t723* L_9 = p0;
		int32_t L_10 = ((int32_t)9);
		__this->f4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		t723* L_11 = p0;
		int32_t L_12 = ((int32_t)10);
		__this->f5 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		t723* L_13 = p0;
		int32_t L_14 = ((int32_t)11);
		__this->f6 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14));
		t723* L_15 = p0;
		int32_t L_16 = ((int32_t)12);
		__this->f7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		t723* L_17 = p0;
		int32_t L_18 = ((int32_t)13);
		__this->f8 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_18));
		t723* L_19 = p0;
		int32_t L_20 = ((int32_t)14);
		__this->f9 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_20));
		t723* L_21 = p0;
		int32_t L_22 = ((int32_t)15);
		__this->f10 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_22));
		return;
	}
}
extern "C" void m11514 (t911 * __this, int32_t p0, int16_t p1, int16_t p2, uint8_t p3, uint8_t p4, uint8_t p5, uint8_t p6, uint8_t p7, uint8_t p8, uint8_t p9, uint8_t p10, MethodInfo* method)
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
extern MethodInfo m11515_MI;
extern TypeInfo* t2188_TI_var;
extern TypeInfo* t2189_TI_var;
extern MethodInfo* m12119_MI_var;
extern MethodInfo* m12120_MI_var;
extern "C" void m11515 (t9 * __this , MethodInfo* method)
{
	static bool m11515_init;
	if (!m11515_init)
	{
		t2188_TI_var = il2cpp_codegen_class_from_type(&t2188_0_0_0);
		t2189_TI_var = il2cpp_codegen_class_from_type(&t2189_0_0_0);
		m12119_MI_var = il2cpp_codegen_genericmethod_get_method(&m12119_GM);
		m12120_MI_var = il2cpp_codegen_genericmethod_get_method(&m12120_GM);
		m11515_init = true;
	}
	t2188 * V_0 = {0};
	t2189 * V_1 = {0};
	{
		t911  L_0 = {0};
		m11514(&L_0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &m11514_MI);
		((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f11 = L_0;
		t9 * L_1 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_1, &m336_MI);
		((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f12 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		bool L_2 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		t2188 * L_3 = (t2188 *)il2cpp_codegen_object_new (t2188_TI_var);
		m12119(L_3, m12119_MI_var);
		V_0 = L_3;
		t2189 * L_4 = (t2189 *)il2cpp_codegen_object_new (t2189_TI_var);
		m12120(L_4, m12120_MI_var);
		V_1 = L_4;
	}

IL_0032:
	{
		return;
	}
}
extern "C" void m11516 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2737, &m7818_MI);
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_2, L_1, &m339_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m11517 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2738, &m7818_MI);
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m590(NULL, L_2, L_5, &m590_MI);
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, L_6, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		return;
	}
}
extern "C" void m11518 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11516(NULL, (t9 *)(t9 *)L_0, &m11516_MI);
		t723* L_1 = p0;
		int32_t L_2 = p1;
		m11517(NULL, L_1, L_2, &m11517_MI);
		return;
	}
}
extern "C" int32_t m11519 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m11520_MI;
extern "C" int32_t m11520 (t911 * __this, t9 * p0, MethodInfo* method)
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t911_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2739, &m7818_MI);
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_3, (t2*) &_stringLiteral611, L_2, &m5691_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t9 * L_4 = p0;
		int32_t L_5 = m11522(__this, ((*(t911 *)((t911 *)UnBox (L_4, InitializedTypeInfo(&t911_TI))))), &m11522_MI);
		return L_5;
	}
}
extern MethodInfo m11521_MI;
extern "C" bool m11521 (t911 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t911_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t9 * L_1 = p0;
		int32_t L_2 = m11522(__this, ((*(t911 *)((t911 *)UnBox (L_1, InitializedTypeInfo(&t911_TI))))), &m11522_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return 0;
	}
}
extern "C" int32_t m11522 (t911 * __this, t911  p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_4 = m11519(NULL, L_2, L_3, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_9 = m11519(NULL, L_7, L_8, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_14 = m11519(NULL, L_12, L_13, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_19 = m11519(NULL, L_17, L_18, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_24 = m11519(NULL, L_22, L_23, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_29 = m11519(NULL, L_27, L_28, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_34 = m11519(NULL, L_32, L_33, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_39 = m11519(NULL, L_37, L_38, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_44 = m11519(NULL, L_42, L_43, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_49 = m11519(NULL, L_47, L_48, &m11519_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		int32_t L_54 = m11519(NULL, L_52, L_53, &m11519_MI);
		return L_54;
	}

IL_0176:
	{
		return 0;
	}
}
extern MethodInfo m11523_MI;
extern "C" bool m11523 (t911 * __this, t911  p0, MethodInfo* method)
{
	{
		t911  L_0 = p0;
		int32_t L_1 = m11522(__this, L_0, &m11522_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11524_MI;
extern "C" int32_t m11524 (t911 * __this, MethodInfo* method)
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
extern "C" uint16_t m11525 (t9 * __this , int32_t p0, MethodInfo* method)
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
extern TypeInfo* t723_TI_var;
extern "C" t911  m11526 (t9 * __this , MethodInfo* method)
{
	static bool m11526_init;
	if (!m11526_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m11526_init = true;
	}
	t723* V_0 = {0};
	t9 * V_1 = {0};
	t911  V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		t9 * L_0 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f12;
		V_1 = L_0;
		t9 * L_1 = V_1;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			t1404 * L_2 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f13;
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			t1404 * L_3 = m6859(NULL, &m6859_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f13 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			t1404 * L_4 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f13;
			t723* L_5 = V_0;
			VirtActionInvoker1< t723* >::Invoke(&m6860_MI, L_4, L_5);
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
		m1069(NULL, L_6, &m1069_MI);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0039:
	{
		t723* L_7 = V_0;
		m11513((&V_2), L_7, &m11513_MI);
		uint8_t L_8 = ((&V_2)->f3);
		(&V_2)->f3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		int16_t L_9 = ((&V_2)->f2);
		(&V_2)->f2 = (((int16_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_9))&(int64_t)(((int64_t)((int32_t)4095)))))|(int64_t)(((int64_t)((int32_t)16384)))))));
		t911  L_10 = V_2;
		return L_10;
	}
}
extern MethodInfo m11527_MI;
extern TypeInfo* t723_TI_var;
extern "C" t723* m11527 (t9 * __this , MethodInfo* method)
{
	static bool m11527_init;
	if (!m11527_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m11527_init = true;
	}
	t723* V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)16)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		t9 * L_0 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f12;
		V_1 = L_0;
		t9 * L_1 = V_1;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			t1404 * L_2 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f13;
			if (!L_2)
			{
				goto IL_0025;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			t1404 * L_3 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f13;
			((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f14 = L_3;
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			t1404 * L_4 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f14;
			if (L_4)
			{
				goto IL_0036;
			}
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1987_TI));
			t1987 * L_5 = (t1987 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1987_TI));
			m10480(L_5, &m10480_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f14 = L_5;
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
			t1404 * L_6 = ((t911_SFs*)InitializedTypeInfo(&t911_TI)->static_fields)->f14;
			t723* L_7 = V_0;
			VirtActionInvoker1< t723* >::Invoke(&m6860_MI, L_6, L_7);
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
		m1069(NULL, L_8, &m1069_MI);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004a:
	{
		t723* L_9 = V_0;
		t723* L_10 = V_0;
		int32_t L_11 = 8;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))&(int32_t)((int32_t)63)))|(int32_t)((int32_t)128)))));
		t723* L_12 = V_0;
		t723* L_13 = V_0;
		int32_t L_14 = 7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, 7)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_14))&(int32_t)((int32_t)15)))|(int32_t)((int32_t)64)))));
		t723* L_15 = V_0;
		return L_15;
	}
}
extern "C" void m11528 (t9 * __this , t315 * p0, int32_t p1, MethodInfo* method)
{
	{
		t315 * L_0 = p0;
		int32_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		uint16_t L_2 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)28)))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_0, L_2, &m2733_MI);
		t315 * L_3 = p0;
		int32_t L_4 = p1;
		uint16_t L_5 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_3, L_5, &m2733_MI);
		t315 * L_6 = p0;
		int32_t L_7 = p1;
		uint16_t L_8 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)20)))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_6, L_8, &m2733_MI);
		t315 * L_9 = p0;
		int32_t L_10 = p1;
		uint16_t L_11 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_9, L_11, &m2733_MI);
		t315 * L_12 = p0;
		int32_t L_13 = p1;
		uint16_t L_14 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_13>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_12, L_14, &m2733_MI);
		t315 * L_15 = p0;
		int32_t L_16 = p1;
		uint16_t L_17 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_16>>(int32_t)8))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_15, L_17, &m2733_MI);
		t315 * L_18 = p0;
		int32_t L_19 = p1;
		uint16_t L_20 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_19>>(int32_t)4))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_18, L_20, &m2733_MI);
		t315 * L_21 = p0;
		int32_t L_22 = p1;
		uint16_t L_23 = m11525(NULL, ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_21, L_23, &m2733_MI);
		return;
	}
}
extern "C" void m11529 (t9 * __this , t315 * p0, int16_t p1, MethodInfo* method)
{
	{
		t315 * L_0 = p0;
		int16_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		uint16_t L_2 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_0, L_2, &m2733_MI);
		t315 * L_3 = p0;
		int16_t L_4 = p1;
		uint16_t L_5 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)8))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_3, L_5, &m2733_MI);
		t315 * L_6 = p0;
		int16_t L_7 = p1;
		uint16_t L_8 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)4))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_6, L_8, &m2733_MI);
		t315 * L_9 = p0;
		int16_t L_10 = p1;
		uint16_t L_11 = m11525(NULL, ((int32_t)((int32_t)L_10&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_9, L_11, &m2733_MI);
		return;
	}
}
extern "C" void m11530 (t9 * __this , t315 * p0, uint8_t p1, MethodInfo* method)
{
	{
		t315 * L_0 = p0;
		uint8_t L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		uint16_t L_2 = m11525(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)4))&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_0, L_2, &m2733_MI);
		t315 * L_3 = p0;
		uint8_t L_4 = p1;
		uint16_t L_5 = m11525(NULL, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)15))), &m11525_MI);
		m2733(L_3, L_5, &m2733_MI);
		return;
	}
}
extern "C" t2* m11531 (t911 * __this, bool p0, bool p1, bool p2, MethodInfo* method)
{
	t315 * V_0 = {0};
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_0, ((int32_t)40), &m4330_MI);
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t315 * L_2 = V_0;
		m2733(L_2, ((int32_t)40), &m2733_MI);
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
		t315 * L_4 = V_0;
		m2733(L_4, ((int32_t)123), &m2733_MI);
	}

IL_0022:
	{
		t315 * L_5 = V_0;
		int32_t L_6 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11528(NULL, L_5, L_6, &m11528_MI);
		bool L_7 = p0;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		t315 * L_8 = V_0;
		m2733(L_8, ((int32_t)45), &m2733_MI);
	}

IL_003a:
	{
		t315 * L_9 = V_0;
		int16_t L_10 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11529(NULL, L_9, L_10, &m11529_MI);
		bool L_11 = p0;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		t315 * L_12 = V_0;
		m2733(L_12, ((int32_t)45), &m2733_MI);
	}

IL_0052:
	{
		t315 * L_13 = V_0;
		int16_t L_14 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11529(NULL, L_13, L_14, &m11529_MI);
		bool L_15 = p0;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		t315 * L_16 = V_0;
		m2733(L_16, ((int32_t)45), &m2733_MI);
	}

IL_006a:
	{
		t315 * L_17 = V_0;
		uint8_t L_18 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11530(NULL, L_17, L_18, &m11530_MI);
		t315 * L_19 = V_0;
		uint8_t L_20 = (__this->f4);
		m11530(NULL, L_19, L_20, &m11530_MI);
		bool L_21 = p0;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		t315 * L_22 = V_0;
		m2733(L_22, ((int32_t)45), &m2733_MI);
	}

IL_008e:
	{
		t315 * L_23 = V_0;
		uint8_t L_24 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t911_TI));
		m11530(NULL, L_23, L_24, &m11530_MI);
		t315 * L_25 = V_0;
		uint8_t L_26 = (__this->f6);
		m11530(NULL, L_25, L_26, &m11530_MI);
		t315 * L_27 = V_0;
		uint8_t L_28 = (__this->f7);
		m11530(NULL, L_27, L_28, &m11530_MI);
		t315 * L_29 = V_0;
		uint8_t L_30 = (__this->f8);
		m11530(NULL, L_29, L_30, &m11530_MI);
		t315 * L_31 = V_0;
		uint8_t L_32 = (__this->f9);
		m11530(NULL, L_31, L_32, &m11530_MI);
		t315 * L_33 = V_0;
		uint8_t L_34 = (__this->f10);
		m11530(NULL, L_33, L_34, &m11530_MI);
		bool L_35 = p1;
		if (!L_35)
		{
			goto IL_00e4;
		}
	}
	{
		t315 * L_36 = V_0;
		m2733(L_36, ((int32_t)41), &m2733_MI);
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
		t315 * L_38 = V_0;
		m2733(L_38, ((int32_t)125), &m2733_MI);
	}

IL_00f0:
	{
		t315 * L_39 = V_0;
		t2* L_40 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_39);
		return L_40;
	}
}
extern "C" t2* m11532 (t911 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11531(__this, 1, 0, 0, &m11531_MI);
		return L_0;
	}
}
extern "C" t2* m4384 (t911 * __this, t2* p0, MethodInfo* method)
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
		t2* L_2 = m7345(L_1, &m7345_MI);
		V_3 = L_2;
		t2* L_3 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_3, (t2*) &_stringLiteral2740, &m331_MI);
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
		bool L_6 = m331(NULL, L_5, (t2*) &_stringLiteral2741, &m331_MI);
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
		bool L_8 = m331(NULL, L_7, (t2*) &_stringLiteral2742, &m331_MI);
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
		bool L_10 = m2713(NULL, L_9, (t2*) &_stringLiteral2743, &m2713_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_12 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_13 = m2713(NULL, L_11, L_12, &m2713_MI);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		t2* L_14 = m7818(NULL, (t2*) &_stringLiteral2744, &m7818_MI);
		t883 * L_15 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_15, L_14, &m4288_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006d:
	{
		bool L_16 = V_0;
		bool L_17 = V_1;
		bool L_18 = V_2;
		t2* L_19 = m11531(__this, L_16, L_17, L_18, &m11531_MI);
		return L_19;
	}
}
extern MethodInfo m11533_MI;
extern "C" t2* m11533 (t911 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4384(__this, L_0, &m4384_MI);
		return L_1;
	}
}
#include "t876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t876_TI;
#include "t876MD.h"



extern MethodInfo m11534_MI;
extern "C" void m11534 (t876 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2745, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m4227_MI;
extern "C" void m4227 (t876 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m11535_MI;
extern "C" void m11535 (t876 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m11536 (t2113 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2746, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467262), &m4433_MI);
		return;
	}
}
extern "C" void m11537 (t2113 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467262), &m4433_MI);
		return;
	}
}
extern MethodInfo m11538_MI;
extern "C" void m11538 (t2113 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m5692_MI;
extern "C" void m5692 (t1332 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2747, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233079), &m4433_MI);
		return;
	}
}
extern "C" void m5685 (t1332 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233079), &m4433_MI);
		return;
	}
}
extern MethodInfo m11539_MI;
extern "C" void m11539 (t1332 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m11781(__this, L_0, L_1, &m11781_MI);
		m4433(__this, ((int32_t)-2146233079), &m4433_MI);
		return;
	}
}
extern MethodInfo m11540_MI;
extern "C" void m11540 (t1332 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2086.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2086_TI;
#include "t2086MD.h"



#include "t160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t160_TI;

extern MethodInfo m4237_MI;
extern MethodInfo m11545_MI;
extern MethodInfo m7464_MI;
extern MethodInfo m7490_MI;
extern MethodInfo m7514_MI;
extern MethodInfo m7492_MI;
extern MethodInfo m7491_MI;
extern MethodInfo m7489_MI;


extern MethodInfo m4234_MI;
extern "C" float m4234 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" int32_t m11541 (t9 * __this , int32_t p0, MethodInfo* method)
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
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2748, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
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
extern MethodInfo m11542_MI;
extern "C" int64_t m11542 (t9 * __this , int64_t p0, MethodInfo* method)
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
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2748, &m7818_MI);
		t2130 * L_2 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_2, L_1, &m11754_MI);
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
extern MethodInfo m4239_MI;
extern "C" double m4239 (t9 * __this , double p0, MethodInfo* method)
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
extern "C" double m4237 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4237_ftn) (double);
	static m4237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4237_ftn)il2cpp_codegen_resolve_icall ("System.Math::Floor(System.Double)");
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		double L_9 = m11130(NULL, ((int64_t)std::numeric_limits<int64_t>::min()), &m11130_MI);
		G_B7_0 = L_9;
	}

IL_0056:
	{
		return G_B7_0;
	}
}
extern MethodInfo m4236_MI;
extern "C" double m4236 (t9 * __this , double p0, double p1, MethodInfo* method)
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
extern MethodInfo m6875_MI;
extern "C" int32_t m6875 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m11543_MI;
extern "C" int32_t m11543 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern "C" t897  m11544 (t9 * __this , t897  p0, MethodInfo* method)
{
	t897  V_0 = {0};
	t897  V_1 = {0};
	{
		t897  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_1 = m7464(NULL, L_0, &m7464_MI);
		V_0 = L_1;
		t897  L_2 = p0;
		t897  L_3 = V_0;
		t897  L_4 = m7490(NULL, L_2, L_3, &m7490_MI);
		V_1 = L_4;
		t897  L_5 = V_1;
		t897  L_6 = {0};
		m7432(&L_6, 5, 0, 0, 0, 1, &m7432_MI);
		bool L_7 = m7514(NULL, L_5, L_6, &m7514_MI);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		t897  L_8 = {0};
		m7432(&L_8, ((int32_t)20), 0, 0, 0, 1, &m7432_MI);
		t897  L_9 = V_0;
		t897  L_10 = {0};
		m7432(&L_10, ((int32_t)20), 0, 0, 0, 1, &m7432_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_11 = m7492(NULL, L_9, L_10, &m7492_MI);
		t897  L_12 = V_0;
		t897  L_13 = {0};
		m7432(&L_13, ((int32_t)20), 0, 0, 0, 1, &m7432_MI);
		t897  L_14 = m7492(NULL, L_12, L_13, &m7492_MI);
		t897  L_15 = m7464(NULL, L_14, &m7464_MI);
		t897  L_16 = m7490(NULL, L_11, L_15, &m7490_MI);
		t897  L_17 = m7491(NULL, L_8, L_16, &m7491_MI);
		t897  L_18 = {0};
		m7433(&L_18, 0, &m7433_MI);
		bool L_19 = m7513(NULL, L_17, L_18, &m7513_MI);
		if (L_19)
		{
			goto IL_007c;
		}
	}

IL_006a:
	{
		t897  L_20 = V_1;
		t897  L_21 = {0};
		m7432(&L_21, 5, 0, 0, 0, 1, &m7432_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		bool L_22 = m7515(NULL, L_20, L_21, &m7515_MI);
		if (!L_22)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		t897  L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t897  L_24 = m7489(NULL, L_23, &m7489_MI);
		V_0 = L_24;
	}

IL_0083:
	{
		t897  L_25 = V_0;
		return L_25;
	}
}
extern "C" double m4238 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4238_ftn) (double);
	static m4238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4238_ftn)il2cpp_codegen_resolve_icall ("System.Math::Round(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4230_MI;
extern "C" double m4230 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4230_ftn) (double);
	static m4230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4230_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sin(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4231_MI;
extern "C" double m4231 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4231_ftn) (double);
	static m4231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4231_ftn)il2cpp_codegen_resolve_icall ("System.Math::Cos(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m4232_MI;
extern "C" double m4232 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	typedef double (*m4232_ftn) (double, double);
	static m4232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4232_ftn)il2cpp_codegen_resolve_icall ("System.Math::Atan2(System.Double,System.Double)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" double m11545 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m11545_ftn) (double);
	static m11545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11545_ftn)il2cpp_codegen_resolve_icall ("System.Math::Log(System.Double)");
	return _il2cpp_icall_func(p0);
}
extern "C" double m4235 (t9 * __this , double p0, double p1, MethodInfo* method)
{
	typedef double (*m4235_ftn) (double, double);
	static m4235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4235_ftn)il2cpp_codegen_resolve_icall ("System.Math::Pow(System.Double,System.Double)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m4233_MI;
extern "C" double m4233 (t9 * __this , double p0, MethodInfo* method)
{
	typedef double (*m4233_ftn) (double);
	static m4233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m4233_ftn)il2cpp_codegen_resolve_icall ("System.Math::Sqrt(System.Double)");
	return _il2cpp_icall_func(p0);
}
#include "t2112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2112_TI;



extern MethodInfo m11546_MI;
extern "C" void m11546 (t2112 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2749, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233062), &m4433_MI);
		return;
	}
}
extern "C" void m11547 (t2112 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233062), &m4433_MI);
		return;
	}
}
extern "C" void m11548 (t2112 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2114_TI;
#include "t2114MD.h"



extern MethodInfo m11549_MI;
extern "C" void m11549 (t2114 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2750, &m7818_MI);
		m11547(__this, L_0, &m11547_MI);
		m4433(__this, ((int32_t)-2146233072), &m4433_MI);
		return;
	}
}
extern MethodInfo m11550_MI;
extern "C" void m11550 (t2114 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11548(__this, L_0, L_1, &m11548_MI);
		return;
	}
}
#include "t2115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2115_TI;
#include "t2115MD.h"

#include "t2116.h"
extern TypeInfo t2116_TI;
#include "t2116MD.h"
extern MethodInfo m11560_MI;
extern MethodInfo m11556_MI;
extern MethodInfo m11557_MI;


extern MethodInfo m11551_MI;
extern "C" void m11551 (t2115 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2752, &m7818_MI);
		m11556(__this, L_0, &m11556_MI);
		m4433(__this, ((int32_t)-2146233071), &m4433_MI);
		return;
	}
}
extern MethodInfo m11552_MI;
extern "C" void m11552 (t2115 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11556(__this, L_0, &m11556_MI);
		m4433(__this, ((int32_t)-2146233071), &m4433_MI);
		return;
	}
}
extern MethodInfo m11553_MI;
extern "C" void m11553 (t2115 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11557(__this, L_0, L_1, &m11557_MI);
		return;
	}
}
extern MethodInfo m11554_MI;
extern "C" t2* m11554 (t2115 * __this, MethodInfo* method)
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
		t2* L_1 = m11560(__this, &m11560_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2751, &m7818_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1190(NULL, L_3, L_4, L_5, &m1190_MI);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11555_MI;
extern "C" void m11555 (t2116 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2754, &m7818_MI);
		m11547(__this, L_0, &m11547_MI);
		m4433(__this, ((int32_t)-2146233070), &m4433_MI);
		return;
	}
}
extern "C" void m11556 (t2116 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11547(__this, L_0, &m11547_MI);
		m4433(__this, ((int32_t)-2146233070), &m4433_MI);
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m11557 (t2116 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	static bool m11557_init;
	if (!m11557_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m11557_init = true;
	}
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11548(__this, L_0, L_1, &m11548_MI);
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral2755, &m5712_MI);
		__this->f11 = L_3;
		t1093 * L_4 = p0;
		t2* L_5 = m5712(L_4, (t2*) &_stringLiteral2756, &m5712_MI);
		__this->f12 = L_5;
		t1093 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		t9 * L_8 = m5703(L_6, (t2*) &_stringLiteral2757, L_7, &m5703_MI);
		__this->f13 = ((t723*)Castclass(L_8, t723_TI_var));
		return;
	}
}
extern MethodInfo m11558_MI;
extern "C" void m11558 (t2116 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		m11546(__this, &m11546_MI);
		t2* L_0 = p0;
		__this->f11 = L_0;
		t2* L_1 = p1;
		__this->f12 = L_1;
		m4433(__this, ((int32_t)-2146233070), &m4433_MI);
		return;
	}
}
extern MethodInfo m11559_MI;
extern "C" void m11559 (t2116 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m4473(__this, L_0, L_1, &m4473_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5715(L_2, (t2*) &_stringLiteral2755, L_3, &m5715_MI);
		t1093 * L_4 = p0;
		t2* L_5 = (__this->f12);
		m5715(L_4, (t2*) &_stringLiteral2756, L_5, &m5715_MI);
		t1093 * L_6 = p0;
		t723* L_7 = (__this->f13);
		m5715(L_6, (t2*) &_stringLiteral2757, (t9 *)(t9 *)L_7, &m5715_MI);
		return;
	}
}
extern "C" t2* m11560 (t2116 * __this, MethodInfo* method)
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
		t2* L_1 = m1083(__this, &m1083_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2753, &m7818_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1190(NULL, L_3, L_4, L_5, &m1190_MI);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11561_MI;
extern "C" void m11561 (t2117 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2759, &m7818_MI);
		m11556(__this, L_0, &m11556_MI);
		m4433(__this, ((int32_t)-2146233069), &m4433_MI);
		return;
	}
}
extern "C" void m11562 (t2117 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m11556(__this, L_0, &m11556_MI);
		m4433(__this, ((int32_t)-2146233069), &m4433_MI);
		return;
	}
}
extern MethodInfo m11563_MI;
extern "C" void m11563 (t2117 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11557(__this, L_0, L_1, &m11557_MI);
		return;
	}
}
extern "C" void m11564 (t2117 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		m11558(__this, L_0, L_1, &m11558_MI);
		m4433(__this, ((int32_t)-2146233069), &m4433_MI);
		return;
	}
}
extern MethodInfo m11565_MI;
extern "C" t2* m11565 (t2117 * __this, MethodInfo* method)
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
		t2* L_1 = m11560(__this, &m11560_MI);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2758, &m7818_MI);
		V_0 = L_2;
		t2* L_3 = V_0;
		t2* L_4 = (__this->f11);
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m1190(NULL, L_3, L_4, L_5, &m1190_MI);
		return L_6;
	}
}
#include "t2118.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2118_TI;
#include "t2118MD.h"



extern MethodInfo m11566_MI;
extern "C" void m11566 (t2118 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t2119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2119_TI;
#include "t2119MD.h"

#include "t1017.h"


extern MethodInfo m11567_MI;
extern "C" void m11567 (t2119 * __this, t1017 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1017 * L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m11568_MI;
extern "C" t1017 * m11568 (t2119 * __this, MethodInfo* method)
{
	{
		t1017 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11569_MI;
extern "C" int32_t m11569 (t2119 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#include "t2120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2120_TI;
#include "t2120MD.h"

#include "t1745.h"
#include "t1752.h"
#include "t823.h"
#include "t917.h"
#include "t718.h"
#include "t1789.h"
#include "t1161.h"
#include "t830.h"
#include "t1811.h"
extern TypeInfo t1017_TI;
extern TypeInfo t1745_TI;
extern TypeInfo t1752_TI;
extern TypeInfo t823_TI;
extern TypeInfo t917_TI;
extern TypeInfo t2121_TI;
extern TypeInfo t1789_TI;
extern TypeInfo t718_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t121_TI;
extern TypeInfo t830_TI;
extern TypeInfo t821_TI;
extern TypeInfo t921_TI;
extern TypeInfo t1811_TI;
#include "t1017MD.h"
#include "t1752MD.h"
#include "t823MD.h"
#include "t917MD.h"
#include "t1789MD.h"
#include "t1161MD.h"
#include "t830MD.h"
#include "t821MD.h"
extern Il2CppType t1017_0_0_0;
extern Il2CppType t2120_0_0_0;
extern Il2CppType t718_0_0_0;
extern MethodInfo m4581_MI;
extern MethodInfo m9612_MI;
extern MethodInfo m9502_MI;
extern MethodInfo m9682_MI;
extern MethodInfo m7781_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m11571_MI;
extern MethodInfo m12121_MI;
extern MethodInfo m11572_MI;
extern MethodInfo m11573_MI;
extern MethodInfo m5912_MI;
extern MethodInfo m7682_MI;
extern MethodInfo m11576_MI;
extern MethodInfo m9417_MI;
extern MethodInfo m11574_MI;
extern MethodInfo m7667_MI;
extern MethodInfo m7731_MI;
extern MethodInfo m11582_MI;
extern MethodInfo m7077_MI;
extern MethodInfo m5853_MI;
extern MethodInfo m7076_MI;
extern MethodInfo m5709_MI;
extern MethodInfo m5708_MI;
extern MethodInfo m11581_MI;
extern MethodInfo m5694_MI;
extern MethodInfo m5849_MI;
extern MethodInfo m5718_MI;
extern MethodInfo m12122_MI;
extern MethodInfo m11579_MI;
extern MethodInfo m11578_MI;
extern MethodInfo m4403_MI;
extern MethodInfo m9517_MI;
extern MethodInfo m4404_MI;
extern MethodInfo m12123_MI;
extern MethodInfo m11993_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m4375_MI;
extern MethodInfo m7761_MI;
extern MethodInfo m7760_MI;
extern MethodInfo m4406_MI;
extern MethodInfo m11580_MI;


extern MethodInfo m11570_MI;
extern "C" void m11570 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1017_0_0_0), &m329_MI);
		((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f1 = L_0;
		t1017 * L_1 = (t1017 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1017_TI));
		m4581(L_1, ((int32_t)32767), &m4581_MI);
		((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f2 = L_1;
		return;
	}
}
extern "C" bool m11571 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t126 *)IsInst(L_0, InitializedTypeInfo(&t126_TI)));
		t126 * L_1 = V_0;
		if (((t2124 *)IsInst(L_1, InitializedTypeInfo(&t2124_TI))))
		{
			goto IL_0017;
		}
	}
	{
		t126 * L_2 = V_0;
		if (!((t1745 *)IsInst(L_2, InitializedTypeInfo(&t1745_TI))))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t1336 * L_4 = ((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t1336 * L_6 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f0 = L_6;
	}

IL_003e:
	{
		t9 * L_7 = p0;
		t126 * L_8 = m2486(L_7, &m2486_MI);
		t1336 * L_9 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t1336 * L_10 = ((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f0;
		return ((((int32_t)((((t9*)(t1336 *)L_9) == ((t9*)(t1336 *)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t158* m11572 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	typedef t158* (*m11572_ftn) (t9 *, t126 *, bool);
	static m11572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11572_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::GetCustomAttributesInternal(System.Reflection.ICustomAttributeProvider,System.Type,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11573 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	static bool m11573_init;
	if (!m11573_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11573_init = true;
	}
	t158* V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = (t158*)NULL;
		t9 * L_0 = p0;
		if (!((t1752 *)IsInst(L_0, InitializedTypeInfo(&t1752_TI))))
		{
			goto IL_0018;
		}
	}
	{
		t9 * L_1 = p0;
		t158* L_2 = m9612(((t1752 *)Castclass(L_1, InitializedTypeInfo(&t1752_TI))), &m9612_MI);
		V_0 = L_2;
		goto IL_0058;
	}

IL_0018:
	{
		t9 * L_3 = p0;
		if (!((t823 *)IsInst(L_3, InitializedTypeInfo(&t823_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t9 * L_4 = p0;
		t158* L_5 = m9502(((t823 *)Castclass(L_4, InitializedTypeInfo(&t823_TI))), &m9502_MI);
		V_0 = L_5;
		goto IL_0058;
	}

IL_002e:
	{
		t9 * L_6 = p0;
		if (!((t917 *)IsInst(L_6, InitializedTypeInfo(&t917_TI))))
		{
			goto IL_0044;
		}
	}
	{
		t9 * L_7 = p0;
		t158* L_8 = m9682(((t917 *)Castclass(L_7, InitializedTypeInfo(&t917_TI))), &m9682_MI);
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
		t158* L_11 = m7781(((t126 *)Castclass(L_10, InitializedTypeInfo(&t126_TI))), &m7781_MI);
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
		t126 * L_18 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_15, L_17)), &m2486_MI);
		bool L_19 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_14, L_18);
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
extern "C" t158* m11574 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	static bool m11574_init;
	if (!m11574_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11574_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	t158* V_2 = {0};
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_1 = m11571(NULL, L_0, &m11571_MI);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t9 * L_2 = p0;
		t126 * L_3 = p1;
		t158* L_4 = (t158*)InterfaceFuncInvoker2< t158*, t126 *, bool >::Invoke(&m12121_MI, L_2, L_3, 1);
		V_0 = L_4;
		goto IL_001c;
	}

IL_0013:
	{
		t9 * L_5 = p0;
		t126 * L_6 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_7 = m11572(NULL, L_5, L_6, 0, &m11572_MI);
		V_0 = L_7;
	}

IL_001c:
	{
		t9 * L_8 = p0;
		t126 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_10 = m11573(NULL, L_8, L_9, &m11573_MI);
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
		m5912(NULL, (t121 *)(t121 *)L_14, (t121 *)(t121 *)L_15, (((int32_t)(((t121 *)L_16)->max_length))), &m5912_MI);
		t158* L_17 = V_1;
		t158* L_18 = V_2;
		t158* L_19 = V_0;
		t158* L_20 = V_1;
		m7682(NULL, (t121 *)(t121 *)L_17, 0, (t121 *)(t121 *)L_18, (((int32_t)(((t121 *)L_19)->max_length))), (((int32_t)(((t121 *)L_20)->max_length))), &m7682_MI);
		t158* L_21 = V_2;
		return L_21;
	}

IL_004e:
	{
		t158* L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m11575_MI;
extern "C" t718 * m11575 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	t158* V_0 = {0};
	t2* V_1 = {0};
	{
		t9 * L_0 = p0;
		t126 * L_1 = p1;
		bool L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_3 = m11576(NULL, L_0, L_1, L_2, &m11576_MI);
		V_0 = L_3;
		t158* L_4 = V_0;
		if ((((int32_t)(((t121 *)L_4)->max_length))))
		{
			goto IL_0010;
		}
	}
	{
		return (t718 *)NULL;
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
		V_1 = (t2*) &_stringLiteral2760;
		t2* L_6 = V_1;
		t9 * L_7 = p0;
		t126 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m1190(NULL, L_6, L_7, L_8, &m1190_MI);
		V_1 = L_9;
		t2* L_10 = V_1;
		t1789 * L_11 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9417(L_11, L_10, &m9417_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_002c:
	{
		t158* L_12 = V_0;
		int32_t L_13 = 0;
		return ((t718 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_12, L_13)), InitializedTypeInfo(&t718_TI)));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m11576 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
{
	static bool m11576_init;
	if (!m11576_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11576_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	t1017 * V_2 = {0};
	int32_t V_3 = 0;
	t1149 * V_4 = {0};
	t1161 * V_5 = {0};
	t9 * V_6 = {0};
	int32_t V_7 = 0;
	t9 * V_8 = {0};
	t158* V_9 = {0};
	int32_t V_10 = 0;
	t1017 * V_11 = {0};
	t126 * V_12 = {0};
	t2119 * V_13 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1412, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1076, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t126 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2120_0_0_0), &m329_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_8 = m11574(NULL, L_6, L_7, &m11574_MI);
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
		t126 * L_15 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_13, L_14)), &m2486_MI);
		bool L_16 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_12, L_15);
		if (!L_16)
		{
			goto IL_0067;
		}
	}
	{
		t126 * L_17 = p1;
		t121 * L_18 = m7667(NULL, L_17, 1, &m7667_MI);
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
		t121 * L_23 = m7667(NULL, L_22, 0, &m7667_MI);
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
		t126 * L_26 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_24, L_25)), &m2486_MI);
		t121 * L_27 = m7667(NULL, L_26, 1, &m7667_MI);
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
		bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7731_MI, L_33);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t1017 * L_37 = m11582(NULL, L_36, &m11582_MI);
		V_2 = L_37;
		t1017 * L_38 = V_2;
		bool L_39 = m7077(L_38, &m7077_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_43 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5890(L_43, L_42, &m5890_MI);
		V_4 = L_43;
		int32_t L_44 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_45 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5853(L_45, L_44, &m5853_MI);
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
		t126 * L_52 = m2486(L_51, &m2486_MI);
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
		bool L_56 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_54, L_55);
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
		t1149 * L_57 = V_4;
		t126 * L_58 = V_12;
		t9 * L_59 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_57, L_58);
		V_13 = ((t2119 *)Castclass(L_59, InitializedTypeInfo(&t2119_TI)));
		t2119 * L_60 = V_13;
		if (!L_60)
		{
			goto IL_0125;
		}
	}
	{
		t2119 * L_61 = V_13;
		t1017 * L_62 = m11568(L_61, &m11568_MI);
		V_11 = L_62;
		goto IL_012e;
	}

IL_0125:
	{
		t126 * L_63 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t1017 * L_64 = m11582(NULL, L_63, &m11582_MI);
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
		t1017 * L_66 = V_11;
		bool L_67 = m7077(L_66, &m7077_MI);
		if (!L_67)
		{
			goto IL_0161;
		}
	}

IL_013b:
	{
		t1017 * L_68 = V_11;
		bool L_69 = m7076(L_68, &m7076_MI);
		if (L_69)
		{
			goto IL_0157;
		}
	}
	{
		t2119 * L_70 = V_13;
		if (!L_70)
		{
			goto IL_0157;
		}
	}
	{
		t2119 * L_71 = V_13;
		if (!L_71)
		{
			goto IL_0161;
		}
	}
	{
		t2119 * L_72 = V_13;
		int32_t L_73 = m11569(L_72, &m11569_MI);
		int32_t L_74 = V_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)L_74))))
		{
			goto IL_0161;
		}
	}

IL_0157:
	{
		t1161 * L_75 = V_5;
		t9 * L_76 = V_8;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_75, L_76);
	}

IL_0161:
	{
		t2119 * L_77 = V_13;
		if (L_77)
		{
			goto IL_0177;
		}
	}
	{
		t1149 * L_78 = V_4;
		t126 * L_79 = V_12;
		t1017 * L_80 = V_11;
		int32_t L_81 = V_7;
		t2119 * L_82 = (t2119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2119_TI));
		m11567(L_82, L_80, L_81, &m11567_MI);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5708_MI, L_78, L_79, L_82);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t9 * L_87 = m11581(NULL, L_86, &m11581_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_92 = m11574(NULL, L_90, L_91, &m11574_MI);
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
		bool L_97 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_96);
		if (!L_97)
		{
			goto IL_01da;
		}
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_98 = m329(NULL, LoadTypeToken(&t718_0_0_0), &m329_MI);
		t1161 * L_99 = V_5;
		int32_t L_100 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_99);
		t121 * L_101 = m7667(NULL, L_98, L_100, &m7667_MI);
		V_14 = ((t158*)Castclass(L_101, t158_TI_var));
		goto IL_01ee;
	}

IL_01da:
	{
		t126 * L_102 = p1;
		t1161 * L_103 = V_5;
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_103);
		t121 * L_105 = m7667(NULL, L_102, L_104, &m7667_MI);
		V_14 = ((t158*)IsInst(L_105, t158_TI_var));
	}

IL_01ee:
	{
		t1161 * L_106 = V_5;
		t158* L_107 = V_14;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5849_MI, L_106, (t121 *)(t121 *)L_107, 0);
		t158* L_108 = V_14;
		return L_108;
	}
}
extern MethodInfo m11577_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m11577 (t9 * __this , t9 * p0, bool p1, MethodInfo* method)
{
	static bool m11577_init;
	if (!m11577_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11577_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1412, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_4 = m11574(NULL, L_3, (t126 *)NULL, &m11574_MI);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_4);
		return ((t158*)Castclass(L_5, t158_TI_var));
	}

IL_0023:
	{
		t9 * L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_7 = m329(NULL, LoadTypeToken(&t2120_0_0_0), &m329_MI);
		bool L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_9 = m11576(NULL, L_6, L_7, L_8, &m11576_MI);
		return L_9;
	}
}
extern "C" bool m11578 (t9 * __this , t9 * p0, t126 * p1, bool p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1076, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_3 = m11571(NULL, L_2, &m11571_MI);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t9 * L_4 = p0;
		t126 * L_5 = p1;
		bool L_6 = p2;
		bool L_7 = (bool)InterfaceFuncInvoker2< bool, t126 *, bool >::Invoke(&m12122_MI, L_4, L_5, L_6);
		return L_7;
	}

IL_001f:
	{
		t9 * L_8 = p0;
		t126 * L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_10 = m11579(NULL, L_8, L_9, &m11579_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_13 = m11573(NULL, L_11, L_12, &m11573_MI);
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
		t126 * L_19 = m2486((*(t9 **)(t9 **)SZArrayLdElema(L_16, L_18)), &m2486_MI);
		bool L_20 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_15, L_19);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t9 * L_26 = m11581(NULL, L_25, &m11581_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_31 = m11578(NULL, L_28, L_29, L_30, &m11578_MI);
		return L_31;
	}

IL_006b:
	{
		return 0;
	}
}
extern "C" bool m11579 (t9 * __this , t9 * p0, t126 * p1, MethodInfo* method)
{
	typedef bool (*m11579_ftn) (t9 *, t126 *);
	static m11579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11579_ftn)il2cpp_codegen_resolve_icall ("System.MonoCustomAttrs::IsDefinedInternal(System.Reflection.ICustomAttributeProvider,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
extern TypeInfo* t152_TI_var;
extern "C" t830 * m11580 (t9 * __this , t830 * p0, MethodInfo* method)
{
	static bool m11580_init;
	if (!m11580_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m11580_init = true;
	}
	t821 * V_0 = {0};
	t821 * V_1 = {0};
	t921* V_2 = {0};
	t152* V_3 = {0};
	int32_t V_4 = 0;
	{
		t830 * L_0 = p0;
		t821 * L_1 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4403_MI, L_0, 1);
		V_0 = L_1;
		t821 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		t821 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9517_MI, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0013:
	{
		t830 * L_5 = p0;
		t821 * L_6 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4404_MI, L_5, 1);
		V_0 = L_6;
	}

IL_001b:
	{
		t821 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		t821 * L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9517_MI, L_8);
		if (L_9)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (t830 *)NULL;
	}

IL_0028:
	{
		t821 * L_10 = V_0;
		t821 * L_11 = (t821 *)VirtFuncInvoker0< t821 * >::Invoke(&m12123_MI, L_10);
		V_1 = L_11;
		t821 * L_12 = V_1;
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		t821 * L_13 = V_1;
		t821 * L_14 = V_0;
		if ((((t9*)(t821 *)L_13) == ((t9*)(t821 *)L_14)))
		{
			goto IL_009f;
		}
	}
	{
		t830 * L_15 = p0;
		t921* L_16 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m11993_MI, L_15);
		V_2 = L_16;
		t921* L_17 = V_2;
		if (!L_17)
		{
			goto IL_0087;
		}
	}
	{
		t921* L_18 = V_2;
		if ((((int32_t)(((int32_t)(((t121 *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		t921* L_19 = V_2;
		V_3 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_19)->max_length)))));
		V_4 = 0;
		goto IL_0067;
	}

IL_0054:
	{
		t152* L_20 = V_3;
		int32_t L_21 = V_4;
		t921* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = L_23;
		t126 * L_25 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_22, L_24)));
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
		t821 * L_29 = V_1;
		t126 * L_30 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_29);
		t830 * L_31 = p0;
		t2* L_32 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_31);
		t830 * L_33 = p0;
		t126 * L_34 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4375_MI, L_33);
		t152* L_35 = V_3;
		t830 * L_36 = (t830 *)VirtFuncInvoker3< t830 *, t2*, t126 *, t152* >::Invoke(&m7761_MI, L_30, L_32, L_34, L_35);
		return L_36;
	}

IL_0087:
	{
		t821 * L_37 = V_1;
		t126 * L_38 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_37);
		t830 * L_39 = p0;
		t2* L_40 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_39);
		t830 * L_41 = p0;
		t126 * L_42 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4375_MI, L_41);
		t830 * L_43 = (t830 *)VirtFuncInvoker2< t830 *, t2*, t126 * >::Invoke(&m7760_MI, L_38, L_40, L_42);
		return L_43;
	}

IL_009f:
	{
		return (t830 *)NULL;
	}
}
extern "C" t9 * m11581 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t821 * V_0 = {0};
	t821 * V_1 = {0};
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
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, ((t126 *)Castclass(L_2, InitializedTypeInfo(&t126_TI))));
		return L_3;
	}

IL_0019:
	{
		V_0 = (t821 *)NULL;
		t9 * L_4 = p0;
		if (!((t1811 *)IsInst(L_4, InitializedTypeInfo(&t1811_TI))))
		{
			goto IL_002f;
		}
	}
	{
		t9 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t830 * L_6 = m11580(NULL, ((t1811 *)Castclass(L_5, InitializedTypeInfo(&t1811_TI))), &m11580_MI);
		return L_6;
	}

IL_002f:
	{
		t9 * L_7 = p0;
		if (!((t1752 *)IsInst(L_7, InitializedTypeInfo(&t1752_TI))))
		{
			goto IL_003e;
		}
	}
	{
		t9 * L_8 = p0;
		V_0 = ((t821 *)Castclass(L_8, InitializedTypeInfo(&t821_TI)));
	}

IL_003e:
	{
		t821 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		t821 * L_10 = V_0;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9517_MI, L_10);
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
		t821 * L_12 = V_0;
		t821 * L_13 = (t821 *)VirtFuncInvoker0< t821 * >::Invoke(&m12123_MI, L_12);
		V_1 = L_13;
		t821 * L_14 = V_1;
		t821 * L_15 = V_0;
		if ((!(((t9*)(t821 *)L_14) == ((t9*)(t821 *)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		return (t9 *)NULL;
	}

IL_0058:
	{
		t821 * L_16 = V_1;
		return L_16;
	}
}
extern "C" t1017 * m11582 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t1017 * V_0 = {0};
	t158* V_1 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1017_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		t1017 * L_2 = (t1017 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1017_TI));
		m4581(L_2, 4, &m4581_MI);
		return L_2;
	}

IL_0014:
	{
		V_0 = (t1017 *)NULL;
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t126 * L_4 = ((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f1;
		t158* L_5 = m11576(NULL, L_3, L_4, 0, &m11576_MI);
		V_1 = L_5;
		t158* L_6 = V_1;
		if ((((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0047;
		}
	}
	{
		t126 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		t126 * L_9 = p0;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t1017 * L_11 = m11582(NULL, L_10, &m11582_MI);
		V_0 = L_11;
	}

IL_003c:
	{
		t1017 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0041;
		}
	}
	{
		t1017 * L_13 = V_0;
		return L_13;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t1017 * L_14 = ((t2120_SFs*)InitializedTypeInfo(&t2120_TI)->static_fields)->f2;
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
		t883 * L_16 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_16, (t2*) &_stringLiteral2761, &m4288_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0058:
	{
		t158* L_17 = V_1;
		int32_t L_18 = 0;
		return ((t1017 *)Castclass((*(t9 **)(t9 **)SZArrayLdElema(L_17, L_18)), InitializedTypeInfo(&t1017_TI)));
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11583_MI;
extern "C" void m11583 (t9 * __this , MethodInfo* method)
{
	{
		return;
	}
}
#include "t2123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2123_TI;
#include "t2123MD.h"



extern MethodInfo m11584_MI;
extern "C" void m11584 (t2123 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1563.h"
#include "t1559.h"
#include "t1562.h"
#include "t1560.h"
#include "t659.h"
#include "t1801.h"
#include "t1782.h"
extern TypeInfo t922_TI;
extern TypeInfo t659_TI;
extern TypeInfo t1801_TI;
extern TypeInfo t1782_TI;
#include "t659MD.h"
#include "t1801MD.h"
extern Il2CppType t1797_0_0_0;
extern Il2CppType t659_0_0_0;
extern Il2CppType t330_0_0_0;
extern MethodInfo m11614_MI;
extern MethodInfo m11624_MI;
extern MethodInfo m11632_MI;
extern MethodInfo m7777_MI;
extern MethodInfo m11630_MI;
extern MethodInfo m7721_MI;
extern MethodInfo m11610_MI;
extern MethodInfo m11585_MI;
extern MethodInfo m11590_MI;
extern MethodInfo m9516_MI;
extern MethodInfo m9416_MI;
extern MethodInfo m11634_MI;
extern MethodInfo m11589_MI;
extern MethodInfo m11591_MI;
extern MethodInfo m11594_MI;
extern MethodInfo m11597_MI;
extern MethodInfo m9482_MI;
extern MethodInfo m11600_MI;
extern MethodInfo m12124_MI;
extern MethodInfo m11604_MI;
extern MethodInfo m11605_MI;
extern MethodInfo m11606_MI;
extern MethodInfo m7764_MI;
extern MethodInfo m7749_MI;
extern MethodInfo m12125_MI;
extern MethodInfo m11616_MI;
extern MethodInfo m12126_MI;
extern MethodInfo m7040_MI;
extern MethodInfo m7037_MI;
extern MethodInfo m7805_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m9672_MI;
extern MethodInfo m7039_MI;
extern MethodInfo m11635_MI;
extern MethodInfo m11593_MI;
extern MethodInfo m4394_MI;
extern MethodInfo m4395_MI;
extern MethodInfo m11848_MI;
extern MethodInfo m7775_MI;
extern MethodInfo m11939_MI;
extern MethodInfo m5690_MI;


extern "C" int32_t m11585 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef int32_t (*m11585_ftn) (t126 *);
	static m11585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11585_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_attributes(System.Type)");
	return _il2cpp_icall_func(p0);
}
extern "C" t819 * m11586 (t2124 * __this, MethodInfo* method)
{
	t819 * V_0 = {0};
	int32_t V_1 = {0};
	t819 * V_2 = {0};
	{
		V_0 = (t819 *)NULL;
		t2123 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		t2123 * L_1 = (t2123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2123_TI));
		m11584(L_1, &m11584_MI);
		__this->f8 = L_1;
	}

IL_0015:
	{
		t2123 * L_2 = (__this->f8);
		t819 * L_3 = (L_2->f1);
		t819 * L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		t2123 * L_5 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_6 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		t819 * L_7 = (t819 *)VirtFuncInvoker5< t819 *, int32_t, t926 *, int32_t, t152*, t928* >::Invoke(&m7769_MI, __this, ((int32_t)52), (t926 *)NULL, 3, L_6, (t928*)(t928*)NULL);
		t819 * L_8 = L_7;
		V_2 = L_8;
		L_5->f1 = L_8;
		t819 * L_9 = V_2;
		V_0 = L_9;
	}

IL_0043:
	{
		t819 * L_10 = V_0;
		return L_10;
	}
}
extern MethodInfo m11587_MI;
extern "C" int32_t m11587 (t2124 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11585(NULL, __this, &m11585_MI);
		return L_0;
	}
}
extern MethodInfo m11588_MI;
extern TypeInfo* t1797_TI_var;
extern "C" t819 * m11588 (t2124 * __this, int32_t p0, t926 * p1, int32_t p2, t152* p3, t928* p4, MethodInfo* method)
{
	static bool m11588_init;
	if (!m11588_init)
	{
		t1797_TI_var = il2cpp_codegen_class_from_type(&t1797_0_0_0);
		m11588_init = true;
	}
	t919* V_0 = {0};
	t819 * V_1 = {0};
	t1797* V_2 = {0};
	int32_t V_3 = 0;
	t819 * V_4 = {0};
	t919* V_5 = {0};
	int32_t V_6 = 0;
	t819 * V_7 = {0};
	t919* V_8 = {0};
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
		t919* L_2 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m11590_MI, __this, L_1);
		V_0 = L_2;
		V_1 = (t819 *)NULL;
		V_3 = 0;
		t919* L_3 = V_0;
		V_5 = L_3;
		V_6 = 0;
		goto IL_0043;
	}

IL_001d:
	{
		t919* L_4 = V_5;
		int32_t L_5 = V_6;
		int32_t L_6 = L_5;
		V_4 = (*(t819 **)(t819 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = p2;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		t819 * L_8 = V_4;
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_8);
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
		t819 * L_12 = V_4;
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
		t919* L_16 = V_5;
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
		return (t819 *)NULL;
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
		t1789 * L_20 = (t1789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1789_TI));
		m9416(L_20, &m9416_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_005e:
	{
		t819 * L_21 = V_1;
		t907 * L_22 = m11634(__this, L_21, &m11634_MI);
		return ((t819 *)Castclass(L_22, InitializedTypeInfo(&t819_TI)));
	}

IL_006b:
	{
		int32_t L_23 = V_3;
		V_2 = ((t1797*)SZArrayNew(t1797_TI_var, L_23));
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		t1797* L_25 = V_2;
		t819 * L_26 = V_1;
		ArrayElementTypeCheck (L_25, L_26);
		*((t907 **)(t907 **)SZArrayLdElema(L_25, 0)) = (t907 *)L_26;
		goto IL_00b6;
	}

IL_007c:
	{
		V_3 = 0;
		t919* L_27 = V_0;
		V_8 = L_27;
		V_9 = 0;
		goto IL_00ae;
	}

IL_0086:
	{
		t919* L_28 = V_8;
		int32_t L_29 = V_9;
		int32_t L_30 = L_29;
		V_7 = (*(t819 **)(t819 **)SZArrayLdElema(L_28, L_30));
		int32_t L_31 = p2;
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_009f;
		}
	}
	{
		t819 * L_32 = V_7;
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_32);
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
		t1797* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		t819 * L_39 = V_7;
		ArrayElementTypeCheck (L_36, L_39);
		*((t907 **)(t907 **)SZArrayLdElema(L_36, L_38)) = (t907 *)L_39;
	}

IL_00a8:
	{
		int32_t L_40 = V_9;
		V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00ae:
	{
		int32_t L_41 = V_9;
		t919* L_42 = V_8;
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((t121 *)L_42)->max_length))))))
		{
			goto IL_0086;
		}
	}

IL_00b6:
	{
		t926 * L_43 = p1;
		if (L_43)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_44 = m9479(NULL, &m9479_MI);
		p1 = L_44;
	}

IL_00c2:
	{
		t926 * L_45 = p1;
		int32_t L_46 = p0;
		t1797* L_47 = V_2;
		t152* L_48 = p3;
		t928* L_49 = p4;
		t907 * L_50 = (t907 *)VirtFuncInvoker4< t907 *, int32_t, t1797*, t152*, t928* >::Invoke(&m11987_MI, L_45, L_46, L_47, L_48, L_49);
		t907 * L_51 = m11634(__this, L_50, &m11634_MI);
		return ((t819 *)Castclass(L_51, InitializedTypeInfo(&t819_TI)));
	}
}
extern "C" t919* m11589 (t2124 * __this, int32_t p0, t126 * p1, MethodInfo* method)
{
	typedef t919* (*m11589_ftn) (t2124 *, int32_t, t126 *);
	static m11589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11589_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t919* m11590 (t2124 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t919* L_1 = m11589(__this, L_0, __this, &m11589_MI);
		return L_1;
	}
}
extern "C" t1560 * m11591 (t2124 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	typedef t1560 * (*m11591_ftn) (t2124 *, t2*, int32_t);
	static m11591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11591_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11592_MI;
extern "C" t1560 * m11592 (t2124 * __this, t2* p0, int32_t p1, MethodInfo* method)
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
		t1560 * L_4 = m11591(__this, L_2, L_3, &m11591_MI);
		return L_4;
	}
}
extern "C" t823 * m11593 (t2124 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	typedef t823 * (*m11593_ftn) (t2124 *, t2*, int32_t);
	static m11593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11593_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetField(System.String,System.Reflection.BindingFlags)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t923* m11594 (t2124 * __this, int32_t p0, t126 * p1, MethodInfo* method)
{
	typedef t923* (*m11594_ftn) (t2124 *, int32_t, t126 *);
	static m11594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11594_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11595_MI;
extern "C" t923* m11595 (t2124 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t923* L_1 = m11594(__this, L_0, __this, &m11594_MI);
		return L_1;
	}
}
extern MethodInfo m11596_MI;
extern "C" t152* m11596 (t2124 * __this, MethodInfo* method)
{
	typedef t152* (*m11596_ftn) (t2124 *);
	static m11596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11596_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetInterfaces()");
	return _il2cpp_icall_func(__this);
}
extern "C" t1561* m11597 (t2124 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	typedef t1561* (*m11597_ftn) (t2124 *, t2*, int32_t, bool, t126 *);
	static m11597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11597_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern MethodInfo m11598_MI;
extern "C" t1561* m11598 (t2124 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t1561* L_1 = m11597(__this, (t2*)NULL, L_0, 0, __this, &m11597_MI);
		return L_1;
	}
}
extern MethodInfo m11599_MI;
extern TypeInfo* t1797_TI_var;
extern "C" t821 * m11599 (t2124 * __this, t2* p0, int32_t p1, t926 * p2, int32_t p3, t152* p4, t928* p5, MethodInfo* method)
{
	static bool m11599_init;
	if (!m11599_init)
	{
		t1797_TI_var = il2cpp_codegen_class_from_type(&t1797_0_0_0);
		m11599_init = true;
	}
	bool V_0 = false;
	t1561* V_1 = {0};
	t821 * V_2 = {0};
	t1797* V_3 = {0};
	int32_t V_4 = 0;
	t821 * V_5 = {0};
	t1561* V_6 = {0};
	int32_t V_7 = 0;
	t821 * V_8 = {0};
	t1561* V_9 = {0};
	int32_t V_10 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t1561* L_4 = m11597(__this, L_1, L_2, L_3, __this, &m11597_MI);
		V_1 = L_4;
		V_2 = (t821 *)NULL;
		V_4 = 0;
		t1561* L_5 = V_1;
		V_6 = L_5;
		V_7 = 0;
		goto IL_004d;
	}

IL_0022:
	{
		t1561* L_6 = V_6;
		int32_t L_7 = V_7;
		int32_t L_8 = L_7;
		V_5 = (*(t821 **)(t821 **)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = p3;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_003e;
		}
	}
	{
		t821 * L_10 = V_5;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_10);
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
		t821 * L_14 = V_5;
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
		t1561* L_18 = V_6;
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
		return (t821 *)NULL;
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
		t821 * L_22 = V_2;
		t907 * L_23 = m11634(__this, L_22, &m11634_MI);
		return ((t821 *)Castclass(L_23, InitializedTypeInfo(&t821_TI)));
	}

IL_0071:
	{
		int32_t L_24 = V_4;
		V_3 = ((t1797*)SZArrayNew(t1797_TI_var, L_24));
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		t1797* L_26 = V_3;
		t821 * L_27 = V_2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t907 **)(t907 **)SZArrayLdElema(L_26, 0)) = (t907 *)L_27;
		goto IL_00c4;
	}

IL_0084:
	{
		V_4 = 0;
		t1561* L_28 = V_1;
		V_9 = L_28;
		V_10 = 0;
		goto IL_00bc;
	}

IL_008f:
	{
		t1561* L_29 = V_9;
		int32_t L_30 = V_10;
		int32_t L_31 = L_30;
		V_8 = (*(t821 **)(t821 **)SZArrayLdElema(L_29, L_31));
		int32_t L_32 = p3;
		if ((((int32_t)L_32) == ((int32_t)3)))
		{
			goto IL_00ab;
		}
	}
	{
		t821 * L_33 = V_8;
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9516_MI, L_33);
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
		t1797* L_37 = V_3;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
		t821 * L_40 = V_8;
		ArrayElementTypeCheck (L_37, L_40);
		*((t907 **)(t907 **)SZArrayLdElema(L_37, L_39)) = (t907 *)L_40;
	}

IL_00b6:
	{
		int32_t L_41 = V_10;
		V_10 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00bc:
	{
		int32_t L_42 = V_10;
		t1561* L_43 = V_9;
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
		t1797* L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t907 * L_46 = m9482(NULL, L_45, &m9482_MI);
		t907 * L_47 = m11634(__this, L_46, &m11634_MI);
		return ((t821 *)Castclass(L_47, InitializedTypeInfo(&t821_TI)));
	}

IL_00da:
	{
		t926 * L_48 = p2;
		if (L_48)
		{
			goto IL_00e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_49 = m9479(NULL, &m9479_MI);
		p2 = L_49;
	}

IL_00e6:
	{
		t926 * L_50 = p2;
		int32_t L_51 = p1;
		t1797* L_52 = V_3;
		t152* L_53 = p4;
		t928* L_54 = p5;
		t907 * L_55 = (t907 *)VirtFuncInvoker4< t907 *, int32_t, t1797*, t152*, t928* >::Invoke(&m11987_MI, L_50, L_51, L_52, L_53, L_54);
		t907 * L_56 = m11634(__this, L_55, &m11634_MI);
		return ((t821 *)Castclass(L_56, InitializedTypeInfo(&t821_TI)));
	}
}
extern "C" t922* m11600 (t2124 * __this, t2* p0, int32_t p1, bool p2, t126 * p3, MethodInfo* method)
{
	typedef t922* (*m11600_ftn) (t2124 *, t2*, int32_t, bool, t126 *);
	static m11600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11600_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
extern MethodInfo m11601_MI;
extern "C" t922* m11601 (t2124 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t922* L_1 = m11600(__this, (t2*)NULL, L_0, 0, __this, &m11600_MI);
		return L_1;
	}
}
extern MethodInfo m11602_MI;
extern "C" t830 * m11602 (t2124 * __this, t2* p0, int32_t p1, t926 * p2, t126 * p3, t152* p4, t928* p5, MethodInfo* method)
{
	bool V_0 = false;
	t922* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = p1;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = V_0;
		t922* L_4 = m11600(__this, L_1, L_2, L_3, __this, &m11600_MI);
		V_1 = L_4;
		t922* L_5 = V_1;
		V_2 = (((int32_t)(((t121 *)L_5)->max_length)));
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		return (t830 *)NULL;
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
		t922* L_12 = V_1;
		int32_t L_13 = 0;
		t126 * L_14 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4375_MI, (*(t830 **)(t830 **)SZArrayLdElema(L_12, L_13)));
		if ((!(((t9*)(t126 *)L_11) == ((t9*)(t126 *)L_14))))
		{
			goto IL_0040;
		}
	}

IL_003c:
	{
		t922* L_15 = V_1;
		int32_t L_16 = 0;
		return (*(t830 **)(t830 **)SZArrayLdElema(L_15, L_16));
	}

IL_0040:
	{
		t926 * L_17 = p2;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_18 = m9479(NULL, &m9479_MI);
		p2 = L_18;
	}

IL_004c:
	{
		t926 * L_19 = p2;
		int32_t L_20 = p1;
		t922* L_21 = V_1;
		t126 * L_22 = p3;
		t152* L_23 = p4;
		t928* L_24 = p5;
		t830 * L_25 = (t830 *)VirtFuncInvoker5< t830 *, int32_t, t922*, t126 *, t152*, t928* >::Invoke(&m12124_MI, L_19, L_20, L_21, L_22, L_23, L_24);
		return L_25;
	}
}
extern MethodInfo m11603_MI;
extern "C" bool m11603 (t2124 * __this, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11604_MI, __this);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11605_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11606_MI, __this);
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
extern "C" bool m11604 (t2124 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		bool L_0 = m7764(NULL, __this, &m7764_MI);
		return L_0;
	}
}
extern "C" bool m11605 (t2124 * __this, MethodInfo* method)
{
	typedef bool (*m11605_ftn) (t2124 *);
	static m11605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11605_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsByRefImpl()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m11606 (t2124 * __this, MethodInfo* method)
{
	typedef bool (*m11606_ftn) (t2124 *);
	static m11606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11606_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPointerImpl()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11607_MI;
extern "C" bool m11607 (t2124 * __this, MethodInfo* method)
{
	typedef bool (*m11607_ftn) (t2124 *);
	static m11607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11607_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::IsPrimitiveImpl()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11608_MI;
extern "C" bool m11608 (t2124 * __this, t126 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1109, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = m7749(__this, L_2, &m7749_MI);
		return L_3;
	}
}
extern MethodInfo m11609_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t1797_TI_var;
extern "C" t9 * m11609 (t2124 * __this, t2* p0, int32_t p1, t926 * p2, t9 * p3, t158* p4, t928* p5, t894 * p6, t221* p7, MethodInfo* method)
{
	static bool m11609_init;
	if (!m11609_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t1797_TI_var = il2cpp_codegen_class_from_type(&t1797_0_0_0);
		m11609_init = true;
	}
	t2* V_0 = {0};
	t919* V_1 = {0};
	t9 * V_2 = {0};
	t907 * V_3 = {0};
	t9 * V_4 = {0};
	t659 * V_5 = {0};
	bool V_6 = false;
	t2* V_7 = {0};
	bool V_8 = false;
	t1561* V_9 = {0};
	t9 * V_10 = {0};
	t907 * V_11 = {0};
	t921* V_12 = {0};
	int32_t V_13 = 0;
	bool V_14 = false;
	t9 * V_15 = {0};
	t823 * V_16 = {0};
	t823 * V_17 = {0};
	t922* V_18 = {0};
	t9 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	t1797* V_22 = {0};
	t907 * V_23 = {0};
	t907 * V_24 = {0};
	t921* V_25 = {0};
	bool V_26 = false;
	t9 * V_27 = {0};
	t922* V_28 = {0};
	t9 * V_29 = {0};
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	t1797* V_32 = {0};
	t907 * V_33 = {0};
	t907 * V_34 = {0};
	t921* V_35 = {0};
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
		t556 * L_2 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_2, (t2*) &_stringLiteral2762, &m2885_MI);
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
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_7, (t2*) &_stringLiteral2763, (t2*) &_stringLiteral2762, &m5691_MI);
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
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_10, (t2*) &_stringLiteral2764, (t2*) &_stringLiteral2762, &m5691_MI);
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
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_13, (t2*) &_stringLiteral2765, (t2*) &_stringLiteral2762, &m5691_MI);
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
		t556 * L_15 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_15, (t2*) &_stringLiteral2766, (t2*) &_stringLiteral2762, &m5691_MI);
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
		t556 * L_20 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_20, (t2*) &_stringLiteral2767, &m2885_MI);
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
		t556 * L_22 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_22, (t2*) &_stringLiteral2768, (t2*) &_stringLiteral2762, &m5691_MI);
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
		t926 * L_27 = p2;
		if (L_27)
		{
			goto IL_010a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t926_TI));
		t926 * L_28 = m9479(NULL, &m9479_MI);
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
		t919* L_32 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m11590_MI, __this, L_31);
		V_1 = L_32;
		V_2 = NULL;
		t926 * L_33 = p2;
		int32_t L_34 = p1;
		t919* L_35 = V_1;
		t928* L_36 = p5;
		t894 * L_37 = p6;
		t221* L_38 = p7;
		t907 * L_39 = (t907 *)VirtFuncInvoker7< t907 *, int32_t, t1797*, t158**, t928*, t894 *, t221*, t9 ** >::Invoke(&m12125_MI, L_33, L_34, (t1797*)(t1797*)L_35, (&p4), L_36, L_37, L_38, (&V_2));
		V_3 = L_39;
		t907 * L_40 = V_3;
		if (L_40)
		{
			goto IL_0168;
		}
	}
	{
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, __this);
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
		t9 * L_43 = m11089(NULL, __this, &m11089_MI);
		return L_43;
	}

IL_014d:
	{
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11616_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_45 = m399(NULL, (t2*) &_stringLiteral2769, L_44, (t2*) &_stringLiteral1599, &m399_MI);
		t2117 * L_46 = (t2117 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2117_TI));
		m11562(L_46, L_45, &m11562_MI);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0168:
	{
		t907 * L_47 = V_3;
		t9 * L_48 = p3;
		int32_t L_49 = p1;
		t926 * L_50 = p2;
		t158* L_51 = p4;
		t894 * L_52 = p6;
		t9 * L_53 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_47, L_48, L_49, L_50, L_51, L_52);
		V_4 = L_53;
		t926 * L_54 = p2;
		t9 * L_55 = V_2;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12126_MI, L_54, (&p4), L_55);
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
		t126 * L_60 = m329(NULL, LoadTypeToken(&t659_0_0_0), &m329_MI);
		bool L_61 = m7040(NULL, __this, L_60, &m7040_MI);
		if (!L_61)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_62 = m329(NULL, LoadTypeToken(&t659_0_0_0), &m329_MI);
		t718 * L_63 = m7037(NULL, __this, L_62, &m7037_MI);
		V_5 = ((t659 *)Castclass(L_63, InitializedTypeInfo(&t659_TI)));
		t659 * L_64 = V_5;
		t2* L_65 = m7805(L_64, &m7805_MI);
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
		t1561* L_71 = m11597(__this, L_68, L_69, L_70, __this, &m11597_MI);
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
		t926 * L_73 = p2;
		int32_t L_74 = p1;
		t1561* L_75 = V_9;
		t928* L_76 = p5;
		t894 * L_77 = p6;
		t221* L_78 = p7;
		t907 * L_79 = (t907 *)VirtFuncInvoker7< t907 *, int32_t, t1797*, t158**, t928*, t894 *, t221*, t9 ** >::Invoke(&m12125_MI, L_73, L_74, (t1797*)(t1797*)L_75, (&p4), L_76, L_77, L_78, (&V_10));
		V_11 = L_79;
		t907 * L_80 = V_11;
		if (L_80)
		{
			goto IL_024b;
		}
	}
	{
		t1561* L_81 = V_9;
		if ((((int32_t)(((int32_t)(((t121 *)L_81)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0234;
		}
	}
	{
		t2* L_82 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_83 = m399(NULL, (t2*) &_stringLiteral2770, L_82, (t2*) &_stringLiteral2771, &m399_MI);
		V_7 = L_83;
		goto IL_0246;
	}

IL_0234:
	{
		t2* L_84 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_85 = m399(NULL, (t2*) &_stringLiteral2772, L_84, (t2*) &_stringLiteral140, &m399_MI);
		V_7 = L_85;
	}

IL_0246:
	{
		goto IL_02ea;
	}

IL_024b:
	{
		t907 * L_86 = V_11;
		t921* L_87 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_86);
		V_12 = L_87;
		V_13 = 0;
		goto IL_0292;
	}

IL_0259:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1801_TI));
		t1801 * L_88 = ((t1801_SFs*)InitializedTypeInfo(&t1801_TI)->static_fields)->f0;
		t158* L_89 = p4;
		int32_t L_90 = V_13;
		int32_t L_91 = L_90;
		if ((!(((t9*)(t1801 *)L_88) == ((t9*)(t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_89, L_91))))))
		{
			goto IL_028c;
		}
	}
	{
		t921* L_92 = V_12;
		int32_t L_93 = V_13;
		int32_t L_94 = L_93;
		int32_t L_95 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9672_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_92, L_94)));
		if ((((int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)4096)))) == ((int32_t)((int32_t)4096))))
		{
			goto IL_028c;
		}
	}
	{
		t556 * L_96 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_96, (t2*) &_stringLiteral2773, (t2*) &_stringLiteral1333, &m5691_MI);
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
		t921* L_99 = V_12;
		if ((((int32_t)L_98) < ((int32_t)(((int32_t)(((t121 *)L_99)->max_length))))))
		{
			goto IL_0259;
		}
	}
	{
		t921* L_100 = V_12;
		if ((((int32_t)(((int32_t)(((t121 *)L_100)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_02bb;
		}
	}
	{
		t921* L_101 = V_12;
		t921* L_102 = V_12;
		int32_t L_103 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_102)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_104 = m329(NULL, LoadTypeToken(&t330_0_0_0), &m329_MI);
		bool L_105 = m7039(NULL, (*(t917 **)(t917 **)SZArrayLdElema(L_101, L_103)), L_104, &m7039_MI);
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
		t907 * L_107 = V_11;
		m11635(__this, (&p4), L_107, &m11635_MI);
	}

IL_02cc:
	{
		t907 * L_108 = V_11;
		t9 * L_109 = p3;
		int32_t L_110 = p1;
		t926 * L_111 = p2;
		t158* L_112 = p4;
		t894 * L_113 = p6;
		t9 * L_114 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_108, L_109, L_110, L_111, L_112, L_113);
		V_15 = L_114;
		t926 * L_115 = p2;
		t9 * L_116 = V_10;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12126_MI, L_115, (&p4), L_116);
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
		t823 * L_121 = (t823 *)VirtFuncInvoker2< t823 *, t2*, int32_t >::Invoke(&m11593_MI, __this, L_119, L_120);
		V_16 = L_121;
		t823 * L_122 = V_16;
		if (!L_122)
		{
			goto IL_030b;
		}
	}
	{
		t823 * L_123 = V_16;
		t9 * L_124 = p3;
		t9 * L_125 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m4394_MI, L_123, L_124);
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
		t823 * L_130 = (t823 *)VirtFuncInvoker2< t823 *, t2*, int32_t >::Invoke(&m11593_MI, __this, L_128, L_129);
		V_17 = L_130;
		t823 * L_131 = V_17;
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
		m339(L_133, (t2*) &_stringLiteral2774, &m339_MI);
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
		t556 * L_136 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_136, (t2*) &_stringLiteral2775, (t2*) &_stringLiteral2762, &m5691_MI);
		il2cpp_codegen_raise_exception(L_136);
	}

IL_035a:
	{
		t823 * L_137 = V_17;
		t9 * L_138 = p3;
		t158* L_139 = p4;
		int32_t L_140 = 0;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m4395_MI, L_137, L_138, (*(t9 **)(t9 **)SZArrayLdElema(L_139, L_140)));
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
		t922* L_146 = m11600(__this, L_143, L_144, L_145, __this, &m11600_MI);
		V_18 = L_146;
		V_19 = NULL;
		V_21 = 0;
		V_20 = 0;
		goto IL_03b2;
	}

IL_0399:
	{
		t922* L_147 = V_18;
		int32_t L_148 = V_20;
		int32_t L_149 = L_148;
		t821 * L_150 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4403_MI, (*(t830 **)(t830 **)SZArrayLdElema(L_147, L_149)), 1);
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
		t922* L_154 = V_18;
		if ((((int32_t)L_153) < ((int32_t)(((int32_t)(((t121 *)L_154)->max_length))))))
		{
			goto IL_0399;
		}
	}
	{
		int32_t L_155 = V_21;
		V_22 = ((t1797*)SZArrayNew(t1797_TI_var, L_155));
		V_21 = 0;
		V_20 = 0;
		goto IL_03ee;
	}

IL_03cb:
	{
		t922* L_156 = V_18;
		int32_t L_157 = V_20;
		int32_t L_158 = L_157;
		t821 * L_159 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4403_MI, (*(t830 **)(t830 **)SZArrayLdElema(L_156, L_158)), 1);
		V_23 = L_159;
		t907 * L_160 = V_23;
		if (!L_160)
		{
			goto IL_03e8;
		}
	}
	{
		t1797* L_161 = V_22;
		int32_t L_162 = V_21;
		int32_t L_163 = L_162;
		V_21 = ((int32_t)((int32_t)L_163+(int32_t)1));
		t907 * L_164 = V_23;
		ArrayElementTypeCheck (L_161, L_164);
		*((t907 **)(t907 **)SZArrayLdElema(L_161, L_163)) = (t907 *)L_164;
	}

IL_03e8:
	{
		int32_t L_165 = V_20;
		V_20 = ((int32_t)((int32_t)L_165+(int32_t)1));
	}

IL_03ee:
	{
		int32_t L_166 = V_20;
		t922* L_167 = V_18;
		if ((((int32_t)L_166) < ((int32_t)(((int32_t)(((t121 *)L_167)->max_length))))))
		{
			goto IL_03cb;
		}
	}
	{
		t926 * L_168 = p2;
		int32_t L_169 = p1;
		t1797* L_170 = V_22;
		t928* L_171 = p5;
		t894 * L_172 = p6;
		t221* L_173 = p7;
		t907 * L_174 = (t907 *)VirtFuncInvoker7< t907 *, int32_t, t1797*, t158**, t928*, t894 *, t221*, t9 ** >::Invoke(&m12125_MI, L_168, L_169, L_170, (&p4), L_171, L_172, L_173, (&V_19));
		V_24 = L_174;
		t907 * L_175 = V_24;
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
		t907 * L_176 = V_24;
		t921* L_177 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_176);
		V_25 = L_177;
		t921* L_178 = V_25;
		if ((((int32_t)(((int32_t)(((t121 *)L_178)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_043e;
		}
	}
	{
		t921* L_179 = V_25;
		t921* L_180 = V_25;
		int32_t L_181 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_180)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_182 = m329(NULL, LoadTypeToken(&t330_0_0_0), &m329_MI);
		bool L_183 = m7039(NULL, (*(t917 **)(t917 **)SZArrayLdElema(L_179, L_181)), L_182, &m7039_MI);
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
		t907 * L_185 = V_24;
		m11635(__this, (&p4), L_185, &m11635_MI);
	}

IL_044f:
	{
		t907 * L_186 = V_24;
		t9 * L_187 = p3;
		int32_t L_188 = p1;
		t926 * L_189 = p2;
		t158* L_190 = p4;
		t894 * L_191 = p6;
		t9 * L_192 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_186, L_187, L_188, L_189, L_190, L_191);
		V_27 = L_192;
		t926 * L_193 = p2;
		t9 * L_194 = V_19;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12126_MI, L_193, (&p4), L_194);
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
		t922* L_200 = m11600(__this, L_197, L_198, L_199, __this, &m11600_MI);
		V_28 = L_200;
		V_29 = NULL;
		V_31 = 0;
		V_30 = 0;
		goto IL_04af;
	}

IL_0496:
	{
		t922* L_201 = V_28;
		int32_t L_202 = V_30;
		int32_t L_203 = L_202;
		t821 * L_204 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4404_MI, (*(t830 **)(t830 **)SZArrayLdElema(L_201, L_203)), 1);
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
		t922* L_208 = V_28;
		if ((((int32_t)L_207) < ((int32_t)(((int32_t)(((t121 *)L_208)->max_length))))))
		{
			goto IL_0496;
		}
	}
	{
		int32_t L_209 = V_31;
		V_32 = ((t1797*)SZArrayNew(t1797_TI_var, L_209));
		V_31 = 0;
		V_30 = 0;
		goto IL_04eb;
	}

IL_04c8:
	{
		t922* L_210 = V_28;
		int32_t L_211 = V_30;
		int32_t L_212 = L_211;
		t821 * L_213 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4404_MI, (*(t830 **)(t830 **)SZArrayLdElema(L_210, L_212)), 1);
		V_33 = L_213;
		t907 * L_214 = V_33;
		if (!L_214)
		{
			goto IL_04e5;
		}
	}
	{
		t1797* L_215 = V_32;
		int32_t L_216 = V_31;
		int32_t L_217 = L_216;
		V_31 = ((int32_t)((int32_t)L_217+(int32_t)1));
		t907 * L_218 = V_33;
		ArrayElementTypeCheck (L_215, L_218);
		*((t907 **)(t907 **)SZArrayLdElema(L_215, L_217)) = (t907 *)L_218;
	}

IL_04e5:
	{
		int32_t L_219 = V_30;
		V_30 = ((int32_t)((int32_t)L_219+(int32_t)1));
	}

IL_04eb:
	{
		int32_t L_220 = V_30;
		t922* L_221 = V_28;
		if ((((int32_t)L_220) < ((int32_t)(((int32_t)(((t121 *)L_221)->max_length))))))
		{
			goto IL_04c8;
		}
	}
	{
		t926 * L_222 = p2;
		int32_t L_223 = p1;
		t1797* L_224 = V_32;
		t928* L_225 = p5;
		t894 * L_226 = p6;
		t221* L_227 = p7;
		t907 * L_228 = (t907 *)VirtFuncInvoker7< t907 *, int32_t, t1797*, t158**, t928*, t894 *, t221*, t9 ** >::Invoke(&m12125_MI, L_222, L_223, L_224, (&p4), L_225, L_226, L_227, (&V_29));
		V_34 = L_228;
		t907 * L_229 = V_34;
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
		t907 * L_230 = V_34;
		t921* L_231 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_230);
		V_35 = L_231;
		t921* L_232 = V_35;
		if ((((int32_t)(((int32_t)(((t121 *)L_232)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_053b;
		}
	}
	{
		t921* L_233 = V_35;
		t921* L_234 = V_35;
		int32_t L_235 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_234)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_236 = m329(NULL, LoadTypeToken(&t330_0_0_0), &m329_MI);
		bool L_237 = m7039(NULL, (*(t917 **)(t917 **)SZArrayLdElema(L_233, L_235)), L_236, &m7039_MI);
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
		t907 * L_239 = V_34;
		m11635(__this, (&p4), L_239, &m11635_MI);
	}

IL_054c:
	{
		t907 * L_240 = V_34;
		t9 * L_241 = p3;
		int32_t L_242 = p1;
		t926 * L_243 = p2;
		t158* L_244 = p4;
		t894 * L_245 = p6;
		t9 * L_246 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_240, L_241, L_242, L_243, L_244, L_245);
		V_37 = L_246;
		t926 * L_247 = p2;
		t9 * L_248 = V_29;
		VirtActionInvoker2< t158**, t9 * >::Invoke(&m12126_MI, L_247, (&p4), L_248);
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
		t2117 * L_252 = (t2117 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2117_TI));
		m11562(L_252, L_251, &m11562_MI);
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
		t2* L_255 = m399(NULL, (t2*) &_stringLiteral2776, L_254, (t2*) &_stringLiteral140, &m399_MI);
		t2115 * L_256 = (t2115 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2115_TI));
		m11552(L_256, L_255, &m11552_MI);
		il2cpp_codegen_raise_exception(L_256);
	}

IL_0590:
	{
		return NULL;
	}
}
extern "C" t126 * m11610 (t2124 * __this, MethodInfo* method)
{
	typedef t126 * (*m11610_ftn) (t2124 *);
	static m11610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11610_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetElementType()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11611_MI;
extern "C" t126 * m11611 (t2124 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m11612_MI;
extern "C" t1336 * m11612 (t2124 * __this, MethodInfo* method)
{
	typedef t1336 * (*m11612_ftn) (t2124 *);
	static m11612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11612_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Assembly()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11613_MI;
extern "C" t2* m11613 (t2124 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11614(__this, 1, 1, &m11614_MI);
		return L_0;
	}
}
extern "C" t2* m11614 (t2124 * __this, bool p0, bool p1, MethodInfo* method)
{
	typedef t2* (*m11614_ftn) (t2124 *, bool, bool);
	static m11614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11614_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::getFullName(System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m11615_MI;
extern "C" t126 * m11615 (t2124 * __this, MethodInfo* method)
{
	typedef t126 * (*m11615_ftn) (t2124 *);
	static m11615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11615_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_BaseType()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m11616 (t2124 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	{
		t2123 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t2123 * L_1 = (t2123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2123_TI));
		m11584(L_1, &m11584_MI);
		__this->f8 = L_1;
	}

IL_0013:
	{
		t2123 * L_2 = (__this->f8);
		t2* L_3 = (L_2->f0);
		t2* L_4 = L_3;
		V_0 = L_4;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2123 * L_5 = (__this->f8);
		t2* L_6 = m11614(__this, 1, 0, &m11614_MI);
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
extern MethodInfo m11617_MI;
extern "C" bool m11617 (t2124 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m11618_MI;
extern "C" t158* m11618 (t2124 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_1 = m11577(NULL, __this, L_0, &m11577_MI);
		return L_1;
	}
}
extern MethodInfo m11619_MI;
extern "C" t158* m11619 (t2124 * __this, t126 * p0, bool p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1076, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t126 * L_2 = p0;
		bool L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_4 = m11576(NULL, __this, L_2, L_3, &m11576_MI);
		return L_4;
	}
}
extern MethodInfo m11620_MI;
extern "C" int32_t m11620 (t2124 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11624_MI, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11632_MI, __this);
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
extern MethodInfo m11621_MI;
extern "C" t2* m11621 (t2124 * __this, MethodInfo* method)
{
	typedef t2* (*m11621_ftn) (t2124 *);
	static m11621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11621_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Name()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11622_MI;
extern "C" t2* m11622 (t2124 * __this, MethodInfo* method)
{
	typedef t2* (*m11622_ftn) (t2124 *);
	static m11622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11622_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Namespace()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11623_MI;
extern "C" t1559 * m11623 (t2124 * __this, MethodInfo* method)
{
	typedef t1559 * (*m11623_ftn) (t2124 *);
	static m11623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11623_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_Module()");
	return _il2cpp_icall_func(__this);
}
extern "C" t126 * m11624 (t2124 * __this, MethodInfo* method)
{
	typedef t126 * (*m11624_ftn) (t2124 *);
	static m11624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11624_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_DeclaringType()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11625_MI;
extern "C" t126 * m11625 (t2124 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11624_MI, __this);
		return L_0;
	}
}
extern MethodInfo m11626_MI;
extern "C" t127  m11626 (t2124 * __this, MethodInfo* method)
{
	{
		t127  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11627_MI;
extern "C" int32_t m11627 (t2124 * __this, MethodInfo* method)
{
	typedef int32_t (*m11627_ftn) (t2124 *);
	static m11627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11627_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetArrayRank()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11628_MI;
extern "C" void m11628 (t2124 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11848(NULL, __this, L_0, L_1, &m11848_MI);
		return;
	}
}
extern MethodInfo m11629_MI;
extern "C" t2* m11629 (t2124 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m11614(__this, 0, 0, &m11614_MI);
		return L_0;
	}
}
extern "C" t152* m11630 (t2124 * __this, MethodInfo* method)
{
	typedef t152* (*m11630_ftn) (t2124 *);
	static m11630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11630_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11631_MI;
extern "C" bool m11631 (t2124 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11632_MI, __this);
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
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7777_MI, __this);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		t152* L_2 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11630_MI, __this);
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
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_6);
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
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, __this);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11610_MI, __this);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7773_MI, L_12);
		return L_13;
	}

IL_0049:
	{
		return 0;
	}
}
extern "C" bool m11632 (t2124 * __this, MethodInfo* method)
{
	typedef bool (*m11632_ftn) (t2124 *);
	static m11632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11632_ftn)il2cpp_codegen_resolve_icall ("System.MonoType::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m11633_MI;
extern "C" t126 * m11633 (t2124 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	{
		t126 * L_0 = m7775(__this, &m7775_MI);
		V_0 = L_0;
		t126 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		t1332 * L_2 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_2, &m5692_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		t126 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t907 * m11634 (t2124 * __this, t907 * p0, MethodInfo* method)
{
	{
		t907 * L_0 = p0;
		return L_0;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m11635 (t2124 * __this, t158** p0, t907 * p1, MethodInfo* method)
{
	static bool m11635_init;
	if (!m11635_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m11635_init = true;
	}
	t921* V_0 = {0};
	t158* V_1 = {0};
	t121 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t907 * L_0 = p1;
		t921* L_1 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_0);
		V_0 = L_1;
		t921* L_2 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, (((int32_t)(((t121 *)L_2)->max_length)))));
		t921* L_3 = V_0;
		t921* L_4 = V_0;
		int32_t L_5 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))-(int32_t)1));
		t126 * L_6 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_3, L_5)));
		t126 * L_7 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_6);
		t158** L_8 = p0;
		t921* L_9 = V_0;
		t121 * L_10 = m7667(NULL, L_7, ((int32_t)((int32_t)(((int32_t)(((t121 *)(*((t158**)L_8)))->max_length)))-(int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)1)))), &m7667_MI);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 0;
		goto IL_0062;
	}

IL_0038:
	{
		int32_t L_11 = V_4;
		t921* L_12 = V_0;
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
		m5690(L_18, (*(t9 **)(t9 **)SZArrayLdElema((*((t158**)L_19)), L_21)), L_22, &m5690_MI);
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
		t921* L_28 = V_0;
		t121 * L_29 = V_2;
		ArrayElementTypeCheck (L_27, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_28)->max_length)))-(int32_t)1)))) = (t9 *)L_29;
		t158** L_30 = p0;
		t158* L_31 = V_1;
		*((t9 **)(L_30)) = (t9 *)L_31;
		return;
	}
}
#include "t2125.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2125_TI;
#include "t2125MD.h"



extern MethodInfo m11636_MI;
extern "C" void m11636 (t2125 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2777, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m11637_MI;
extern "C" void m11637 (t2125 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		return;
	}
}
extern MethodInfo m11638_MI;
extern "C" void m11638 (t2125 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2126.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2126_TI;
#include "t2126MD.h"



extern MethodInfo m11639_MI;
extern "C" void m11639 (t2126 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#include "t1337.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1337_TI;
#include "t1337MD.h"



extern MethodInfo m11640_MI;
extern "C" void m11640 (t1337 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2778, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467263), &m4433_MI);
		return;
	}
}
extern MethodInfo m5745_MI;
extern "C" void m5745 (t1337 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467263), &m4433_MI);
		return;
	}
}
extern MethodInfo m11641_MI;
extern "C" void m11641 (t1337 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m561 (t169 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2779, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233067), &m4433_MI);
		return;
	}
}
extern "C" void m5706 (t169 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233067), &m4433_MI);
		return;
	}
}
extern MethodInfo m11642_MI;
extern "C" void m11642 (t169 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t871.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t871_TI;
#include "t871MD.h"



extern MethodInfo m11643_MI;
extern "C" void m11643 (t871 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2780, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467261), &m4433_MI);
		return;
	}
}
extern MethodInfo m4203_MI;
extern "C" void m4203 (t871 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147467261), &m4433_MI);
		return;
	}
}
extern MethodInfo m11644_MI;
extern "C" void m11644 (t871 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2127_TI;
#include "t2127MD.h"

#include "t1546MD.h"
extern MethodInfo m11645_MI;
extern MethodInfo m8724_MI;
extern MethodInfo m8723_MI;
extern MethodInfo m5711_MI;
extern MethodInfo m8722_MI;
extern MethodInfo m8733_MI;
extern MethodInfo m8734_MI;
extern MethodInfo m8720_MI;
extern MethodInfo m10871_MI;


extern "C" void m11645 (t2127 * __this, MethodInfo* method)
{
	{
		__this->f2 = (-1);
		__this->f10 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11646_MI;
extern TypeInfo* t1088_TI_var;
extern "C" void m11646 (t9 * __this , t2* p0, bool* p1, bool p2, int32_t* p3, int32_t* p4, MethodInfo* method)
{
	static bool m11646_init;
	if (!m11646_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m11646_init = true;
	}
	t1088* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		V_0 = ((t1088*)SZArrayNew(t1088_TI_var, 3));
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
		uint16_t L_2 = m2714(L_0, L_1, &m2714_MI);
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
		uint16_t L_13 = m2714(L_11, L_12, &m2714_MI);
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
		uint16_t L_17 = m2714(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), &m2714_MI);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)92))))
		{
			goto IL_0076;
		}
	}

IL_0060:
	{
		t1088* L_18 = V_0;
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
		int32_t L_28 = m2699(L_27, &m2699_MI);
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
		int32_t L_33 = m2699(L_32, &m2699_MI);
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
		t1088* L_39 = V_0;
		int32_t L_40 = 0;
		*((int32_t*)(L_38)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_39, L_40));
		return;
	}

IL_00ab:
	{
		t1088* L_41 = V_0;
		int32_t L_42 = 0;
		t2* L_43 = p0;
		int32_t L_44 = m2699(L_43, &m2699_MI);
		if ((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_41, L_42))+(int32_t)1))) >= ((int32_t)L_44)))
		{
			goto IL_00cf;
		}
	}
	{
		bool* L_45 = p1;
		*((int8_t*)(L_45)) = (int8_t)1;
		int32_t* L_46 = p3;
		t1088* L_47 = V_0;
		int32_t L_48 = 0;
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48))+(int32_t)1));
		int32_t* L_49 = p4;
		t2* L_50 = p0;
		int32_t L_51 = m2699(L_50, &m2699_MI);
		int32_t* L_52 = p3;
		*((int32_t*)(L_49)) = (int32_t)((int32_t)((int32_t)L_51-(int32_t)(*((int32_t*)L_52))));
		return;
	}

IL_00cf:
	{
		int32_t* L_53 = p3;
		*((int32_t*)(L_53)) = (int32_t)0;
		int32_t* L_54 = p4;
		t1088* L_55 = V_0;
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
		t1088* L_60 = V_0;
		int32_t L_61 = 0;
		t1088* L_62 = V_0;
		int32_t L_63 = 1;
		*((int32_t*)(L_59)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_60, L_61))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_62, L_63))))+(int32_t)2));
		int32_t* L_64 = p4;
		t2* L_65 = p0;
		int32_t L_66 = m2699(L_65, &m2699_MI);
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
		t1088* L_71 = V_0;
		int32_t L_72 = 0;
		*((int32_t*)(L_70)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72));
		return;
	}

IL_0106:
	{
		t1088* L_73 = V_0;
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
		t1088* L_77 = V_0;
		int32_t L_78 = 0;
		*((int32_t*)(L_76)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_77, L_78))+(int32_t)1));
		int32_t* L_79 = p4;
		t1088* L_80 = V_0;
		int32_t L_81 = 1;
		*((int32_t*)(L_79)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_80, L_81));
		return;
	}

IL_011d:
	{
		int32_t* L_82 = p3;
		*((int32_t*)(L_82)) = (int32_t)0;
		int32_t* L_83 = p4;
		t1088* L_84 = V_0;
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
		t1088* L_89 = V_0;
		int32_t L_90 = 0;
		t1088* L_91 = V_0;
		int32_t L_92 = 1;
		*((int32_t*)(L_88)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_89, L_90))+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_91, L_92))))+(int32_t)2));
		int32_t* L_93 = p4;
		t1088* L_94 = V_0;
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
		t1088* L_99 = V_0;
		int32_t L_100 = 0;
		*((int32_t*)(L_98)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100));
		return;
	}

IL_014e:
	{
		t1088* L_101 = V_0;
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
		t1088* L_105 = V_0;
		int32_t L_106 = 0;
		*((int32_t*)(L_104)) = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_105, L_106))+(int32_t)1));
		int32_t* L_107 = p4;
		t1088* L_108 = V_0;
		int32_t L_109 = 1;
		*((int32_t*)(L_107)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_108, L_109));
		return;
	}

IL_0165:
	{
		int32_t* L_110 = p3;
		*((int32_t*)(L_110)) = (int32_t)0;
		int32_t* L_111 = p4;
		t1088* L_112 = V_0;
		int32_t L_113 = 0;
		*((int32_t*)(L_111)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_112, L_113));
		return;
	}

IL_016f:
	{
		t556 * L_114 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_114, &m11109_MI);
		il2cpp_codegen_raise_exception(L_114);
	}
}
extern MethodInfo m11647_MI;
extern "C" t2127 * m11647 (t9 * __this , t2* p0, int32_t p1, int32_t p2, t1546 * p3, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	t2127 * V_5 = {0};
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
		t2127 * L_0 = (t2127 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2127_TI));
		m11645(L_0, &m11645_MI);
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
		uint16_t L_4 = m2714(L_2, L_3, &m2714_MI);
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
		t2127 * L_13 = V_5;
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
		t2127 * L_30 = V_5;
		t2127 * L_31 = L_30;
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
		t2127 * L_34 = V_5;
		t2127 * L_35 = L_34;
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
		t2127 * L_38 = V_5;
		t2127 * L_39 = L_38;
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
		t2127 * L_43 = V_5;
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
		t2127 * L_45 = V_5;
		L_45->f9 = 0;
	}

IL_015c:
	{
		t2127 * L_46 = V_5;
		int32_t L_47 = (L_46->f6);
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_016f;
		}
	}
	{
		t2127 * L_48 = V_5;
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
		t2127 * L_51 = V_5;
		t2127 * L_52 = L_51;
		int32_t L_53 = (L_52->f4);
		L_52->f4 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		t2127 * L_55 = V_5;
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
		t2127 * L_57 = V_5;
		t2127 * L_58 = L_57;
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
		t2127 * L_61 = V_5;
		t2127 * L_62 = L_61;
		int32_t L_63 = (L_62->f8);
		L_62->f8 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_01b9:
	{
		goto IL_0287;
	}

IL_01be:
	{
		t2127 * L_64 = V_5;
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
		t2127 * L_66 = V_5;
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
		uint16_t L_72 = m2714(L_70, ((int32_t)((int32_t)L_71+(int32_t)1)), &m2714_MI);
		V_9 = L_72;
		uint16_t L_73 = V_9;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_01fd;
		}
	}
	{
		t2127 * L_74 = V_5;
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
		t2127 * L_80 = V_5;
		L_80->f7 = 0;
		t2127 * L_81 = V_5;
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
		t2127 * L_83 = V_5;
		int32_t L_84 = (L_83->f2);
		if ((!(((uint32_t)L_84) == ((uint32_t)(-1)))))
		{
			goto IL_024c;
		}
	}
	{
		t2127 * L_85 = V_5;
		int32_t L_86 = V_7;
		L_85->f2 = L_86;
	}

IL_024c:
	{
		goto IL_0287;
	}

IL_024e:
	{
		t2127 * L_87 = V_5;
		t2127 * L_88 = L_87;
		int32_t L_89 = (L_88->f12);
		L_88->f12 = ((int32_t)((int32_t)L_89+(int32_t)1));
		goto IL_0287;
	}

IL_025f:
	{
		t2127 * L_90 = V_5;
		t2127 * L_91 = L_90;
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
		t2127 * L_94 = V_5;
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
		t2127 * L_101 = V_5;
		int32_t L_102 = (L_101->f8);
		if (L_102)
		{
			goto IL_02aa;
		}
	}
	{
		t2127 * L_103 = V_5;
		L_103->f7 = 0;
		goto IL_02b2;
	}

IL_02aa:
	{
		t2127 * L_104 = V_5;
		L_104->f5 = 0;
	}

IL_02b2:
	{
		t2127 * L_105 = V_5;
		int32_t L_106 = (L_105->f1);
		if (L_106)
		{
			goto IL_02c3;
		}
	}
	{
		t2127 * L_107 = V_5;
		L_107->f2 = (-1);
	}

IL_02c3:
	{
		t2127 * L_108 = V_5;
		t2127 * L_109 = L_108;
		int32_t L_110 = (L_109->f11);
		int32_t L_111 = V_6;
		L_109->f11 = ((int32_t)((int32_t)L_110+(int32_t)((int32_t)((int32_t)L_111*(int32_t)3))));
		t2127 * L_112 = V_5;
		return L_112;
	}
}
extern MethodInfo m11648_MI;
extern "C" t2* m11648 (t2127 * __this, t2* p0, int32_t p1, int32_t p2, t1546 * p3, bool p4, t315 * p5, t315 * p6, t315 * p7, MethodInfo* method)
{
	t315 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1088* V_7 = {0};
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
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		t1546 * L_1 = p3;
		t1088* L_2 = m8724(L_1, &m8724_MI);
		V_7 = L_2;
		t1546 * L_3 = p3;
		t2* L_4 = m8723(L_3, &m8723_MI);
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
		t1088* L_6 = V_7;
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00e7;
		}
	}
	{
		t315 * L_7 = p5;
		int32_t L_8 = m5856(L_7, &m5856_MI);
		V_9 = L_8;
		V_14 = 0;
		goto IL_0073;
	}

IL_0059:
	{
		int32_t L_9 = V_10;
		t1088* L_10 = V_7;
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
		t1088* L_18 = V_7;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		t1088* L_19 = V_7;
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
		t1088* L_29 = V_7;
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
		t1088* L_34 = V_7;
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
		uint16_t L_50 = m2714(L_48, L_49, &m2714_MI);
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
		t315 * L_55 = V_0;
		uint16_t L_56 = V_17;
		m2733(L_55, L_56, &m2733_MI);
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
		t315 * L_68 = V_0;
		t2* L_69 = p0;
		int32_t L_70 = V_16;
		uint16_t L_71 = m2714(L_69, L_70, &m2714_MI);
		m2733(L_68, L_71, &m2733_MI);
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
		t315 * L_79 = p5;
		int32_t L_80 = m5856(L_79, &m5856_MI);
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
		t315 * L_83 = V_0;
		t315 * L_84 = p5;
		int32_t L_85 = V_5;
		int32_t L_86 = L_85;
		V_5 = ((int32_t)((int32_t)L_86+(int32_t)1));
		uint16_t L_87 = m10862(L_84, L_86, &m10862_MI);
		m2733(L_83, L_87, &m2733_MI);
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
		t315 * L_93 = V_0;
		t2* L_94 = V_8;
		m1154(L_93, L_94, &m1154_MI);
		int32_t L_95 = V_11;
		int32_t L_96 = ((int32_t)((int32_t)L_95-(int32_t)1));
		V_11 = L_96;
		t1088* L_97 = V_7;
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
		t1088* L_99 = V_7;
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
		t315 * L_106 = p5;
		int32_t L_107 = m5856(L_106, &m5856_MI);
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
		t315 * L_110 = p6;
		int32_t L_111 = m5856(L_110, &m5856_MI);
		if ((((int32_t)L_109) >= ((int32_t)L_111)))
		{
			goto IL_0284;
		}
	}
	{
		t315 * L_112 = V_0;
		t315 * L_113 = p6;
		int32_t L_114 = V_6;
		int32_t L_115 = L_114;
		V_6 = ((int32_t)((int32_t)L_115+(int32_t)1));
		uint16_t L_116 = m10862(L_113, L_115, &m10862_MI);
		m2733(L_112, L_116, &m2733_MI);
	}

IL_0284:
	{
		goto IL_03c8;
	}

IL_0289:
	{
		t315 * L_117 = V_0;
		uint16_t L_118 = V_17;
		m2733(L_117, L_118, &m2733_MI);
		goto IL_03c8;
	}

IL_0297:
	{
		t315 * L_119 = p7;
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
		t315 * L_121 = V_0;
		uint16_t L_122 = V_17;
		m2733(L_121, L_122, &m2733_MI);
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
		uint16_t L_126 = m2714(L_124, L_125, &m2714_MI);
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
		uint16_t L_131 = m2714(L_129, L_130, &m2714_MI);
		if ((((int32_t)L_131) == ((int32_t)((int32_t)43))))
		{
			goto IL_02f0;
		}
	}
	{
		t2* L_132 = p0;
		int32_t L_133 = V_20;
		uint16_t L_134 = m2714(L_132, L_133, &m2714_MI);
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
		t315 * L_144 = V_0;
		uint16_t L_145 = V_17;
		m2733(L_144, L_145, &m2733_MI);
		t315 * L_146 = V_0;
		t315 * L_147 = p7;
		m5711(L_146, L_147, &m5711_MI);
		p7 = (t315 *)NULL;
		goto IL_0343;
	}

IL_033a:
	{
		t315 * L_148 = V_0;
		uint16_t L_149 = V_17;
		m2733(L_148, L_149, &m2733_MI);
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
		t315 * L_153 = V_0;
		t315 * L_154 = p5;
		int32_t L_155 = V_5;
		int32_t L_156 = L_155;
		V_5 = ((int32_t)((int32_t)L_156+(int32_t)1));
		uint16_t L_157 = m10862(L_154, L_156, &m10862_MI);
		m2733(L_153, L_157, &m2733_MI);
	}

IL_0372:
	{
		int32_t L_158 = V_5;
		t315 * L_159 = p5;
		int32_t L_160 = m5856(L_159, &m5856_MI);
		if ((((int32_t)L_158) < ((int32_t)L_160)))
		{
			goto IL_035d;
		}
	}

IL_037d:
	{
		t315 * L_161 = p6;
		int32_t L_162 = m5856(L_161, &m5856_MI);
		if ((((int32_t)L_162) <= ((int32_t)0)))
		{
			goto IL_0395;
		}
	}
	{
		t315 * L_163 = V_0;
		t1546 * L_164 = p3;
		t2* L_165 = m8722(L_164, &m8722_MI);
		m1154(L_163, L_165, &m1154_MI);
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
		t315 * L_166 = V_0;
		t1546 * L_167 = p3;
		t2* L_168 = m8733(L_167, &m8733_MI);
		m1154(L_166, L_168, &m1154_MI);
		goto IL_03c8;
	}

IL_03ad:
	{
		t315 * L_169 = V_0;
		t1546 * L_170 = p3;
		t2* L_171 = m8734(L_170, &m8734_MI);
		m1154(L_169, L_171, &m1154_MI);
		goto IL_03c8;
	}

IL_03bd:
	{
		t315 * L_172 = V_0;
		uint16_t L_173 = V_17;
		m2733(L_172, L_173, &m2733_MI);
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
		t315 * L_179 = V_0;
		t1546 * L_180 = p3;
		t2* L_181 = m8720(L_180, &m8720_MI);
		m10871(L_179, 0, L_181, &m10871_MI);
	}

IL_03eb:
	{
		t315 * L_182 = V_0;
		t2* L_183 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_182);
		return L_183;
	}
}
#include "t2128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2128_TI;
#include "t2128MD.h"

#include "t1863.h"
extern TypeInfo t1863_TI;
#include "t1863MD.h"
extern MethodInfo m8637_MI;
extern MethodInfo m11024_MI;
extern MethodInfo m11678_MI;
extern MethodInfo m11651_MI;
extern MethodInfo m11656_MI;
extern MethodInfo m11657_MI;
extern MethodInfo m11654_MI;
extern MethodInfo m11658_MI;
extern MethodInfo m11659_MI;
extern MethodInfo m11652_MI;
extern MethodInfo m11663_MI;
extern MethodInfo m11660_MI;
extern MethodInfo m11664_MI;
extern MethodInfo m11665_MI;
extern MethodInfo m11653_MI;
extern MethodInfo m11661_MI;
extern MethodInfo m11662_MI;
extern MethodInfo m11690_MI;
extern MethodInfo m7455_MI;
extern MethodInfo m11655_MI;
extern MethodInfo m11673_MI;
extern MethodInfo m8739_MI;
extern MethodInfo m11686_MI;
extern MethodInfo m11688_MI;
extern MethodInfo m11687_MI;
extern MethodInfo m11689_MI;
extern MethodInfo m11691_MI;
extern MethodInfo m11013_MI;
extern MethodInfo m11649_MI;
extern MethodInfo m11692_MI;
extern MethodInfo m11666_MI;
extern MethodInfo m11713_MI;
extern MethodInfo m11693_MI;
extern MethodInfo m11667_MI;
extern MethodInfo m11669_MI;
extern MethodInfo m11668_MI;
extern MethodInfo m11670_MI;
extern MethodInfo m11677_MI;
extern MethodInfo m8718_MI;
extern MethodInfo m8735_MI;
extern MethodInfo m8719_MI;
extern MethodInfo m11720_MI;
extern MethodInfo m11714_MI;
extern MethodInfo m11719_MI;
extern MethodInfo m11671_MI;
extern MethodInfo m11699_MI;
extern MethodInfo m11712_MI;
extern MethodInfo m11700_MI;
extern MethodInfo m11701_MI;
extern MethodInfo m11702_MI;
extern MethodInfo m11721_MI;
extern MethodInfo m11672_MI;
extern MethodInfo m11676_MI;
extern MethodInfo m11737_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m11715_MI;
extern MethodInfo m11716_MI;
extern MethodInfo m11724_MI;
extern MethodInfo m11718_MI;
extern MethodInfo m11722_MI;
extern MethodInfo m11723_MI;
extern MethodInfo m11717_MI;
extern MethodInfo m11726_MI;
extern MethodInfo m8709_MI;
extern MethodInfo m11685_MI;
extern MethodInfo m11679_MI;
extern MethodInfo m8714_MI;
extern MethodInfo m8715_MI;
extern MethodInfo m11674_MI;
extern MethodInfo m8713_MI;
extern MethodInfo m8712_MI;
extern MethodInfo m8711_MI;
extern MethodInfo m11734_MI;
extern MethodInfo m8710_MI;
extern MethodInfo m11733_MI;
extern MethodInfo m11738_MI;
extern MethodInfo m8721_MI;
extern MethodInfo m11731_MI;
extern MethodInfo m11742_MI;
extern MethodInfo m11681_MI;
extern MethodInfo m11684_MI;
extern MethodInfo m11725_MI;
extern MethodInfo m8725_MI;
extern MethodInfo m8727_MI;
extern MethodInfo m11740_MI;
extern MethodInfo m8732_MI;
extern MethodInfo m8731_MI;
extern MethodInfo m8730_MI;
extern MethodInfo m8729_MI;
extern MethodInfo m8728_MI;
extern MethodInfo m11736_MI;
extern MethodInfo m11735_MI;
extern MethodInfo m11682_MI;
extern MethodInfo m11741_MI;
extern MethodInfo m11729_MI;
extern MethodInfo m11683_MI;
extern MethodInfo m11730_MI;
extern MethodInfo m11680_MI;
extern MethodInfo m11732_MI;
extern MethodInfo m10873_MI;
extern MethodInfo m10872_MI;
extern MethodInfo m8736_MI;
extern MethodInfo m11728_MI;
extern MethodInfo m10865_MI;
extern MethodInfo m11727_MI;
extern MethodInfo m10868_MI;
extern MethodInfo m11739_MI;
extern MethodInfo m11675_MI;
extern MethodInfo m10863_MI;
extern MethodInfo m7030_MI;


extern TypeInfo* t305_TI_var;
extern "C" void m11649 (t2128 * __this, t1863 * p0, MethodInfo* method)
{
	static bool m11649_init;
	if (!m11649_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m11649_init = true;
	}
	{
		m336(__this, &m336_MI);
		__this->f23 = ((t305*)SZArrayNew(t305_TI_var, 0));
		t1863 * L_0 = p0;
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
		t1863 * L_1 = p0;
		__this->f6 = L_1;
		t1863 * L_2 = (__this->f6);
		t894 * L_3 = m11024(L_2, &m11024_MI);
		m11678(__this, L_3, &m11678_MI);
		return;
	}
}
extern MethodInfo m11650_MI;
extern "C" void m11650 (t9 * __this , MethodInfo* method)
{
	{
		m11651(NULL, (&((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f0), (&((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f1), (&((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f2), (&((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f3), (&((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f4), (&((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5), &m11651_MI);
		return;
	}
}
extern "C" void m11651 (t9 * __this , uint64_t** p0, int32_t** p1, uint16_t** p2, uint16_t** p3, int64_t** p4, int32_t** p5, MethodInfo* method)
{
	typedef void (*m11651_ftn) (uint64_t**, int32_t**, uint16_t**, uint16_t**, int64_t**, int32_t**);
	static m11651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11651_ftn)il2cpp_codegen_resolve_icall ("System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern "C" int64_t m11652 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int64_t* L_0 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f4;
		int32_t L_1 = p0;
		return (*((int64_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)8))))));
	}
}
extern "C" void m11653 (t2128 * __this, uint32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_5 = m11656(NULL, L_4, &m11656_MI);
		__this->f20 = L_5;
	}

IL_0029:
	{
		uint32_t L_6 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_7 = m11657(NULL, L_6, &m11657_MI);
		__this->f19 = L_7;
		return;
	}
}
extern "C" void m11654 (t2128 * __this, uint64_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_9 = m11657(NULL, L_8, &m11657_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_12 = m11657(NULL, (((int32_t)L_11)), &m11657_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_15 = m11657(NULL, (((int32_t)L_14)), &m11657_MI);
		__this->f19 = L_15;
	}

IL_006b:
	{
		return;
	}
}
extern "C" void m11655 (t2128 * __this, uint32_t p0, uint64_t p1, MethodInfo* method)
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
		m11654(__this, L_1, &m11654_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_18 = m11657(NULL, (((int32_t)L_17)), &m11657_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_34 = m11657(NULL, (((int32_t)L_33)), &m11657_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_40 = m11657(NULL, (((int32_t)L_39)), &m11657_MI);
		__this->f22 = L_40;
	}

IL_0108:
	{
		uint64_t L_41 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_42 = m11657(NULL, (((int32_t)L_41)), &m11657_MI);
		__this->f21 = L_42;
		return;
	}
}
extern "C" uint32_t m11656 (t9 * __this , int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t* L_1 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5;
		int32_t L_2 = p0;
		return (*((int32_t*)((intptr_t)((intptr_t)L_1+(int32_t)((int32_t)((int32_t)L_2*(int32_t)4))))));
	}

IL_0010:
	{
		int32_t L_3 = p0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)5243)))>>(int32_t)((int32_t)19)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t* L_4 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5;
		int32_t L_5 = V_0;
		int32_t* L_6 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5;
		int32_t L_7 = p0;
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_4+(int32_t)((int32_t)((int32_t)L_5*(int32_t)4))))))<<(int32_t)8))|(int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_6+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)((int32_t)((int32_t)L_8*(int32_t)((int32_t)100)))))*(int32_t)4))))))));
	}
}
extern "C" uint32_t m11657 (t9 * __this , int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_5 = m11656(NULL, L_4, &m11656_MI);
		V_0 = ((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)));
	}

IL_0029:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_8 = m11656(NULL, L_7, &m11656_MI);
		return ((int32_t)((int32_t)L_6|(int32_t)L_8));
	}
}
extern "C" int32_t m11658 (t9 * __this , int32_t p0, MethodInfo* method)
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
extern "C" int32_t m11659 (t9 * __this , uint32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_2 = m11658(NULL, L_1, &m11658_MI);
		return L_2;
	}

IL_000f:
	{
		uint32_t L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_4 = m11658(NULL, ((int32_t)((uint32_t)L_3>>((int32_t)16))), &m11658_MI);
		return ((int32_t)((int32_t)4+(int32_t)L_4));
	}
}
extern "C" int32_t m11660 (t2128 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_2 = m11659(NULL, L_1, &m11659_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_5 = m11659(NULL, L_4, &m11659_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_8 = m11659(NULL, L_7, &m11659_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_11 = m11659(NULL, L_10, &m11659_MI);
		return L_11;
	}

IL_0058:
	{
		return 0;
	}
}
extern "C" int32_t m11661 (t9 * __this , int64_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int64_t L_2 = m11652(NULL, L_1, &m11652_MI);
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
extern "C" int32_t m11662 (t2128 * __this, MethodInfo* method)
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
		int32_t L_8 = m11543(NULL, ((int32_t)((int32_t)L_6+(int32_t)2)), L_7, &m11543_MI);
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
		int32_t L_12 = m11543(NULL, ((int32_t)((int32_t)L_10+(int32_t)2)), ((int32_t)((int32_t)L_11+(int32_t)1)), &m11543_MI);
		return L_12;
	}

IL_0066:
	{
		int32_t L_13 = (__this->f15);
		return L_13;
	}
}
extern "C" int32_t m11663 (t9 * __this , t2* p0, MethodInfo* method)
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
		uint16_t L_2 = m2714(L_0, L_1, &m2714_MI);
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
		int32_t L_11 = m2699(L_10, &m2699_MI);
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
extern "C" void m11664 (t2128 * __this, t2* p0, MethodInfo* method)
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
		int32_t L_10 = m2699(L_9, &m2699_MI);
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
		uint16_t L_12 = m2714(L_11, 0, &m2714_MI);
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
		int32_t L_20 = m2699(L_19, &m2699_MI);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		t2* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_22 = m11663(NULL, L_21, &m11663_MI);
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
extern "C" void m11665 (t2128 * __this, uint64_t p0, MethodInfo* method)
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
		int32_t L_8 = m11660(__this, &m11660_MI);
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
extern "C" void m11666 (t2128 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11664(__this, L_0, &m11664_MI);
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
		m11665(__this, (((int64_t)L_5)), &m11665_MI);
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
		m11653(__this, L_8, &m11653_MI);
		int32_t L_9 = m11660(__this, &m11660_MI);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->f16 = L_10;
		int32_t L_11 = V_0;
		__this->f18 = L_11;
		return;
	}
}
extern "C" void m11667 (t2128 * __this, t2* p0, uint32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11664(__this, L_0, &m11664_MI);
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
		m11665(__this, (((uint64_t)L_4)), &m11665_MI);
		return;
	}

IL_002b:
	{
		uint32_t L_5 = p1;
		m11653(__this, L_5, &m11653_MI);
		int32_t L_6 = m11660(__this, &m11660_MI);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->f16 = L_7;
		int32_t L_8 = V_0;
		__this->f18 = L_8;
		return;
	}
}
extern "C" void m11668 (t2128 * __this, t2* p0, int64_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11664(__this, L_0, &m11664_MI);
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
		m11665(__this, L_4, &m11665_MI);
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
		m11654(__this, L_7, &m11654_MI);
		int32_t L_8 = m11660(__this, &m11660_MI);
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->f16 = L_9;
		int32_t L_10 = V_0;
		__this->f18 = L_10;
		return;
	}
}
extern "C" void m11669 (t2128 * __this, t2* p0, uint64_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		m11664(__this, L_0, &m11664_MI);
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
		m11665(__this, L_3, &m11665_MI);
		return;
	}

IL_002b:
	{
		uint64_t L_4 = p1;
		m11654(__this, L_4, &m11654_MI);
		int32_t L_5 = m11660(__this, &m11660_MI);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->f16 = L_6;
		int32_t L_7 = V_0;
		__this->f18 = L_7;
		return;
	}
}
extern "C" void m11670 (t2128 * __this, t2* p0, double p1, int32_t p2, MethodInfo* method)
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
		m11664(__this, L_0, &m11664_MI);
		int32_t L_1 = p2;
		__this->f15 = L_1;
		double L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		int64_t L_3 = m11129(NULL, L_2, &m11129_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_14 = m11661(NULL, L_13, &m11661_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int64_t L_19 = m11652(NULL, ((-L_18)), &m11652_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint64_t* L_23 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f0;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t* L_43 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f1;
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		int32_t L_46 = V_11;
		__this->f18 = ((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)((intptr_t)((intptr_t)L_43+(int32_t)((int32_t)((int32_t)L_44*(int32_t)4))))))+(int32_t)L_45))+(int32_t)L_46));
		int32_t L_47 = m11662(__this, &m11662_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int64_t L_52 = m11652(NULL, ((int32_t)((int32_t)L_50-(int32_t)L_51)), &m11652_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int64_t L_59 = m11652(NULL, L_58, &m11652_MI);
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
		m11654(__this, L_62, &m11654_MI);
		int32_t L_63 = m11690(__this, &m11690_MI);
		__this->f17 = L_63;
		int32_t L_64 = V_11;
		int32_t L_65 = (__this->f17);
		__this->f16 = ((int32_t)((int32_t)L_64-(int32_t)L_65));
		return;
	}
}
extern "C" void m11671 (t2128 * __this, t2* p0, t897  p1, MethodInfo* method)
{
	t1088* V_0 = {0};
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		m11664(__this, L_0, &m11664_MI);
		__this->f15 = ((int32_t)100);
		t897  L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t897_TI));
		t1088* L_2 = m7455(NULL, L_1, &m7455_MI);
		V_0 = L_2;
		t1088* L_3 = V_0;
		int32_t L_4 = 3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4))&(int32_t)((int32_t)2031616)))>>(int32_t)((int32_t)16)));
		t1088* L_5 = V_0;
		int32_t L_6 = 3;
		__this->f12 = ((((int32_t)((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1088* L_7 = V_0;
		int32_t L_8 = 0;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)))
		{
			goto IL_0058;
		}
	}
	{
		t1088* L_9 = V_0;
		int32_t L_10 = 1;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)))
		{
			goto IL_0058;
		}
	}
	{
		t1088* L_11 = V_0;
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
		t1088* L_14 = V_0;
		int32_t L_15 = 2;
		t1088* L_16 = V_0;
		int32_t L_17 = 1;
		t1088* L_18 = V_0;
		int32_t L_19 = 0;
		m11655(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_15)), ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_17))))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)(((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)))))))), &m11655_MI);
		int32_t L_20 = m11660(__this, &m11660_MI);
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
		int32_t L_25 = m11690(__this, &m11690_MI);
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
extern TypeInfo* t305_TI_var;
extern "C" void m11672 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	static bool m11672_init;
	if (!m11672_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m11672_init = true;
	}
	{
		__this->f24 = 0;
		t305* L_0 = (__this->f23);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) >= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = p0;
		__this->f23 = ((t305*)SZArrayNew(t305_TI_var, L_2));
	}

IL_001e:
	{
		return;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" void m11673 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	static bool m11673_init;
	if (!m11673_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m11673_init = true;
	}
	t305* V_0 = {0};
	{
		int32_t L_0 = p0;
		V_0 = ((t305*)SZArrayNew(t305_TI_var, L_0));
		t305* L_1 = (__this->f23);
		t305* L_2 = V_0;
		int32_t L_3 = (__this->f24);
		m5912(NULL, (t121 *)(t121 *)L_1, (t121 *)(t121 *)L_2, L_3, &m5912_MI);
		t305* L_4 = V_0;
		__this->f23 = L_4;
		return;
	}
}
extern "C" void m11674 (t2128 * __this, uint16_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		t305* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m11673(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), &m11673_MI);
	}

IL_001f:
	{
		t305* L_3 = (__this->f23);
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
extern "C" void m11675 (t2128 * __this, uint16_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f24);
		int32_t L_1 = p1;
		t305* L_2 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) <= ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = (__this->f24);
		int32_t L_4 = p1;
		m11673(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))+(int32_t)((int32_t)10))), &m11673_MI);
	}

IL_0023:
	{
		goto IL_003e;
	}

IL_0025:
	{
		t305* L_5 = (__this->f23);
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
extern "C" void m11676 (t2128 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f24);
		int32_t L_3 = V_0;
		t305* L_4 = (__this->f23);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = (__this->f24);
		int32_t L_6 = V_0;
		m11673(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))+(int32_t)((int32_t)10))), &m11673_MI);
	}

IL_002a:
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_002e:
	{
		t305* L_7 = (__this->f23);
		int32_t L_8 = (__this->f24);
		int32_t L_9 = L_8;
		V_2 = L_9;
		__this->f24 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = V_2;
		t2* L_11 = p0;
		int32_t L_12 = V_1;
		uint16_t L_13 = m2714(L_11, L_12, &m2714_MI);
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
extern "C" t1546 * m11677 (t2128 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1546 * L_0 = (__this->f7);
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
		t1546 * L_2 = (__this->f7);
		return L_2;
	}

IL_0012:
	{
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		t1546 * L_4 = m8739(NULL, L_3, &m8739_MI);
		return L_4;
	}
}
extern "C" void m11678 (t2128 * __this, t894 * p0, MethodInfo* method)
{
	{
		t894 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		t894 * L_1 = p0;
		bool L_2 = m8637(L_1, &m8637_MI);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		t894 * L_3 = p0;
		t1546 * L_4 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m8635_MI, L_3);
		__this->f7 = L_4;
		goto IL_0020;
	}

IL_0019:
	{
		__this->f7 = (t1546 *)NULL;
	}

IL_0020:
	{
		return;
	}
}
extern "C" int32_t m11679 (t2128 * __this, MethodInfo* method)
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
extern "C" int32_t m11680 (t2128 * __this, MethodInfo* method)
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
extern "C" bool m11681 (t2128 * __this, MethodInfo* method)
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
extern "C" bool m11682 (t2128 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11683 (t2128 * __this, MethodInfo* method)
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
extern "C" void m11684 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		m11686(__this, ((int32_t)((int32_t)L_0-(int32_t)L_1)), &m11686_MI);
		return;
	}
}
extern "C" bool m11685 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = (__this->f18);
		int32_t L_2 = p0;
		bool L_3 = m11686(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), &m11686_MI);
		return L_3;
	}
}
extern "C" bool m11686 (t2128 * __this, int32_t p0, MethodInfo* method)
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
		m11688(__this, &m11688_MI);
		int32_t L_29 = m11660(__this, &m11660_MI);
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
		m11687(__this, &m11687_MI);
		bool L_36 = V_2;
		return L_36;
	}
}
extern "C" void m11687 (t2128 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m11690(__this, &m11690_MI);
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
extern "C" void m11688 (t2128 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_4 = m11689(NULL, L_3, &m11689_MI);
		__this->f22 = L_4;
		goto IL_0060;
	}

IL_004f:
	{
		uint32_t L_5 = (__this->f21);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_6 = m11689(NULL, L_5, &m11689_MI);
		__this->f21 = L_6;
	}

IL_0060:
	{
		goto IL_0073;
	}

IL_0062:
	{
		uint32_t L_7 = (__this->f20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_8 = m11689(NULL, L_7, &m11689_MI);
		__this->f20 = L_8;
	}

IL_0073:
	{
		goto IL_0086;
	}

IL_0075:
	{
		uint32_t L_9 = (__this->f19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_10 = m11689(NULL, L_9, &m11689_MI);
		__this->f19 = L_10;
	}

IL_0086:
	{
		return;
	}
}
extern "C" uint32_t m11689 (t9 * __this , uint32_t p0, MethodInfo* method)
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
extern "C" int32_t m11690 (t2128 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_2 = m11691(NULL, L_1, &m11691_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_5 = m11691(NULL, L_4, &m11691_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_8 = m11691(NULL, L_7, &m11691_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_11 = m11691(NULL, L_10, &m11691_MI);
		return ((int32_t)((int32_t)L_11+(int32_t)((int32_t)24)));
	}

IL_0058:
	{
		int32_t L_12 = (__this->f16);
		return L_12;
	}
}
extern "C" int32_t m11691 (t9 * __this , uint32_t p0, MethodInfo* method)
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
extern "C" t2128 * m11692 (t9 * __this , MethodInfo* method)
{
	t2128 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = ((t2128_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2128_TI)))->f25;
		V_0 = L_0;
		((t2128_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2128_TI)))->f25 = (t2128 *)NULL;
		t2128 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_2 = m11013(NULL, &m11013_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_3 = (t2128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2128_TI));
		m11649(L_3, L_2, &m11649_MI);
		return L_3;
	}

IL_001a:
	{
		t2128 * L_4 = V_0;
		return L_4;
	}
}
extern "C" void m11693 (t2128 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		((t2128_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2128_TI)))->f25 = __this;
		return;
	}
}
extern MethodInfo m11694_MI;
extern "C" void m11694 (t9 * __this , t894 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = ((t2128_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2128_TI)))->f25;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_1 = ((t2128_TSFs*)il2cpp_codegen_get_thread_static_data(InitializedTypeInfo(&t2128_TI)))->f25;
		t894 * L_2 = p0;
		m11678(L_1, L_2, &m11678_MI);
	}

IL_0012:
	{
		return;
	}
}
extern MethodInfo m11695_MI;
extern "C" t2* m11695 (t9 * __this , t2* p0, int8_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		int8_t L_3 = p1;
		m11666(L_1, L_2, (((int32_t)L_3)), 3, &m11666_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11696_MI;
extern "C" t2* m11696 (t9 * __this , t2* p0, uint8_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		uint8_t L_3 = p1;
		m11666(L_1, L_2, L_3, 3, &m11666_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11697_MI;
extern "C" t2* m11697 (t9 * __this , t2* p0, uint16_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		uint16_t L_3 = p1;
		m11666(L_1, L_2, L_3, 5, &m11666_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11698_MI;
extern "C" t2* m11698 (t9 * __this , t2* p0, int16_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		int16_t L_3 = p1;
		m11666(L_1, L_2, L_3, 5, &m11666_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11699 (t9 * __this , t2* p0, uint32_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		uint32_t L_3 = p1;
		m11667(L_1, L_2, L_3, ((int32_t)10), &m11667_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11700 (t9 * __this , t2* p0, int32_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		int32_t L_3 = p1;
		m11666(L_1, L_2, L_3, ((int32_t)10), &m11666_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11701 (t9 * __this , t2* p0, uint64_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		uint64_t L_3 = p1;
		m11669(L_1, L_2, L_3, &m11669_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern "C" t2* m11702 (t9 * __this , t2* p0, int64_t p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		int64_t L_3 = p1;
		m11668(L_1, L_2, L_3, &m11668_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t9 * L_6 = p2;
		t2* L_7 = m11713(L_4, L_5, L_6, &m11713_MI);
		V_1 = L_7;
		t2128 * L_8 = V_0;
		m11693(L_8, &m11693_MI);
		t2* L_9 = V_1;
		return L_9;
	}
}
extern MethodInfo m11703_MI;
extern "C" t2* m11703 (t9 * __this , t2* p0, float p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t1546 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		float L_3 = p1;
		m11670(L_1, L_2, (((double)L_3)), 7, &m11670_MI);
		t2128 * L_4 = V_0;
		t9 * L_5 = p2;
		t1546 * L_6 = m11677(L_4, L_5, &m11677_MI);
		V_1 = L_6;
		t2128 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1546 * L_9 = V_1;
		t2* L_10 = m8718(L_9, &m8718_MI);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t2128 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t2128 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1546 * L_15 = V_1;
		t2* L_16 = m8735(L_15, &m8735_MI);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1546 * L_17 = V_1;
		t2* L_18 = m8719(L_17, &m8719_MI);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t2128 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t2128 * L_21 = V_0;
		float L_22 = p1;
		t1546 * L_23 = V_1;
		t2* L_24 = m11720(L_21, L_22, L_23, &m11720_MI);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t2128 * L_25 = V_0;
		t2* L_26 = p0;
		t1546 * L_27 = V_1;
		t2* L_28 = m11714(L_25, L_26, L_27, &m11714_MI);
		V_2 = L_28;
	}

IL_0069:
	{
		t2128 * L_29 = V_0;
		m11693(L_29, &m11693_MI);
		t2* L_30 = V_2;
		return L_30;
	}
}
extern MethodInfo m11704_MI;
extern "C" t2* m11704 (t9 * __this , t2* p0, double p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t1546 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		double L_3 = p1;
		m11670(L_1, L_2, L_3, ((int32_t)15), &m11670_MI);
		t2128 * L_4 = V_0;
		t9 * L_5 = p2;
		t1546 * L_6 = m11677(L_4, L_5, &m11677_MI);
		V_1 = L_6;
		t2128 * L_7 = V_0;
		bool L_8 = (L_7->f8);
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		t1546 * L_9 = V_1;
		t2* L_10 = m8718(L_9, &m8718_MI);
		V_2 = L_10;
		goto IL_0069;
	}

IL_0029:
	{
		t2128 * L_11 = V_0;
		bool L_12 = (L_11->f9);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		t2128 * L_13 = V_0;
		bool L_14 = (L_13->f12);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		t1546 * L_15 = V_1;
		t2* L_16 = m8735(L_15, &m8735_MI);
		V_2 = L_16;
		goto IL_0049;
	}

IL_0042:
	{
		t1546 * L_17 = V_1;
		t2* L_18 = m8719(L_17, &m8719_MI);
		V_2 = L_18;
	}

IL_0049:
	{
		goto IL_0069;
	}

IL_004b:
	{
		t2128 * L_19 = V_0;
		uint16_t L_20 = (L_19->f13);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_0060;
		}
	}
	{
		t2128 * L_21 = V_0;
		double L_22 = p1;
		t1546 * L_23 = V_1;
		t2* L_24 = m11719(L_21, L_22, L_23, &m11719_MI);
		V_2 = L_24;
		goto IL_0069;
	}

IL_0060:
	{
		t2128 * L_25 = V_0;
		t2* L_26 = p0;
		t1546 * L_27 = V_1;
		t2* L_28 = m11714(L_25, L_26, L_27, &m11714_MI);
		V_2 = L_28;
	}

IL_0069:
	{
		t2128 * L_29 = V_0;
		m11693(L_29, &m11693_MI);
		t2* L_30 = V_2;
		return L_30;
	}
}
extern MethodInfo m11705_MI;
extern "C" t2* m11705 (t9 * __this , t2* p0, t897  p1, t9 * p2, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t2* L_2 = p0;
		t897  L_3 = p1;
		m11671(L_1, L_2, L_3, &m11671_MI);
		t2128 * L_4 = V_0;
		t2* L_5 = p0;
		t2128 * L_6 = V_0;
		t9 * L_7 = p2;
		t1546 * L_8 = m11677(L_6, L_7, &m11677_MI);
		t2* L_9 = m11714(L_4, L_5, L_8, &m11714_MI);
		V_1 = L_9;
		t2128 * L_10 = V_0;
		m11693(L_10, &m11693_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11706_MI;
extern "C" t2* m11706 (t9 * __this , uint32_t p0, t9 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2* L_3 = m11699(NULL, (t2*)NULL, L_1, L_2, &m11699_MI);
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_4 = m11692(NULL, &m11692_MI);
		V_0 = L_4;
		t2128 * L_5 = V_0;
		uint32_t L_6 = p0;
		t9 * L_7 = p1;
		t2* L_8 = m11712(L_5, L_6, L_7, &m11712_MI);
		V_1 = L_8;
		t2128 * L_9 = V_0;
		m11693(L_9, &m11693_MI);
		t2* L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m11707_MI;
extern "C" t2* m11707 (t9 * __this , int32_t p0, t9 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2* L_4 = m11700(NULL, (t2*)NULL, L_2, L_3, &m11700_MI);
		return L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_5 = m11692(NULL, &m11692_MI);
		V_0 = L_5;
		t2128 * L_6 = V_0;
		int32_t L_7 = p0;
		t9 * L_8 = p1;
		t2* L_9 = m11712(L_6, L_7, L_8, &m11712_MI);
		V_1 = L_9;
		t2128 * L_10 = V_0;
		m11693(L_10, &m11693_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11708_MI;
extern "C" t2* m11708 (t9 * __this , uint64_t p0, t9 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2* L_3 = m11701(NULL, (t2*)NULL, L_1, L_2, &m11701_MI);
		return L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_4 = m11692(NULL, &m11692_MI);
		V_0 = L_4;
		t2128 * L_5 = V_0;
		uint64_t L_6 = p0;
		t9 * L_7 = p1;
		t2* L_8 = m11712(L_5, (((int32_t)L_6)), L_7, &m11712_MI);
		V_1 = L_8;
		t2128 * L_9 = V_0;
		m11693(L_9, &m11693_MI);
		t2* L_10 = V_1;
		return L_10;
	}
}
extern MethodInfo m11709_MI;
extern "C" t2* m11709 (t9 * __this , int64_t p0, t9 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2* L_4 = m11702(NULL, (t2*)NULL, L_2, L_3, &m11702_MI);
		return L_4;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_5 = m11692(NULL, &m11692_MI);
		V_0 = L_5;
		t2128 * L_6 = V_0;
		int64_t L_7 = p0;
		t9 * L_8 = p1;
		t2* L_9 = m11712(L_6, (((int32_t)L_7)), L_8, &m11712_MI);
		V_1 = L_9;
		t2128 * L_10 = V_0;
		m11693(L_10, &m11693_MI);
		t2* L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m11710_MI;
extern "C" t2* m11710 (t9 * __this , float p0, t9 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t1546 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		float L_2 = p0;
		m11670(L_1, (t2*)NULL, (((double)L_2)), 7, &m11670_MI);
		t2128 * L_3 = V_0;
		t9 * L_4 = p1;
		t1546 * L_5 = m11677(L_3, L_4, &m11677_MI);
		V_1 = L_5;
		t2128 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1546 * L_8 = V_1;
		t2* L_9 = m8718(L_8, &m8718_MI);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t2128 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t2128 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1546 * L_14 = V_1;
		t2* L_15 = m8735(L_14, &m8735_MI);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1546 * L_16 = V_1;
		t2* L_17 = m8719(L_16, &m8719_MI);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t2128 * L_18 = V_0;
		t1546 * L_19 = V_1;
		t2* L_20 = m11721(L_18, (-1), L_19, &m11721_MI);
		V_2 = L_20;
	}

IL_0054:
	{
		t2128 * L_21 = V_0;
		m11693(L_21, &m11693_MI);
		t2* L_22 = V_2;
		return L_22;
	}
}
extern MethodInfo m11711_MI;
extern "C" t2* m11711 (t9 * __this , double p0, t9 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t1546 * V_1 = {0};
	t2* V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		t2128 * L_0 = m11692(NULL, &m11692_MI);
		V_0 = L_0;
		t2128 * L_1 = V_0;
		t9 * L_2 = p1;
		t1546 * L_3 = m11677(L_1, L_2, &m11677_MI);
		V_1 = L_3;
		t2128 * L_4 = V_0;
		double L_5 = p0;
		m11670(L_4, (t2*)NULL, L_5, ((int32_t)15), &m11670_MI);
		t2128 * L_6 = V_0;
		bool L_7 = (L_6->f8);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		t1546 * L_8 = V_1;
		t2* L_9 = m8718(L_8, &m8718_MI);
		V_2 = L_9;
		goto IL_0054;
	}

IL_0029:
	{
		t2128 * L_10 = V_0;
		bool L_11 = (L_10->f9);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		t2128 * L_12 = V_0;
		bool L_13 = (L_12->f12);
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		t1546 * L_14 = V_1;
		t2* L_15 = m8735(L_14, &m8735_MI);
		V_2 = L_15;
		goto IL_0049;
	}

IL_0042:
	{
		t1546 * L_16 = V_1;
		t2* L_17 = m8719(L_16, &m8719_MI);
		V_2 = L_17;
	}

IL_0049:
	{
		goto IL_0054;
	}

IL_004b:
	{
		t2128 * L_18 = V_0;
		t1546 * L_19 = V_1;
		t2* L_20 = m11721(L_18, (-1), L_19, &m11721_MI);
		V_2 = L_20;
	}

IL_0054:
	{
		t2128 * L_21 = V_0;
		m11693(L_21, &m11693_MI);
		t2* L_22 = V_2;
		return L_22;
	}
}
extern "C" t2* m11712 (t2128 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		t1546 * L_2 = m11677(__this, L_1, &m11677_MI);
		t2* L_3 = m8720(L_2, &m8720_MI);
		V_0 = L_3;
		t2* L_4 = V_0;
		int32_t L_5 = m2699(L_4, &m2699_MI);
		m11672(__this, ((int32_t)((int32_t)8+(int32_t)L_5)), &m11672_MI);
		int32_t L_6 = p0;
		p0 = ((-L_6));
		t2* L_7 = V_0;
		m11676(__this, L_7, &m11676_MI);
		goto IL_0035;
	}

IL_002e:
	{
		m11672(__this, 8, &m11672_MI);
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
		m11737(__this, L_10, 0, &m11737_MI);
		int32_t L_11 = p0;
		int32_t L_12 = V_1;
		m11737(__this, ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)10000))))), 1, &m11737_MI);
		goto IL_0067;
	}

IL_005f:
	{
		int32_t L_13 = p0;
		m11737(__this, L_13, 0, &m11737_MI);
	}

IL_0067:
	{
		t305* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_16 = m4353(L_16, L_14, 0, L_15, &m4333_MI);
		return L_16;
	}
}
extern "C" t2* m11713 (t2128 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1546 * V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		t9 * L_0 = p1;
		t1546 * L_1 = m11677(__this, L_0, &m11677_MI);
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
		t1546 * L_6 = V_0;
		t2* L_7 = m11715(__this, L_5, L_6, &m11715_MI);
		return L_7;
	}

IL_0068:
	{
		int32_t L_8 = (__this->f14);
		t1546 * L_9 = V_0;
		t2* L_10 = m11716(__this, L_8, L_9, &m11716_MI);
		return L_10;
	}

IL_0076:
	{
		int32_t L_11 = (__this->f14);
		t1546 * L_12 = V_0;
		t2* L_13 = m11724(__this, L_11, L_12, &m11724_MI);
		return L_13;
	}

IL_0084:
	{
		int32_t L_14 = (__this->f14);
		t1546 * L_15 = V_0;
		t2* L_16 = m11718(__this, L_14, L_15, &m11718_MI);
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
		t1546 * L_18 = V_0;
		t2* L_19 = m11716(__this, (-1), L_18, &m11716_MI);
		return L_19;
	}

IL_00a4:
	{
		int32_t L_20 = (__this->f14);
		t1546 * L_21 = V_0;
		t2* L_22 = m11721(__this, L_20, L_21, &m11721_MI);
		return L_22;
	}

IL_00b2:
	{
		int32_t L_23 = (__this->f14);
		t1546 * L_24 = V_0;
		t2* L_25 = m11722(__this, L_23, L_24, &m11722_MI);
		return L_25;
	}

IL_00c0:
	{
		int32_t L_26 = (__this->f14);
		t1546 * L_27 = V_0;
		t2* L_28 = m11723(__this, L_26, L_27, &m11723_MI);
		return L_28;
	}

IL_00ce:
	{
		int32_t L_29 = (__this->f14);
		t2* L_30 = m11717(__this, L_29, &m11717_MI);
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
		t1546 * L_33 = V_0;
		t2* L_34 = m11726(__this, L_32, L_33, &m11726_MI);
		return L_34;
	}

IL_00ec:
	{
		t2* L_35 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_36 = m399(NULL, (t2*) &_stringLiteral2781, L_35, (t2*) &_stringLiteral2782, &m399_MI);
		t883 * L_37 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_37, L_36, &m4288_MI);
		il2cpp_codegen_raise_exception(L_37);
	}
}
extern "C" t2* m11714 (t2128 * __this, t2* p0, t1546 * p1, MethodInfo* method)
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
		t1546 * L_5 = p1;
		t2* L_6 = m11715(__this, L_4, L_5, &m11715_MI);
		return L_6;
	}

IL_004e:
	{
		int32_t L_7 = (__this->f14);
		t1546 * L_8 = p1;
		t2* L_9 = m11724(__this, L_7, L_8, &m11724_MI);
		return L_9;
	}

IL_005c:
	{
		int32_t L_10 = (__this->f14);
		t1546 * L_11 = p1;
		t2* L_12 = m11718(__this, L_10, L_11, &m11718_MI);
		return L_12;
	}

IL_006a:
	{
		int32_t L_13 = (__this->f14);
		t1546 * L_14 = p1;
		t2* L_15 = m11721(__this, L_13, L_14, &m11721_MI);
		return L_15;
	}

IL_0078:
	{
		int32_t L_16 = (__this->f14);
		t1546 * L_17 = p1;
		t2* L_18 = m11722(__this, L_16, L_17, &m11722_MI);
		return L_18;
	}

IL_0086:
	{
		int32_t L_19 = (__this->f14);
		t1546 * L_20 = p1;
		t2* L_21 = m11723(__this, L_19, L_20, &m11723_MI);
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
		t1546 * L_24 = p1;
		t2* L_25 = m11726(__this, L_23, L_24, &m11726_MI);
		return L_25;
	}

IL_00a5:
	{
		t2* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_27 = m399(NULL, (t2*) &_stringLiteral2781, L_26, (t2*) &_stringLiteral2782, &m399_MI);
		t883 * L_28 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_28, L_27, &m4288_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" t2* m11715 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
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
		t1546 * L_2 = p1;
		int32_t L_3 = m8709(L_2, &m8709_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = p0;
		m11685(__this, L_4, &m11685_MI);
		int32_t L_5 = m11679(__this, &m11679_MI);
		int32_t L_6 = p0;
		m11672(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)((int32_t)((int32_t)L_6*(int32_t)2))))+(int32_t)((int32_t)16))), &m11672_MI);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1546 * L_8 = p1;
		int32_t L_9 = m8714(L_8, &m8714_MI);
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
		t1546 * L_11 = p1;
		t2* L_12 = m8715(L_11, &m8715_MI);
		m11676(__this, L_12, &m11676_MI);
		goto IL_0075;
	}

IL_005f:
	{
		t1546 * L_13 = p1;
		t2* L_14 = m8715(L_13, &m8715_MI);
		m11676(__this, L_14, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		goto IL_0075;
	}

IL_0075:
	{
		goto IL_01e1;
	}

IL_007a:
	{
		t1546 * L_15 = p1;
		int32_t L_16 = m8713(L_15, &m8713_MI);
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
		m11674(__this, ((int32_t)40), &m11674_MI);
		t1546 * L_18 = p1;
		t2* L_19 = m8715(L_18, &m8715_MI);
		m11676(__this, L_19, &m11676_MI);
		goto IL_01e1;
	}

IL_00e5:
	{
		t1546 * L_20 = p1;
		t2* L_21 = m8720(L_20, &m8720_MI);
		m11676(__this, L_21, &m11676_MI);
		t1546 * L_22 = p1;
		t2* L_23 = m8715(L_22, &m8715_MI);
		m11676(__this, L_23, &m11676_MI);
		goto IL_01e1;
	}

IL_0102:
	{
		t1546 * L_24 = p1;
		t2* L_25 = m8715(L_24, &m8715_MI);
		m11676(__this, L_25, &m11676_MI);
		t1546 * L_26 = p1;
		t2* L_27 = m8720(L_26, &m8720_MI);
		m11676(__this, L_27, &m11676_MI);
		goto IL_01e1;
	}

IL_011f:
	{
		t1546 * L_28 = p1;
		t2* L_29 = m8715(L_28, &m8715_MI);
		m11676(__this, L_29, &m11676_MI);
		goto IL_01e1;
	}

IL_0130:
	{
		m11674(__this, ((int32_t)40), &m11674_MI);
		goto IL_01e1;
	}

IL_013d:
	{
		t1546 * L_30 = p1;
		t2* L_31 = m8720(L_30, &m8720_MI);
		m11676(__this, L_31, &m11676_MI);
		goto IL_01e1;
	}

IL_014e:
	{
		t1546 * L_32 = p1;
		t2* L_33 = m8720(L_32, &m8720_MI);
		m11676(__this, L_33, &m11676_MI);
		goto IL_01e1;
	}

IL_015f:
	{
		t1546 * L_34 = p1;
		t2* L_35 = m8720(L_34, &m8720_MI);
		m11676(__this, L_35, &m11676_MI);
		t1546 * L_36 = p1;
		t2* L_37 = m8715(L_36, &m8715_MI);
		m11676(__this, L_37, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		goto IL_01e1;
	}

IL_0181:
	{
		t1546 * L_38 = p1;
		t2* L_39 = m8715(L_38, &m8715_MI);
		m11676(__this, L_39, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		goto IL_01e1;
	}

IL_0197:
	{
		t1546 * L_40 = p1;
		t2* L_41 = m8715(L_40, &m8715_MI);
		m11676(__this, L_41, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_42 = p1;
		t2* L_43 = m8720(L_42, &m8720_MI);
		m11676(__this, L_43, &m11676_MI);
		goto IL_01e1;
	}

IL_01b9:
	{
		m11674(__this, ((int32_t)40), &m11674_MI);
		t1546 * L_44 = p1;
		t2* L_45 = m8715(L_44, &m8715_MI);
		m11676(__this, L_45, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		goto IL_01e1;
	}

IL_01d7:
	{
		m11674(__this, ((int32_t)40), &m11674_MI);
		goto IL_01e1;
	}

IL_01e1:
	{
		t1546 * L_46 = p1;
		t1088* L_47 = m8712(L_46, &m8712_MI);
		t1546 * L_48 = p1;
		t2* L_49 = m8711(L_48, &m8711_MI);
		m11734(__this, L_47, L_49, &m11734_MI);
		int32_t L_50 = p0;
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_020a;
		}
	}
	{
		t1546 * L_51 = p1;
		t2* L_52 = m8710(L_51, &m8710_MI);
		m11676(__this, L_52, &m11676_MI);
		int32_t L_53 = p0;
		m11733(__this, L_53, &m11733_MI);
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
		t1546 * L_55 = p1;
		int32_t L_56 = m8714(L_55, &m8714_MI);
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
		t1546 * L_58 = p1;
		t2* L_59 = m8715(L_58, &m8715_MI);
		m11676(__this, L_59, &m11676_MI);
		goto IL_0253;
	}

IL_023d:
	{
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_60 = p1;
		t2* L_61 = m8715(L_60, &m8715_MI);
		m11676(__this, L_61, &m11676_MI);
		goto IL_0253;
	}

IL_0253:
	{
		goto IL_03bf;
	}

IL_0258:
	{
		t1546 * L_62 = p1;
		int32_t L_63 = m8713(L_62, &m8713_MI);
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
		m11674(__this, ((int32_t)41), &m11674_MI);
		goto IL_03bf;
	}

IL_02b7:
	{
		t1546 * L_65 = p1;
		t2* L_66 = m8720(L_65, &m8720_MI);
		m11676(__this, L_66, &m11676_MI);
		goto IL_03bf;
	}

IL_02c8:
	{
		t1546 * L_67 = p1;
		t2* L_68 = m8715(L_67, &m8715_MI);
		m11676(__this, L_68, &m11676_MI);
		m11674(__this, ((int32_t)41), &m11674_MI);
		goto IL_03bf;
	}

IL_02e1:
	{
		t1546 * L_69 = p1;
		t2* L_70 = m8715(L_69, &m8715_MI);
		m11676(__this, L_70, &m11676_MI);
		goto IL_03bf;
	}

IL_02f2:
	{
		t1546 * L_71 = p1;
		t2* L_72 = m8720(L_71, &m8720_MI);
		m11676(__this, L_72, &m11676_MI);
		t1546 * L_73 = p1;
		t2* L_74 = m8715(L_73, &m8715_MI);
		m11676(__this, L_74, &m11676_MI);
		goto IL_03bf;
	}

IL_030f:
	{
		t1546 * L_75 = p1;
		t2* L_76 = m8715(L_75, &m8715_MI);
		m11676(__this, L_76, &m11676_MI);
		t1546 * L_77 = p1;
		t2* L_78 = m8720(L_77, &m8720_MI);
		m11676(__this, L_78, &m11676_MI);
		goto IL_03bf;
	}

IL_032c:
	{
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_79 = p1;
		t2* L_80 = m8715(L_79, &m8715_MI);
		m11676(__this, L_80, &m11676_MI);
		goto IL_03bf;
	}

IL_0345:
	{
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_81 = p1;
		t2* L_82 = m8715(L_81, &m8715_MI);
		m11676(__this, L_82, &m11676_MI);
		t1546 * L_83 = p1;
		t2* L_84 = m8720(L_83, &m8720_MI);
		m11676(__this, L_84, &m11676_MI);
		goto IL_03bf;
	}

IL_0367:
	{
		t1546 * L_85 = p1;
		t2* L_86 = m8720(L_85, &m8720_MI);
		m11676(__this, L_86, &m11676_MI);
		goto IL_03bf;
	}

IL_0375:
	{
		t1546 * L_87 = p1;
		t2* L_88 = m8720(L_87, &m8720_MI);
		m11676(__this, L_88, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_89 = p1;
		t2* L_90 = m8715(L_89, &m8715_MI);
		m11676(__this, L_90, &m11676_MI);
		goto IL_03bf;
	}

IL_0397:
	{
		m11674(__this, ((int32_t)41), &m11674_MI);
		goto IL_03bf;
	}

IL_03a1:
	{
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_91 = p1;
		t2* L_92 = m8715(L_91, &m8715_MI);
		m11676(__this, L_92, &m11676_MI);
		m11674(__this, ((int32_t)41), &m11674_MI);
		goto IL_03bf;
	}

IL_03bf:
	{
		t305* L_93 = (__this->f23);
		int32_t L_94 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_95 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_95 = m4353(L_95, L_93, 0, L_94, &m4333_MI);
		return L_95;
	}
}
extern "C" t2* m11716 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
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
		return (t2*) &_stringLiteral695;
	}

IL_001c:
	{
		int32_t L_4 = p0;
		m11672(__this, ((int32_t)((int32_t)L_4+(int32_t)1)), &m11672_MI);
		bool L_5 = (__this->f12);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		t1546 * L_6 = p1;
		t2* L_7 = m8720(L_6, &m8720_MI);
		m11676(__this, L_7, &m11676_MI);
	}

IL_0039:
	{
		int32_t L_8 = p0;
		m11738(__this, 0, L_8, &m11738_MI);
		t305* L_9 = (__this->f23);
		int32_t L_10 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_11 = m4353(L_11, L_9, 0, L_10, &m4333_MI);
		return L_11;
	}
}
extern "C" t2* m11717 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t* V_1 = {0};
	uint64_t V_2 = 0;
	uint16_t* G_B3_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f18);
		int32_t L_2 = m6875(NULL, L_0, L_1, &m6875_MI);
		V_0 = L_2;
		bool L_3 = (__this->f11);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint16_t* L_4 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f3;
		G_B3_0 = L_4;
		goto IL_0021;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint16_t* L_5 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f2;
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_1 = (uint16_t*)G_B3_0;
		int32_t L_6 = V_0;
		m11672(__this, L_6, &m11672_MI);
		int32_t L_7 = V_0;
		__this->f24 = L_7;
		uint32_t L_8 = (__this->f19);
		uint32_t L_9 = (__this->f20);
		V_2 = ((int64_t)((int64_t)(((uint64_t)L_8))|(int64_t)((int64_t)((int64_t)(((uint64_t)L_9))<<(int32_t)((int32_t)32)))));
		goto IL_0061;
	}

IL_0045:
	{
		t305* L_10 = (__this->f23);
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
		t305* L_17 = (__this->f23);
		int32_t L_18 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4353(L_19, L_17, 0, L_18, &m4333_MI);
		return L_19;
	}
}
extern "C" t2* m11718 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		t1546 * L_1 = p1;
		int32_t L_2 = m8721(L_1, &m8721_MI);
		p0 = L_2;
	}

IL_000e:
	{
		int32_t L_3 = p0;
		m11685(__this, L_3, &m11685_MI);
		int32_t L_4 = m11679(__this, &m11679_MI);
		int32_t L_5 = p0;
		m11672(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)2)), &m11672_MI);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1546 * L_7 = p1;
		t2* L_8 = m8720(L_7, &m8720_MI);
		m11676(__this, L_8, &m11676_MI);
	}

IL_003a:
	{
		int32_t L_9 = m11679(__this, &m11679_MI);
		m11731(__this, L_9, &m11731_MI);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		t1546 * L_11 = p1;
		t2* L_12 = m8722(L_11, &m8722_MI);
		m11676(__this, L_12, &m11676_MI);
		int32_t L_13 = p0;
		m11733(__this, L_13, &m11733_MI);
	}

IL_005d:
	{
		t305* L_14 = (__this->f23);
		int32_t L_15 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_16 = m4353(L_16, L_14, 0, L_15, &m4333_MI);
		return L_16;
	}
}
extern "C" t2* m11719 (t2128 * __this, double p0, t1546 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		t2128 * L_0 = m11742(__this, &m11742_MI);
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
		t1546 * L_4 = p1;
		t2* L_5 = m11721(__this, L_3, L_4, &m11721_MI);
		V_1 = L_5;
		double L_6 = p0;
		t2* L_7 = V_1;
		t1546 * L_8 = p1;
		double L_9 = m7425(NULL, L_7, L_8, &m7425_MI);
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
		t2128 * L_11 = V_0;
		int32_t L_12 = (__this->f15);
		t1546 * L_13 = p1;
		t2* L_14 = m11721(L_11, ((int32_t)((int32_t)L_12+(int32_t)2)), L_13, &m11721_MI);
		return L_14;
	}
}
extern "C" t2* m11720 (t2128 * __this, float p0, t1546 * p1, MethodInfo* method)
{
	t2128 * V_0 = {0};
	t2* V_1 = {0};
	{
		t2128 * L_0 = m11742(__this, &m11742_MI);
		V_0 = L_0;
		int32_t L_1 = (__this->f15);
		t1546 * L_2 = p1;
		t2* L_3 = m11721(__this, L_1, L_2, &m11721_MI);
		V_1 = L_3;
		float L_4 = p0;
		t2* L_5 = V_1;
		t1546 * L_6 = p1;
		float L_7 = m7397(NULL, L_5, L_6, &m7397_MI);
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
		t2128 * L_9 = V_0;
		int32_t L_10 = (__this->f15);
		t1546 * L_11 = p1;
		t2* L_12 = m11721(L_9, ((int32_t)((int32_t)L_10+(int32_t)2)), L_11, &m11721_MI);
		return L_12;
	}
}
extern "C" t2* m11721 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
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
		bool L_1 = m11681(__this, &m11681_MI);
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
		m11684(__this, L_5, &m11684_MI);
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
		t1546 * L_15 = p1;
		t2* L_16 = m11725(__this, ((int32_t)((int32_t)L_14-(int32_t)1)), L_15, 2, &m11725_MI);
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
		m11672(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_19+(int32_t)L_20))+(int32_t)3)), &m11672_MI);
		bool L_21 = (__this->f12);
		if (L_21)
		{
			goto IL_0082;
		}
	}
	{
		t1546 * L_22 = p1;
		t2* L_23 = m8720(L_22, &m8720_MI);
		m11676(__this, L_23, &m11676_MI);
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
		m11674(__this, ((int32_t)48), &m11674_MI);
		goto IL_0099;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		m11738(__this, ((int32_t)((int32_t)L_25-(int32_t)L_26)), L_27, &m11738_MI);
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
		t1546 * L_29 = p1;
		t2* L_30 = m8722(L_29, &m8722_MI);
		m11676(__this, L_30, &m11676_MI);
		int32_t L_31 = V_3;
		m11738(__this, 0, L_31, &m11738_MI);
	}

IL_00b1:
	{
		t305* L_32 = (__this->f23);
		int32_t L_33 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_34 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_34 = m4353(L_34, L_32, 0, L_33, &m4333_MI);
		return L_34;
	}
}
extern "C" t2* m11722 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
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
		t1546 * L_2 = p1;
		int32_t L_3 = m8721(L_2, &m8721_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		int32_t L_4 = m11679(__this, &m11679_MI);
		int32_t L_5 = p0;
		m11672(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4*(int32_t)3))+(int32_t)L_5)), &m11672_MI);
		int32_t L_6 = p0;
		m11685(__this, L_6, &m11685_MI);
		bool L_7 = (__this->f12);
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		t1546 * L_8 = p1;
		int32_t L_9 = m8725(L_8, &m8725_MI);
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
		m11674(__this, ((int32_t)40), &m11674_MI);
		goto IL_007a;
	}

IL_0056:
	{
		t1546 * L_11 = p1;
		t2* L_12 = m8720(L_11, &m8720_MI);
		m11676(__this, L_12, &m11676_MI);
		goto IL_007a;
	}

IL_0064:
	{
		t1546 * L_13 = p1;
		t2* L_14 = m8720(L_13, &m8720_MI);
		m11676(__this, L_14, &m11676_MI);
		m11674(__this, ((int32_t)32), &m11674_MI);
		goto IL_007a;
	}

IL_007a:
	{
		t1546 * L_15 = p1;
		t1088* L_16 = m8724(L_15, &m8724_MI);
		t1546 * L_17 = p1;
		t2* L_18 = m8723(L_17, &m8723_MI);
		m11734(__this, L_16, L_18, &m11734_MI);
		int32_t L_19 = p0;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		t1546 * L_20 = p1;
		t2* L_21 = m8722(L_20, &m8722_MI);
		m11676(__this, L_21, &m11676_MI);
		int32_t L_22 = p0;
		m11733(__this, L_22, &m11733_MI);
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
		t1546 * L_24 = p1;
		int32_t L_25 = m8725(L_24, &m8725_MI);
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
		m11674(__this, ((int32_t)41), &m11674_MI);
		goto IL_00fc;
	}

IL_00d8:
	{
		t1546 * L_27 = p1;
		t2* L_28 = m8720(L_27, &m8720_MI);
		m11676(__this, L_28, &m11676_MI);
		goto IL_00fc;
	}

IL_00e6:
	{
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_29 = p1;
		t2* L_30 = m8720(L_29, &m8720_MI);
		m11676(__this, L_30, &m11676_MI);
		goto IL_00fc;
	}

IL_00fc:
	{
		t305* L_31 = (__this->f23);
		int32_t L_32 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_33 = m4353(L_33, L_31, 0, L_32, &m4333_MI);
		return L_33;
	}
}
extern "C" t2* m11723 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
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
		t1546 * L_2 = p1;
		int32_t L_3 = m8727(L_2, &m8727_MI);
		G_B3_0 = L_3;
	}

IL_000d:
	{
		p0 = G_B3_0;
		m11740(__this, 2, &m11740_MI);
		int32_t L_4 = p0;
		m11685(__this, L_4, &m11685_MI);
		int32_t L_5 = m11679(__this, &m11679_MI);
		int32_t L_6 = p0;
		m11672(__this, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)2))+(int32_t)L_6))+(int32_t)((int32_t)16))), &m11672_MI);
		bool L_7 = (__this->f12);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		t1546 * L_8 = p1;
		int32_t L_9 = m8732(L_8, &m8732_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0050;
		}
	}
	{
		t1546 * L_10 = p1;
		t2* L_11 = m8733(L_10, &m8733_MI);
		m11676(__this, L_11, &m11676_MI);
	}

IL_0050:
	{
		goto IL_00a3;
	}

IL_0052:
	{
		t1546 * L_12 = p1;
		int32_t L_13 = m8731(L_12, &m8731_MI);
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
		t1546 * L_15 = p1;
		t2* L_16 = m8720(L_15, &m8720_MI);
		m11676(__this, L_16, &m11676_MI);
		goto IL_00a3;
	}

IL_007b:
	{
		t1546 * L_17 = p1;
		t2* L_18 = m8720(L_17, &m8720_MI);
		m11676(__this, L_18, &m11676_MI);
		goto IL_00a3;
	}

IL_0089:
	{
		t1546 * L_19 = p1;
		t2* L_20 = m8720(L_19, &m8720_MI);
		m11676(__this, L_20, &m11676_MI);
		t1546 * L_21 = p1;
		t2* L_22 = m8733(L_21, &m8733_MI);
		m11676(__this, L_22, &m11676_MI);
		goto IL_00a3;
	}

IL_00a3:
	{
		t1546 * L_23 = p1;
		t1088* L_24 = m8730(L_23, &m8730_MI);
		t1546 * L_25 = p1;
		t2* L_26 = m8729(L_25, &m8729_MI);
		m11734(__this, L_24, L_26, &m11734_MI);
		int32_t L_27 = p0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		t1546 * L_28 = p1;
		t2* L_29 = m8728(L_28, &m8728_MI);
		m11676(__this, L_29, &m11676_MI);
		int32_t L_30 = p0;
		m11733(__this, L_30, &m11733_MI);
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
		t1546 * L_32 = p1;
		int32_t L_33 = m8732(L_32, &m8732_MI);
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
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_36 = p1;
		t2* L_37 = m8733(L_36, &m8733_MI);
		m11676(__this, L_37, &m11676_MI);
		goto IL_0108;
	}

IL_00fa:
	{
		t1546 * L_38 = p1;
		t2* L_39 = m8733(L_38, &m8733_MI);
		m11676(__this, L_39, &m11676_MI);
		goto IL_0108;
	}

IL_0108:
	{
		goto IL_013e;
	}

IL_010a:
	{
		t1546 * L_40 = p1;
		int32_t L_41 = m8731(L_40, &m8731_MI);
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
		m11674(__this, ((int32_t)32), &m11674_MI);
		t1546 * L_44 = p1;
		t2* L_45 = m8733(L_44, &m8733_MI);
		m11676(__this, L_45, &m11676_MI);
		goto IL_013e;
	}

IL_0130:
	{
		t1546 * L_46 = p1;
		t2* L_47 = m8733(L_46, &m8733_MI);
		m11676(__this, L_47, &m11676_MI);
		goto IL_013e;
	}

IL_013e:
	{
		t305* L_48 = (__this->f23);
		int32_t L_49 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_50 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_50 = m4353(L_50, L_48, 0, L_49, &m4333_MI);
		return L_50;
	}
}
extern "C" t2* m11724 (t2128 * __this, int32_t p0, t1546 * p1, MethodInfo* method)
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
		m11684(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), &m11684_MI);
		int32_t L_2 = p0;
		t1546 * L_3 = p1;
		t2* L_4 = m11725(__this, L_2, L_3, 3, &m11725_MI);
		return L_4;
	}
}
extern "C" t2* m11725 (t2128 * __this, int32_t p0, t1546 * p1, int32_t p2, MethodInfo* method)
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
		m11672(__this, ((int32_t)((int32_t)L_5+(int32_t)8)), &m11672_MI);
		bool L_6 = (__this->f12);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		t1546 * L_7 = p1;
		t2* L_8 = m8720(L_7, &m8720_MI);
		m11676(__this, L_8, &m11676_MI);
	}

IL_003a:
	{
		int32_t L_9 = V_1;
		m11736(__this, ((int32_t)((int32_t)L_9-(int32_t)1)), &m11736_MI);
		int32_t L_10 = p0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		t1546 * L_11 = p1;
		t2* L_12 = m8722(L_11, &m8722_MI);
		m11676(__this, L_12, &m11676_MI);
		int32_t L_13 = V_1;
		int32_t L_14 = p0;
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->f18);
		m11738(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))-(int32_t)1)), ((int32_t)((int32_t)L_15-(int32_t)L_16)), &m11738_MI);
	}

IL_0066:
	{
		t1546 * L_17 = p1;
		int32_t L_18 = V_2;
		int32_t L_19 = p2;
		m11735(__this, L_17, L_18, L_19, &m11735_MI);
		t305* L_20 = (__this->f23);
		int32_t L_21 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_22 = m4353(L_22, L_20, 0, L_21, &m4333_MI);
		return L_22;
	}
}
extern "C" t2* m11726 (t2128 * __this, t2* p0, t1546 * p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t2127 * V_3 = {0};
	t315 * V_4 = {0};
	t315 * V_5 = {0};
	t315 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t2* G_B4_0 = {0};
	t315 * G_B8_0 = {0};
	t315 * G_B21_0 = {0};
	t315 * G_B20_0 = {0};
	int32_t G_B22_0 = 0;
	t315 * G_B22_1 = {0};
	{
		bool L_0 = (__this->f12);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		t2* L_1 = p0;
		bool L_2 = m11682(__this, &m11682_MI);
		m11646(NULL, L_1, (&V_0), L_2, (&V_1), (&V_2), &m11646_MI);
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
		t1546 * L_6 = p1;
		t2* L_7 = m8720(L_6, &m8720_MI);
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
		t1546 * L_12 = p1;
		t2127 * L_13 = m11647(NULL, L_9, L_10, L_11, L_12, &m11647_MI);
		V_3 = L_13;
		t2127 * L_14 = V_3;
		int32_t L_15 = (L_14->f4);
		t315 * L_16 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_16, ((int32_t)((int32_t)L_15*(int32_t)2)), &m4330_MI);
		V_4 = L_16;
		t2127 * L_17 = V_3;
		int32_t L_18 = (L_17->f1);
		t315 * L_19 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_19, ((int32_t)((int32_t)L_18*(int32_t)2)), &m4330_MI);
		V_5 = L_19;
		t2127 * L_20 = V_3;
		bool L_21 = (L_20->f7);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		t2127 * L_22 = V_3;
		int32_t L_23 = (L_22->f8);
		t315 * L_24 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_24, ((int32_t)((int32_t)L_23*(int32_t)2)), &m4330_MI);
		G_B8_0 = L_24;
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = ((t315 *)(NULL));
	}

IL_007d:
	{
		V_6 = G_B8_0;
		V_7 = 0;
		t2127 * L_25 = V_3;
		int32_t L_26 = (L_25->f12);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		t2127 * L_27 = V_3;
		int32_t L_28 = (L_27->f12);
		m11740(__this, ((int32_t)((int32_t)2*(int32_t)L_28)), &m11740_MI);
	}

IL_0099:
	{
		t2127 * L_29 = V_3;
		int32_t L_30 = (L_29->f13);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		t2127 * L_31 = V_3;
		int32_t L_32 = (L_31->f13);
		m11740(__this, ((int32_t)((int32_t)3*(int32_t)L_32)), &m11740_MI);
	}

IL_00b0:
	{
		t2127 * L_33 = V_3;
		int32_t L_34 = (L_33->f11);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		t2127 * L_35 = V_3;
		int32_t L_36 = (L_35->f11);
		m11741(__this, L_36, &m11741_MI);
	}

IL_00c5:
	{
		V_8 = 1;
		t2127 * L_37 = V_3;
		bool L_38 = (L_37->f7);
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		t2127 * L_39 = V_3;
		int32_t L_40 = (L_39->f1);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		t2127 * L_41 = V_3;
		int32_t L_42 = (L_41->f4);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}

IL_00e2:
	{
		bool L_43 = m11682(__this, &m11682_MI);
		if (L_43)
		{
			goto IL_011b;
		}
	}
	{
		t2127 * L_44 = V_3;
		int32_t L_45 = (L_44->f1);
		t2127 * L_46 = V_3;
		int32_t L_47 = (L_46->f4);
		m11684(__this, ((int32_t)((int32_t)L_45+(int32_t)L_47)), &m11684_MI);
		int32_t L_48 = V_7;
		int32_t L_49 = (__this->f18);
		t2127 * L_50 = V_3;
		int32_t L_51 = (L_50->f4);
		V_7 = ((int32_t)((int32_t)L_48-(int32_t)((int32_t)((int32_t)L_49-(int32_t)L_51))));
		t2127 * L_52 = V_3;
		int32_t L_53 = (L_52->f4);
		__this->f18 = L_53;
	}

IL_011b:
	{
		int32_t L_54 = V_7;
		V_8 = ((((int32_t)((((int32_t)L_54) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t315 * L_55 = V_6;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		m11729(NULL, G_B22_1, G_B22_0, &m11729_MI);
		goto IL_0147;
	}

IL_013a:
	{
		t2127 * L_59 = V_3;
		int32_t L_60 = (L_59->f1);
		m11685(__this, L_60, &m11685_MI);
	}

IL_0147:
	{
		t2127 * L_61 = V_3;
		int32_t L_62 = (L_61->f4);
		if (L_62)
		{
			goto IL_0157;
		}
	}
	{
		bool L_63 = m11683(__this, &m11683_MI);
		if (L_63)
		{
			goto IL_0165;
		}
	}

IL_0157:
	{
		int32_t L_64 = m11679(__this, &m11679_MI);
		t315 * L_65 = V_4;
		m11730(__this, L_64, L_65, &m11730_MI);
	}

IL_0165:
	{
		int32_t L_66 = m11680(__this, &m11680_MI);
		t315 * L_67 = V_5;
		m11732(__this, L_66, L_67, &m11732_MI);
		t2127 * L_68 = V_3;
		bool L_69 = (L_68->f7);
		if (!L_69)
		{
			goto IL_0217;
		}
	}
	{
		t2127 * L_70 = V_3;
		int32_t L_71 = (L_70->f1);
		if ((((int32_t)L_71) > ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		t2127 * L_72 = V_3;
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
		t315 * L_74 = V_4;
		int32_t L_75 = m5856(L_74, &m5856_MI);
		t2127 * L_76 = V_3;
		int32_t L_77 = (L_76->f4);
		if ((((int32_t)L_75) >= ((int32_t)L_77)))
		{
			goto IL_01c2;
		}
	}
	{
		t315 * L_78 = V_4;
		t2127 * L_79 = V_3;
		int32_t L_80 = (L_79->f4);
		t315 * L_81 = V_4;
		int32_t L_82 = m5856(L_81, &m5856_MI);
		m10873(L_78, 0, (t2*) &_stringLiteral695, ((int32_t)((int32_t)L_80-(int32_t)L_82)), &m10873_MI);
	}

IL_01c2:
	{
		goto IL_01cf;
	}

IL_01c4:
	{
		t315 * L_83 = V_6;
		m10872(L_83, 0, ((int32_t)48), &m10872_MI);
	}

IL_01cf:
	{
		t315 * L_84 = V_6;
		int32_t L_85 = m5856(L_84, &m5856_MI);
		t2127 * L_86 = V_3;
		int32_t L_87 = (L_86->f8);
		t2127 * L_88 = V_3;
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
		t2127 * L_91 = V_3;
		bool L_92 = (L_91->f10);
		if (L_92)
		{
			goto IL_0202;
		}
	}
	{
		t315 * L_93 = V_6;
		t1546 * L_94 = p1;
		t2* L_95 = m8736(L_94, &m8736_MI);
		m10871(L_93, 0, L_95, &m10871_MI);
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
		t315 * L_97 = V_6;
		t1546 * L_98 = p1;
		t2* L_99 = m8720(L_98, &m8720_MI);
		m10871(L_97, 0, L_99, &m10871_MI);
	}

IL_0215:
	{
		goto IL_0277;
	}

IL_0217:
	{
		t315 * L_100 = V_4;
		int32_t L_101 = m5856(L_100, &m5856_MI);
		t2127 * L_102 = V_3;
		int32_t L_103 = (L_102->f4);
		t2127 * L_104 = V_3;
		int32_t L_105 = (L_104->f5);
		if ((((int32_t)L_101) >= ((int32_t)((int32_t)((int32_t)L_103-(int32_t)L_105)))))
		{
			goto IL_0250;
		}
	}
	{
		t315 * L_106 = V_4;
		t2127 * L_107 = V_3;
		int32_t L_108 = (L_107->f4);
		t2127 * L_109 = V_3;
		int32_t L_110 = (L_109->f5);
		t315 * L_111 = V_4;
		int32_t L_112 = m5856(L_111, &m5856_MI);
		m10873(L_106, 0, (t2*) &_stringLiteral695, ((int32_t)((int32_t)((int32_t)((int32_t)L_108-(int32_t)L_110))-(int32_t)L_112)), &m10873_MI);
	}

IL_0250:
	{
		t2127 * L_113 = V_3;
		int32_t L_114 = (L_113->f4);
		t2127 * L_115 = V_3;
		int32_t L_116 = (L_115->f5);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_116))))
		{
			goto IL_0277;
		}
	}
	{
		t315 * L_117 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		bool L_118 = m11728(NULL, L_117, &m11728_MI);
		if (!L_118)
		{
			goto IL_0277;
		}
	}
	{
		t315 * L_119 = V_4;
		t315 * L_120 = V_4;
		int32_t L_121 = m5856(L_120, &m5856_MI);
		m10865(L_119, 0, L_121, &m10865_MI);
	}

IL_0277:
	{
		t315 * L_122 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		m11727(NULL, L_122, 1, &m11727_MI);
		goto IL_028b;
	}

IL_0281:
	{
		t315 * L_123 = V_5;
		m2733(L_123, ((int32_t)48), &m2733_MI);
	}

IL_028b:
	{
		t315 * L_124 = V_5;
		int32_t L_125 = m5856(L_124, &m5856_MI);
		t2127 * L_126 = V_3;
		int32_t L_127 = (L_126->f1);
		t2127 * L_128 = V_3;
		int32_t L_129 = (L_128->f3);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)((int32_t)L_127-(int32_t)L_129)))))
		{
			goto IL_0281;
		}
	}
	{
		t315 * L_130 = V_5;
		int32_t L_131 = m5856(L_130, &m5856_MI);
		t2127 * L_132 = V_3;
		int32_t L_133 = (L_132->f1);
		if ((((int32_t)L_131) <= ((int32_t)L_133)))
		{
			goto IL_02cc;
		}
	}
	{
		t315 * L_134 = V_5;
		t2127 * L_135 = V_3;
		int32_t L_136 = (L_135->f1);
		t315 * L_137 = V_5;
		int32_t L_138 = m5856(L_137, &m5856_MI);
		t2127 * L_139 = V_3;
		int32_t L_140 = (L_139->f1);
		m10865(L_134, L_136, ((int32_t)((int32_t)L_138-(int32_t)L_140)), &m10865_MI);
	}

IL_02cc:
	{
		t2127 * L_141 = V_3;
		t2* L_142 = p0;
		int32_t L_143 = V_1;
		int32_t L_144 = V_2;
		t1546 * L_145 = p1;
		bool L_146 = (__this->f12);
		t315 * L_147 = V_4;
		t315 * L_148 = V_5;
		t315 * L_149 = V_6;
		t2* L_150 = m11648(L_141, L_142, L_143, L_144, L_145, L_146, L_147, L_148, L_149, &m11648_MI);
		return L_150;
	}
}
extern "C" void m11727 (t9 * __this , t315 * p0, bool p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = 0;
		t315 * L_0 = p0;
		int32_t L_1 = m5856(L_0, &m5856_MI);
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0022;
	}

IL_000d:
	{
		t315 * L_2 = p0;
		int32_t L_3 = V_1;
		uint16_t L_4 = m10862(L_2, L_3, &m10862_MI);
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
		t315 * L_11 = p0;
		t315 * L_12 = p0;
		int32_t L_13 = m5856(L_12, &m5856_MI);
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		m10865(L_11, ((int32_t)((int32_t)L_13-(int32_t)L_14)), L_15, &m10865_MI);
	}

IL_0048:
	{
		return;
	}
}
extern "C" bool m11728 (t9 * __this , t315 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		t315 * L_0 = p0;
		int32_t L_1 = V_0;
		uint16_t L_2 = m10862(L_0, L_1, &m10862_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_3 = m5897(NULL, L_2, &m5897_MI);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		t315 * L_4 = p0;
		int32_t L_5 = V_0;
		uint16_t L_6 = m10862(L_4, L_5, &m10862_MI);
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
		t315 * L_9 = p0;
		int32_t L_10 = m5856(L_9, &m5856_MI);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
extern "C" void m11729 (t9 * __this , t315 * p0, int32_t p1, MethodInfo* method)
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
		t556 * L_1 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_1, &m11109_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000a:
	{
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t L_3 = m11661(NULL, (((int64_t)L_2)), &m11661_MI);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)1));
	}

IL_0014:
	{
		int32_t L_4 = p1;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int64_t L_6 = m11652(NULL, L_5, &m11652_MI);
		V_1 = ((int32_t)((int32_t)L_4/(int32_t)(((int32_t)L_6))));
		t315 * L_7 = p0;
		int32_t L_8 = V_1;
		m2733(L_7, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_8)))), &m2733_MI);
		int32_t L_9 = p1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
		int64_t L_12 = m11652(NULL, L_11, &m11652_MI);
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
extern "C" void m11730 (t2128 * __this, int32_t p0, t315 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f18);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t315 * L_1 = p1;
		int32_t L_2 = p0;
		m10868(L_1, ((int32_t)48), L_2, &m10868_MI);
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
		t315 * L_5 = p1;
		int32_t L_6 = p0;
		int32_t L_7 = (__this->f18);
		m10868(L_5, ((int32_t)48), ((int32_t)((int32_t)L_6-(int32_t)L_7)), &m10868_MI);
	}

IL_002e:
	{
		int32_t L_8 = (__this->f16);
		int32_t L_9 = (__this->f18);
		int32_t L_10 = (__this->f16);
		t315 * L_11 = p1;
		m11739(__this, ((int32_t)((int32_t)L_8-(int32_t)L_9)), L_10, L_11, &m11739_MI);
		return;
	}
}
extern "C" void m11731 (t2128 * __this, int32_t p0, MethodInfo* method)
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
		m11675(__this, ((int32_t)48), L_1, &m11675_MI);
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
		m11675(__this, ((int32_t)48), ((int32_t)((int32_t)L_4-(int32_t)L_5)), &m11675_MI);
	}

IL_002c:
	{
		int32_t L_6 = (__this->f16);
		int32_t L_7 = (__this->f18);
		int32_t L_8 = (__this->f16);
		m11738(__this, ((int32_t)((int32_t)L_6-(int32_t)L_7)), L_8, &m11738_MI);
		return;
	}
}
extern "C" void m11732 (t2128 * __this, int32_t p0, t315 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		t315 * L_5 = p1;
		m11739(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), L_5, &m11739_MI);
		return;
	}
}
extern "C" void m11733 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f18);
		int32_t L_3 = (__this->f16);
		int32_t L_4 = (__this->f18);
		m11738(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))-(int32_t)L_2)), ((int32_t)((int32_t)L_3-(int32_t)L_4)), &m11738_MI);
		return;
	}
}
extern "C" void m11734 (t2128 * __this, t1088* p0, t2* p1, MethodInfo* method)
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
		bool L_0 = m11683(__this, &m11683_MI);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		m11674(__this, ((int32_t)48), &m11674_MI);
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
		t1088* L_2 = p0;
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
		t1088* L_10 = p0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_0019;
		}
	}

IL_0038:
	{
		t1088* L_11 = p0;
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
		t1088* L_13 = p0;
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
		t1088* L_23 = p0;
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
		t1088* L_28 = p0;
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
		m11738(__this, ((int32_t)((int32_t)L_45-(int32_t)L_46)), ((int32_t)((int32_t)L_47-(int32_t)L_48)), &m11738_MI);
		goto IL_0118;
	}

IL_00d9:
	{
		int32_t L_49 = (__this->f16);
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		int32_t L_52 = (__this->f16);
		int32_t L_53 = V_6;
		m11738(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_49-(int32_t)L_50))-(int32_t)L_51)), ((int32_t)((int32_t)L_52-(int32_t)L_53)), &m11738_MI);
		int32_t L_54 = V_6;
		int32_t L_55 = V_3;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)L_55));
		t2* L_56 = p1;
		m11676(__this, L_56, &m11676_MI);
		int32_t L_57 = V_1;
		int32_t L_58 = ((int32_t)((int32_t)L_57-(int32_t)1));
		V_1 = L_58;
		t1088* L_59 = p0;
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
		t1088* L_61 = p0;
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
		m11738(__this, ((int32_t)((int32_t)L_65-(int32_t)L_66)), L_67, &m11738_MI);
	}

IL_0133:
	{
		return;
	}
}
extern "C" void m11735 (t2128 * __this, t1546 * p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m11674(__this, ((int32_t)69), &m11674_MI);
		goto IL_0024;
	}

IL_001c:
	{
		m11674(__this, ((int32_t)101), &m11674_MI);
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
		t1546 * L_3 = p0;
		t2* L_4 = m8736(L_3, &m8736_MI);
		m11676(__this, L_4, &m11676_MI);
		goto IL_0048;
	}

IL_0036:
	{
		t1546 * L_5 = p0;
		t2* L_6 = m8720(L_5, &m8720_MI);
		m11676(__this, L_6, &m11676_MI);
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
		m11675(__this, ((int32_t)48), L_9, &m11675_MI);
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
		m11675(__this, ((int32_t)48), ((int32_t)((int32_t)L_11-(int32_t)1)), &m11675_MI);
		int32_t L_12 = p1;
		m11674(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)L_12)))), &m11674_MI);
		goto IL_00ae;
	}

IL_0073:
	{
		int32_t L_13 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		uint32_t L_14 = m11656(NULL, L_13, &m11656_MI);
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
		m11674(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((uint32_t)L_17>>8)))))), &m11674_MI);
	}

IL_0090:
	{
		uint32_t L_18 = V_0;
		m11674(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_18>>4))&(int32_t)((int32_t)15))))))), &m11674_MI);
		uint32_t L_19 = V_0;
		m11674(__this, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)15))))))), &m11674_MI);
	}

IL_00ae:
	{
		return;
	}
}
extern "C" void m11736 (t2128 * __this, int32_t p0, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f24);
		t305* L_1 = (__this->f23);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (__this->f24);
		m11673(__this, ((int32_t)((int32_t)L_2+(int32_t)((int32_t)10))), &m11673_MI);
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
		t305* L_16 = (__this->f23);
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
extern "C" void m11737 (t2128 * __this, int32_t p0, bool p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t* L_4 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5;
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
		t305* L_8 = (__this->f23);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_10)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_11>>(int32_t)4))))));
	}

IL_0043:
	{
		t305* L_12 = (__this->f23);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, L_14)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)15)))))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t* L_16 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5;
		int32_t L_17 = p0;
		int32_t L_18 = V_2;
		V_1 = (*((int32_t*)((intptr_t)((intptr_t)L_16+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)100)))))*(int32_t)4))))));
		goto IL_0074;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2128_TI));
		int32_t* L_19 = ((t2128_SFs*)InitializedTypeInfo(&t2128_TI)->static_fields)->f5;
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
		t305* L_23 = (__this->f23);
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_1;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_23, L_25)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_26>>(int32_t)4))))));
	}

IL_008f:
	{
		t305* L_27 = (__this->f23);
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
extern "C" void m11738 (t2128 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
		t305* L_6 = (__this->f23);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((t121 *)L_6)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		m11673(__this, ((int32_t)((int32_t)L_7+(int32_t)((int32_t)10))), &m11673_MI);
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
		t305* L_28 = (__this->f23);
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
		t305* L_35 = (__this->f23);
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
		t305* L_40 = (__this->f23);
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
		t305* L_45 = (__this->f23);
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
		t305* L_50 = (__this->f23);
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
		t305* L_55 = (__this->f23);
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
		t305* L_60 = (__this->f23);
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
		t305* L_65 = (__this->f23);
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
extern "C" void m11739 (t2128 * __this, int32_t p0, int32_t p1, t315 * p2, MethodInfo* method)
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
		t315 * L_2 = p2;
		int32_t L_3 = m5856(L_2, &m5856_MI);
		int32_t L_4 = p1;
		int32_t L_5 = p0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))));
		t315 * L_6 = p2;
		int32_t L_7 = V_0;
		m5961(L_6, L_7, &m5961_MI);
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
		t315 * L_27 = p2;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)((int32_t)L_28-(int32_t)1));
		V_0 = L_29;
		uint32_t L_30 = V_2;
		m10863(L_27, L_29, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)15))))))), &m10863_MI);
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
		t315 * L_34 = p2;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)((int32_t)L_35-(int32_t)1));
		V_0 = L_36;
		uint32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)((uint32_t)L_37>>4));
		V_2 = L_38;
		m10863(L_34, L_36, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)15))))))), &m10863_MI);
		goto IL_00e3;
	}

IL_00e3:
	{
		t315 * L_39 = p2;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)((int32_t)L_40-(int32_t)1));
		V_0 = L_41;
		uint32_t L_42 = V_2;
		int32_t L_43 = ((int32_t)((uint32_t)L_42>>4));
		V_2 = L_43;
		m10863(L_39, L_41, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)15))))))), &m10863_MI);
		goto IL_00fc;
	}

IL_00fc:
	{
		t315 * L_44 = p2;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)((int32_t)L_45-(int32_t)1));
		V_0 = L_46;
		uint32_t L_47 = V_2;
		int32_t L_48 = ((int32_t)((uint32_t)L_47>>4));
		V_2 = L_48;
		m10863(L_44, L_46, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)15))))))), &m10863_MI);
		goto IL_0115;
	}

IL_0115:
	{
		t315 * L_49 = p2;
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)((int32_t)L_50-(int32_t)1));
		V_0 = L_51;
		uint32_t L_52 = V_2;
		int32_t L_53 = ((int32_t)((uint32_t)L_52>>4));
		V_2 = L_53;
		m10863(L_49, L_51, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)15))))))), &m10863_MI);
		goto IL_012e;
	}

IL_012e:
	{
		t315 * L_54 = p2;
		int32_t L_55 = V_0;
		int32_t L_56 = ((int32_t)((int32_t)L_55-(int32_t)1));
		V_0 = L_56;
		uint32_t L_57 = V_2;
		int32_t L_58 = ((int32_t)((uint32_t)L_57>>4));
		V_2 = L_58;
		m10863(L_54, L_56, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)15))))))), &m10863_MI);
		goto IL_0147;
	}

IL_0147:
	{
		t315 * L_59 = p2;
		int32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)((int32_t)L_60-(int32_t)1));
		V_0 = L_61;
		uint32_t L_62 = V_2;
		int32_t L_63 = ((int32_t)((uint32_t)L_62>>4));
		V_2 = L_63;
		m10863(L_59, L_61, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_63&(int32_t)((int32_t)15))))))), &m10863_MI);
		goto IL_0160;
	}

IL_0160:
	{
		t315 * L_64 = p2;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)((int32_t)L_65-(int32_t)1));
		V_0 = L_66;
		uint32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((uint32_t)L_67>>4));
		V_2 = L_68;
		m10863(L_64, L_66, (((uint16_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)15))))))), &m10863_MI);
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
extern "C" void m11740 (t2128 * __this, int32_t p0, MethodInfo* method)
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
extern "C" void m11741 (t2128 * __this, int32_t p0, MethodInfo* method)
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
extern "C" t2128 * m11742 (t2128 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = m7030(__this, &m7030_MI);
		return ((t2128 *)Castclass(L_0, InitializedTypeInfo(&t2128_TI)));
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m6883 (t1521 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2783, &m7818_MI);
		m5685(__this, L_0, &m5685_MI);
		t2* L_1 = p0;
		__this->f12 = L_1;
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2783, &m7818_MI);
		__this->f13 = L_2;
		return;
	}
}
extern MethodInfo m11743_MI;
extern "C" void m11743 (t1521 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		m5685(__this, L_0, &m5685_MI);
		t2* L_1 = p0;
		__this->f12 = L_1;
		t2* L_2 = p1;
		__this->f13 = L_2;
		return;
	}
}
extern MethodInfo m11744_MI;
extern "C" void m11744 (t1521 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11540(__this, L_0, L_1, &m11540_MI);
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral2784, &m5712_MI);
		__this->f12 = L_3;
		return;
	}
}
extern MethodInfo m11745_MI;
extern "C" t2* m11745 (t1521 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m11746_MI;
extern "C" void m11746 (t1521 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m4473(__this, L_0, L_1, &m4473_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f12);
		m5715(L_2, (t2*) &_stringLiteral2784, L_3, &m5715_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t2109_TI;
extern TypeInfo t1187_TI;
extern MethodInfo m11868_MI;
extern MethodInfo m11866_MI;


extern "C" void m11747 (t2108 * __this, int32_t p0, t1187 * p1, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_0;
		m336(__this, &m336_MI);
		t1187 * L_1 = p1;
		bool L_2 = m11868(NULL, L_1, (t1187 *)NULL, &m11868_MI);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral471, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		int32_t L_4 = p0;
		__this->f0 = L_4;
		t1187 * L_5 = p1;
		__this->f1 = L_5;
		return;
	}
}
extern MethodInfo m11748_MI;
extern "C" int32_t m11748 (t2108 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11749_MI;
extern "C" void m11749 (t2108 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		int32_t L_1 = (__this->f0);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t2109_TI), &L_2);
		m5715(L_0, (t2*) &_stringLiteral2785, L_3, &m5715_MI);
		t1093 * L_4 = p0;
		t1187 * L_5 = (__this->f1);
		m5715(L_4, (t2*) &_stringLiteral2786, L_5, &m5715_MI);
		t1093 * L_6 = p0;
		t2* L_7 = (__this->f2);
		m5715(L_6, (t2*) &_stringLiteral2787, L_7, &m5715_MI);
		return;
	}
}
extern MethodInfo m11750_MI;
extern "C" t2* m11750 (t2108 * __this, MethodInfo* method)
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
		V_0 = (t2*) &_stringLiteral2788;
		goto IL_0078;
	}

IL_003b:
	{
		V_0 = (t2*) &_stringLiteral2789;
		goto IL_0078;
	}

IL_0043:
	{
		V_0 = (t2*) &_stringLiteral2790;
		goto IL_0078;
	}

IL_004b:
	{
		V_0 = (t2*) &_stringLiteral2791;
		goto IL_0078;
	}

IL_0053:
	{
		V_0 = (t2*) &_stringLiteral2792;
		goto IL_0078;
	}

IL_005b:
	{
		V_0 = (t2*) &_stringLiteral2793;
		goto IL_0078;
	}

IL_0063:
	{
		V_0 = (t2*) &_stringLiteral2794;
		goto IL_0078;
	}

IL_006b:
	{
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral2795, &m7818_MI);
		V_0 = L_3;
		goto IL_0078;
	}

IL_0078:
	{
		t2* L_4 = V_0;
		t1187 * L_5 = (__this->f1);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m11866_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m399(NULL, L_4, (t2*) &_stringLiteral168, L_6, &m399_MI);
		return L_7;
	}
}
#include "t2129.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2129_TI;
#include "t2129MD.h"



extern MethodInfo m11751_MI;
extern "C" void m11751 (t2129 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2796, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2147024882), &m4433_MI);
		return;
	}
}
extern MethodInfo m11752_MI;
extern "C" void m11752 (t2129 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m11753_MI;
extern "C" void m11753 (t2130 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2797, &m7818_MI);
		m6858(__this, L_0, &m6858_MI);
		m4433(__this, ((int32_t)-2146233066), &m4433_MI);
		return;
	}
}
extern "C" void m11754 (t2130 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m6858(__this, L_0, &m6858_MI);
		m4433(__this, ((int32_t)-2146233066), &m4433_MI);
		return;
	}
}
extern MethodInfo m11755_MI;
extern "C" void m11755 (t2130 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11122(__this, L_0, L_1, &m11122_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t2109MD.h"



#include "t791.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t791_TI;
#include "t791MD.h"

extern MethodInfo m4300_MI;


extern MethodInfo m11756_MI;
extern "C" void m11756 (t791 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m4299(NULL, &m4299_MI);
		m4300(__this, L_0, &m4300_MI);
		return;
	}
}
extern TypeInfo* t1088_TI_var;
extern "C" void m4300 (t791 * __this, int32_t p0, MethodInfo* method)
{
	static bool m4300_init;
	if (!m4300_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m4300_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->f2 = ((t1088*)SZArrayNew(t1088_TI_var, ((int32_t)56)));
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = abs(L_0);
		V_1 = ((int32_t)((int32_t)((int32_t)161803398)-(int32_t)L_1));
		t1088* L_2 = (__this->f2);
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
		t1088* L_5 = (__this->f2);
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
		t1088* L_12 = (__this->f2);
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
		t1088* L_17 = (__this->f2);
		int32_t L_18 = V_5;
		int32_t* L_19 = ((int32_t*)(int32_t*)SZArrayLdElema(L_17, L_18));
		t1088* L_20 = (__this->f2);
		int32_t L_21 = V_5;
		int32_t L_22 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21+(int32_t)((int32_t)30)))%(int32_t)((int32_t)55)))));
		*((int32_t*)(L_19)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_19))-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))));
		t1088* L_23 = (__this->f2);
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25))) >= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		t1088* L_26 = (__this->f2);
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
#include "t2131.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2131_TI;
#include "t2131MD.h"



extern MethodInfo m11757_MI;
extern "C" void m11757 (t2131 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2798, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233065), &m4433_MI);
		return;
	}
}
extern MethodInfo m11758_MI;
extern "C" void m11758 (t2131 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233065), &m4433_MI);
		return;
	}
}
extern MethodInfo m11759_MI;
extern "C" void m11759 (t2131 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2132_TI;
#include "t2132MD.h"



#include "t1749.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1749_TI;
#include "t1749MD.h"

#include "t1333.h"
extern TypeInfo t58_TI;
extern TypeInfo t1333_TI;
#include "t1333MD.h"
extern Il2CppType t1752_0_0_0;
extern MethodInfo m9602_MI;
extern MethodInfo m11762_MI;
extern MethodInfo m5704_MI;
extern MethodInfo m9513_MI;
extern MethodInfo m5700_MI;
extern MethodInfo m7547_MI;


extern MethodInfo m11760_MI;
extern "C" void m11760 (t1749 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m11761_MI;
extern "C" void m11761 (t1749 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t1752 * V_0 = {0};
	t1749  V_1 = {0};
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1093 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1752_0_0_0), &m329_MI);
		t9 * L_4 = m5703(L_2, (t2*) &_stringLiteral2799, L_3, &m5703_MI);
		V_0 = ((t1752 *)Castclass(L_4, InitializedTypeInfo(&t1752_TI)));
		t1752 * L_5 = V_0;
		t1749  L_6 = (t1749 )VirtFuncInvoker0< t1749  >::Invoke(&m9602_MI, L_5);
		V_1 = L_6;
		t58 L_7 = m11762((&V_1), &m11762_MI);
		__this->f0 = L_7;
		t58 L_8 = (__this->f0);
		t58 L_9 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_10 = m4436(NULL, L_8, L_9, &m4436_MI);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		t2* L_11 = m7818(NULL, (t2*) &_stringLiteral1284, &m7818_MI);
		t1333 * L_12 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_12, L_11, &m5704_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005f:
	{
		return;
	}
}
extern "C" t58 m11762 (t1749 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11763_MI;
extern "C" void m11763 (t1749 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t58 L_2 = (__this->f0);
		t58 L_3 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_4 = m4436(NULL, L_2, L_3, &m4436_MI);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		t1333 * L_5 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_5, (t2*) &_stringLiteral1285, &m5704_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		t1093 * L_6 = p0;
		t907 * L_7 = m9513(NULL, (*(t1749 *)__this), &m9513_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t1752_0_0_0), &m329_MI);
		m5700(L_6, (t2*) &_stringLiteral2799, ((t1752 *)Castclass(L_7, InitializedTypeInfo(&t1752_TI))), L_8, &m5700_MI);
		return;
	}
}
extern MethodInfo m11764_MI;
extern "C" bool m11764 (t1749 * __this, t9 * p0, MethodInfo* method)
{
	t1749  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t1749  L_1 = (*(t1749 *)__this);
		t9 * L_2 = Box(InitializedTypeInfo(&t1749_TI), &L_1);
		t126 * L_3 = m2486(L_2, &m2486_MI);
		t9 * L_4 = p0;
		t126 * L_5 = m2486(L_4, &m2486_MI);
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
		V_0 = ((*(t1749 *)((t1749 *)UnBox (L_7, InitializedTypeInfo(&t1749_TI)))));
		t58 L_8 = m11762((&V_0), &m11762_MI);
		bool L_9 = m4436(NULL, L_6, L_8, &m4436_MI);
		return L_9;
	}
}
extern MethodInfo m11765_MI;
extern "C" int32_t m11765 (t1749 * __this, MethodInfo* method)
{
	{
		t58* L_0 = &(__this->f0);
		int32_t L_1 = m7547(L_0, &m7547_MI);
		return L_1;
	}
}
#include "t873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t873_TI;
#include "t873MD.h"

#include "t2133.h"
#include "t2134.h"
extern TypeInfo t2133_TI;
extern TypeInfo t2134_TI;
extern TypeInfo t185_TI;
#include "t2133MD.h"
#include "t2134MD.h"
extern MethodInfo m11771_MI;
extern MethodInfo m11775_MI;
extern MethodInfo m12127_MI;
extern MethodInfo m11940_MI;
extern MethodInfo m12128_MI;
extern MethodInfo m671_MI;
extern MethodInfo m672_MI;
extern MethodInfo m12129_MI;


extern MethodInfo m11766_MI;
extern "C" void m11766 (t873 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11767_MI;
extern "C" void m11767 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = m4334(NULL, &m4334_MI);
		t2133 * L_1 = (t2133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2133_TI));
		m11771(L_1, L_0, 1, &m11771_MI);
		((t873_SFs*)InitializedTypeInfo(&t873_TI)->static_fields)->f0 = L_1;
		t894 * L_2 = m4334(NULL, &m4334_MI);
		t2133 * L_3 = (t2133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2133_TI));
		m11771(L_3, L_2, 0, &m11771_MI);
		((t873_SFs*)InitializedTypeInfo(&t873_TI)->static_fields)->f1 = L_3;
		t2134 * L_4 = (t2134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2134_TI));
		m11775(L_4, 1, &m11775_MI);
		((t873_SFs*)InitializedTypeInfo(&t873_TI)->static_fields)->f2 = L_4;
		t2134 * L_5 = (t2134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2134_TI));
		m11775(L_5, 0, &m11775_MI);
		((t873_SFs*)InitializedTypeInfo(&t873_TI)->static_fields)->f3 = L_5;
		return;
	}
}
extern MethodInfo m5736_MI;
extern "C" t873 * m5736 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t873_TI));
		t873 * L_0 = ((t873_SFs*)InitializedTypeInfo(&t873_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m4220_MI;
extern "C" t873 * m4220 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t873_TI));
		t873 * L_0 = ((t873_SFs*)InitializedTypeInfo(&t873_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m11768_MI;
extern "C" int32_t m11768 (t873 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		int32_t L_10 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m12127_MI, __this, L_8, L_9);
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
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_13, &m11109_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003d:
	{
		t9 * L_14 = V_2;
		t9 * L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11940_MI, L_14, L_15);
		return L_16;
	}
}
extern MethodInfo m11769_MI;
extern "C" bool m11769 (t873 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		bool L_10 = (bool)VirtFuncInvoker2< bool, t2*, t2* >::Invoke(&m12128_MI, __this, L_8, L_9);
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
extern MethodInfo m11770_MI;
extern "C" int32_t m11770 (t873 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1412, &m339_MI);
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
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, t2* >::Invoke(&m12129_MI, __this, L_6);
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

#include "t1537.h"
#include "t1538.h"
#include "t1608.h"
extern TypeInfo t1537_TI;
extern TypeInfo t1538_TI;
extern TypeInfo t1608_TI;
#include "t1537MD.h"
#include "t1608MD.h"
extern MethodInfo m6942_MI;
extern MethodInfo m6943_MI;
extern MethodInfo m11772_MI;
extern MethodInfo m8606_MI;
extern MethodInfo m7921_MI;


extern "C" void m11771 (t2133 * __this, t894 * p0, bool p1, MethodInfo* method)
{
	{
		m11766(__this, &m11766_MI);
		t894 * L_0 = p0;
		t1537 * L_1 = (t1537 *)VirtFuncInvoker0< t1537 * >::Invoke(&m6942_MI, L_0);
		__this->f5 = L_1;
		bool L_2 = p1;
		__this->f4 = L_2;
		return;
	}
}
extern "C" int32_t m11772 (t2133 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		t1537 * L_1 = (__this->f5);
		t2* L_2 = p0;
		t2* L_3 = p1;
		int32_t L_4 = V_0;
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6943_MI, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
extern MethodInfo m11773_MI;
extern "C" bool m11773 (t2133 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m11772_MI, __this, L_0, L_1);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m11774_MI;
extern "C" int32_t m11774 (t2133 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1081, &m339_MI);
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
		t1537 * L_3 = (__this->f5);
		t2* L_4 = p0;
		int32_t L_5 = V_0;
		t1608 * L_6 = (t1608 *)VirtFuncInvoker2< t1608 *, t2*, int32_t >::Invoke(&m8606_MI, L_3, L_4, L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7921_MI, L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7330_MI;
extern MethodInfo m7329_MI;
extern MethodInfo m11776_MI;
extern MethodInfo m7359_MI;
extern MethodInfo m4207_MI;


extern "C" void m11775 (t2134 * __this, bool p0, MethodInfo* method)
{
	{
		m11766(__this, &m11766_MI);
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m11776 (t2134 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		int32_t L_3 = m7330(NULL, L_1, 0, ((int32_t)2147483647), L_2, 0, ((int32_t)2147483647), &m7330_MI);
		return L_3;
	}

IL_001c:
	{
		t2* L_4 = p0;
		t2* L_5 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		int32_t L_6 = m7329(NULL, L_4, 0, ((int32_t)2147483647), L_5, 0, ((int32_t)2147483647), &m7329_MI);
		return L_6;
	}
}
extern MethodInfo m11777_MI;
extern "C" bool m11777 (t2134 * __this, t2* p0, t2* p1, MethodInfo* method)
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
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m11776_MI, __this, L_1, L_2);
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
extern MethodInfo m11778_MI;
extern "C" int32_t m11778 (t2134 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1081, &m339_MI);
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
		int32_t L_4 = m7359(L_3, &m7359_MI);
		return L_4;
	}

IL_001d:
	{
		t2* L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_5);
		return L_6;
	}
}
#include "t877.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t877_TI;
#include "t877MD.h"



#include "t1346.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1346_TI;
#include "t1346MD.h"



#include "t1360.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1360_TI;

extern MethodInfo m4434_MI;


extern MethodInfo m11779_MI;
extern "C" void m11779 (t1360 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2800, &m7818_MI);
		m379(__this, L_0, &m379_MI);
		m4433(__this, ((int32_t)-2146233087), &m4433_MI);
		return;
	}
}
extern "C" void m5872 (t1360 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		m4433(__this, ((int32_t)-2146233087), &m4433_MI);
		return;
	}
}
extern "C" void m11780 (t1360 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m7000(__this, L_0, L_1, &m7000_MI);
		return;
	}
}
extern "C" void m11781 (t1360 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m4434(__this, L_0, L_1, &m4434_MI);
		m4433(__this, ((int32_t)-2146233087), &m4433_MI);
		return;
	}
}
#include "t2135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2135_TI;
#include "t2135MD.h"



extern MethodInfo m11782_MI;
extern "C" void m11782 (t2135 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2190.h"
#include "t2191.h"
extern TypeInfo t2190_TI;
extern TypeInfo t2191_TI;
#include "t2190MD.h"
#include "t2191MD.h"
extern Il2CppType t2190_0_0_0;
extern Il2CppType t2191_0_0_0;
extern MethodInfo m11787_MI;
extern MethodInfo m12130_MI;
extern MethodInfo m12131_MI;
extern MethodInfo m11799_MI;
extern MethodInfo m11807_MI;
extern MethodInfo m7423_MI;
extern MethodInfo m7424_MI;
extern MethodInfo m7095_MI;
extern MethodInfo m11798_MI;
extern MethodInfo m11810_MI;
extern Il2CppGenericMethod m12130_GM;
extern Il2CppGenericMethod m12131_GM;


extern "C" void m11783 (t297 * __this, int64_t p0, MethodInfo* method)
{
	{
		int64_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m11784 (t297 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		int64_t L_3 = m11787(NULL, 0, L_0, L_1, L_2, 0, &m11787_MI);
		__this->f3 = L_3;
		return;
	}
}
extern "C" void m11785 (t297 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		int64_t L_5 = m11787(NULL, L_0, L_1, L_2, L_3, L_4, &m11787_MI);
		__this->f3 = L_5;
		return;
	}
}
extern MethodInfo m11786_MI;
extern TypeInfo* t2190_TI_var;
extern TypeInfo* t2191_TI_var;
extern MethodInfo* m12130_MI_var;
extern MethodInfo* m12131_MI_var;
extern "C" void m11786 (t9 * __this , MethodInfo* method)
{
	static bool m11786_init;
	if (!m11786_init)
	{
		t2190_TI_var = il2cpp_codegen_class_from_type(&t2190_0_0_0);
		t2191_TI_var = il2cpp_codegen_class_from_type(&t2191_0_0_0);
		m12130_MI_var = il2cpp_codegen_genericmethod_get_method(&m12130_GM);
		m12131_MI_var = il2cpp_codegen_genericmethod_get_method(&m12131_GM);
		m11786_init = true;
	}
	t2190 * V_0 = {0};
	t2191 * V_1 = {0};
	{
		t297  L_0 = {0};
		m11783(&L_0, ((int64_t)std::numeric_limits<int64_t>::max()), &m11783_MI);
		((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f0 = L_0;
		t297  L_1 = {0};
		m11783(&L_1, ((int64_t)std::numeric_limits<int64_t>::min()), &m11783_MI);
		((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f1 = L_1;
		t297  L_2 = {0};
		m11783(&L_2, (((int64_t)0)), &m11783_MI);
		((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2122_TI));
		bool L_3 = ((t2122_SFs*)InitializedTypeInfo(&t2122_TI)->static_fields)->f0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		t2190 * L_4 = (t2190 *)il2cpp_codegen_object_new (t2190_TI_var);
		m12130(L_4, m12130_MI_var);
		V_0 = L_4;
		t2191 * L_5 = (t2191 *)il2cpp_codegen_object_new (t2191_TI_var);
		m12131(L_5, m12131_MI_var);
		V_1 = L_5;
	}

IL_0045:
	{
		return;
	}
}
extern "C" int64_t m11787 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		t2* L_30 = m7818(NULL, (t2*) &_stringLiteral2801, &m7818_MI);
		t896 * L_31 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_31, L_30, &m5693_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a3:
	{
		int64_t L_32 = V_2;
		return L_32;
	}
}
extern "C" int32_t m11788 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))));
	}
}
extern "C" int32_t m11789 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)864000000000LL)))/(int64_t)((int64_t)36000000000LL)))));
	}
}
extern MethodInfo m11790_MI;
extern "C" int32_t m11790 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)10000000)))))/(int64_t)(((int64_t)((int32_t)10000)))))));
	}
}
extern "C" int32_t m11791 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)((int64_t)36000000000LL)))/(int64_t)(((int64_t)((int32_t)600000000)))))));
	}
}
extern "C" int32_t m11792 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return (((int32_t)((int64_t)((int64_t)((int64_t)((int64_t)L_0%(int64_t)(((int64_t)((int32_t)600000000)))))/(int64_t)(((int64_t)((int32_t)10000000)))))));
	}
}
extern "C" int64_t m11793 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m11794_MI;
extern "C" double m11794 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(864000000000.0)));
	}
}
extern MethodInfo m11795_MI;
extern "C" double m11795 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(36000000000.0)));
	}
}
extern "C" double m11796 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000.0)));
	}
}
extern "C" double m11797 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(600000000.0)));
	}
}
extern MethodInfo m1092_MI;
extern "C" double m1092 (t297 * __this, MethodInfo* method)
{
	{
		int64_t L_0 = (__this->f3);
		return ((double)((double)(((double)L_0))/(double)(10000000.0)));
	}
}
extern "C" t297  m11798 (t297 * __this, t297  p0, MethodInfo* method)
{
	t297  V_0 = {0};
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
			int64_t L_1 = m11793((&p0), &m11793_MI);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL - (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 < (int64_t)(int64_t)-9223372036854775808LL - (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t297  L_2 = {0};
			m11783(&L_2, ((int64_t)((int64_t)L_0+(int64_t)L_1)), &m11783_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2130_TI, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral2802, &m7818_MI);
		t2130 * L_4 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_4, L_3, &m11754_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t297  L_5 = V_0;
		return L_5;
	}
}
extern "C" int32_t m11799 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
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
extern MethodInfo m11800_MI;
extern "C" int32_t m11800 (t297 * __this, t9 * p0, MethodInfo* method)
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
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t297_TI))))
		{
			goto IL_0022;
		}
	}
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2803, &m7818_MI);
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_3, L_2, (t2*) &_stringLiteral611, &m5691_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t9 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		int32_t L_5 = m11799(NULL, (*(t297 *)__this), ((*(t297 *)((t297 *)UnBox (L_4, InitializedTypeInfo(&t297_TI))))), &m11799_MI);
		return L_5;
	}
}
extern MethodInfo m11801_MI;
extern "C" int32_t m11801 (t297 * __this, t297  p0, MethodInfo* method)
{
	{
		t297  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		int32_t L_1 = m11799(NULL, (*(t297 *)__this), L_0, &m11799_MI);
		return L_1;
	}
}
extern MethodInfo m11802_MI;
extern "C" bool m11802 (t297 * __this, t297  p0, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = (__this->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m11803_MI;
extern "C" t297  m11803 (t297 * __this, MethodInfo* method)
{
	t297  V_0 = {0};
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
			t297  L_2 = {0};
			m11783(&L_2, L_1, &m11783_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2130_TI, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral2804, &m7818_MI);
		t2130 * L_4 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_4, L_3, &m11754_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		t297  L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m11804_MI;
extern "C" bool m11804 (t297 * __this, t9 * p0, MethodInfo* method)
{
	t297  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t297_TI))))
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
		V_0 = ((*(t297 *)((t297 *)UnBox (L_2, InitializedTypeInfo(&t297_TI)))));
		int64_t L_3 = ((&V_0)->f3);
		return ((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
extern "C" t297  m11805 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = m11807(NULL, L_0, (((int64_t)((int32_t)600000000))), &m11807_MI);
		return L_1;
	}
}
extern MethodInfo m11806_MI;
extern "C" t297  m11806 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = m11807(NULL, L_0, (((int64_t)((int32_t)10000000))), &m11807_MI);
		return L_1;
	}
}
extern MethodInfo m1091_MI;
extern "C" t297  m1091 (t9 * __this , double p0, MethodInfo* method)
{
	{
		double L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = m11807(NULL, L_0, (((int64_t)((int32_t)10000))), &m11807_MI);
		return L_1;
	}
}
extern "C" t297  m11807 (t9 * __this , double p0, int64_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	t297  V_1 = {0};
	t297  V_2 = {0};
	t297  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		double L_0 = p0;
		bool L_1 = m7422(NULL, L_0, &m7422_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2805, &m7818_MI);
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_3, L_2, (t2*) &_stringLiteral611, &m5691_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		double L_4 = p0;
		bool L_5 = m7423(NULL, L_4, &m7423_MI);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		double L_6 = p0;
		bool L_7 = m7424(NULL, L_6, &m7424_MI);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		double L_8 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_9 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f1;
		V_1 = L_9;
		int64_t L_10 = m11793((&V_1), &m11793_MI);
		if ((((double)L_8) < ((double)(((double)L_10)))))
		{
			goto IL_004f;
		}
	}
	{
		double L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_12 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f0;
		V_2 = L_12;
		int64_t L_13 = m11793((&V_2), &m11793_MI);
		if ((!(((double)L_11) > ((double)(((double)L_13))))))
		{
			goto IL_005f;
		}
	}

IL_004f:
	{
		t2* L_14 = m7818(NULL, (t2*) &_stringLiteral2806, &m7818_MI);
		t2130 * L_15 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_15, L_14, &m11754_MI);
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
			t297  L_21 = {0};
			m11783(&L_21, ((int64_t)((int64_t)L_20*(int64_t)(((int64_t)((int32_t)10000))))), &m11783_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2130_TI, e.ex->object.klass))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.OverflowException)
		t2* L_22 = m7818(NULL, (t2*) &_stringLiteral2802, &m7818_MI);
		t2130 * L_23 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_23, L_22, &m11754_MI);
		il2cpp_codegen_raise_exception(L_23);
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		t297  L_24 = V_3;
		return L_24;
	}
}
extern "C" int32_t m11808 (t297 * __this, MethodInfo* method)
{
	{
		int64_t* L_0 = &(__this->f3);
		int32_t L_1 = m7095(L_0, &m7095_MI);
		return L_1;
	}
}
extern MethodInfo m11809_MI;
extern "C" t297  m11809 (t297 * __this, MethodInfo* method)
{
	t297  V_0 = {0};
	{
		int64_t L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f1;
		V_0 = L_1;
		int64_t L_2 = ((&V_0)->f3);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral2807, &m7818_MI);
		t2130 * L_4 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_4, L_3, &m11754_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0025:
	{
		int64_t L_5 = (__this->f3);
		t297  L_6 = {0};
		m11783(&L_6, ((-L_5)), &m11783_MI);
		return L_6;
	}
}
extern "C" t297  m11810 (t297 * __this, t297  p0, MethodInfo* method)
{
	t297  V_0 = {0};
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
			int64_t L_1 = m11793((&p0), &m11793_MI);
			if (((int64_t)L_1 >= 0 && (int64_t)L_0 < (int64_t)-9223372036854775808LL + (int64_t)L_1) || ((int64_t)L_1 < 0 && (int64_t)L_0 > (int64_t)9223372036854775807LL + (int64_t)L_1))
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
			t297  L_2 = {0};
			m11783(&L_2, ((int64_t)((int64_t)L_0-(int64_t)L_1)), &m11783_MI);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2130_TI, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.OverflowException)
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral2802, &m7818_MI);
		t2130 * L_4 = (t2130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2130_TI));
		m11754(L_4, L_3, &m11754_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		t297  L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m11811_MI;
extern "C" t2* m11811 (t297 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_0, ((int32_t)14), &m4330_MI);
		V_0 = L_0;
		int64_t L_1 = (__this->f3);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_001b;
		}
	}
	{
		t315 * L_2 = V_0;
		m2733(L_2, ((int32_t)45), &m2733_MI);
	}

IL_001b:
	{
		int32_t L_3 = m11788(__this, &m11788_MI);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		t315 * L_4 = V_0;
		int32_t L_5 = m11788(__this, &m11788_MI);
		int32_t L_6 = abs(L_5);
		m5786(L_4, L_6, &m5786_MI);
		t315 * L_7 = V_0;
		m2733(L_7, ((int32_t)46), &m2733_MI);
	}

IL_003e:
	{
		t315 * L_8 = V_0;
		int32_t L_9 = m11789(__this, &m11789_MI);
		int32_t L_10 = abs(L_9);
		V_2 = L_10;
		t2* L_11 = m5869((&V_2), (t2*) &_stringLiteral2808, &m5869_MI);
		m1154(L_8, L_11, &m1154_MI);
		t315 * L_12 = V_0;
		m2733(L_12, ((int32_t)58), &m2733_MI);
		t315 * L_13 = V_0;
		int32_t L_14 = m11791(__this, &m11791_MI);
		int32_t L_15 = abs(L_14);
		V_3 = L_15;
		t2* L_16 = m5869((&V_3), (t2*) &_stringLiteral2808, &m5869_MI);
		m1154(L_13, L_16, &m1154_MI);
		t315 * L_17 = V_0;
		m2733(L_17, ((int32_t)58), &m2733_MI);
		t315 * L_18 = V_0;
		int32_t L_19 = m11792(__this, &m11792_MI);
		int32_t L_20 = abs(L_19);
		V_4 = L_20;
		t2* L_21 = m5869((&V_4), (t2*) &_stringLiteral2808, &m5869_MI);
		m1154(L_18, L_21, &m1154_MI);
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
		t315 * L_25 = V_0;
		m2733(L_25, ((int32_t)46), &m2733_MI);
		t315 * L_26 = V_0;
		t2* L_27 = m5869((&V_1), (t2*) &_stringLiteral2809, &m5869_MI);
		m1154(L_26, L_27, &m1154_MI);
	}

IL_00e1:
	{
		t315 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_28);
		return L_29;
	}
}
extern "C" t297  m11812 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		t297  L_0 = p1;
		t297  L_1 = m11798((&p0), L_0, &m11798_MI);
		return L_1;
	}
}
extern "C" bool m11813 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11814 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11815 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11816 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m11817 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int64_t)L_0) < ((int64_t)L_1))? 1 : 0);
	}
}
extern "C" bool m11818 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		int64_t L_0 = ((&p0)->f3);
		int64_t L_1 = ((&p1)->f3);
		return ((((int32_t)((((int64_t)L_0) > ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t297  m11819 (t9 * __this , t297  p0, t297  p1, MethodInfo* method)
{
	{
		t297  L_0 = p1;
		t297  L_1 = m11810((&p0), L_0, &m11810_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2137.h"
#include "t1698.h"
extern TypeInfo t2137_TI;
extern TypeInfo t1698_TI;
#include "t2137MD.h"
#include "t1698MD.h"
extern MethodInfo m11830_MI;
extern MethodInfo m12132_MI;
extern MethodInfo m11824_MI;
extern MethodInfo m8693_MI;
extern MethodInfo m8694_MI;
extern MethodInfo m8695_MI;
extern MethodInfo m11828_MI;


extern MethodInfo m11820_MI;
extern "C" void m11820 (t2136 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11821_MI;
extern "C" void m11821 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		int64_t L_0 = m11400(NULL, &m11400_MI);
		t2137 * L_1 = (t2137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2137_TI));
		m11830(L_1, L_0, &m11830_MI);
		((t2136_SFs*)InitializedTypeInfo(&t2136_TI)->static_fields)->f0 = L_1;
		return;
	}
}
extern "C" t2136 * m11822 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		t2136 * L_0 = ((t2136_SFs*)InitializedTypeInfo(&t2136_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m11823_MI;
extern "C" bool m11823 (t2136 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m11402((&p0), &m11402_MI);
		t1698 * L_2 = (t1698 *)VirtFuncInvoker1< t1698 *, int32_t >::Invoke(&m12132_MI, __this, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2136_TI));
		bool L_3 = m11824(NULL, L_0, L_2, &m11824_MI);
		return L_3;
	}
}
extern "C" bool m11824 (t9 * __this , t269  p0, t1698 * p1, MethodInfo* method)
{
	t269  V_0 = {0};
	t269  V_1 = {0};
	t269  V_2 = {0};
	t269  V_3 = {0};
	t269  V_4 = {0};
	t269  V_5 = {0};
	t269  V_6 = {0};
	t269  V_7 = {0};
	t269  V_8 = {0};
	t269  V_9 = {0};
	{
		t1698 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2810, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1698 * L_2 = p1;
		t269  L_3 = m8693(L_2, &m8693_MI);
		V_0 = L_3;
		int64_t L_4 = m6951((&V_0), &m6951_MI);
		t1698 * L_5 = p1;
		t269  L_6 = m8694(L_5, &m8694_MI);
		V_1 = L_6;
		int64_t L_7 = m6951((&V_1), &m6951_MI);
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
		t1698 * L_8 = p1;
		t269  L_9 = m8693(L_8, &m8693_MI);
		V_2 = L_9;
		int64_t L_10 = m6951((&V_2), &m6951_MI);
		t1698 * L_11 = p1;
		t269  L_12 = m8694(L_11, &m8694_MI);
		V_3 = L_12;
		int64_t L_13 = m6951((&V_3), &m6951_MI);
		if ((((int64_t)L_10) >= ((int64_t)L_13)))
		{
			goto IL_0080;
		}
	}
	{
		t1698 * L_14 = p1;
		t269  L_15 = m8693(L_14, &m8693_MI);
		V_4 = L_15;
		int64_t L_16 = m6951((&V_4), &m6951_MI);
		int64_t L_17 = m6951((&p0), &m6951_MI);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		t1698 * L_18 = p1;
		t269  L_19 = m8694(L_18, &m8694_MI);
		V_5 = L_19;
		int64_t L_20 = m6951((&V_5), &m6951_MI);
		int64_t L_21 = m6951((&p0), &m6951_MI);
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
		int32_t L_22 = m11402((&p0), &m11402_MI);
		t1698 * L_23 = p1;
		t269  L_24 = m8693(L_23, &m8693_MI);
		V_6 = L_24;
		int32_t L_25 = m11402((&V_6), &m11402_MI);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_26 = m11402((&p0), &m11402_MI);
		t1698 * L_27 = p1;
		t269  L_28 = m8694(L_27, &m8694_MI);
		V_7 = L_28;
		int32_t L_29 = m11402((&V_7), &m11402_MI);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_00e2;
		}
	}
	{
		int64_t L_30 = m6951((&p0), &m6951_MI);
		t1698 * L_31 = p1;
		t269  L_32 = m8694(L_31, &m8694_MI);
		V_8 = L_32;
		int64_t L_33 = m6951((&V_8), &m6951_MI);
		if ((((int64_t)L_30) < ((int64_t)L_33)))
		{
			goto IL_00e0;
		}
	}
	{
		int64_t L_34 = m6951((&p0), &m6951_MI);
		t1698 * L_35 = p1;
		t269  L_36 = m8693(L_35, &m8693_MI);
		V_9 = L_36;
		int64_t L_37 = m6951((&V_9), &m6951_MI);
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
extern "C" t269  m11825 (t2136 * __this, t269  p0, MethodInfo* method)
{
	t297  V_0 = {0};
	t269  V_1 = {0};
	t1698 * V_2 = {0};
	t297  V_3 = {0};
	t269  V_4 = {0};
	t297  V_5 = {0};
	t269  V_6 = {0};
	{
		int32_t L_0 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		t269  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t269  L_2 = p0;
		t297  L_3 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m11793((&V_0), &m11793_MI);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_5 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		t297  L_6 = V_0;
		t269  L_7 = m11441(NULL, L_5, L_6, &m11441_MI);
		t269  L_8 = p0;
		bool L_9 = m5824(NULL, L_7, L_8, &m5824_MI);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_10 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		t269  L_11 = m11412(NULL, L_10, 2, &m11412_MI);
		return L_11;
	}

IL_003e:
	{
		goto IL_0076;
	}

IL_0040:
	{
		int64_t L_12 = m11793((&V_0), &m11793_MI);
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0076;
		}
	}
	{
		int64_t L_13 = m6951((&p0), &m6951_MI);
		int64_t L_14 = m11793((&V_0), &m11793_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_15 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		V_4 = L_15;
		int64_t L_16 = m6951((&V_4), &m6951_MI);
		if ((((int64_t)((int64_t)((int64_t)L_13+(int64_t)L_14))) >= ((int64_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_17 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		t269  L_18 = m11412(NULL, L_17, 2, &m11412_MI);
		return L_18;
	}

IL_0076:
	{
		t297  L_19 = V_0;
		t269  L_20 = m11404((&p0), L_19, &m11404_MI);
		V_1 = L_20;
		int32_t L_21 = m11402((&p0), &m11402_MI);
		t1698 * L_22 = (t1698 *)VirtFuncInvoker1< t1698 *, int32_t >::Invoke(&m12132_MI, __this, L_21);
		V_2 = L_22;
		t1698 * L_23 = V_2;
		t297  L_24 = m8695(L_23, &m8695_MI);
		V_5 = L_24;
		int64_t L_25 = m11793((&V_5), &m11793_MI);
		if (L_25)
		{
			goto IL_00a6;
		}
	}
	{
		t269  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_27 = m11412(NULL, L_26, 2, &m11412_MI);
		return L_27;
	}

IL_00a6:
	{
		t269  L_28 = V_1;
		t1698 * L_29 = V_2;
		t269  L_30 = m8694(L_29, &m8694_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_31 = m5824(NULL, L_28, L_30, &m5824_MI);
		if (!L_31)
		{
			goto IL_00d9;
		}
	}
	{
		t1698 * L_32 = V_2;
		t269  L_33 = m8694(L_32, &m8694_MI);
		V_6 = L_33;
		t1698 * L_34 = V_2;
		t297  L_35 = m8695(L_34, &m8695_MI);
		t269  L_36 = m11433((&V_6), L_35, &m11433_MI);
		t269  L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_38 = m5823(NULL, L_36, L_37, &m5823_MI);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		t269  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_40 = m11412(NULL, L_39, 2, &m11412_MI);
		return L_40;
	}

IL_00d9:
	{
		t269  L_41 = V_1;
		t297  L_42 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, __this, L_41);
		V_3 = L_42;
		t297  L_43 = V_3;
		t269  L_44 = m11404((&p0), L_43, &m11404_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_45 = m11412(NULL, L_44, 2, &m11412_MI);
		return L_45;
	}
}
extern "C" t269  m11826 (t2136 * __this, t269  p0, MethodInfo* method)
{
	t297  V_0 = {0};
	{
		int32_t L_0 = m11403((&p0), &m11403_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		t269  L_1 = p0;
		return L_1;
	}

IL_000c:
	{
		t269  L_2 = p0;
		t297  L_3 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = m11793((&V_0), &m11793_MI);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_5 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		t297  L_6 = V_0;
		t269  L_7 = m11437(NULL, L_5, L_6, &m11437_MI);
		t269  L_8 = p0;
		bool L_9 = m5824(NULL, L_7, L_8, &m5824_MI);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_10 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f2;
		t269  L_11 = m11412(NULL, L_10, 1, &m11412_MI);
		return L_11;
	}

IL_003e:
	{
		goto IL_006a;
	}

IL_0040:
	{
		int64_t L_12 = m11793((&V_0), &m11793_MI);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_13 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		t297  L_14 = V_0;
		t269  L_15 = m11437(NULL, L_13, L_14, &m11437_MI);
		t269  L_16 = p0;
		bool L_17 = m5825(NULL, L_15, L_16, &m5825_MI);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_18 = ((t269_SFs*)InitializedTypeInfo(&t269_TI)->static_fields)->f3;
		t269  L_19 = m11412(NULL, L_18, 1, &m11412_MI);
		return L_19;
	}

IL_006a:
	{
		int64_t L_20 = m6951((&p0), &m6951_MI);
		int64_t L_21 = m11793((&V_0), &m11793_MI);
		t269  L_22 = {0};
		m11370(&L_22, ((int64_t)((int64_t)L_20-(int64_t)L_21)), &m11370_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_23 = m11412(NULL, L_22, 1, &m11412_MI);
		return L_23;
	}
}
extern "C" t297  m11827 (t2136 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		t269  L_1 = p0;
		t297  L_2 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, __this, L_1);
		t297  L_3 = m11828(__this, L_0, L_2, &m11828_MI);
		return L_3;
	}
}
extern "C" t297  m11828 (t2136 * __this, t269  p0, t297  p1, MethodInfo* method)
{
	t1698 * V_0 = {0};
	t269  V_1 = {0};
	t297  V_2 = {0};
	t269  V_3 = {0};
	t269  V_4 = {0};
	{
		int32_t L_0 = m11402((&p0), &m11402_MI);
		t1698 * L_1 = (t1698 *)VirtFuncInvoker1< t1698 *, int32_t >::Invoke(&m12132_MI, __this, L_0);
		V_0 = L_1;
		t1698 * L_2 = V_0;
		t297  L_3 = m8695(L_2, &m8695_MI);
		V_2 = L_3;
		int64_t L_4 = m11793((&V_2), &m11793_MI);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		t297  L_5 = p1;
		return L_5;
	}

IL_0020:
	{
		t297  L_6 = p1;
		t269  L_7 = m11404((&p0), L_6, &m11404_MI);
		V_1 = L_7;
		t269  L_8 = V_1;
		t1698 * L_9 = V_0;
		t269  L_10 = m8694(L_9, &m8694_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_11 = m5824(NULL, L_8, L_10, &m5824_MI);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1698 * L_12 = V_0;
		t269  L_13 = m8694(L_12, &m8694_MI);
		V_3 = L_13;
		t1698 * L_14 = V_0;
		t297  L_15 = m8695(L_14, &m8695_MI);
		t269  L_16 = m11433((&V_3), L_15, &m11433_MI);
		t269  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_18 = m5823(NULL, L_16, L_17, &m5823_MI);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		t297  L_19 = p1;
		return L_19;
	}

IL_0055:
	{
		t269  L_20 = V_1;
		t1698 * L_21 = V_0;
		t269  L_22 = m8693(L_21, &m8693_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_23 = m5725(NULL, L_20, L_22, &m5725_MI);
		if (!L_23)
		{
			goto IL_008d;
		}
	}
	{
		t1698 * L_24 = V_0;
		t269  L_25 = m8693(L_24, &m8693_MI);
		V_4 = L_25;
		t1698 * L_26 = V_0;
		t297  L_27 = m8695(L_26, &m8695_MI);
		t269  L_28 = m11404((&V_4), L_27, &m11404_MI);
		t269  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		bool L_30 = m5825(NULL, L_28, L_29, &m5825_MI);
		if (!L_30)
		{
			goto IL_008d;
		}
	}
	{
		t297  L_31 = p1;
		t1698 * L_32 = V_0;
		t297  L_33 = m8695(L_32, &m8695_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_34 = m11819(NULL, L_31, L_33, &m11819_MI);
		return L_34;
	}

IL_008d:
	{
		t269  L_35 = V_1;
		t297  L_36 = (t297 )VirtFuncInvoker1< t297 , t269  >::Invoke(&m12108_MI, __this, L_35);
		return L_36;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11832_MI;
extern MethodInfo m11836_MI;
extern MethodInfo m11835_MI;
extern MethodInfo m8692_MI;


extern MethodInfo m11829_MI;
extern "C" void m11829 (t2137 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5890(L_0, 1, &m5890_MI);
		__this->f3 = L_0;
		m11820(__this, &m11820_MI);
		return;
	}
}
extern "C" void m11830 (t2137 * __this, int64_t p0, MethodInfo* method)
{
	t1556* V_0 = {0};
	t221* V_1 = {0};
	t269  V_2 = {0};
	t1698 * V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5890(L_0, 1, &m5890_MI);
		__this->f3 = L_0;
		m11820(__this, &m11820_MI);
		int64_t L_1 = p0;
		m11370((&V_2), L_1, &m11370_MI);
		int32_t L_2 = m11402((&V_2), &m11402_MI);
		bool L_3 = m11832(NULL, L_2, (&V_0), (&V_1), &m11832_MI);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		t2* L_4 = m7818(NULL, (t2*) &_stringLiteral2811, &m7818_MI);
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, L_4, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003c:
	{
		t221* L_6 = V_1;
		int32_t L_7 = 0;
		t2* L_8 = m7818(NULL, (*(t2**)(t2**)SZArrayLdElema(L_6, L_7)), &m7818_MI);
		__this->f1 = L_8;
		t221* L_9 = V_1;
		int32_t L_10 = 1;
		t2* L_11 = m7818(NULL, (*(t2**)(t2**)SZArrayLdElema(L_9, L_10)), &m7818_MI);
		__this->f2 = L_11;
		t1556* L_12 = V_0;
		int32_t L_13 = 2;
		__this->f4 = (*(int64_t*)(int64_t*)SZArrayLdElema(L_12, L_13));
		t1556* L_14 = V_0;
		t1698 * L_15 = m11836(__this, L_14, &m11836_MI);
		V_3 = L_15;
		t1149 * L_16 = (__this->f3);
		int32_t L_17 = m11402((&V_2), &m11402_MI);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t125_TI), &L_18);
		t1698 * L_20 = V_3;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5708_MI, L_16, L_19, L_20);
		t1698 * L_21 = V_3;
		m11835(__this, L_21, &m11835_MI);
		return;
	}
}
extern MethodInfo m11831_MI;
extern "C" void m11831 (t2137 * __this, t9 * p0, MethodInfo* method)
{
	{
		m11835(__this, (t1698 *)NULL, &m11835_MI);
		return;
	}
}
extern "C" bool m11832 (t9 * __this , int32_t p0, t1556** p1, t221** p2, MethodInfo* method)
{
	typedef bool (*m11832_ftn) (int32_t, t1556**, t221**);
	static m11832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m11832_ftn)il2cpp_codegen_resolve_icall ("System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m11833_MI;
extern "C" t1698 * m11833 (t2137 * __this, int32_t p0, MethodInfo* method)
{
	t1149 * V_0 = {0};
	t1698 * V_1 = {0};
	t1556* V_2 = {0};
	t221* V_3 = {0};
	t1698 * V_4 = {0};
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
		t2* L_5 = m7818(NULL, (t2*) &_stringLiteral2813, &m7818_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m511(NULL, L_4, L_5, &m511_MI);
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_7, (t2*) &_stringLiteral2812, L_6, &m4336_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002c:
	{
		int32_t L_8 = p0;
		int32_t L_9 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		t1698 * L_10 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f8;
		return L_10;
	}

IL_003a:
	{
		t1149 * L_11 = (__this->f3);
		V_0 = L_11;
		t1149 * L_12 = V_0;
		m1067(NULL, L_12, &m1067_MI);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			t1149 * L_13 = (__this->f3);
			int32_t L_14 = p0;
			int32_t L_15 = L_14;
			t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
			t9 * L_17 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_13, L_16);
			V_1 = ((t1698 *)Castclass(L_17, InitializedTypeInfo(&t1698_TI)));
			t1698 * L_18 = V_1;
			if (L_18)
			{
				goto IL_00a2;
			}
		}

IL_0061:
		{
			int32_t L_19 = p0;
			bool L_20 = m11832(NULL, L_19, (&V_2), (&V_3), &m11832_MI);
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
			t2* L_24 = m511(NULL, (t2*) &_stringLiteral2814, L_23, &m511_MI);
			t2* L_25 = m7818(NULL, L_24, &m7818_MI);
			t556 * L_26 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
			m2885(L_26, L_25, &m2885_MI);
			il2cpp_codegen_raise_exception(L_26);
		}

IL_0088:
		{
			t1556* L_27 = V_2;
			t1698 * L_28 = m11836(__this, L_27, &m11836_MI);
			V_1 = L_28;
			t1149 * L_29 = (__this->f3);
			int32_t L_30 = p0;
			int32_t L_31 = L_30;
			t9 * L_32 = Box(InitializedTypeInfo(&t125_TI), &L_31);
			t1698 * L_33 = V_1;
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5708_MI, L_29, L_32, L_33);
		}

IL_00a2:
		{
			t1698 * L_34 = V_1;
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
		t1149 * L_35 = V_0;
		m1069(NULL, L_35, &m1069_MI);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00b0:
	{
		t1698 * L_36 = V_4;
		return L_36;
	}
}
extern MethodInfo m11834_MI;
extern "C" t297  m11834 (t2137 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t269  >::Invoke(&m11823_MI, __this, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		t297  L_2 = (__this->f6);
		return L_2;
	}

IL_0010:
	{
		t297  L_3 = (__this->f5);
		return L_3;
	}
}
extern "C" void m11835 (t2137 * __this, t1698 * p0, MethodInfo* method)
{
	t1556* V_0 = {0};
	t221* V_1 = {0};
	t269  V_2 = {0};
	t269  V_3 = {0};
	t297  V_4 = {0};
	{
		t1698 * L_0 = p0;
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_1 = m1084(NULL, &m1084_MI);
		V_2 = L_1;
		int32_t L_2 = m11402((&V_2), &m11402_MI);
		((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f7 = L_2;
		int32_t L_3 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f7;
		bool L_4 = m11832(NULL, L_3, (&V_0), (&V_1), &m11832_MI);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f7;
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m511(NULL, (t2*) &_stringLiteral2814, L_7, &m511_MI);
		t2* L_9 = m7818(NULL, L_8, &m7818_MI);
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_10, L_9, &m2885_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0044:
	{
		t1556* L_11 = V_0;
		t1698 * L_12 = m11836(__this, L_11, &m11836_MI);
		p0 = L_12;
		goto IL_0064;
	}

IL_0051:
	{
		t1698 * L_13 = p0;
		t269  L_14 = m8693(L_13, &m8693_MI);
		V_3 = L_14;
		int32_t L_15 = m11402((&V_3), &m11402_MI);
		((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f7 = L_15;
	}

IL_0064:
	{
		int64_t L_16 = (__this->f4);
		t297  L_17 = {0};
		m11783(&L_17, L_16, &m11783_MI);
		__this->f5 = L_17;
		int64_t L_18 = (__this->f4);
		t1698 * L_19 = p0;
		t297  L_20 = m8695(L_19, &m8695_MI);
		V_4 = L_20;
		int64_t L_21 = m11793((&V_4), &m11793_MI);
		t297  L_22 = {0};
		m11783(&L_22, ((int64_t)((int64_t)L_18+(int64_t)L_21)), &m11783_MI);
		__this->f6 = L_22;
		t1698 * L_23 = p0;
		((t2137_SFs*)InitializedTypeInfo(&t2137_TI)->static_fields)->f8 = L_23;
		return;
	}
}
extern "C" t1698 * m11836 (t2137 * __this, t1556* p0, MethodInfo* method)
{
	{
		t1556* L_0 = p0;
		int32_t L_1 = 0;
		t269  L_2 = {0};
		m11370(&L_2, (*(int64_t*)(int64_t*)SZArrayLdElema(L_0, L_1)), &m11370_MI);
		t1556* L_3 = p0;
		int32_t L_4 = 1;
		t269  L_5 = {0};
		m11370(&L_5, (*(int64_t*)(int64_t*)SZArrayLdElema(L_3, L_4)), &m11370_MI);
		t1556* L_6 = p0;
		int32_t L_7 = 3;
		t297  L_8 = {0};
		m11783(&L_8, (*(int64_t*)(int64_t*)SZArrayLdElema(L_6, L_7)), &m11783_MI);
		t1698 * L_9 = (t1698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1698_TI));
		m8692(L_9, L_2, L_5, L_8, &m8692_MI);
		return L_9;
	}
}
#include "t1547.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1547_TI;
#include "t1547MD.h"



#include "t2138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2138_TI;
#include "t2138MD.h"



extern MethodInfo m11837_MI;
extern "C" void m11837 (t2138 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral1254, &m5712_MI);
		__this->f11 = L_3;
		return;
	}
}
extern MethodInfo m11838_MI;
extern "C" void m11838 (t2138 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m4473(__this, L_0, L_1, &m4473_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5715(L_2, (t2*) &_stringLiteral1254, L_3, &m5715_MI);
		return;
	}
}
#include "t2101.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2101_TI;



extern MethodInfo m11839_MI;
extern "C" void m11839 (t2101 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2817, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233054), &m4433_MI);
		return;
	}
}
extern "C" void m11840 (t2101 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233054), &m4433_MI);
		return;
	}
}
extern "C" void m11841 (t2101 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		t1093 * L_2 = p0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0016:
	{
		t1093 * L_4 = p0;
		t2* L_5 = m5712(L_4, (t2*) &_stringLiteral2818, &m5712_MI);
		__this->f12 = L_5;
		t1093 * L_6 = p0;
		t2* L_7 = m5712(L_6, (t2*) &_stringLiteral2819, &m5712_MI);
		__this->f13 = L_7;
		return;
	}
}
extern MethodInfo m11842_MI;
extern "C" t2* m11842 (t2101 * __this, MethodInfo* method)
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
		bool L_4 = m2713(NULL, L_2, L_3, &m2713_MI);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2* L_5 = (__this->f12);
		t2* L_6 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m1190(NULL, (t2*) &_stringLiteral2815, L_5, L_6, &m1190_MI);
		return L_7;
	}

IL_0039:
	{
		t2* L_8 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m590(NULL, (t2*) &_stringLiteral2816, L_8, &m590_MI);
		return L_9;
	}

IL_004a:
	{
		t2* L_10 = m1083(__this, &m1083_MI);
		return L_10;
	}
}
extern MethodInfo m11843_MI;
extern "C" void m11843 (t2101 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1093 * L_2 = p0;
		t1094  L_3 = p1;
		m4473(__this, L_2, L_3, &m4473_MI);
		t1093 * L_4 = p0;
		t2* L_5 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_4, (t2*) &_stringLiteral2818, L_5, L_6, &m5700_MI);
		t1093 * L_7 = p0;
		t2* L_8 = (__this->f13);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_7, (t2*) &_stringLiteral2819, L_8, L_9, &m5700_MI);
		t1093 * L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t126 * L_12 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		m5700(L_10, (t2*) &_stringLiteral2820, L_11, L_12, &m5700_MI);
		t1093 * L_13 = p0;
		int32_t L_14 = 0;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		t126 * L_16 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		m5700(L_13, (t2*) &_stringLiteral2821, L_15, L_16, &m5700_MI);
		return;
	}
}
#include "t2139.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2139_TI;
#include "t2139MD.h"



extern MethodInfo m11844_MI;
extern "C" void m11844 (t2139 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2822, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233088), &m4433_MI);
		return;
	}
}
extern MethodInfo m11845_MI;
extern "C" void m11845 (t2139 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233088), &m4433_MI);
		return;
	}
}
extern MethodInfo m11846_MI;
extern "C" void m11846 (t2139 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t2140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2140_TI;
#include "t2140MD.h"



#include "t2141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2141_TI;
#include "t2141MD.h"



#include "t2142.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2142_TI;

extern TypeInfo t1559_TI;
#include "t1559MD.h"
extern Il2CppType t2142_0_0_0;
extern MethodInfo m5714_MI;
extern MethodInfo m5702_MI;
extern MethodInfo m9538_MI;
extern MethodInfo m9536_MI;
extern MethodInfo m9439_MI;


extern MethodInfo m11847_MI;
extern "C" void m11847 (t2142 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		t2* L_1 = m5712(L_0, (t2*) &_stringLiteral1279, &m5712_MI);
		__this->f0 = L_1;
		t1093 * L_2 = p0;
		int32_t L_3 = m5714(L_2, (t2*) &_stringLiteral2823, &m5714_MI);
		__this->f1 = (((uint8_t)L_3));
		t1093 * L_4 = p0;
		t2* L_5 = m5712(L_4, (t2*) &_stringLiteral2029, &m5712_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m11848 (t9 * __this , t126 * p0, t1093 * p1, t1094  p2, MethodInfo* method)
{
	{
		t1093 * L_0 = p1;
		t126 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		m5715(L_0, (t2*) &_stringLiteral1279, L_2, &m5715_MI);
		t1093 * L_3 = p1;
		m5702(L_3, (t2*) &_stringLiteral2823, 4, &m5702_MI);
		t1093 * L_4 = p1;
		t126 * L_5 = p0;
		t1336 * L_6 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_5);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_6);
		m5715(L_4, (t2*) &_stringLiteral2029, L_7, &m5715_MI);
		t1093 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2142_0_0_0), &m329_MI);
		m10298(L_8, L_9, &m10298_MI);
		return;
	}
}
extern "C" void m11849 (t9 * __this , t2092 * p0, t1093 * p1, t1094  p2, MethodInfo* method)
{
	{
		t1093 * L_0 = p1;
		m5715(L_0, (t2*) &_stringLiteral1279, NULL, &m5715_MI);
		t1093 * L_1 = p1;
		m5702(L_1, (t2*) &_stringLiteral2823, 2, &m5702_MI);
		t1093 * L_2 = p1;
		t2092 * L_3 = p0;
		t126 * L_4 = m2486(L_3, &m2486_MI);
		t1336 * L_5 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_4);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_5);
		m5715(L_2, (t2*) &_stringLiteral2029, L_6, &m5715_MI);
		t1093 * L_7 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t2142_0_0_0), &m329_MI);
		m10298(L_7, L_8, &m10298_MI);
		return;
	}
}
extern MethodInfo m11850_MI;
extern "C" void m11850 (t9 * __this , t1559 * p0, t1093 * p1, t1094  p2, MethodInfo* method)
{
	{
		t1093 * L_0 = p1;
		t1559 * L_1 = p0;
		t2* L_2 = m9538(L_1, &m9538_MI);
		m5715(L_0, (t2*) &_stringLiteral1279, L_2, &m5715_MI);
		t1093 * L_3 = p1;
		m5702(L_3, (t2*) &_stringLiteral2823, 5, &m5702_MI);
		t1093 * L_4 = p1;
		t1559 * L_5 = p0;
		t1336 * L_6 = m9536(L_5, &m9536_MI);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9423_MI, L_6);
		m5715(L_4, (t2*) &_stringLiteral2029, L_7, &m5715_MI);
		t1093 * L_8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_9 = m329(NULL, LoadTypeToken(&t2142_0_0_0), &m329_MI);
		m10298(L_8, L_9, &m10298_MI);
		return;
	}
}
extern MethodInfo m11851_MI;
extern "C" void m11851 (t2142 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m11852_MI;
extern "C" t9 * m11852 (t2142 * __this, t1094  p0, MethodInfo* method)
{
	t1336 * V_0 = {0};
	t1336 * V_1 = {0};
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
		t1336 * L_3 = m9434(NULL, L_2, &m9434_MI);
		V_0 = L_3;
		t1336 * L_4 = V_0;
		t2* L_5 = (__this->f0);
		t126 * L_6 = (t126 *)VirtFuncInvoker1< t126 *, t2* >::Invoke(&m5744_MI, L_4, L_5);
		return L_6;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2092_TI));
		t2092 * L_7 = ((t2092_SFs*)InitializedTypeInfo(&t2092_TI)->static_fields)->f0;
		return L_7;
	}

IL_0044:
	{
		t2* L_8 = (__this->f2);
		t1336 * L_9 = m9434(NULL, L_8, &m9434_MI);
		V_1 = L_9;
		t1336 * L_10 = V_1;
		t2* L_11 = (__this->f0);
		t1559 * L_12 = (t1559 *)VirtFuncInvoker1< t1559 *, t2* >::Invoke(&m9439_MI, L_10, L_11);
		return L_12;
	}

IL_005d:
	{
		t2* L_13 = (__this->f0);
		t1336 * L_14 = m9434(NULL, L_13, &m9434_MI);
		return L_14;
	}

IL_0069:
	{
		t2* L_15 = m7818(NULL, (t2*) &_stringLiteral2824, &m7818_MI);
		t169 * L_16 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_16, L_15, &m5706_MI);
		il2cpp_codegen_raise_exception(L_16);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11856_MI;
extern MethodInfo m4420_MI;
extern MethodInfo m5877_MI;
extern MethodInfo m11863_MI;
extern MethodInfo m11864_MI;
extern MethodInfo m11869_MI;
extern MethodInfo m4276_MI;
extern MethodInfo m11855_MI;
extern MethodInfo m5962_MI;


extern MethodInfo m11853_MI;
extern "C" void m11853 (t1187 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m11856(__this, 2, 0, 0, (-1), (-1), &m11856_MI);
		return;
	}
}
extern MethodInfo m11854_MI;
extern TypeInfo* t305_TI_var;
extern "C" void m11854 (t1187 * __this, t2* p0, MethodInfo* method)
{
	static bool m11854_init;
	if (!m11854_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m11854_init = true;
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
		m339(L_1, (t2*) &_stringLiteral471, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		t2* L_2 = p0;
		t305* L_3 = ((t305*)SZArrayNew(t305_TI_var, 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)46);
		t221* L_4 = m4420(L_2, L_3, &m4420_MI);
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
		t2* L_8 = m7818(NULL, (t2*) &_stringLiteral2825, &m7818_MI);
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, L_8, &m2885_MI);
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
		int32_t L_13 = m5877(NULL, (*(t2**)(t2**)SZArrayLdElema(L_11, L_12)), &m5877_MI);
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
		int32_t L_17 = m5877(NULL, (*(t2**)(t2**)SZArrayLdElema(L_15, L_16)), &m5877_MI);
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
		int32_t L_21 = m5877(NULL, (*(t2**)(t2**)SZArrayLdElema(L_19, L_20)), &m5877_MI);
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
		int32_t L_25 = m5877(NULL, (*(t2**)(t2**)SZArrayLdElema(L_23, L_24)), &m5877_MI);
		V_5 = L_25;
	}

IL_0082:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		m11856(__this, L_26, L_27, L_28, L_29, L_30, &m11856_MI);
		return;
	}
}
extern MethodInfo m5717_MI;
extern "C" void m5717 (t1187 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		m11856(__this, 2, L_0, L_1, 0, 0, &m11856_MI);
		return;
	}
}
extern "C" void m11855 (t1187 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m11856(__this, 4, L_0, L_1, L_2, L_3, &m11856_MI);
		return;
	}
}
extern "C" void m11856 (t1187 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_1, (t2*) &_stringLiteral2826, &m5693_MI);
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
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_4, (t2*) &_stringLiteral2827, &m5693_MI);
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
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_8, (t2*) &_stringLiteral2828, &m5693_MI);
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
		t896 * L_12 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_12, (t2*) &_stringLiteral2829, &m5693_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0073:
	{
		int32_t L_13 = p4;
		__this->f4 = L_13;
		return;
	}
}
extern MethodInfo m11857_MI;
extern "C" int32_t m11857 (t1187 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m11858_MI;
extern "C" int32_t m11858 (t1187 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m11859_MI;
extern "C" int32_t m11859 (t1187 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m11860_MI;
extern "C" int32_t m11860 (t1187 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m11861_MI;
extern "C" int32_t m11861 (t1187 * __this, t9 * p0, MethodInfo* method)
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
		if (((t1187 *)IsInst(L_1, InitializedTypeInfo(&t1187_TI))))
		{
			goto IL_001d;
		}
	}
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral2830, &m7818_MI);
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_3, L_2, &m2885_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t9 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, t1187 * >::Invoke(&m11863_MI, __this, ((t1187 *)Castclass(L_4, InitializedTypeInfo(&t1187_TI))));
		return L_5;
	}
}
extern MethodInfo m11862_MI;
extern "C" bool m11862 (t1187 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t1187 * >::Invoke(&m11864_MI, __this, ((t1187 *)IsInst(L_0, InitializedTypeInfo(&t1187_TI))));
		return L_1;
	}
}
extern "C" int32_t m11863 (t1187 * __this, t1187 * p0, MethodInfo* method)
{
	{
		t1187 * L_0 = p0;
		bool L_1 = m11868(NULL, L_0, (t1187 *)NULL, &m11868_MI);
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
		t1187 * L_3 = p0;
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
		t1187 * L_6 = p0;
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
		t1187 * L_9 = p0;
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
		t1187 * L_12 = p0;
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
		t1187 * L_15 = p0;
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
		t1187 * L_18 = p0;
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
		t1187 * L_21 = p0;
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
		t1187 * L_24 = p0;
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
extern "C" bool m11864 (t1187 * __this, t1187 * p0, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		t1187 * L_0 = p0;
		bool L_1 = m11869(NULL, L_0, (t1187 *)NULL, &m11869_MI);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		t1187 * L_2 = p0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		t1187 * L_5 = p0;
		int32_t L_6 = (L_5->f2);
		int32_t L_7 = (__this->f2);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		t1187 * L_8 = p0;
		int32_t L_9 = (L_8->f3);
		int32_t L_10 = (__this->f3);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		t1187 * L_11 = p0;
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
extern MethodInfo m11865_MI;
extern "C" int32_t m11865 (t1187 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		int32_t L_1 = (__this->f3);
		int32_t L_2 = (__this->f2);
		int32_t L_3 = (__this->f1);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
extern "C" t2* m11866 (t1187 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		int32_t* L_0 = &(__this->f1);
		t2* L_1 = m4276(L_0, &m4276_MI);
		int32_t* L_2 = &(__this->f2);
		t2* L_3 = m4276(L_2, &m4276_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_1, (t2*) &_stringLiteral140, L_3, &m399_MI);
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
		t2* L_8 = m4276(L_7, &m4276_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = m399(NULL, L_6, (t2*) &_stringLiteral140, L_8, &m399_MI);
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
		t2* L_13 = m4276(L_12, &m4276_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = m399(NULL, L_11, (t2*) &_stringLiteral140, L_13, &m399_MI);
		V_0 = L_14;
	}

IL_0061:
	{
		t2* L_15 = V_0;
		return L_15;
	}
}
extern "C" t1187 * m11867 (t9 * __this , t2* p0, MethodInfo* method)
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
		t1187 * L_1 = (t1187 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1187_TI));
		m11855(L_1, 0, 0, 0, 0, &m11855_MI);
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
		uint16_t L_4 = m2714(L_2, L_3, &m2714_MI);
		V_7 = L_4;
		uint16_t L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_6 = m5897(NULL, L_5, &m5897_MI);
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
		int32_t L_23 = m2699(L_22, &m2699_MI);
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
		t1187 * L_35 = (t1187 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1187_TI));
		m11855(L_35, L_31, L_32, L_33, L_34, &m11855_MI);
		return L_35;
	}
}
extern "C" bool m11868 (t9 * __this , t1187 * p0, t1187 * p1, MethodInfo* method)
{
	{
		t1187 * L_0 = p0;
		t1187 * L_1 = p1;
		bool L_2 = m5962(NULL, L_0, L_1, &m5962_MI);
		return L_2;
	}
}
extern "C" bool m11869 (t9 * __this , t1187 * p0, t1187 * p1, MethodInfo* method)
{
	{
		t1187 * L_0 = p0;
		t1187 * L_1 = p1;
		bool L_2 = m5962(NULL, L_0, L_1, &m5962_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1912_TI;
#include "t1912MD.h"

#include "t1834.h"
#include "t1835.h"
#include "t1834MD.h"
extern MethodInfo m9748_MI;
extern MethodInfo m11872_MI;
extern MethodInfo m11874_MI;
extern MethodInfo m5705_MI;
extern MethodInfo m9749_MI;
extern MethodInfo m9750_MI;
extern MethodInfo m11876_MI;
extern MethodInfo m5701_MI;
extern MethodInfo m11875_MI;


extern MethodInfo m11870_MI;
extern "C" void m11870 (t1912 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m11871_MI;
extern "C" void m11871 (t1912 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m11872(__this, L_0, 0, &m11872_MI);
		return;
	}
}
extern "C" void m11872 (t1912 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		bool L_0 = p1;
		__this->f0 = L_0;
		t9 * L_1 = p0;
		m11874(__this, L_1, &m11874_MI);
		return;
	}
}
extern MethodInfo m11873_MI;
extern "C" void m11873 (t1912 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1093 * L_2 = p0;
		bool L_3 = m5705(L_2, (t2*) &_stringLiteral2831, &m5705_MI);
		__this->f0 = L_3;
		t1093 * L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_6 = m5703(L_4, (t2*) &_stringLiteral2832, L_5, &m5703_MI);
		V_0 = L_6;
		t9 * L_7 = V_0;
		m11874(__this, L_7, &m11874_MI);
		return;
	}
}
extern "C" void m11874 (t1912 * __this, t9 * p0, MethodInfo* method)
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
		t1834  L_2 = m9749(NULL, L_1, 1, &m9749_MI);
		__this->f1 = L_2;
		goto IL_0024;
	}

IL_0017:
	{
		t9 * L_3 = p0;
		t1834  L_4 = m9749(NULL, L_3, 0, &m9749_MI);
		__this->f1 = L_4;
	}

IL_0024:
	{
		return;
	}
}
extern "C" t9 * m11875 (t1912 * __this, MethodInfo* method)
{
	{
		t1834 * L_0 = &(__this->f1);
		t9 * L_1 = m9748(L_0, &m9748_MI);
		return L_1;
	}
}
extern "C" bool m11876 (t1912 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m11877_MI;
extern "C" void m11877 (t1912 * __this, MethodInfo* method)
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
		t1834 * L_0 = &(__this->f1);
		m9750(L_0, &m9750_MI);
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
extern MethodInfo m11878_MI;
extern "C" void m11878 (t1912 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1093 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral418, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1093 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m11876_MI, __this);
		m5701(L_2, (t2*) &_stringLiteral2831, L_3, &m5701_MI);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t1093 * L_4 = p0;
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m11875_MI, __this);
		m5715(L_4, (t2*) &_stringLiteral2832, L_5, &m5715_MI);
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
		t1093 * L_6 = p0;
		m5715(L_6, (t2*) &_stringLiteral2832, NULL, &m5715_MI);
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
