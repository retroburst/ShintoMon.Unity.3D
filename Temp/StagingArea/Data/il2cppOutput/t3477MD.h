#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3477;
#include "t586.h"

extern "C" void m20973_gshared (t3477 * __this, MethodInfo* method);
#define m20973(__this, method) (( void (*) (t3477 *, MethodInfo*))m20973_gshared)(__this, method)
extern "C" int32_t m20974_gshared (t3477 * __this, t586  p0, t586  p1, MethodInfo* method);
#define m20974(__this, p0, p1, method) (( int32_t (*) (t3477 *, t586 , t586 , MethodInfo*))m20974_gshared)(__this, p0, p1, method)
