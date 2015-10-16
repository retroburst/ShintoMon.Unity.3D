#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3750;
struct t9;
struct t821;
struct t158;

extern "C" void m23468_gshared (t3750 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23468(__this, p0, p1, method) (( void (*) (t3750 *, t9 *, t821 *, MethodInfo*))m23468_gshared)(__this, p0, p1, method)
extern "C" void m23469_gshared (t3750 * __this, t158* p0, MethodInfo* method);
#define m23469(__this, p0, method) (( void (*) (t3750 *, t158*, MethodInfo*))m23469_gshared)(__this, p0, method)
extern "C" bool m23470_gshared (t3750 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23470(__this, p0, p1, method) (( bool (*) (t3750 *, t9 *, t821 *, MethodInfo*))m23470_gshared)(__this, p0, p1, method)
