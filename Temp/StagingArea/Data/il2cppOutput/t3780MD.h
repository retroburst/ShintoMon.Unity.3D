#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3780;
struct t821;
struct t2;
struct t9;
struct t856;

extern "C" void m23786_gshared (t3780 * __this, MethodInfo* method);
#define m23786(__this, method) (( void (*) (t3780 *, MethodInfo*))m23786_gshared)(__this, method)
extern "C" t821 * m23787_gshared (t3780 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m23787(__this, p0, p1, method) (( t821 * (*) (t3780 *, t2*, t9 *, MethodInfo*))m23787_gshared)(__this, p0, p1, method)
extern "C" t856 * m23788_gshared (t3780 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23788(__this, p0, p1, method) (( t856 * (*) (t3780 *, t9 *, t821 *, MethodInfo*))m23788_gshared)(__this, p0, p1, method)
