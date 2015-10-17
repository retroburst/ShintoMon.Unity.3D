#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3946;
#include "t917.h"

extern "C" void m24881_gshared (t3946 * __this, MethodInfo* method);
#define m24881(__this, method) (( void (*) (t3946 *, MethodInfo*))m24881_gshared)(__this, method)
extern "C" int32_t m24882_gshared (t3946 * __this, t917  p0, t917  p1, MethodInfo* method);
#define m24882(__this, p0, p1, method) (( int32_t (*) (t3946 *, t917 , t917 , MethodInfo*))m24882_gshared)(__this, p0, p1, method)
