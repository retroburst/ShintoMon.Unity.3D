#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2201;
#include "t923.h"

extern "C" void m12177_gshared (t2201 * __this, MethodInfo* method);
#define m12177(__this, method) (( void (*) (t2201 *, MethodInfo*))m12177_gshared)(__this, method)
extern "C" int32_t m24911_gshared (t2201 * __this, t923  p0, t923  p1, MethodInfo* method);
#define m24911(__this, p0, p1, method) (( int32_t (*) (t2201 *, t923 , t923 , MethodInfo*))m24911_gshared)(__this, p0, p1, method)
