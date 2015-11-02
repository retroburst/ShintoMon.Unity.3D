#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3097;
#include "t354.h"

extern "C" void m16752_gshared (t3097 * __this, MethodInfo* method);
#define m16752(__this, method) (( void (*) (t3097 *, MethodInfo*))m16752_gshared)(__this, method)
extern "C" int32_t m16753_gshared (t3097 * __this, t354  p0, MethodInfo* method);
#define m16753(__this, p0, method) (( int32_t (*) (t3097 *, t354 , MethodInfo*))m16753_gshared)(__this, p0, method)
extern "C" bool m16754_gshared (t3097 * __this, t354  p0, t354  p1, MethodInfo* method);
#define m16754(__this, p0, p1, method) (( bool (*) (t3097 *, t354 , t354 , MethodInfo*))m16754_gshared)(__this, p0, p1, method)
