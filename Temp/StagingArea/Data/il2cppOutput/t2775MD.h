#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2775;
struct t9;

extern "C" void m13600_gshared (t2775 * __this, MethodInfo* method);
#define m13600(__this, method) (( void (*) (t2775 *, MethodInfo*))m13600_gshared)(__this, method)
extern "C" int32_t m13601_gshared (t2775 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13601(__this, p0, p1, method) (( int32_t (*) (t2775 *, t9 *, t9 *, MethodInfo*))m13601_gshared)(__this, p0, p1, method)
