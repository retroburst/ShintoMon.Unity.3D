#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2888;

extern "C" void m14709_gshared (t2888 * __this, MethodInfo* method);
#define m14709(__this, method) (( void (*) (t2888 *, MethodInfo*))m14709_gshared)(__this, method)
extern "C" int32_t m14710_gshared (t2888 * __this, uint16_t p0, MethodInfo* method);
#define m14710(__this, p0, method) (( int32_t (*) (t2888 *, uint16_t, MethodInfo*))m14710_gshared)(__this, p0, method)
extern "C" bool m14711_gshared (t2888 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14711(__this, p0, p1, method) (( bool (*) (t2888 *, uint16_t, uint16_t, MethodInfo*))m14711_gshared)(__this, p0, p1, method)
