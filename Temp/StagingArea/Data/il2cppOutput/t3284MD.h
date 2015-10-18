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

extern "C" void m18825_gshared (t3284 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18825(__this, p0, p1, method) (( void (*) (t3284 *, t9 *, t58, MethodInfo*))m18825_gshared)(__this, p0, p1, method)
extern "C" t3274  m18827_gshared (t3284 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m18827(__this, p0, p1, method) (( t3274  (*) (t3284 *, t9 *, int32_t, MethodInfo*))m18827_gshared)(__this, p0, p1, method)
extern "C" t9 * m18829_gshared (t3284 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m18829(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3284 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m18829_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3274  m18831_gshared (t3284 * __this, t9 * p0, MethodInfo* method);
#define m18831(__this, p0, method) (( t3274  (*) (t3284 *, t9 *, MethodInfo*))m18831_gshared)(__this, p0, method)
