#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3765;
struct t9;
struct t121;
#include "t3764.h"

extern "C" void m23575_gshared (t3765 * __this, t121 * p0, MethodInfo* method);
#define m23575(__this, p0, method) (( void (*) (t3765 *, t121 *, MethodInfo*))m23575_gshared)(__this, p0, method)
extern "C" t9 * m23576_gshared (t3765 * __this, MethodInfo* method);
#define m23576(__this, method) (( t9 * (*) (t3765 *, MethodInfo*))m23576_gshared)(__this, method)
extern "C" void m23577_gshared (t3765 * __this, MethodInfo* method);
#define m23577(__this, method) (( void (*) (t3765 *, MethodInfo*))m23577_gshared)(__this, method)
extern "C" bool m23578_gshared (t3765 * __this, MethodInfo* method);
#define m23578(__this, method) (( bool (*) (t3765 *, MethodInfo*))m23578_gshared)(__this, method)
extern "C" t3764  m23579_gshared (t3765 * __this, MethodInfo* method);
#define m23579(__this, method) (( t3764  (*) (t3765 *, MethodInfo*))m23579_gshared)(__this, method)
