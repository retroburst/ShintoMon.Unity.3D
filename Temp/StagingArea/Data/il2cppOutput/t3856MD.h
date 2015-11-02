#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3856;

extern "C" void m24359_gshared (t3856 * __this, MethodInfo* method);
#define m24359(__this, method) (( void (*) (t3856 *, MethodInfo*))m24359_gshared)(__this, method)
extern "C" int32_t m24360_gshared (t3856 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24360(__this, p0, p1, method) (( int32_t (*) (t3856 *, int32_t, int32_t, MethodInfo*))m24360_gshared)(__this, p0, p1, method)
