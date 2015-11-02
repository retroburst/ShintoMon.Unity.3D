#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3789;
struct t9;
struct t835;
struct t3790;
struct t158;

extern "C" void m23707_gshared (t3789 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23707(__this, p0, p1, method) (( void (*) (t3789 *, t9 *, t835 *, MethodInfo*))m23707_gshared)(__this, p0, p1, method)
extern "C" void m23708_gshared (t3789 * __this, t3790 * p0, MethodInfo* method);
#define m23708(__this, p0, method) (( void (*) (t3789 *, t3790 *, MethodInfo*))m23708_gshared)(__this, p0, method)
extern "C" void m23709_gshared (t3789 * __this, t158* p0, MethodInfo* method);
#define m23709(__this, p0, method) (( void (*) (t3789 *, t158*, MethodInfo*))m23709_gshared)(__this, p0, method)
extern "C" bool m23710_gshared (t3789 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23710(__this, p0, p1, method) (( bool (*) (t3789 *, t9 *, t835 *, MethodInfo*))m23710_gshared)(__this, p0, p1, method)
