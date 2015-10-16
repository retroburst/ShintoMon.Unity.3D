#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3792;
struct t9;
struct t121;
#include "t3791.h"

extern "C" void m23892_gshared (t3792 * __this, t121 * p0, MethodInfo* method);
#define m23892(__this, p0, method) (( void (*) (t3792 *, t121 *, MethodInfo*))m23892_gshared)(__this, p0, method)
extern "C" t9 * m23893_gshared (t3792 * __this, MethodInfo* method);
#define m23893(__this, method) (( t9 * (*) (t3792 *, MethodInfo*))m23893_gshared)(__this, method)
extern "C" void m23894_gshared (t3792 * __this, MethodInfo* method);
#define m23894(__this, method) (( void (*) (t3792 *, MethodInfo*))m23894_gshared)(__this, method)
extern "C" bool m23895_gshared (t3792 * __this, MethodInfo* method);
#define m23895(__this, method) (( bool (*) (t3792 *, MethodInfo*))m23895_gshared)(__this, method)
extern "C" t3791  m23896_gshared (t3792 * __this, MethodInfo* method);
#define m23896(__this, method) (( t3791  (*) (t3792 *, MethodInfo*))m23896_gshared)(__this, method)
