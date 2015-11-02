#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3786;
struct t9;
struct t835;
struct t158;

extern "C" void m23696_gshared (t3786 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23696(__this, p0, p1, method) (( void (*) (t3786 *, t9 *, t835 *, MethodInfo*))m23696_gshared)(__this, p0, p1, method)
extern "C" void m23697_gshared (t3786 * __this, t158* p0, MethodInfo* method);
#define m23697(__this, p0, method) (( void (*) (t3786 *, t158*, MethodInfo*))m23697_gshared)(__this, p0, method)
extern "C" bool m23698_gshared (t3786 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m23698(__this, p0, p1, method) (( bool (*) (t3786 *, t9 *, t835 *, MethodInfo*))m23698_gshared)(__this, p0, p1, method)
