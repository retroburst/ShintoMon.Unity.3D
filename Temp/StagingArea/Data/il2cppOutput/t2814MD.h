#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2814;

extern "C" void m13942_gshared (t2814 * __this, MethodInfo* method);
#define m13942(__this, method) (( void (*) (t2814 *, MethodInfo*))m13942_gshared)(__this, method)
extern "C" int32_t m13943_gshared (t2814 * __this, uint8_t p0, MethodInfo* method);
#define m13943(__this, p0, method) (( int32_t (*) (t2814 *, uint8_t, MethodInfo*))m13943_gshared)(__this, p0, method)
extern "C" bool m13944_gshared (t2814 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m13944(__this, p0, p1, method) (( bool (*) (t2814 *, uint8_t, uint8_t, MethodInfo*))m13944_gshared)(__this, p0, p1, method)
