#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2202;
#include "t923.h"

extern "C" void m12178_gshared (t2202 * __this, MethodInfo* method);
#define m12178(__this, method) (( void (*) (t2202 *, MethodInfo*))m12178_gshared)(__this, method)
extern "C" int32_t m24918_gshared (t2202 * __this, t923  p0, MethodInfo* method);
#define m24918(__this, p0, method) (( int32_t (*) (t2202 *, t923 , MethodInfo*))m24918_gshared)(__this, p0, method)
extern "C" bool m24919_gshared (t2202 * __this, t923  p0, t923  p1, MethodInfo* method);
#define m24919(__this, p0, p1, method) (( bool (*) (t2202 *, t923 , t923 , MethodInfo*))m24919_gshared)(__this, p0, p1, method)
