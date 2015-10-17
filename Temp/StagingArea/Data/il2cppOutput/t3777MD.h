#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3777;
struct t9;
struct t828;
struct t158;

extern "C" void m23647_gshared (t3777 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23647(__this, p0, p1, method) (( void (*) (t3777 *, t9 *, t828 *, MethodInfo*))m23647_gshared)(__this, p0, p1, method)
extern "C" void m23648_gshared (t3777 * __this, t158* p0, MethodInfo* method);
#define m23648(__this, p0, method) (( void (*) (t3777 *, t158*, MethodInfo*))m23648_gshared)(__this, p0, method)
extern "C" bool m23649_gshared (t3777 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m23649(__this, p0, p1, method) (( bool (*) (t3777 *, t9 *, t828 *, MethodInfo*))m23649_gshared)(__this, p0, p1, method)
