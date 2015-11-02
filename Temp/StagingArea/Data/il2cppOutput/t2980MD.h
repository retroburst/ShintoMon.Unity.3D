#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2980;
struct t9;
struct t2;

extern "C" void m15584_gshared (t2980 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15584(__this, p0, p1, method) (( void (*) (t2980 *, int32_t, t9 *, MethodInfo*))m15584_gshared)(__this, p0, p1, method)
extern "C" int32_t m15585_gshared (t2980 * __this, MethodInfo* method);
#define m15585(__this, method) (( int32_t (*) (t2980 *, MethodInfo*))m15585_gshared)(__this, method)
extern "C" void m15586_gshared (t2980 * __this, int32_t p0, MethodInfo* method);
#define m15586(__this, p0, method) (( void (*) (t2980 *, int32_t, MethodInfo*))m15586_gshared)(__this, p0, method)
extern "C" t9 * m15587_gshared (t2980 * __this, MethodInfo* method);
#define m15587(__this, method) (( t9 * (*) (t2980 *, MethodInfo*))m15587_gshared)(__this, method)
extern "C" void m15588_gshared (t2980 * __this, t9 * p0, MethodInfo* method);
#define m15588(__this, p0, method) (( void (*) (t2980 *, t9 *, MethodInfo*))m15588_gshared)(__this, p0, method)
extern "C" t2* m15589_gshared (t2980 * __this, MethodInfo* method);
#define m15589(__this, method) (( t2* (*) (t2980 *, MethodInfo*))m15589_gshared)(__this, method)
