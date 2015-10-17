#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2199;
#include "t304.h"

extern "C" void m12158_gshared (t2199 * __this, MethodInfo* method);
#define m12158(__this, method) (( void (*) (t2199 *, MethodInfo*))m12158_gshared)(__this, method)
extern "C" int32_t m24914_gshared (t2199 * __this, t304  p0, t304  p1, MethodInfo* method);
#define m24914(__this, p0, p1, method) (( int32_t (*) (t2199 *, t304 , t304 , MethodInfo*))m24914_gshared)(__this, p0, p1, method)
