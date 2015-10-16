#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3409;
struct t9;
struct t121;
#include "t3408.h"

extern "C" void m20155_gshared (t3409 * __this, t121 * p0, MethodInfo* method);
#define m20155(__this, p0, method) (( void (*) (t3409 *, t121 *, MethodInfo*))m20155_gshared)(__this, p0, method)
extern "C" t9 * m20156_gshared (t3409 * __this, MethodInfo* method);
#define m20156(__this, method) (( t9 * (*) (t3409 *, MethodInfo*))m20156_gshared)(__this, method)
extern "C" void m20157_gshared (t3409 * __this, MethodInfo* method);
#define m20157(__this, method) (( void (*) (t3409 *, MethodInfo*))m20157_gshared)(__this, method)
extern "C" bool m20158_gshared (t3409 * __this, MethodInfo* method);
#define m20158(__this, method) (( bool (*) (t3409 *, MethodInfo*))m20158_gshared)(__this, method)
extern "C" t3408  m20159_gshared (t3409 * __this, MethodInfo* method);
#define m20159(__this, method) (( t3408  (*) (t3409 *, MethodInfo*))m20159_gshared)(__this, method)
