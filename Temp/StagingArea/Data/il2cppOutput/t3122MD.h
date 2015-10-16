#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3122;
struct t9;
struct t821;
struct t404;
struct t158;

extern "C" void m17200_gshared (t3122 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m17200(__this, p0, p1, method) (( void (*) (t3122 *, t9 *, t821 *, MethodInfo*))m17200_gshared)(__this, p0, p1, method)
extern "C" void m17201_gshared (t3122 * __this, t404 * p0, MethodInfo* method);
#define m17201(__this, p0, method) (( void (*) (t3122 *, t404 *, MethodInfo*))m17201_gshared)(__this, p0, method)
extern "C" void m17202_gshared (t3122 * __this, t158* p0, MethodInfo* method);
#define m17202(__this, p0, method) (( void (*) (t3122 *, t158*, MethodInfo*))m17202_gshared)(__this, p0, method)
extern "C" bool m17203_gshared (t3122 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m17203(__this, p0, p1, method) (( bool (*) (t3122 *, t9 *, t821 *, MethodInfo*))m17203_gshared)(__this, p0, p1, method)
