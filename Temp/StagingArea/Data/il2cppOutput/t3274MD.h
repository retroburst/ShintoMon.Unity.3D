#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3274;
struct t9;
struct t821;
struct t3273;
struct t158;

extern "C" void m18769_gshared (t3274 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m18769(__this, p0, p1, method) (( void (*) (t3274 *, t9 *, t821 *, MethodInfo*))m18769_gshared)(__this, p0, p1, method)
extern "C" void m18770_gshared (t3274 * __this, t3273 * p0, MethodInfo* method);
#define m18770(__this, p0, method) (( void (*) (t3274 *, t3273 *, MethodInfo*))m18770_gshared)(__this, p0, method)
extern "C" void m18771_gshared (t3274 * __this, t158* p0, MethodInfo* method);
#define m18771(__this, p0, method) (( void (*) (t3274 *, t158*, MethodInfo*))m18771_gshared)(__this, p0, method)
extern "C" bool m18772_gshared (t3274 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m18772(__this, p0, p1, method) (( bool (*) (t3274 *, t9 *, t821 *, MethodInfo*))m18772_gshared)(__this, p0, p1, method)
