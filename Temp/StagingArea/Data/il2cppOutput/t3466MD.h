#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3466;
struct t9;
#include "t587.h"

extern "C" void m20821_gshared (t3466 * __this, MethodInfo* method);
#define m20821(__this, method) (( void (*) (t3466 *, MethodInfo*))m20821_gshared)(__this, method)
extern "C" void m20822_gshared (t9 * __this , MethodInfo* method);
#define m20822(__this , method) (( void (*) (t9 * , MethodInfo*))m20822_gshared)(__this , method)
extern "C" int32_t m20823_gshared (t3466 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20823(__this, p0, p1, method) (( int32_t (*) (t3466 *, t9 *, t9 *, MethodInfo*))m20823_gshared)(__this, p0, p1, method)
extern "C" t3466 * m20824_gshared (t9 * __this , MethodInfo* method);
#define m20824(__this , method) (( t3466 * (*) (t9 * , MethodInfo*))m20824_gshared)(__this , method)
