#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2709;
struct t9;
struct t121;
#include "t1155.h"

extern "C" void m13063_gshared (t2709 * __this, t121 * p0, MethodInfo* method);
#define m13063(__this, p0, method) (( void (*) (t2709 *, t121 *, MethodInfo*))m13063_gshared)(__this, p0, method)
extern "C" t9 * m13064_gshared (t2709 * __this, MethodInfo* method);
#define m13064(__this, method) (( t9 * (*) (t2709 *, MethodInfo*))m13064_gshared)(__this, method)
extern "C" void m13065_gshared (t2709 * __this, MethodInfo* method);
#define m13065(__this, method) (( void (*) (t2709 *, MethodInfo*))m13065_gshared)(__this, method)
extern "C" bool m13066_gshared (t2709 * __this, MethodInfo* method);
#define m13066(__this, method) (( bool (*) (t2709 *, MethodInfo*))m13066_gshared)(__this, method)
extern "C" t1155  m13067_gshared (t2709 * __this, MethodInfo* method);
#define m13067(__this, method) (( t1155  (*) (t2709 *, MethodInfo*))m13067_gshared)(__this, method)
