#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2741;
struct t9;
struct t121;
#include "t2740.h"

extern "C" void m13281_gshared (t2741 * __this, t121 * p0, MethodInfo* method);
#define m13281(__this, p0, method) (( void (*) (t2741 *, t121 *, MethodInfo*))m13281_gshared)(__this, p0, method)
extern "C" t9 * m13282_gshared (t2741 * __this, MethodInfo* method);
#define m13282(__this, method) (( t9 * (*) (t2741 *, MethodInfo*))m13282_gshared)(__this, method)
extern "C" void m13283_gshared (t2741 * __this, MethodInfo* method);
#define m13283(__this, method) (( void (*) (t2741 *, MethodInfo*))m13283_gshared)(__this, method)
extern "C" bool m13284_gshared (t2741 * __this, MethodInfo* method);
#define m13284(__this, method) (( bool (*) (t2741 *, MethodInfo*))m13284_gshared)(__this, method)
extern "C" t2740  m13285_gshared (t2741 * __this, MethodInfo* method);
#define m13285(__this, method) (( t2740  (*) (t2741 *, MethodInfo*))m13285_gshared)(__this, method)
