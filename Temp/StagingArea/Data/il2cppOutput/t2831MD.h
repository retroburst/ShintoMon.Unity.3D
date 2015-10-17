#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2831;
struct t9;
struct t121;
#include "t154.h"

extern "C" void m14081_gshared (t2831 * __this, t121 * p0, MethodInfo* method);
#define m14081(__this, p0, method) (( void (*) (t2831 *, t121 *, MethodInfo*))m14081_gshared)(__this, p0, method)
extern "C" t9 * m14082_gshared (t2831 * __this, MethodInfo* method);
#define m14082(__this, method) (( t9 * (*) (t2831 *, MethodInfo*))m14082_gshared)(__this, method)
extern "C" void m14083_gshared (t2831 * __this, MethodInfo* method);
#define m14083(__this, method) (( void (*) (t2831 *, MethodInfo*))m14083_gshared)(__this, method)
extern "C" bool m14084_gshared (t2831 * __this, MethodInfo* method);
#define m14084(__this, method) (( bool (*) (t2831 *, MethodInfo*))m14084_gshared)(__this, method)
extern "C" t154  m14085_gshared (t2831 * __this, MethodInfo* method);
#define m14085(__this, method) (( t154  (*) (t2831 *, MethodInfo*))m14085_gshared)(__this, method)
