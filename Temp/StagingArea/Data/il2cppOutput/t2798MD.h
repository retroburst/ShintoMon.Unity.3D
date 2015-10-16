#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2798;

extern "C" void m13871_gshared (t2798 * __this, MethodInfo* method);
#define m13871(__this, method) (( void (*) (t2798 *, MethodInfo*))m13871_gshared)(__this, method)
extern "C" int32_t m13872_gshared (t2798 * __this, uint8_t p0, MethodInfo* method);
#define m13872(__this, p0, method) (( int32_t (*) (t2798 *, uint8_t, MethodInfo*))m13872_gshared)(__this, p0, method)
extern "C" bool m13873_gshared (t2798 * __this, uint8_t p0, uint8_t p1, MethodInfo* method);
#define m13873(__this, p0, p1, method) (( bool (*) (t2798 *, uint8_t, uint8_t, MethodInfo*))m13873_gshared)(__this, p0, p1, method)
