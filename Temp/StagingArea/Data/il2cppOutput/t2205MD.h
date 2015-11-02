#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2205;
#include "t310.h"

extern "C" void m12198_gshared (t2205 * __this, MethodInfo* method);
#define m12198(__this, method) (( void (*) (t2205 *, MethodInfo*))m12198_gshared)(__this, method)
extern "C" int32_t m24949_gshared (t2205 * __this, t310  p0, t310  p1, MethodInfo* method);
#define m24949(__this, p0, p1, method) (( int32_t (*) (t2205 *, t310 , t310 , MethodInfo*))m24949_gshared)(__this, p0, p1, method)
