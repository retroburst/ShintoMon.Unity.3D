#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3500;
#include "t594.h"

extern "C" void m21028_gshared (t3500 * __this, MethodInfo* method);
#define m21028(__this, method) (( void (*) (t3500 *, MethodInfo*))m21028_gshared)(__this, method)
extern "C" int32_t m21029_gshared (t3500 * __this, t594  p0, t594  p1, MethodInfo* method);
#define m21029(__this, p0, p1, method) (( int32_t (*) (t3500 *, t594 , t594 , MethodInfo*))m21029_gshared)(__this, p0, p1, method)
