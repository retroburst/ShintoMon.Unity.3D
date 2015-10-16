#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2965;
struct t9;
struct t2;

extern "C" void m15512_gshared (t2965 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15512(__this, p0, p1, method) (( void (*) (t2965 *, int32_t, t9 *, MethodInfo*))m15512_gshared)(__this, p0, p1, method)
extern "C" int32_t m15513_gshared (t2965 * __this, MethodInfo* method);
#define m15513(__this, method) (( int32_t (*) (t2965 *, MethodInfo*))m15513_gshared)(__this, method)
extern "C" void m15514_gshared (t2965 * __this, int32_t p0, MethodInfo* method);
#define m15514(__this, p0, method) (( void (*) (t2965 *, int32_t, MethodInfo*))m15514_gshared)(__this, p0, method)
extern "C" t9 * m15515_gshared (t2965 * __this, MethodInfo* method);
#define m15515(__this, method) (( t9 * (*) (t2965 *, MethodInfo*))m15515_gshared)(__this, method)
extern "C" void m15516_gshared (t2965 * __this, t9 * p0, MethodInfo* method);
#define m15516(__this, p0, method) (( void (*) (t2965 *, t9 *, MethodInfo*))m15516_gshared)(__this, p0, method)
extern "C" t2* m15517_gshared (t2965 * __this, MethodInfo* method);
#define m15517(__this, method) (( t2* (*) (t2965 *, MethodInfo*))m15517_gshared)(__this, method)
