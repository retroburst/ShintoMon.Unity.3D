#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3953;
struct t9;
#include "t304.h"

extern "C" void m24915_gshared (t3953 * __this, MethodInfo* method);
#define m24915(__this, method) (( void (*) (t3953 *, MethodInfo*))m24915_gshared)(__this, method)
extern "C" void m24916_gshared (t9 * __this , MethodInfo* method);
#define m24916(__this , method) (( void (*) (t9 * , MethodInfo*))m24916_gshared)(__this , method)
extern "C" int32_t m24917_gshared (t3953 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24917(__this, p0, p1, method) (( int32_t (*) (t3953 *, t9 *, t9 *, MethodInfo*))m24917_gshared)(__this, p0, p1, method)
extern "C" t3953 * m24918_gshared (t9 * __this , MethodInfo* method);
#define m24918(__this , method) (( t3953 * (*) (t9 * , MethodInfo*))m24918_gshared)(__this , method)
