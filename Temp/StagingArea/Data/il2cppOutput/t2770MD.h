#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2770;
struct t9;
struct t121;
#include "t141.h"

extern "C" void m13443_gshared (t2770 * __this, t121 * p0, MethodInfo* method);
#define m13443(__this, p0, method) (( void (*) (t2770 *, t121 *, MethodInfo*))m13443_gshared)(__this, p0, method)
extern "C" t9 * m13444_gshared (t2770 * __this, MethodInfo* method);
#define m13444(__this, method) (( t9 * (*) (t2770 *, MethodInfo*))m13444_gshared)(__this, method)
extern "C" void m13445_gshared (t2770 * __this, MethodInfo* method);
#define m13445(__this, method) (( void (*) (t2770 *, MethodInfo*))m13445_gshared)(__this, method)
extern "C" bool m13446_gshared (t2770 * __this, MethodInfo* method);
#define m13446(__this, method) (( bool (*) (t2770 *, MethodInfo*))m13446_gshared)(__this, method)
extern "C" t141  m13447_gshared (t2770 * __this, MethodInfo* method);
#define m13447(__this, method) (( t141  (*) (t2770 *, MethodInfo*))m13447_gshared)(__this, method)
