#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3608;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3596.h"

extern "C" void m22088_gshared (t3608 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22088(__this, p0, p1, method) (( void (*) (t3608 *, t9 *, t58, MethodInfo*))m22088_gshared)(__this, p0, p1, method)
extern "C" t3596  m22090_gshared (t3608 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m22090(__this, p0, p1, method) (( t3596  (*) (t3608 *, uint64_t, t9 *, MethodInfo*))m22090_gshared)(__this, p0, p1, method)
extern "C" t9 * m22092_gshared (t3608 * __this, uint64_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22092(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3608 *, uint64_t, t9 *, t470 *, t9 *, MethodInfo*))m22092_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3596  m22094_gshared (t3608 * __this, t9 * p0, MethodInfo* method);
#define m22094(__this, p0, method) (( t3596  (*) (t3608 *, t9 *, MethodInfo*))m22094_gshared)(__this, p0, method)
