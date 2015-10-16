#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3476;
struct t9;
#include "t586.h"

extern "C" void m20969_gshared (t3476 * __this, MethodInfo* method);
#define m20969(__this, method) (( void (*) (t3476 *, MethodInfo*))m20969_gshared)(__this, method)
extern "C" void m20970_gshared (t9 * __this , MethodInfo* method);
#define m20970(__this , method) (( void (*) (t9 * , MethodInfo*))m20970_gshared)(__this , method)
extern "C" int32_t m20971_gshared (t3476 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20971(__this, p0, p1, method) (( int32_t (*) (t3476 *, t9 *, t9 *, MethodInfo*))m20971_gshared)(__this, p0, p1, method)
extern "C" t3476 * m20972_gshared (t9 * __this , MethodInfo* method);
#define m20972(__this , method) (( t3476 * (*) (t9 * , MethodInfo*))m20972_gshared)(__this , method)
