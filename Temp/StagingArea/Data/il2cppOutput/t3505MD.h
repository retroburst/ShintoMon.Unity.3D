#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3505;
#include "t601.h"

extern "C" void m21063_gshared (t3505 * __this, MethodInfo* method);
#define m21063(__this, method) (( void (*) (t3505 *, MethodInfo*))m21063_gshared)(__this, method)
extern "C" int32_t m21064_gshared (t3505 * __this, t601  p0, t601  p1, MethodInfo* method);
#define m21064(__this, p0, p1, method) (( int32_t (*) (t3505 *, t601 , t601 , MethodInfo*))m21064_gshared)(__this, p0, p1, method)
