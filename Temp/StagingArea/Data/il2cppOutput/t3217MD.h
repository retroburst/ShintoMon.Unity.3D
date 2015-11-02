#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3217;
struct t9;
struct t121;
#include "t3205.h"

extern "C" void m18087_gshared (t3217 * __this, t121 * p0, MethodInfo* method);
#define m18087(__this, p0, method) (( void (*) (t3217 *, t121 *, MethodInfo*))m18087_gshared)(__this, p0, method)
extern "C" t9 * m18088_gshared (t3217 * __this, MethodInfo* method);
#define m18088(__this, method) (( t9 * (*) (t3217 *, MethodInfo*))m18088_gshared)(__this, method)
extern "C" void m18089_gshared (t3217 * __this, MethodInfo* method);
#define m18089(__this, method) (( void (*) (t3217 *, MethodInfo*))m18089_gshared)(__this, method)
extern "C" bool m18090_gshared (t3217 * __this, MethodInfo* method);
#define m18090(__this, method) (( bool (*) (t3217 *, MethodInfo*))m18090_gshared)(__this, method)
extern "C" t3205  m18091_gshared (t3217 * __this, MethodInfo* method);
#define m18091(__this, method) (( t3205  (*) (t3217 *, MethodInfo*))m18091_gshared)(__this, method)
