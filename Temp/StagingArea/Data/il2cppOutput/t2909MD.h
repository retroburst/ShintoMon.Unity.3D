#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2909;

extern "C" void m14905_gshared (t2909 * __this, MethodInfo* method);
#define m14905(__this, method) (( void (*) (t2909 *, MethodInfo*))m14905_gshared)(__this, method)
extern "C" int32_t m14906_gshared (t2909 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14906(__this, p0, p1, method) (( int32_t (*) (t2909 *, uint16_t, uint16_t, MethodInfo*))m14906_gshared)(__this, p0, p1, method)
