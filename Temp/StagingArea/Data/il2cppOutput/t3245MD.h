#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3245;
#include "t466.h"

extern "C" void m18349_gshared (t3245 * __this, MethodInfo* method);
#define m18349(__this, method) (( void (*) (t3245 *, MethodInfo*))m18349_gshared)(__this, method)
extern "C" int32_t m18350_gshared (t3245 * __this, t466  p0, t466  p1, MethodInfo* method);
#define m18350(__this, p0, p1, method) (( int32_t (*) (t3245 *, t466 , t466 , MethodInfo*))m18350_gshared)(__this, p0, p1, method)
