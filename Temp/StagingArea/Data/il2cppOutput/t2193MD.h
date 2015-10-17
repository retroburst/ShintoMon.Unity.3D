#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2193;
#include "t270.h"

extern "C" void m12134_gshared (t2193 * __this, MethodInfo* method);
#define m12134(__this, method) (( void (*) (t2193 *, MethodInfo*))m12134_gshared)(__this, method)
extern "C" int32_t m24859_gshared (t2193 * __this, t270  p0, t270  p1, MethodInfo* method);
#define m24859(__this, p0, p1, method) (( int32_t (*) (t2193 *, t270 , t270 , MethodInfo*))m24859_gshared)(__this, p0, p1, method)
