#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3478;
struct t9;
struct t121;
#include "t748.h"

extern "C" void m20728_gshared (t3478 * __this, t121 * p0, MethodInfo* method);
#define m20728(__this, p0, method) (( void (*) (t3478 *, t121 *, MethodInfo*))m20728_gshared)(__this, p0, method)
extern "C" t9 * m20729_gshared (t3478 * __this, MethodInfo* method);
#define m20729(__this, method) (( t9 * (*) (t3478 *, MethodInfo*))m20729_gshared)(__this, method)
extern "C" void m20730_gshared (t3478 * __this, MethodInfo* method);
#define m20730(__this, method) (( void (*) (t3478 *, MethodInfo*))m20730_gshared)(__this, method)
extern "C" bool m20731_gshared (t3478 * __this, MethodInfo* method);
#define m20731(__this, method) (( bool (*) (t3478 *, MethodInfo*))m20731_gshared)(__this, method)
extern "C" t748  m20732_gshared (t3478 * __this, MethodInfo* method);
#define m20732(__this, method) (( t748  (*) (t3478 *, MethodInfo*))m20732_gshared)(__this, method)
