#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3127;
struct t9;
struct t2;

extern "C" void m17280_gshared (t3127 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17280(__this, p0, p1, method) (( void (*) (t3127 *, t9 *, int32_t, MethodInfo*))m17280_gshared)(__this, p0, p1, method)
extern "C" t9 * m17281_gshared (t3127 * __this, MethodInfo* method);
#define m17281(__this, method) (( t9 * (*) (t3127 *, MethodInfo*))m17281_gshared)(__this, method)
extern "C" void m17282_gshared (t3127 * __this, t9 * p0, MethodInfo* method);
#define m17282(__this, p0, method) (( void (*) (t3127 *, t9 *, MethodInfo*))m17282_gshared)(__this, p0, method)
extern "C" int32_t m17283_gshared (t3127 * __this, MethodInfo* method);
#define m17283(__this, method) (( int32_t (*) (t3127 *, MethodInfo*))m17283_gshared)(__this, method)
extern "C" void m17284_gshared (t3127 * __this, int32_t p0, MethodInfo* method);
#define m17284(__this, p0, method) (( void (*) (t3127 *, int32_t, MethodInfo*))m17284_gshared)(__this, p0, method)
extern "C" t2* m17285_gshared (t3127 * __this, MethodInfo* method);
#define m17285(__this, method) (( t2* (*) (t3127 *, MethodInfo*))m17285_gshared)(__this, method)
