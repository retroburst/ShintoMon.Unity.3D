#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3284;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3274.h"

extern "C" void m18824_gshared (t3284 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18824(__this, p0, p1, method) (( void (*) (t3284 *, t9 *, t58, MethodInfo*))m18824_gshared)(__this, p0, p1, method)
extern "C" t3274  m18826_gshared (t3284 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m18826(__this, p0, p1, method) (( t3274  (*) (t3284 *, t9 *, int32_t, MethodInfo*))m18826_gshared)(__this, p0, p1, method)
extern "C" t9 * m18828_gshared (t3284 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m18828(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3284 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m18828_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3274  m18830_gshared (t3284 * __this, t9 * p0, MethodInfo* method);
#define m18830(__this, p0, method) (( t3274  (*) (t3284 *, t9 *, MethodInfo*))m18830_gshared)(__this, p0, method)
