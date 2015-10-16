#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t278;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m1170_gshared (t278 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m1170(__this, p0, p1, method) (( void (*) (t278 *, t9 *, t58, MethodInfo*))m1170_gshared)(__this, p0, p1, method)
extern "C" void m1185_gshared (t278 * __this, float p0, MethodInfo* method);
#define m1185(__this, p0, method) (( void (*) (t278 *, float, MethodInfo*))m1185_gshared)(__this, p0, method)
extern "C" t9 * m15413_gshared (t278 * __this, float p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m15413(__this, p0, p1, p2, method) (( t9 * (*) (t278 *, float, t463 *, t9 *, MethodInfo*))m15413_gshared)(__this, p0, p1, p2, method)
extern "C" void m15414_gshared (t278 * __this, t9 * p0, MethodInfo* method);
#define m15414(__this, p0, method) (( void (*) (t278 *, t9 *, MethodInfo*))m15414_gshared)(__this, p0, method)
