#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3820;

extern "C" void m24131_gshared (t3820 * __this, MethodInfo* method);
#define m24131(__this, method) (( void (*) (t3820 *, MethodInfo*))m24131_gshared)(__this, method)
extern "C" int32_t m24132_gshared (t3820 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24132(__this, p0, p1, method) (( int32_t (*) (t3820 *, int32_t, int32_t, MethodInfo*))m24132_gshared)(__this, p0, p1, method)
