#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3236;
#include "t459.h"

extern "C" void m18300_gshared (t3236 * __this, MethodInfo* method);
#define m18300(__this, method) (( void (*) (t3236 *, MethodInfo*))m18300_gshared)(__this, method)
extern "C" int32_t m18301_gshared (t3236 * __this, t459  p0, MethodInfo* method);
#define m18301(__this, p0, method) (( int32_t (*) (t3236 *, t459 , MethodInfo*))m18301_gshared)(__this, p0, method)
extern "C" bool m18302_gshared (t3236 * __this, t459  p0, t459  p1, MethodInfo* method);
#define m18302(__this, p0, p1, method) (( bool (*) (t3236 *, t459 , t459 , MethodInfo*))m18302_gshared)(__this, p0, p1, method)
