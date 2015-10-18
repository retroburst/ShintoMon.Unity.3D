#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3096;
#include "t347.h"

extern "C" void m16733_gshared (t3096 * __this, MethodInfo* method);
#define m16733(__this, method) (( void (*) (t3096 *, MethodInfo*))m16733_gshared)(__this, method)
extern "C" int32_t m16734_gshared (t3096 * __this, t347  p0, t347  p1, MethodInfo* method);
#define m16734(__this, p0, p1, method) (( int32_t (*) (t3096 *, t347 , t347 , MethodInfo*))m16734_gshared)(__this, p0, p1, method)
