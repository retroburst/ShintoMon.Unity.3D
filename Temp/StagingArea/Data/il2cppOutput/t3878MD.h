#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3878;
struct t9;

extern "C" void m24456_gshared (t3878 * __this, MethodInfo* method);
#define m24456(__this, method) (( void (*) (t3878 *, MethodInfo*))m24456_gshared)(__this, method)
extern "C" int32_t m24457_gshared (t3878 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24457(__this, p0, p1, method) (( int32_t (*) (t3878 *, t9 *, t9 *, MethodInfo*))m24457_gshared)(__this, p0, p1, method)
