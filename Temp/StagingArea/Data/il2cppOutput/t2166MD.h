#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2166;
struct t9;

extern "C" void m13078_gshared (t2166 * __this, MethodInfo* method);
#define m13078(__this, method) (( void (*) (t2166 *, MethodInfo*))m13078_gshared)(__this, method)
extern "C" void m13079_gshared (t9 * __this , MethodInfo* method);
#define m13079(__this , method) (( void (*) (t9 * , MethodInfo*))m13079_gshared)(__this , method)
extern "C" int32_t m13080_gshared (t2166 * __this, t9 * p0, MethodInfo* method);
#define m13080(__this, p0, method) (( int32_t (*) (t2166 *, t9 *, MethodInfo*))m13080_gshared)(__this, p0, method)
extern "C" bool m13081_gshared (t2166 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13081(__this, p0, p1, method) (( bool (*) (t2166 *, t9 *, t9 *, MethodInfo*))m13081_gshared)(__this, p0, p1, method)
extern "C" t2166 * m13082_gshared (t9 * __this , MethodInfo* method);
#define m13082(__this , method) (( t2166 * (*) (t9 * , MethodInfo*))m13082_gshared)(__this , method)
