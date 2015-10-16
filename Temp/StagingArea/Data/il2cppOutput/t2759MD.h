#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2759;
struct t9;

extern "C" void m13528_gshared (t2759 * __this, MethodInfo* method);
#define m13528(__this, method) (( void (*) (t2759 *, MethodInfo*))m13528_gshared)(__this, method)
extern "C" void m13529_gshared (t9 * __this , MethodInfo* method);
#define m13529(__this , method) (( void (*) (t9 * , MethodInfo*))m13529_gshared)(__this , method)
extern "C" int32_t m13530_gshared (t2759 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13530(__this, p0, p1, method) (( int32_t (*) (t2759 *, t9 *, t9 *, MethodInfo*))m13530_gshared)(__this, p0, p1, method)
extern "C" t2759 * m13531_gshared (t9 * __this , MethodInfo* method);
#define m13531(__this , method) (( t2759 * (*) (t9 * , MethodInfo*))m13531_gshared)(__this , method)
