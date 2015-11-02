#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3951;
#include "t923.h"

extern "C" void m24916_gshared (t3951 * __this, MethodInfo* method);
#define m24916(__this, method) (( void (*) (t3951 *, MethodInfo*))m24916_gshared)(__this, method)
extern "C" int32_t m24917_gshared (t3951 * __this, t923  p0, t923  p1, MethodInfo* method);
#define m24917(__this, p0, p1, method) (( int32_t (*) (t3951 *, t923 , t923 , MethodInfo*))m24917_gshared)(__this, p0, p1, method)
