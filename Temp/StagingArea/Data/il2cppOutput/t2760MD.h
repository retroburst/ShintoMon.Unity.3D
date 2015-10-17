#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2760;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2749.h"

extern "C" void m13382_gshared (t2760 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13382(__this, p0, p1, method) (( void (*) (t2760 *, t9 *, t58, MethodInfo*))m13382_gshared)(__this, p0, p1, method)
extern "C" t2749  m13384_gshared (t2760 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13384(__this, p0, p1, method) (( t2749  (*) (t2760 *, t9 *, t9 *, MethodInfo*))m13384_gshared)(__this, p0, p1, method)
extern "C" t9 * m13386_gshared (t2760 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13386(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2760 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m13386_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2749  m13388_gshared (t2760 * __this, t9 * p0, MethodInfo* method);
#define m13388(__this, p0, method) (( t2749  (*) (t2760 *, t9 *, MethodInfo*))m13388_gshared)(__this, p0, method)
