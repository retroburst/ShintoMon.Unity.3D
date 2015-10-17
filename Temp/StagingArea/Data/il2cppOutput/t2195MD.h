#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2195;
#include "t917.h"

extern "C" void m12137_gshared (t2195 * __this, MethodInfo* method);
#define m12137(__this, method) (( void (*) (t2195 *, MethodInfo*))m12137_gshared)(__this, method)
extern "C" int32_t m24876_gshared (t2195 * __this, t917  p0, t917  p1, MethodInfo* method);
#define m24876(__this, p0, p1, method) (( int32_t (*) (t2195 *, t917 , t917 , MethodInfo*))m24876_gshared)(__this, p0, p1, method)
