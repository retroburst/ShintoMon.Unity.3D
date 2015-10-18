#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t285;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m1186_gshared (t285 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m1186(__this, p0, p1, method) (( void (*) (t285 *, t9 *, t58, MethodInfo*))m1186_gshared)(__this, p0, p1, method)
extern "C" void m1209_gshared (t285 * __this, float p0, MethodInfo* method);
#define m1209(__this, p0, method) (( void (*) (t285 *, float, MethodInfo*))m1209_gshared)(__this, p0, method)
extern "C" t9 * m15442_gshared (t285 * __this, float p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m15442(__this, p0, p1, p2, method) (( t9 * (*) (t285 *, float, t470 *, t9 *, MethodInfo*))m15442_gshared)(__this, p0, p1, p2, method)
extern "C" void m15443_gshared (t285 * __this, t9 * p0, MethodInfo* method);
#define m15443(__this, p0, method) (( void (*) (t285 *, t9 *, MethodInfo*))m15443_gshared)(__this, p0, method)
