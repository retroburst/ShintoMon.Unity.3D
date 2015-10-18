#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3839;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m24307_gshared (t3839 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24307(__this, p0, p1, method) (( void (*) (t3839 *, t9 *, t58, MethodInfo*))m24307_gshared)(__this, p0, p1, method)
extern "C" t1164  m24308_gshared (t3839 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24308(__this, p0, p1, method) (( t1164  (*) (t3839 *, int32_t, int32_t, MethodInfo*))m24308_gshared)(__this, p0, p1, method)
extern "C" t9 * m24309_gshared (t3839 * __this, int32_t p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m24309(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3839 *, int32_t, int32_t, t470 *, t9 *, MethodInfo*))m24309_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m24310_gshared (t3839 * __this, t9 * p0, MethodInfo* method);
#define m24310(__this, p0, method) (( t1164  (*) (t3839 *, t9 *, MethodInfo*))m24310_gshared)(__this, p0, method)
