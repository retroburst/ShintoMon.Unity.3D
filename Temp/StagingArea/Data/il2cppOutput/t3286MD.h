#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3286;
struct t9;
struct t121;
#include "t3271.h"

extern "C" void m18837_gshared (t3286 * __this, t121 * p0, MethodInfo* method);
#define m18837(__this, p0, method) (( void (*) (t3286 *, t121 *, MethodInfo*))m18837_gshared)(__this, p0, method)
extern "C" t9 * m18838_gshared (t3286 * __this, MethodInfo* method);
#define m18838(__this, method) (( t9 * (*) (t3286 *, MethodInfo*))m18838_gshared)(__this, method)
extern "C" void m18839_gshared (t3286 * __this, MethodInfo* method);
#define m18839(__this, method) (( void (*) (t3286 *, MethodInfo*))m18839_gshared)(__this, method)
extern "C" bool m18840_gshared (t3286 * __this, MethodInfo* method);
#define m18840(__this, method) (( bool (*) (t3286 *, MethodInfo*))m18840_gshared)(__this, method)
extern "C" t3271  m18841_gshared (t3286 * __this, MethodInfo* method);
#define m18841(__this, method) (( t3271  (*) (t3286 *, MethodInfo*))m18841_gshared)(__this, method)
