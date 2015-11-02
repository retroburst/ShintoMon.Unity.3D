#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3166;
struct t9;
struct t2;

extern "C" void m17523_gshared (t3166 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17523(__this, p0, p1, method) (( void (*) (t3166 *, t9 *, int32_t, MethodInfo*))m17523_gshared)(__this, p0, p1, method)
extern "C" t9 * m17524_gshared (t3166 * __this, MethodInfo* method);
#define m17524(__this, method) (( t9 * (*) (t3166 *, MethodInfo*))m17524_gshared)(__this, method)
extern "C" void m17525_gshared (t3166 * __this, t9 * p0, MethodInfo* method);
#define m17525(__this, p0, method) (( void (*) (t3166 *, t9 *, MethodInfo*))m17525_gshared)(__this, p0, method)
extern "C" int32_t m17526_gshared (t3166 * __this, MethodInfo* method);
#define m17526(__this, method) (( int32_t (*) (t3166 *, MethodInfo*))m17526_gshared)(__this, method)
extern "C" void m17527_gshared (t3166 * __this, int32_t p0, MethodInfo* method);
#define m17527(__this, p0, method) (( void (*) (t3166 *, int32_t, MethodInfo*))m17527_gshared)(__this, p0, method)
extern "C" t2* m17528_gshared (t3166 * __this, MethodInfo* method);
#define m17528(__this, method) (( t2* (*) (t3166 *, MethodInfo*))m17528_gshared)(__this, method)
