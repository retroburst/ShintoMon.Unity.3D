#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3598;
struct t9;

extern "C" void m22028_gshared (t3598 * __this, MethodInfo* method);
#define m22028(__this, method) (( void (*) (t3598 *, MethodInfo*))m22028_gshared)(__this, method)
extern "C" void m22029_gshared (t9 * __this , MethodInfo* method);
#define m22029(__this , method) (( void (*) (t9 * , MethodInfo*))m22029_gshared)(__this , method)
extern "C" int32_t m22030_gshared (t3598 * __this, t9 * p0, MethodInfo* method);
#define m22030(__this, p0, method) (( int32_t (*) (t3598 *, t9 *, MethodInfo*))m22030_gshared)(__this, p0, method)
extern "C" bool m22031_gshared (t3598 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22031(__this, p0, p1, method) (( bool (*) (t3598 *, t9 *, t9 *, MethodInfo*))m22031_gshared)(__this, p0, p1, method)
extern "C" t3598 * m22032_gshared (t9 * __this , MethodInfo* method);
#define m22032(__this , method) (( t3598 * (*) (t9 * , MethodInfo*))m22032_gshared)(__this , method)
