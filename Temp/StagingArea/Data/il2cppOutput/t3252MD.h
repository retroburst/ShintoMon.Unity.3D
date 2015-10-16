#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3252;
struct t9;
struct t121;
#include "t3237.h"

extern "C" void m18629_gshared (t3252 * __this, t121 * p0, MethodInfo* method);
#define m18629(__this, p0, method) (( void (*) (t3252 *, t121 *, MethodInfo*))m18629_gshared)(__this, p0, method)
extern "C" t9 * m18630_gshared (t3252 * __this, MethodInfo* method);
#define m18630(__this, method) (( t9 * (*) (t3252 *, MethodInfo*))m18630_gshared)(__this, method)
extern "C" void m18631_gshared (t3252 * __this, MethodInfo* method);
#define m18631(__this, method) (( void (*) (t3252 *, MethodInfo*))m18631_gshared)(__this, method)
extern "C" bool m18632_gshared (t3252 * __this, MethodInfo* method);
#define m18632(__this, method) (( bool (*) (t3252 *, MethodInfo*))m18632_gshared)(__this, method)
extern "C" t3237  m18633_gshared (t3252 * __this, MethodInfo* method);
#define m18633(__this, method) (( t3237  (*) (t3252 *, MethodInfo*))m18633_gshared)(__this, method)
