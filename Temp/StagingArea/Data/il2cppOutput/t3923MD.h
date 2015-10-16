#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3923;
#include "t297.h"

extern "C" void m24726_gshared (t3923 * __this, MethodInfo* method);
#define m24726(__this, method) (( void (*) (t3923 *, MethodInfo*))m24726_gshared)(__this, method)
extern "C" int32_t m24727_gshared (t3923 * __this, t297  p0, t297  p1, MethodInfo* method);
#define m24727(__this, p0, p1, method) (( int32_t (*) (t3923 *, t297 , t297 , MethodInfo*))m24727_gshared)(__this, p0, p1, method)
