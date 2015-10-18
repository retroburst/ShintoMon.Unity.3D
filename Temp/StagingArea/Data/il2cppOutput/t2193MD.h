#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2193;
#include "t270.h"

extern "C" void m12135_gshared (t2193 * __this, MethodInfo* method);
#define m12135(__this, method) (( void (*) (t2193 *, MethodInfo*))m12135_gshared)(__this, method)
extern "C" int32_t m24860_gshared (t2193 * __this, t270  p0, t270  p1, MethodInfo* method);
#define m24860(__this, p0, p1, method) (( int32_t (*) (t2193 *, t270 , t270 , MethodInfo*))m24860_gshared)(__this, p0, p1, method)
