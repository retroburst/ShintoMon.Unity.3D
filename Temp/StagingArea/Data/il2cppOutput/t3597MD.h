#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3597;
struct t9;
struct t121;
#include "t3596.h"

extern "C" void m22011_gshared (t3597 * __this, t121 * p0, MethodInfo* method);
#define m22011(__this, p0, method) (( void (*) (t3597 *, t121 *, MethodInfo*))m22011_gshared)(__this, p0, method)
extern "C" t9 * m22012_gshared (t3597 * __this, MethodInfo* method);
#define m22012(__this, method) (( t9 * (*) (t3597 *, MethodInfo*))m22012_gshared)(__this, method)
extern "C" void m22013_gshared (t3597 * __this, MethodInfo* method);
#define m22013(__this, method) (( void (*) (t3597 *, MethodInfo*))m22013_gshared)(__this, method)
extern "C" bool m22014_gshared (t3597 * __this, MethodInfo* method);
#define m22014(__this, method) (( bool (*) (t3597 *, MethodInfo*))m22014_gshared)(__this, method)
extern "C" t3596  m22015_gshared (t3597 * __this, MethodInfo* method);
#define m22015(__this, method) (( t3596  (*) (t3597 *, MethodInfo*))m22015_gshared)(__this, method)
