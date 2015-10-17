#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2807;

extern "C" void m13899_gshared (t2807 * __this, MethodInfo* method);
#define m13899(__this, method) (( void (*) (t2807 *, MethodInfo*))m13899_gshared)(__this, method)
extern "C" int32_t m13900_gshared (t2807 * __this, uint8_t p0, MethodInfo* method);
#define m13900(__this, p0, method) (( int32_t (*) (t2807 *, uint8_t, MethodInfo*))m13900_gshared)(__this, p0, method)
extern "C" bool m13901_gshared (t2807 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m13901(__this, p0, p1, method) (( bool (*) (t2807 *, uint8_t, uint8_t, MethodInfo*))m13901_gshared)(__this, p0, p1, method)
