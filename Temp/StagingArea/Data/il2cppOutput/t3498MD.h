#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3498;

extern "C" void m21190_gshared (t3498 * __this, MethodInfo* method);
#define m21190(__this, method) (( void (*) (t3498 *, MethodInfo*))m21190_gshared)(__this, method)
extern "C" int32_t m21191_gshared (t3498 * __this, int64_t p0, MethodInfo* method);
#define m21191(__this, p0, method) (( int32_t (*) (t3498 *, int64_t, MethodInfo*))m21191_gshared)(__this, p0, method)
extern "C" bool m21192_gshared (t3498 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m21192(__this, p0, p1, method) (( bool (*) (t3498 *, int64_t, int64_t, MethodInfo*))m21192_gshared)(__this, p0, p1, method)
