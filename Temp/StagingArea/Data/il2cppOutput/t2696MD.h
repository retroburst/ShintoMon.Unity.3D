#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2696;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"

extern "C" void m13087_gshared (t2696 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13087(__this, p0, p1, method) (( void (*) (t2696 *, t9 *, t58, MethodInfo*))m13087_gshared)(__this, p0, p1, method)
extern "C" t1164  m13088_gshared (t2696 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13088(__this, p0, p1, method) (( t1164  (*) (t2696 *, t9 *, t9 *, MethodInfo*))m13088_gshared)(__this, p0, p1, method)
extern "C" t9 * m13089_gshared (t2696 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13089(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2696 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m13089_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m13090_gshared (t2696 * __this, t9 * p0, MethodInfo* method);
#define m13090(__this, p0, method) (( t1164  (*) (t2696 *, t9 *, MethodInfo*))m13090_gshared)(__this, p0, method)
