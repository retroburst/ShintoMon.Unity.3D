#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3240;
#include "t459.h"

extern "C" void m18314_gshared (t3240 * __this, MethodInfo* method);
#define m18314(__this, method) (( void (*) (t3240 *, MethodInfo*))m18314_gshared)(__this, method)
extern "C" int32_t m18315_gshared (t3240 * __this, t459  p0, t459  p1, MethodInfo* method);
#define m18315(__this, p0, p1, method) (( int32_t (*) (t3240 *, t459 , t459 , MethodInfo*))m18315_gshared)(__this, p0, p1, method)
