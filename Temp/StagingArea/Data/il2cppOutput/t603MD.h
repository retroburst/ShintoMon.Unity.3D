﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t603;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m2833_gshared (t603 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2833(__this, p0, p1, method) (( void (*) (t603 *, t9 *, t58, MethodInfo*))m2833_gshared)(__this, p0, p1, method)
extern "C" void m18964_gshared (t603 * __this, float p0, MethodInfo* method);
#define m18964(__this, p0, method) (( void (*) (t603 *, float, MethodInfo*))m18964_gshared)(__this, p0, method)
extern "C" t9 * m18965_gshared (t603 * __this, float p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m18965(__this, p0, p1, p2, method) (( t9 * (*) (t603 *, float, t470 *, t9 *, MethodInfo*))m18965_gshared)(__this, p0, p1, p2, method)
extern "C" void m18966_gshared (t603 * __this, t9 * p0, MethodInfo* method);
#define m18966(__this, p0, method) (( void (*) (t603 *, t9 *, MethodInfo*))m18966_gshared)(__this, p0, method)
