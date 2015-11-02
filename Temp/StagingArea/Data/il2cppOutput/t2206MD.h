#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2206;
#include "t310.h"

extern "C" void m12199_gshared (t2206 * __this, MethodInfo* method);
#define m12199(__this, method) (( void (*) (t2206 *, MethodInfo*))m12199_gshared)(__this, method)
extern "C" int32_t m24956_gshared (t2206 * __this, t310  p0, MethodInfo* method);
#define m24956(__this, p0, method) (( int32_t (*) (t2206 *, t310 , MethodInfo*))m24956_gshared)(__this, p0, method)
extern "C" bool m24957_gshared (t2206 * __this, t310  p0, t310  p1, MethodInfo* method);
#define m24957(__this, p0, p1, method) (( bool (*) (t2206 *, t310 , t310 , MethodInfo*))m24957_gshared)(__this, p0, p1, method)
