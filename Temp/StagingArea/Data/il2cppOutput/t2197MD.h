﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2197;
#include "t918.h"

extern "C" void m12147_gshared (t2197 * __this, MethodInfo* method);
#define m12147(__this, method) (( void (*) (t2197 *, MethodInfo*))m12147_gshared)(__this, method)
extern "C" int32_t m24897_gshared (t2197 * __this, t918  p0, t918  p1, MethodInfo* method);
#define m24897(__this, p0, p1, method) (( int32_t (*) (t2197 *, t918 , t918 , MethodInfo*))m24897_gshared)(__this, p0, p1, method)
