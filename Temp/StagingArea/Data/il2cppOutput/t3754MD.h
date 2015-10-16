#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3754;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m23483_gshared (t3754 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23483(__this, p0, p1, method) (( void (*) (t3754 *, t9 *, t58, MethodInfo*))m23483_gshared)(__this, p0, p1, method)
extern "C" void m23484_gshared (t3754 * __this, int32_t p0, MethodInfo* method);
#define m23484(__this, p0, method) (( void (*) (t3754 *, int32_t, MethodInfo*))m23484_gshared)(__this, p0, method)
extern "C" t9 * m23485_gshared (t3754 * __this, int32_t p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m23485(__this, p0, p1, p2, method) (( t9 * (*) (t3754 *, int32_t, t463 *, t9 *, MethodInfo*))m23485_gshared)(__this, p0, p1, p2, method)
extern "C" void m23486_gshared (t3754 * __this, t9 * p0, MethodInfo* method);
#define m23486(__this, p0, method) (( void (*) (t3754 *, t9 *, MethodInfo*))m23486_gshared)(__this, p0, method)
