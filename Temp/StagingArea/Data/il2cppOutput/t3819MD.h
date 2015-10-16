#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3819;
struct t9;

extern "C" void m24127_gshared (t3819 * __this, MethodInfo* method);
#define m24127(__this, method) (( void (*) (t3819 *, MethodInfo*))m24127_gshared)(__this, method)
extern "C" void m24128_gshared (t9 * __this , MethodInfo* method);
#define m24128(__this , method) (( void (*) (t9 * , MethodInfo*))m24128_gshared)(__this , method)
extern "C" int32_t m24129_gshared (t3819 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24129(__this, p0, p1, method) (( int32_t (*) (t3819 *, t9 *, t9 *, MethodInfo*))m24129_gshared)(__this, p0, p1, method)
extern "C" t3819 * m24130_gshared (t9 * __this , MethodInfo* method);
#define m24130(__this , method) (( t3819 * (*) (t9 * , MethodInfo*))m24130_gshared)(__this , method)
