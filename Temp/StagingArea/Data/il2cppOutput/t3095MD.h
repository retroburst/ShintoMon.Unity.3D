#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3095;
struct t9;
#include "t347.h"

extern "C" void m16728_gshared (t3095 * __this, MethodInfo* method);
#define m16728(__this, method) (( void (*) (t3095 *, MethodInfo*))m16728_gshared)(__this, method)
extern "C" void m16729_gshared (t9 * __this , MethodInfo* method);
#define m16729(__this , method) (( void (*) (t9 * , MethodInfo*))m16729_gshared)(__this , method)
extern "C" int32_t m16730_gshared (t3095 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m16730(__this, p0, p1, method) (( int32_t (*) (t3095 *, t9 *, t9 *, MethodInfo*))m16730_gshared)(__this, p0, p1, method)
extern "C" t3095 * m16731_gshared (t9 * __this , MethodInfo* method);
#define m16731(__this , method) (( t3095 * (*) (t9 * , MethodInfo*))m16731_gshared)(__this , method)
