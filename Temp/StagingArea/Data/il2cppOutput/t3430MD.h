#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3430;
struct t9;
struct t121;
#include "t3429.h"

extern "C" void m20223_gshared (t3430 * __this, t121 * p0, MethodInfo* method);
#define m20223(__this, p0, method) (( void (*) (t3430 *, t121 *, MethodInfo*))m20223_gshared)(__this, p0, method)
extern "C" t9 * m20224_gshared (t3430 * __this, MethodInfo* method);
#define m20224(__this, method) (( t9 * (*) (t3430 *, MethodInfo*))m20224_gshared)(__this, method)
extern "C" void m20225_gshared (t3430 * __this, MethodInfo* method);
#define m20225(__this, method) (( void (*) (t3430 *, MethodInfo*))m20225_gshared)(__this, method)
extern "C" bool m20226_gshared (t3430 * __this, MethodInfo* method);
#define m20226(__this, method) (( bool (*) (t3430 *, MethodInfo*))m20226_gshared)(__this, method)
extern "C" t3429  m20227_gshared (t3430 * __this, MethodInfo* method);
#define m20227(__this, method) (( t3429  (*) (t3430 *, MethodInfo*))m20227_gshared)(__this, method)
