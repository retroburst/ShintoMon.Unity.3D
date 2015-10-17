#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3811;
struct t828;
struct t2;
struct t9;
struct t863;

extern "C" void m23979_gshared (t3811 * __this, MethodInfo* method);
#define m23979(__this, method) (( void (*) (t3811 *, MethodInfo*))m23979_gshared)(__this, method)
extern "C" t828 * m23980_gshared (t3811 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m23980(__this, p0, p1, method) (( t828 * (*) (t3811 *, t2*, t9 *, MethodInfo*))m23980_gshared)(__this, p0, p1, method)
extern "C" t863 * m23981_gshared (t3811 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23981(__this, p0, p1, method) (( t863 * (*) (t3811 *, t9 *, t828 *, MethodInfo*))m23981_gshared)(__this, p0, p1, method)
