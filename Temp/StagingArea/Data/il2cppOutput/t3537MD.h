#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3537;

extern "C" void m21431_gshared (t3537 * __this, MethodInfo* method);
#define m21431(__this, method) (( void (*) (t3537 *, MethodInfo*))m21431_gshared)(__this, method)
extern "C" int32_t m21432_gshared (t3537 * __this, int64_t p0, MethodInfo* method);
#define m21432(__this, p0, method) (( int32_t (*) (t3537 *, int64_t, MethodInfo*))m21432_gshared)(__this, p0, method)
extern "C" bool m21433_gshared (t3537 * __this, int64_t p0, int64_t p1, MethodInfo* method);
#define m21433(__this, p0, p1, method) (( bool (*) (t3537 *, int64_t, int64_t, MethodInfo*))m21433_gshared)(__this, p0, p1, method)
