#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2190;
#include "t297.h"

extern "C" void m12130_gshared (t2190 * __this, MethodInfo* method);
#define m12130(__this, method) (( void (*) (t2190 *, MethodInfo*))m12130_gshared)(__this, method)
extern "C" int32_t m24721_gshared (t2190 * __this, t297  p0, t297  p1, MethodInfo* method);
#define m24721(__this, p0, p1, method) (( int32_t (*) (t2190 *, t297 , t297 , MethodInfo*))m24721_gshared)(__this, p0, p1, method)
