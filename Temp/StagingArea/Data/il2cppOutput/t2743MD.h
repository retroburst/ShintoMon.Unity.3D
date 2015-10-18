#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2743;
struct t9;

extern "C" void m13243_gshared (t2743 * __this, MethodInfo* method);
#define m13243(__this, method) (( void (*) (t2743 *, MethodInfo*))m13243_gshared)(__this, method)
extern "C" int32_t m13245_gshared (t2743 * __this, t9 * p0, MethodInfo* method);
#define m13245(__this, p0, method) (( int32_t (*) (t2743 *, t9 *, MethodInfo*))m13245_gshared)(__this, p0, method)
extern "C" bool m13247_gshared (t2743 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13247(__this, p0, p1, method) (( bool (*) (t2743 *, t9 *, t9 *, MethodInfo*))m13247_gshared)(__this, p0, p1, method)
