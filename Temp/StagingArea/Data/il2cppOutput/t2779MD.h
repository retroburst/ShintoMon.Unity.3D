#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2779;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m13608_gshared (t2779 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13608(__this, p0, p1, method) (( void (*) (t2779 *, t9 *, t58, MethodInfo*))m13608_gshared)(__this, p0, p1, method)
extern "C" int32_t m13609_gshared (t2779 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13609(__this, p0, p1, method) (( int32_t (*) (t2779 *, t9 *, t9 *, MethodInfo*))m13609_gshared)(__this, p0, p1, method)
extern "C" t9 * m13610_gshared (t2779 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13610(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2779 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m13610_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m13611_gshared (t2779 * __this, t9 * p0, MethodInfo* method);
#define m13611(__this, p0, method) (( int32_t (*) (t2779 *, t9 *, MethodInfo*))m13611_gshared)(__this, p0, method)
