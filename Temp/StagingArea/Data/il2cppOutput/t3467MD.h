#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3467;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t892.h"

extern "C" void m20590_gshared (t3467 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20590(__this, p0, p1, method) (( void (*) (t3467 *, t9 *, t58, MethodInfo*))m20590_gshared)(__this, p0, p1, method)
extern "C" t892  m20592_gshared (t3467 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20592(__this, p0, p1, method) (( t892  (*) (t3467 *, t9 *, t9 *, MethodInfo*))m20592_gshared)(__this, p0, p1, method)
extern "C" t9 * m20594_gshared (t3467 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m20594(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3467 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m20594_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t892  m20596_gshared (t3467 * __this, t9 * p0, MethodInfo* method);
#define m20596(__this, p0, method) (( t892  (*) (t3467 *, t9 *, MethodInfo*))m20596_gshared)(__this, p0, method)
