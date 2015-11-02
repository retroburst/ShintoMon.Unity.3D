#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3782;
struct t9;
struct t835;
struct t158;

extern "C" void m23682_gshared (t3782 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23682(__this, p0, p1, method) (( void (*) (t3782 *, t9 *, t835 *, MethodInfo*))m23682_gshared)(__this, p0, p1, method)
extern "C" void m23683_gshared (t3782 * __this, t158* p0, MethodInfo* method);
#define m23683(__this, p0, method) (( void (*) (t3782 *, t158*, MethodInfo*))m23683_gshared)(__this, p0, method)
extern "C" bool m23684_gshared (t3782 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23684(__this, p0, p1, method) (( bool (*) (t3782 *, t9 *, t835 *, MethodInfo*))m23684_gshared)(__this, p0, p1, method)
