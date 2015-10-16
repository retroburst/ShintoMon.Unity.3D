#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2184;
#include "t269.h"

extern "C" void m12106_gshared (t2184 * __this, MethodInfo* method);
#define m12106(__this, method) (( void (*) (t2184 *, MethodInfo*))m12106_gshared)(__this, method)
extern "C" int32_t m24666_gshared (t2184 * __this, t269  p0, t269  p1, MethodInfo* method);
#define m24666(__this, p0, p1, method) (( int32_t (*) (t2184 *, t269 , t269 , MethodInfo*))m24666_gshared)(__this, p0, p1, method)
