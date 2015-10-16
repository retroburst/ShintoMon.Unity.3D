#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t596;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m2808_gshared (t596 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2808(__this, p0, p1, method) (( void (*) (t596 *, t9 *, t58, MethodInfo*))m2808_gshared)(__this, p0, p1, method)
extern "C" void m18755_gshared (t596 * __this, float p0, MethodInfo* method);
#define m18755(__this, p0, method) (( void (*) (t596 *, float, MethodInfo*))m18755_gshared)(__this, p0, method)
extern "C" t9 * m18756_gshared (t596 * __this, float p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m18756(__this, p0, p1, p2, method) (( t9 * (*) (t596 *, float, t463 *, t9 *, MethodInfo*))m18756_gshared)(__this, p0, p1, p2, method)
extern "C" void m18757_gshared (t596 * __this, t9 * p0, MethodInfo* method);
#define m18757(__this, p0, method) (( void (*) (t596 *, t9 *, MethodInfo*))m18757_gshared)(__this, p0, method)
