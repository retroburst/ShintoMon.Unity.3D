#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3785;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m23676_gshared (t3785 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23676(__this, p0, p1, method) (( void (*) (t3785 *, t9 *, t58, MethodInfo*))m23676_gshared)(__this, p0, p1, method)
extern "C" void m23677_gshared (t3785 * __this, int32_t p0, MethodInfo* method);
#define m23677(__this, p0, method) (( void (*) (t3785 *, int32_t, MethodInfo*))m23677_gshared)(__this, p0, method)
extern "C" t9 * m23678_gshared (t3785 * __this, int32_t p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m23678(__this, p0, p1, p2, method) (( t9 * (*) (t3785 *, int32_t, t470 *, t9 *, MethodInfo*))m23678_gshared)(__this, p0, p1, p2, method)
extern "C" void m23679_gshared (t3785 * __this, t9 * p0, MethodInfo* method);
#define m23679(__this, p0, method) (( void (*) (t3785 *, t9 *, MethodInfo*))m23679_gshared)(__this, p0, method)
