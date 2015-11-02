#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2996;
struct t9;
struct t121;
#include "t2994.h"

extern "C" void m15690_gshared (t2996 * __this, t121 * p0, MethodInfo* method);
#define m15690(__this, p0, method) (( void (*) (t2996 *, t121 *, MethodInfo*))m15690_gshared)(__this, p0, method)
extern "C" t9 * m15691_gshared (t2996 * __this, MethodInfo* method);
#define m15691(__this, method) (( t9 * (*) (t2996 *, MethodInfo*))m15691_gshared)(__this, method)
extern "C" void m15692_gshared (t2996 * __this, MethodInfo* method);
#define m15692(__this, method) (( void (*) (t2996 *, MethodInfo*))m15692_gshared)(__this, method)
extern "C" bool m15693_gshared (t2996 * __this, MethodInfo* method);
#define m15693(__this, method) (( bool (*) (t2996 *, MethodInfo*))m15693_gshared)(__this, method)
extern "C" t2994  m15694_gshared (t2996 * __this, MethodInfo* method);
#define m15694(__this, method) (( t2994  (*) (t2996 *, MethodInfo*))m15694_gshared)(__this, method)
