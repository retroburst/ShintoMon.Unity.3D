#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3670;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3626.h"

extern "C" void m22686_gshared (t3670 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22686(__this, p0, p1, method) (( void (*) (t3670 *, t9 *, t58, MethodInfo*))m22686_gshared)(__this, p0, p1, method)
extern "C" t3626  m22688_gshared (t3670 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22688(__this, p0, p1, method) (( t3626  (*) (t3670 *, t9 *, t9 *, MethodInfo*))m22688_gshared)(__this, p0, p1, method)
extern "C" t9 * m22690_gshared (t3670 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22690(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3670 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22690_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3626  m22692_gshared (t3670 * __this, t9 * p0, MethodInfo* method);
#define m22692(__this, p0, method) (( t3626  (*) (t3670 *, t9 *, MethodInfo*))m22692_gshared)(__this, p0, method)
