#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3754;
struct t9;
struct t121;
#include "t849.h"

extern "C" void m23480_gshared (t3754 * __this, t121 * p0, MethodInfo* method);
#define m23480(__this, p0, method) (( void (*) (t3754 *, t121 *, MethodInfo*))m23480_gshared)(__this, p0, method)
extern "C" t9 * m23481_gshared (t3754 * __this, MethodInfo* method);
#define m23481(__this, method) (( t9 * (*) (t3754 *, MethodInfo*))m23481_gshared)(__this, method)
extern "C" void m23482_gshared (t3754 * __this, MethodInfo* method);
#define m23482(__this, method) (( void (*) (t3754 *, MethodInfo*))m23482_gshared)(__this, method)
extern "C" bool m23483_gshared (t3754 * __this, MethodInfo* method);
#define m23483(__this, method) (( bool (*) (t3754 *, MethodInfo*))m23483_gshared)(__this, method)
extern "C" t849  m23484_gshared (t3754 * __this, MethodInfo* method);
#define m23484(__this, method) (( t849  (*) (t3754 *, MethodInfo*))m23484_gshared)(__this, method)
