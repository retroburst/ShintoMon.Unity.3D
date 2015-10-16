#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3605;
struct t9;
struct t121;
#include "t3604.h"

extern "C" void m22157_gshared (t3605 * __this, t121 * p0, MethodInfo* method);
#define m22157(__this, p0, method) (( void (*) (t3605 *, t121 *, MethodInfo*))m22157_gshared)(__this, p0, method)
extern "C" t9 * m22158_gshared (t3605 * __this, MethodInfo* method);
#define m22158(__this, method) (( t9 * (*) (t3605 *, MethodInfo*))m22158_gshared)(__this, method)
extern "C" void m22159_gshared (t3605 * __this, MethodInfo* method);
#define m22159(__this, method) (( void (*) (t3605 *, MethodInfo*))m22159_gshared)(__this, method)
extern "C" bool m22160_gshared (t3605 * __this, MethodInfo* method);
#define m22160(__this, method) (( bool (*) (t3605 *, MethodInfo*))m22160_gshared)(__this, method)
extern "C" t3604  m22161_gshared (t3605 * __this, MethodInfo* method);
#define m22161(__this, method) (( t3604  (*) (t3605 *, MethodInfo*))m22161_gshared)(__this, method)
