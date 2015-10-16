#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3090;
struct t9;
struct t821;
struct t3033;
struct t158;

extern "C" void m16835_gshared (t3090 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m16835(__this, p0, p1, method) (( void (*) (t3090 *, t9 *, t821 *, MethodInfo*))m16835_gshared)(__this, p0, p1, method)
extern "C" void m16836_gshared (t3090 * __this, t3033 * p0, MethodInfo* method);
#define m16836(__this, p0, method) (( void (*) (t3090 *, t3033 *, MethodInfo*))m16836_gshared)(__this, p0, method)
extern "C" void m16837_gshared (t3090 * __this, t158* p0, MethodInfo* method);
#define m16837(__this, p0, method) (( void (*) (t3090 *, t158*, MethodInfo*))m16837_gshared)(__this, p0, method)
extern "C" bool m16838_gshared (t3090 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m16838(__this, p0, p1, method) (( bool (*) (t3090 *, t9 *, t821 *, MethodInfo*))m16838_gshared)(__this, p0, p1, method)
