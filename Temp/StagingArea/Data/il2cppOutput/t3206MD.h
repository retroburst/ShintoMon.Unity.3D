#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3206;
#include "t452.h"

extern "C" void m18106_gshared (t3206 * __this, MethodInfo* method);
#define m18106(__this, method) (( void (*) (t3206 *, MethodInfo*))m18106_gshared)(__this, method)
extern "C" int32_t m18107_gshared (t3206 * __this, t452  p0, t452  p1, MethodInfo* method);
#define m18107(__this, p0, p1, method) (( int32_t (*) (t3206 *, t452 , t452 , MethodInfo*))m18107_gshared)(__this, p0, p1, method)
