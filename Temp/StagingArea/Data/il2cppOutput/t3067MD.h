#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3067;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m16405_gshared (t3067 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16405(__this, p0, p1, method) (( void (*) (t3067 *, t9 *, t58, MethodInfo*))m16405_gshared)(__this, p0, p1, method)
extern "C" void m16406_gshared (t3067 * __this, t9 * p0, MethodInfo* method);
#define m16406(__this, p0, method) (( void (*) (t3067 *, t9 *, MethodInfo*))m16406_gshared)(__this, p0, method)
extern "C" t9 * m16407_gshared (t3067 * __this, t9 * p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m16407(__this, p0, p1, p2, method) (( t9 * (*) (t3067 *, t9 *, t470 *, t9 *, MethodInfo*))m16407_gshared)(__this, p0, p1, p2, method)
extern "C" void m16408_gshared (t3067 * __this, t9 * p0, MethodInfo* method);
#define m16408(__this, p0, method) (( void (*) (t3067 *, t9 *, MethodInfo*))m16408_gshared)(__this, p0, method)
