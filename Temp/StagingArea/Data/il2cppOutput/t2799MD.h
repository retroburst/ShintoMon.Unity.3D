#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2799;

extern "C" void m13874_gshared (t2799 * __this, MethodInfo* method);
#define m13874(__this, method) (( void (*) (t2799 *, MethodInfo*))m13874_gshared)(__this, method)
extern "C" int32_t m13875_gshared (t2799 * __this, uint8_t p0, MethodInfo* method);
#define m13875(__this, p0, method) (( int32_t (*) (t2799 *, uint8_t, MethodInfo*))m13875_gshared)(__this, p0, method)
extern "C" bool m13876_gshared (t2799 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m13876(__this, p0, p1, method) (( bool (*) (t2799 *, uint8_t, uint8_t, MethodInfo*))m13876_gshared)(__this, p0, p1, method)
