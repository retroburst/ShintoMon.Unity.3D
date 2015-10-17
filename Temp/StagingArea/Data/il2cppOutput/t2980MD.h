#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2980;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m15591_gshared (t2980 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15591(__this, p0, p1, method) (( void (*) (t2980 *, t9 *, t58, MethodInfo*))m15591_gshared)(__this, p0, p1, method)
extern "C" int32_t m15592_gshared (t2980 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15592(__this, p0, p1, method) (( int32_t (*) (t2980 *, int32_t, t9 *, MethodInfo*))m15592_gshared)(__this, p0, p1, method)
extern "C" t9 * m15593_gshared (t2980 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m15593(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2980 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m15593_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15594_gshared (t2980 * __this, t9 * p0, MethodInfo* method);
#define m15594(__this, p0, method) (( int32_t (*) (t2980 *, t9 *, MethodInfo*))m15594_gshared)(__this, p0, method)
