#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2774;
struct t9;

extern "C" void m13596_gshared (t2774 * __this, MethodInfo* method);
#define m13596(__this, method) (( void (*) (t2774 *, MethodInfo*))m13596_gshared)(__this, method)
extern "C" void m13597_gshared (t9 * __this , MethodInfo* method);
#define m13597(__this , method) (( void (*) (t9 * , MethodInfo*))m13597_gshared)(__this , method)
extern "C" int32_t m13598_gshared (t2774 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13598(__this, p0, p1, method) (( int32_t (*) (t2774 *, t9 *, t9 *, MethodInfo*))m13598_gshared)(__this, p0, p1, method)
extern "C" t2774 * m13599_gshared (t9 * __this , MethodInfo* method);
#define m13599(__this , method) (( t2774 * (*) (t9 * , MethodInfo*))m13599_gshared)(__this , method)
