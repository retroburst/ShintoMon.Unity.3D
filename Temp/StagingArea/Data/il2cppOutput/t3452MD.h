#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3452;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3442.h"

extern "C" void m20432_gshared (t3452 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20432(__this, p0, p1, method) (( void (*) (t3452 *, t9 *, t58, MethodInfo*))m20432_gshared)(__this, p0, p1, method)
extern "C" t3442  m20434_gshared (t3452 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m20434(__this, p0, p1, method) (( t3442  (*) (t3452 *, t9 *, int32_t, MethodInfo*))m20434_gshared)(__this, p0, p1, method)
extern "C" t9 * m20436_gshared (t3452 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m20436(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3452 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m20436_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3442  m20438_gshared (t3452 * __this, t9 * p0, MethodInfo* method);
#define m20438(__this, p0, method) (( t3442  (*) (t3452 *, t9 *, MethodInfo*))m20438_gshared)(__this, p0, method)
