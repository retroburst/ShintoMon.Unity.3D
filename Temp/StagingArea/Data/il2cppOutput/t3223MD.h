#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3223;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3200.h"

extern "C" void m18131_gshared (t3223 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18131(__this, p0, p1, method) (( void (*) (t3223 *, t9 *, t58, MethodInfo*))m18131_gshared)(__this, p0, p1, method)
extern "C" t3200  m18133_gshared (t3223 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18133(__this, p0, p1, method) (( t3200  (*) (t3223 *, t9 *, t9 *, MethodInfo*))m18133_gshared)(__this, p0, p1, method)
extern "C" t9 * m18135_gshared (t3223 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m18135(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3223 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m18135_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3200  m18137_gshared (t3223 * __this, t9 * p0, MethodInfo* method);
#define m18137(__this, p0, method) (( t3200  (*) (t3223 *, t9 *, MethodInfo*))m18137_gshared)(__this, p0, method)
