﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2194;
#include "t270.h"

extern "C" void m12136_gshared (t2194 * __this, MethodInfo* method);
#define m12136(__this, method) (( void (*) (t2194 *, MethodInfo*))m12136_gshared)(__this, method)
extern "C" int32_t m24867_gshared (t2194 * __this, t270  p0, MethodInfo* method);
#define m24867(__this, p0, method) (( int32_t (*) (t2194 *, t270 , MethodInfo*))m24867_gshared)(__this, p0, method)
extern "C" bool m24868_gshared (t2194 * __this, t270  p0, t270  p1, MethodInfo* method);
#define m24868(__this, p0, p1, method) (( bool (*) (t2194 *, t270 , t270 , MethodInfo*))m24868_gshared)(__this, p0, p1, method)
