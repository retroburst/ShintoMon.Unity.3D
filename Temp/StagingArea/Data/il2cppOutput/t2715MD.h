#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2715;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m13064_gshared (t2715 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13064(__this, p0, p1, method) (( void (*) (t2715 *, t9 *, t58, MethodInfo*))m13064_gshared)(__this, p0, p1, method)
extern "C" t9 * m13065_gshared (t2715 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13065(__this, p0, p1, method) (( t9 * (*) (t2715 *, t9 *, t9 *, MethodInfo*))m13065_gshared)(__this, p0, p1, method)
extern "C" t9 * m13066_gshared (t2715 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13066(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2715 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m13066_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m13067_gshared (t2715 * __this, t9 * p0, MethodInfo* method);
#define m13067(__this, p0, method) (( t9 * (*) (t2715 *, t9 *, MethodInfo*))m13067_gshared)(__this, p0, method)
