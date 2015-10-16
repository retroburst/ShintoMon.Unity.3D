#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3746;
struct t9;
struct t821;
struct t158;

extern "C" void m23454_gshared (t3746 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23454(__this, p0, p1, method) (( void (*) (t3746 *, t9 *, t821 *, MethodInfo*))m23454_gshared)(__this, p0, p1, method)
extern "C" void m23455_gshared (t3746 * __this, t158* p0, MethodInfo* method);
#define m23455(__this, p0, method) (( void (*) (t3746 *, t158*, MethodInfo*))m23455_gshared)(__this, p0, method)
extern "C" bool m23456_gshared (t3746 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23456(__this, p0, p1, method) (( bool (*) (t3746 *, t9 *, t821 *, MethodInfo*))m23456_gshared)(__this, p0, p1, method)
