#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2923;

extern "C" void m14968_gshared (t2923 * __this, MethodInfo* method);
#define m14968(__this, method) (( void (*) (t2923 *, MethodInfo*))m14968_gshared)(__this, method)
extern "C" int32_t m14969_gshared (t2923 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14969(__this, p0, p1, method) (( int32_t (*) (t2923 *, uint16_t, uint16_t, MethodInfo*))m14969_gshared)(__this, p0, p1, method)
