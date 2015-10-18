#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3516;
struct t9;
struct t2;

extern "C" void m21291_gshared (t3516 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21291(__this, p0, p1, method) (( void (*) (t3516 *, t9 *, int64_t, MethodInfo*))m21291_gshared)(__this, p0, p1, method)
extern "C" t9 * m21292_gshared (t3516 * __this, MethodInfo* method);
#define m21292(__this, method) (( t9 * (*) (t3516 *, MethodInfo*))m21292_gshared)(__this, method)
extern "C" void m21293_gshared (t3516 * __this, t9 * p0, MethodInfo* method);
#define m21293(__this, p0, method) (( void (*) (t3516 *, t9 *, MethodInfo*))m21293_gshared)(__this, p0, method)
extern "C" int64_t m21294_gshared (t3516 * __this, MethodInfo* method);
#define m21294(__this, method) (( int64_t (*) (t3516 *, MethodInfo*))m21294_gshared)(__this, method)
extern "C" void m21295_gshared (t3516 * __this, int64_t p0, MethodInfo* method);
#define m21295(__this, p0, method) (( void (*) (t3516 *, int64_t, MethodInfo*))m21295_gshared)(__this, p0, method)
extern "C" t2* m21296_gshared (t3516 * __this, MethodInfo* method);
#define m21296(__this, method) (( t2* (*) (t3516 *, MethodInfo*))m21296_gshared)(__this, method)
