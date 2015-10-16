#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3915;
#include "t910.h"

extern "C" void m24688_gshared (t3915 * __this, MethodInfo* method);
#define m24688(__this, method) (( void (*) (t3915 *, MethodInfo*))m24688_gshared)(__this, method)
extern "C" int32_t m24689_gshared (t3915 * __this, t910  p0, t910  p1, MethodInfo* method);
#define m24689(__this, p0, p1, method) (( int32_t (*) (t3915 *, t910 , t910 , MethodInfo*))m24689_gshared)(__this, p0, p1, method)
