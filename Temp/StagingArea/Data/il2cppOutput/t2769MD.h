#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2769;
struct t9;

extern "C" void m13561_gshared (t2769 * __this, MethodInfo* method);
#define m13561(__this, method) (( void (*) (t2769 *, MethodInfo*))m13561_gshared)(__this, method)
extern "C" int32_t m13562_gshared (t2769 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13562(__this, p0, p1, method) (( int32_t (*) (t2769 *, t9 *, t9 *, MethodInfo*))m13562_gshared)(__this, p0, p1, method)
