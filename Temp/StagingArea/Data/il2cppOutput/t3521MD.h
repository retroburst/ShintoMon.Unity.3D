#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3521;
struct t9;
struct t2;

extern "C" void m21325_gshared (t3521 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21325(__this, p0, p1, method) (( void (*) (t3521 *, t9 *, int64_t, MethodInfo*))m21325_gshared)(__this, p0, p1, method)
extern "C" t9 * m21326_gshared (t3521 * __this, MethodInfo* method);
#define m21326(__this, method) (( t9 * (*) (t3521 *, MethodInfo*))m21326_gshared)(__this, method)
extern "C" void m21327_gshared (t3521 * __this, t9 * p0, MethodInfo* method);
#define m21327(__this, p0, method) (( void (*) (t3521 *, t9 *, MethodInfo*))m21327_gshared)(__this, p0, method)
extern "C" int64_t m21328_gshared (t3521 * __this, MethodInfo* method);
#define m21328(__this, method) (( int64_t (*) (t3521 *, MethodInfo*))m21328_gshared)(__this, method)
extern "C" void m21329_gshared (t3521 * __this, int64_t p0, MethodInfo* method);
#define m21329(__this, p0, method) (( void (*) (t3521 *, int64_t, MethodInfo*))m21329_gshared)(__this, p0, method)
extern "C" t2* m21330_gshared (t3521 * __this, MethodInfo* method);
#define m21330(__this, method) (( t2* (*) (t3521 *, MethodInfo*))m21330_gshared)(__this, method)
