#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2973;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m15577_gshared (t2973 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15577(__this, p0, p1, method) (( void (*) (t2973 *, t9 *, t58, MethodInfo*))m15577_gshared)(__this, p0, p1, method)
extern "C" t9 * m15578_gshared (t2973 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15578(__this, p0, p1, method) (( t9 * (*) (t2973 *, int32_t, t9 *, MethodInfo*))m15578_gshared)(__this, p0, p1, method)
extern "C" t9 * m15579_gshared (t2973 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m15579(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2973 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m15579_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m15580_gshared (t2973 * __this, t9 * p0, MethodInfo* method);
#define m15580(__this, p0, method) (( t9 * (*) (t2973 *, t9 *, MethodInfo*))m15580_gshared)(__this, p0, method)
