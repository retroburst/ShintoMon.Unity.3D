#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2897;

extern "C" void m14738_gshared (t2897 * __this, MethodInfo* method);
#define m14738(__this, method) (( void (*) (t2897 *, MethodInfo*))m14738_gshared)(__this, method)
extern "C" int32_t m14739_gshared (t2897 * __this, uint16_t p0, MethodInfo* method);
#define m14739(__this, p0, method) (( int32_t (*) (t2897 *, uint16_t, MethodInfo*))m14739_gshared)(__this, p0, method)
extern "C" bool m14740_gshared (t2897 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14740(__this, p0, p1, method) (( bool (*) (t2897 *, uint16_t, uint16_t, MethodInfo*))m14740_gshared)(__this, p0, p1, method)
