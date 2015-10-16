#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3202;
#include "t452.h"

extern "C" void m18091_gshared (t3202 * __this, MethodInfo* method);
#define m18091(__this, method) (( void (*) (t3202 *, MethodInfo*))m18091_gshared)(__this, method)
extern "C" int32_t m18092_gshared (t3202 * __this, t452  p0, MethodInfo* method);
#define m18092(__this, p0, method) (( int32_t (*) (t3202 *, t452 , MethodInfo*))m18092_gshared)(__this, p0, method)
extern "C" bool m18093_gshared (t3202 * __this, t452  p0, t452  p1, MethodInfo* method);
#define m18093(__this, p0, p1, method) (( bool (*) (t3202 *, t452 , t452 , MethodInfo*))m18093_gshared)(__this, p0, p1, method)
