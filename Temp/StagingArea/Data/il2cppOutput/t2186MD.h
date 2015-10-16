#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2186;
#include "t910.h"

extern "C" void m12109_gshared (t2186 * __this, MethodInfo* method);
#define m12109(__this, method) (( void (*) (t2186 *, MethodInfo*))m12109_gshared)(__this, method)
extern "C" int32_t m24683_gshared (t2186 * __this, t910  p0, t910  p1, MethodInfo* method);
#define m24683(__this, p0, p1, method) (( int32_t (*) (t2186 *, t910 , t910 , MethodInfo*))m24683_gshared)(__this, p0, p1, method)
