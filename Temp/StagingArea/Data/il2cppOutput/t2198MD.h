#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2198;
#include "t918.h"

extern "C" void m12149_gshared (t2198 * __this, MethodInfo* method);
#define m12149(__this, method) (( void (*) (t2198 *, MethodInfo*))m12149_gshared)(__this, method)
extern "C" int32_t m24905_gshared (t2198 * __this, t918  p0, MethodInfo* method);
#define m24905(__this, p0, method) (( int32_t (*) (t2198 *, t918 , MethodInfo*))m24905_gshared)(__this, p0, method)
extern "C" bool m24906_gshared (t2198 * __this, t918  p0, t918  p1, MethodInfo* method);
#define m24906(__this, p0, p1, method) (( bool (*) (t2198 *, t918 , t918 , MethodInfo*))m24906_gshared)(__this, p0, p1, method)
