#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3100;
struct t9;
#include "t354.h"

extern "C" void m16763_gshared (t3100 * __this, MethodInfo* method);
#define m16763(__this, method) (( void (*) (t3100 *, MethodInfo*))m16763_gshared)(__this, method)
extern "C" void m16764_gshared (t9 * __this , MethodInfo* method);
#define m16764(__this , method) (( void (*) (t9 * , MethodInfo*))m16764_gshared)(__this , method)
extern "C" int32_t m16765_gshared (t3100 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m16765(__this, p0, p1, method) (( int32_t (*) (t3100 *, t9 *, t9 *, MethodInfo*))m16765_gshared)(__this, p0, p1, method)
extern "C" t3100 * m16766_gshared (t9 * __this , MethodInfo* method);
#define m16766(__this , method) (( t3100 * (*) (t9 * , MethodInfo*))m16766_gshared)(__this , method)
