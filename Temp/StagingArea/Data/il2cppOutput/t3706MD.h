#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3706;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t1164.h"
#include "t916.h"

extern "C" void m23152_gshared (t3706 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23152(__this, p0, p1, method) (( void (*) (t3706 *, t9 *, t58, MethodInfo*))m23152_gshared)(__this, p0, p1, method)
extern "C" t1164  m23153_gshared (t3706 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m23153(__this, p0, p1, method) (( t1164  (*) (t3706 *, t9 *, t916 , MethodInfo*))m23153_gshared)(__this, p0, p1, method)
extern "C" t9 * m23154_gshared (t3706 * __this, t9 * p0, t916  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23154(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3706 *, t9 *, t916 , t470 *, t9 *, MethodInfo*))m23154_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1164  m23155_gshared (t3706 * __this, t9 * p0, MethodInfo* method);
#define m23155(__this, p0, method) (( t1164  (*) (t3706 *, t9 *, MethodInfo*))m23155_gshared)(__this, p0, method)
