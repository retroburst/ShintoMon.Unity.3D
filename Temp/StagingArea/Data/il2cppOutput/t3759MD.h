#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3759;
struct t9;
struct t121;
#include "t856.h"

extern "C" void m23514_gshared (t3759 * __this, t121 * p0, MethodInfo* method);
#define m23514(__this, p0, method) (( void (*) (t3759 *, t121 *, MethodInfo*))m23514_gshared)(__this, p0, method)
extern "C" t9 * m23515_gshared (t3759 * __this, MethodInfo* method);
#define m23515(__this, method) (( t9 * (*) (t3759 *, MethodInfo*))m23515_gshared)(__this, method)
extern "C" void m23516_gshared (t3759 * __this, MethodInfo* method);
#define m23516(__this, method) (( void (*) (t3759 *, MethodInfo*))m23516_gshared)(__this, method)
extern "C" bool m23517_gshared (t3759 * __this, MethodInfo* method);
#define m23517(__this, method) (( bool (*) (t3759 *, MethodInfo*))m23517_gshared)(__this, method)
extern "C" t856  m23518_gshared (t3759 * __this, MethodInfo* method);
#define m23518(__this, method) (( t856  (*) (t3759 *, MethodInfo*))m23518_gshared)(__this, method)
