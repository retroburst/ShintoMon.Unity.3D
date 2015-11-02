#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3950;
struct t9;
#include "t923.h"

extern "C" void m24912_gshared (t3950 * __this, MethodInfo* method);
#define m24912(__this, method) (( void (*) (t3950 *, MethodInfo*))m24912_gshared)(__this, method)
extern "C" void m24913_gshared (t9 * __this , MethodInfo* method);
#define m24913(__this , method) (( void (*) (t9 * , MethodInfo*))m24913_gshared)(__this , method)
extern "C" int32_t m24914_gshared (t3950 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24914(__this, p0, p1, method) (( int32_t (*) (t3950 *, t9 *, t9 *, MethodInfo*))m24914_gshared)(__this, p0, p1, method)
extern "C" t3950 * m24915_gshared (t9 * __this , MethodInfo* method);
#define m24915(__this , method) (( t3950 * (*) (t9 * , MethodInfo*))m24915_gshared)(__this , method)
