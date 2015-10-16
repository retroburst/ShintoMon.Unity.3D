#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3062;
#include "t340.h"

extern "C" void m16524_gshared (t3062 * __this, MethodInfo* method);
#define m16524(__this, method) (( void (*) (t3062 *, MethodInfo*))m16524_gshared)(__this, method)
extern "C" int32_t m16525_gshared (t3062 * __this, t340  p0, t340  p1, MethodInfo* method);
#define m16525(__this, p0, p1, method) (( int32_t (*) (t3062 *, t340 , t340 , MethodInfo*))m16525_gshared)(__this, p0, p1, method)
