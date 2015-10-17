#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3528;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3516.h"

extern "C" void m21378_gshared (t3528 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21378(__this, p0, p1, method) (( void (*) (t3528 *, t9 *, t58, MethodInfo*))m21378_gshared)(__this, p0, p1, method)
extern "C" t3516  m21379_gshared (t3528 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21379(__this, p0, p1, method) (( t3516  (*) (t3528 *, t9 *, int64_t, MethodInfo*))m21379_gshared)(__this, p0, p1, method)
extern "C" t9 * m21380_gshared (t3528 * __this, t9 * p0, int64_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21380(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3528 *, t9 *, int64_t, t470 *, t9 *, MethodInfo*))m21380_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3516  m21381_gshared (t3528 * __this, t9 * p0, MethodInfo* method);
#define m21381(__this, p0, method) (( t3516  (*) (t3528 *, t9 *, MethodInfo*))m21381_gshared)(__this, p0, method)
