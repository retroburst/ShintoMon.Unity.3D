#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2749;
struct t9;

extern "C" void m13282_gshared (t2749 * __this, MethodInfo* method);
#define m13282(__this, method) (( void (*) (t2749 *, MethodInfo*))m13282_gshared)(__this, method)
extern "C" int32_t m13284_gshared (t2749 * __this, t9 * p0, MethodInfo* method);
#define m13284(__this, p0, method) (( int32_t (*) (t2749 *, t9 *, MethodInfo*))m13284_gshared)(__this, p0, method)
extern "C" bool m13286_gshared (t2749 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13286(__this, p0, p1, method) (( bool (*) (t2749 *, t9 *, t9 *, MethodInfo*))m13286_gshared)(__this, p0, p1, method)
