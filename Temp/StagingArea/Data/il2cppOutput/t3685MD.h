#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3685;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3631.h"

extern "C" void m22841_gshared (t3685 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22841(__this, p0, p1, method) (( void (*) (t3685 *, t9 *, t58, MethodInfo*))m22841_gshared)(__this, p0, p1, method)
extern "C" t3631  m22843_gshared (t3685 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22843(__this, p0, p1, method) (( t3631  (*) (t3685 *, t9 *, t9 *, MethodInfo*))m22843_gshared)(__this, p0, p1, method)
extern "C" t9 * m22845_gshared (t3685 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22845(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3685 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22845_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3631  m22847_gshared (t3685 * __this, t9 * p0, MethodInfo* method);
#define m22847(__this, p0, method) (( t3631  (*) (t3685 *, t9 *, MethodInfo*))m22847_gshared)(__this, p0, method)
