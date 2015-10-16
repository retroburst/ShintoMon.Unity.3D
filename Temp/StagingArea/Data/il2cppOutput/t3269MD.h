#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3269;
struct t9;
struct t121;
#include "t587.h"

extern "C" void m18738_gshared (t3269 * __this, t121 * p0, MethodInfo* method);
#define m18738(__this, p0, method) (( void (*) (t3269 *, t121 *, MethodInfo*))m18738_gshared)(__this, p0, method)
extern "C" t9 * m18739_gshared (t3269 * __this, MethodInfo* method);
#define m18739(__this, method) (( t9 * (*) (t3269 *, MethodInfo*))m18739_gshared)(__this, method)
extern "C" void m18740_gshared (t3269 * __this, MethodInfo* method);
#define m18740(__this, method) (( void (*) (t3269 *, MethodInfo*))m18740_gshared)(__this, method)
extern "C" bool m18741_gshared (t3269 * __this, MethodInfo* method);
#define m18741(__this, method) (( bool (*) (t3269 *, MethodInfo*))m18741_gshared)(__this, method)
extern "C" t587  m18742_gshared (t3269 * __this, MethodInfo* method);
#define m18742(__this, method) (( t587  (*) (t3269 *, MethodInfo*))m18742_gshared)(__this, method)
