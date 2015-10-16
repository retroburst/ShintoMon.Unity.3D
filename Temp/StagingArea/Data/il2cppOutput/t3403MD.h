#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3403;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3395.h"

extern "C" void m20081_gshared (t3403 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20081(__this, p0, p1, method) (( void (*) (t3403 *, t9 *, t58, MethodInfo*))m20081_gshared)(__this, p0, p1, method)
extern "C" t3395  m20083_gshared (t3403 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20083(__this, p0, p1, method) (( t3395  (*) (t3403 *, t9 *, t9 *, MethodInfo*))m20083_gshared)(__this, p0, p1, method)
extern "C" t9 * m20085_gshared (t3403 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m20085(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3403 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m20085_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3395  m20087_gshared (t3403 * __this, t9 * p0, MethodInfo* method);
#define m20087(__this, p0, method) (( t3395  (*) (t3403 *, t9 *, MethodInfo*))m20087_gshared)(__this, p0, method)
