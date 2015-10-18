#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3241;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t459.h"

extern "C" void m18317_gshared (t3241 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18317(__this, p0, p1, method) (( void (*) (t3241 *, t9 *, t58, MethodInfo*))m18317_gshared)(__this, p0, p1, method)
extern "C" int32_t m18318_gshared (t3241 * __this, t459  p0, t459  p1, MethodInfo* method);
#define m18318(__this, p0, p1, method) (( int32_t (*) (t3241 *, t459 , t459 , MethodInfo*))m18318_gshared)(__this, p0, p1, method)
extern "C" t9 * m18319_gshared (t3241 * __this, t459  p0, t459  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m18319(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3241 *, t459 , t459 , t470 *, t9 *, MethodInfo*))m18319_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m18320_gshared (t3241 * __this, t9 * p0, MethodInfo* method);
#define m18320(__this, p0, method) (( int32_t (*) (t3241 *, t9 *, MethodInfo*))m18320_gshared)(__this, p0, method)
