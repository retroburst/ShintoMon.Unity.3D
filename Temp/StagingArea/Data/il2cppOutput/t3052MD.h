#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3052;
struct t9;
struct t121;
#include "t340.h"

extern "C" void m16427_gshared (t3052 * __this, t121 * p0, MethodInfo* method);
#define m16427(__this, p0, method) (( void (*) (t3052 *, t121 *, MethodInfo*))m16427_gshared)(__this, p0, method)
extern "C" t9 * m16428_gshared (t3052 * __this, MethodInfo* method);
#define m16428(__this, method) (( t9 * (*) (t3052 *, MethodInfo*))m16428_gshared)(__this, method)
extern "C" void m16429_gshared (t3052 * __this, MethodInfo* method);
#define m16429(__this, method) (( void (*) (t3052 *, MethodInfo*))m16429_gshared)(__this, method)
extern "C" bool m16430_gshared (t3052 * __this, MethodInfo* method);
#define m16430(__this, method) (( bool (*) (t3052 *, MethodInfo*))m16430_gshared)(__this, method)
extern "C" t340  m16431_gshared (t3052 * __this, MethodInfo* method);
#define m16431(__this, method) (( t340  (*) (t3052 *, MethodInfo*))m16431_gshared)(__this, method)
