#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3950;
#include "t918.h"

extern "C" void m24902_gshared (t3950 * __this, MethodInfo* method);
#define m24902(__this, method) (( void (*) (t3950 *, MethodInfo*))m24902_gshared)(__this, method)
extern "C" int32_t m24903_gshared (t3950 * __this, t918  p0, t918  p1, MethodInfo* method);
#define m24903(__this, p0, p1, method) (( int32_t (*) (t3950 *, t918 , t918 , MethodInfo*))m24903_gshared)(__this, p0, p1, method)
