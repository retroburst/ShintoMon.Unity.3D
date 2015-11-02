#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2785;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m13647_gshared (t2785 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13647(__this, p0, p1, method) (( void (*) (t2785 *, t9 *, t58, MethodInfo*))m13647_gshared)(__this, p0, p1, method)
extern "C" int32_t m13648_gshared (t2785 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13648(__this, p0, p1, method) (( int32_t (*) (t2785 *, t9 *, t9 *, MethodInfo*))m13648_gshared)(__this, p0, p1, method)
extern "C" t9 * m13649_gshared (t2785 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13649(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2785 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m13649_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m13650_gshared (t2785 * __this, t9 * p0, MethodInfo* method);
#define m13650(__this, p0, method) (( int32_t (*) (t2785 *, t9 *, MethodInfo*))m13650_gshared)(__this, p0, method)
