#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2718;
struct t9;

extern "C" void m13113_gshared (t2718 * __this, MethodInfo* method);
#define m13113(__this, method) (( void (*) (t2718 *, MethodInfo*))m13113_gshared)(__this, method)
extern "C" int32_t m13114_gshared (t2718 * __this, t9 * p0, MethodInfo* method);
#define m13114(__this, p0, method) (( int32_t (*) (t2718 *, t9 *, MethodInfo*))m13114_gshared)(__this, p0, method)
extern "C" bool m13115_gshared (t2718 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13115(__this, p0, p1, method) (( bool (*) (t2718 *, t9 *, t9 *, MethodInfo*))m13115_gshared)(__this, p0, p1, method)
