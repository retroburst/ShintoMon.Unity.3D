#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3781;
struct t821;
struct t2;
struct t9;
struct t856;

extern "C" void m23789_gshared (t3781 * __this, MethodInfo* method);
#define m23789(__this, method) (( void (*) (t3781 *, MethodInfo*))m23789_gshared)(__this, method)
extern "C" t821 * m23790_gshared (t3781 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m23790(__this, p0, p1, method) (( t821 * (*) (t3781 *, t2*, t9 *, MethodInfo*))m23790_gshared)(__this, p0, p1, method)
extern "C" t856 * m23791_gshared (t3781 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23791(__this, p0, p1, method) (( t856 * (*) (t3781 *, t9 *, t821 *, MethodInfo*))m23791_gshared)(__this, p0, p1, method)
