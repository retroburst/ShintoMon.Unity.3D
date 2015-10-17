#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2198;
#include "t918.h"

extern "C" void m12148_gshared (t2198 * __this, MethodInfo* method);
#define m12148(__this, method) (( void (*) (t2198 *, MethodInfo*))m12148_gshared)(__this, method)
extern "C" int32_t m24904_gshared (t2198 * __this, t918  p0, MethodInfo* method);
#define m24904(__this, p0, method) (( int32_t (*) (t2198 *, t918 , MethodInfo*))m24904_gshared)(__this, p0, method)
extern "C" bool m24905_gshared (t2198 * __this, t918  p0, t918  p1, MethodInfo* method);
#define m24905(__this, p0, p1, method) (( bool (*) (t2198 *, t918 , t918 , MethodInfo*))m24905_gshared)(__this, p0, p1, method)
