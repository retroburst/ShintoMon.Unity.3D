#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3653;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3623.h"

extern "C" void m22523_gshared (t3653 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22523(__this, p0, p1, method) (( void (*) (t3653 *, t9 *, t58, MethodInfo*))m22523_gshared)(__this, p0, p1, method)
extern "C" t3623  m22525_gshared (t3653 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22525(__this, p0, p1, method) (( t3623  (*) (t3653 *, t9 *, t9 *, MethodInfo*))m22525_gshared)(__this, p0, p1, method)
extern "C" t9 * m22527_gshared (t3653 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22527(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3653 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22527_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3623  m22529_gshared (t3653 * __this, t9 * p0, MethodInfo* method);
#define m22529(__this, p0, method) (( t3623  (*) (t3653 *, t9 *, MethodInfo*))m22529_gshared)(__this, p0, method)
