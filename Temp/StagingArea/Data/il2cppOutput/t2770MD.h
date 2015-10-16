#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2770;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m13579_gshared (t2770 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13579(__this, p0, p1, method) (( void (*) (t2770 *, t9 *, t58, MethodInfo*))m13579_gshared)(__this, p0, p1, method)
extern "C" int32_t m13580_gshared (t2770 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13580(__this, p0, p1, method) (( int32_t (*) (t2770 *, t9 *, t9 *, MethodInfo*))m13580_gshared)(__this, p0, p1, method)
extern "C" t9 * m13581_gshared (t2770 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13581(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2770 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m13581_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m13582_gshared (t2770 * __this, t9 * p0, MethodInfo* method);
#define m13582(__this, p0, method) (( int32_t (*) (t2770 *, t9 *, MethodInfo*))m13582_gshared)(__this, p0, method)
