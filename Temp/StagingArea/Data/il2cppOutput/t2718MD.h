#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2718;
struct t9;
struct t121;
#include "t1164.h"

extern "C" void m13092_gshared (t2718 * __this, t121 * p0, MethodInfo* method);
#define m13092(__this, p0, method) (( void (*) (t2718 *, t121 *, MethodInfo*))m13092_gshared)(__this, p0, method)
extern "C" t9 * m13093_gshared (t2718 * __this, MethodInfo* method);
#define m13093(__this, method) (( t9 * (*) (t2718 *, MethodInfo*))m13093_gshared)(__this, method)
extern "C" void m13094_gshared (t2718 * __this, MethodInfo* method);
#define m13094(__this, method) (( void (*) (t2718 *, MethodInfo*))m13094_gshared)(__this, method)
extern "C" bool m13095_gshared (t2718 * __this, MethodInfo* method);
#define m13095(__this, method) (( bool (*) (t2718 *, MethodInfo*))m13095_gshared)(__this, method)
extern "C" t1164  m13096_gshared (t2718 * __this, MethodInfo* method);
#define m13096(__this, method) (( t1164  (*) (t2718 *, MethodInfo*))m13096_gshared)(__this, method)
