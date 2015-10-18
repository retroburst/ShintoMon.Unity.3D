#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3851;

extern "C" void m24325_gshared (t3851 * __this, MethodInfo* method);
#define m24325(__this, method) (( void (*) (t3851 *, MethodInfo*))m24325_gshared)(__this, method)
extern "C" int32_t m24326_gshared (t3851 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24326(__this, p0, p1, method) (( int32_t (*) (t3851 *, int32_t, int32_t, MethodInfo*))m24326_gshared)(__this, p0, p1, method)
