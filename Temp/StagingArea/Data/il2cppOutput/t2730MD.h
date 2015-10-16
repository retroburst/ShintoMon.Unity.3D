#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2730;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2719.h"

extern "C" void m13195_gshared (t2730 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13195(__this, p0, p1, method) (( void (*) (t2730 *, t9 *, t58, MethodInfo*))m13195_gshared)(__this, p0, p1, method)
extern "C" t2719  m13197_gshared (t2730 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13197(__this, p0, p1, method) (( t2719  (*) (t2730 *, t9 *, t9 *, MethodInfo*))m13197_gshared)(__this, p0, p1, method)
extern "C" t9 * m13199_gshared (t2730 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13199(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2730 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m13199_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2719  m13201_gshared (t2730 * __this, t9 * p0, MethodInfo* method);
#define m13201(__this, p0, method) (( t2719  (*) (t2730 *, t9 *, MethodInfo*))m13201_gshared)(__this, p0, method)
