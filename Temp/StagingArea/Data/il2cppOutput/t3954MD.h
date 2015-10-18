#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3954;
#include "t304.h"

extern "C" void m24920_gshared (t3954 * __this, MethodInfo* method);
#define m24920(__this, method) (( void (*) (t3954 *, MethodInfo*))m24920_gshared)(__this, method)
extern "C" int32_t m24921_gshared (t3954 * __this, t304  p0, t304  p1, MethodInfo* method);
#define m24921(__this, p0, p1, method) (( int32_t (*) (t3954 *, t304 , t304 , MethodInfo*))m24921_gshared)(__this, p0, p1, method)
