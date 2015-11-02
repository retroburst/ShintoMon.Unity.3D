#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3101;
#include "t354.h"

extern "C" void m16767_gshared (t3101 * __this, MethodInfo* method);
#define m16767(__this, method) (( void (*) (t3101 *, MethodInfo*))m16767_gshared)(__this, method)
extern "C" int32_t m16768_gshared (t3101 * __this, t354  p0, t354  p1, MethodInfo* method);
#define m16768(__this, p0, p1, method) (( int32_t (*) (t3101 *, t354 , t354 , MethodInfo*))m16768_gshared)(__this, p0, p1, method)
