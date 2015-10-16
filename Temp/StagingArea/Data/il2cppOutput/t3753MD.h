#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3753;
struct t9;
struct t821;
struct t3754;
struct t158;

extern "C" void m23479_gshared (t3753 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23479(__this, p0, p1, method) (( void (*) (t3753 *, t9 *, t821 *, MethodInfo*))m23479_gshared)(__this, p0, p1, method)
extern "C" void m23480_gshared (t3753 * __this, t3754 * p0, MethodInfo* method);
#define m23480(__this, p0, method) (( void (*) (t3753 *, t3754 *, MethodInfo*))m23480_gshared)(__this, p0, method)
extern "C" void m23481_gshared (t3753 * __this, t158* p0, MethodInfo* method);
#define m23481(__this, p0, method) (( void (*) (t3753 *, t158*, MethodInfo*))m23481_gshared)(__this, p0, method)
extern "C" bool m23482_gshared (t3753 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23482(__this, p0, p1, method) (( bool (*) (t3753 *, t9 *, t821 *, MethodInfo*))m23482_gshared)(__this, p0, p1, method)
