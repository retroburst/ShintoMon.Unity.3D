#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2188;
#include "t911.h"

extern "C" void m12119_gshared (t2188 * __this, MethodInfo* method);
#define m12119(__this, method) (( void (*) (t2188 *, MethodInfo*))m12119_gshared)(__this, method)
extern "C" int32_t m24704_gshared (t2188 * __this, t911  p0, t911  p1, MethodInfo* method);
#define m24704(__this, p0, p1, method) (( int32_t (*) (t2188 *, t911 , t911 , MethodInfo*))m24704_gshared)(__this, p0, p1, method)
