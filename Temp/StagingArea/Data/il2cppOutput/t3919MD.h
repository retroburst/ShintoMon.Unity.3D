#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3919;
#include "t911.h"

extern "C" void m24709_gshared (t3919 * __this, MethodInfo* method);
#define m24709(__this, method) (( void (*) (t3919 *, MethodInfo*))m24709_gshared)(__this, method)
extern "C" int32_t m24710_gshared (t3919 * __this, t911  p0, t911  p1, MethodInfo* method);
#define m24710(__this, p0, p1, method) (( int32_t (*) (t3919 *, t911 , t911 , MethodInfo*))m24710_gshared)(__this, p0, p1, method)
