#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3595;

extern "C" void m22002_gshared (t3595 * __this, MethodInfo* method);
#define m22002(__this, method) (( void (*) (t3595 *, MethodInfo*))m22002_gshared)(__this, method)
extern "C" int32_t m22003_gshared (t3595 * __this, uint64_t p0, MethodInfo* method);
#define m22003(__this, p0, method) (( int32_t (*) (t3595 *, uint64_t, MethodInfo*))m22003_gshared)(__this, p0, method)
extern "C" bool m22004_gshared (t3595 * __this, uint64_t p0, uint64_t p1, MethodInfo* method);
#define m22004(__this, p0, p1, method) (( bool (*) (t3595 *, uint64_t, uint64_t, MethodInfo*))m22004_gshared)(__this, p0, p1, method)
