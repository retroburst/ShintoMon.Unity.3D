#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3308;
struct t9;
struct t828;
struct t3307;
struct t158;

extern "C" void m18978_gshared (t3308 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m18978(__this, p0, p1, method) (( void (*) (t3308 *, t9 *, t828 *, MethodInfo*))m18978_gshared)(__this, p0, p1, method)
extern "C" void m18979_gshared (t3308 * __this, t3307 * p0, MethodInfo* method);
#define m18979(__this, p0, method) (( void (*) (t3308 *, t3307 *, MethodInfo*))m18979_gshared)(__this, p0, method)
extern "C" void m18980_gshared (t3308 * __this, t158* p0, MethodInfo* method);
#define m18980(__this, p0, method) (( void (*) (t3308 *, t158*, MethodInfo*))m18980_gshared)(__this, p0, method)
extern "C" bool m18981_gshared (t3308 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m18981(__this, p0, p1, method) (( bool (*) (t3308 *, t9 *, t828 *, MethodInfo*))m18981_gshared)(__this, p0, p1, method)
