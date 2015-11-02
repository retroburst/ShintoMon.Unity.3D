#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3599;

extern "C" void m22033_gshared (t3599 * __this, MethodInfo* method);
#define m22033(__this, method) (( void (*) (t3599 *, MethodInfo*))m22033_gshared)(__this, method)
extern "C" int32_t m22034_gshared (t3599 * __this, uint64_t p0, MethodInfo* method);
#define m22034(__this, p0, method) (( int32_t (*) (t3599 *, uint64_t, MethodInfo*))m22034_gshared)(__this, p0, method)
extern "C" bool m22035_gshared (t3599 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m22035(__this, p0, p1, method) (( bool (*) (t3599 *, uint64_t, uint64_t, MethodInfo*))m22035_gshared)(__this, p0, p1, method)
