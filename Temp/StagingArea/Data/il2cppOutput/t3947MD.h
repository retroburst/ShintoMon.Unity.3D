#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3947;
#include "t272.h"

extern "C" void m24899_gshared (t3947 * __this, MethodInfo* method);
#define m24899(__this, method) (( void (*) (t3947 *, MethodInfo*))m24899_gshared)(__this, method)
extern "C" int32_t m24900_gshared (t3947 * __this, t272  p0, t272  p1, MethodInfo* method);
#define m24900(__this, p0, p1, method) (( int32_t (*) (t3947 *, t272 , t272 , MethodInfo*))m24900_gshared)(__this, p0, p1, method)
