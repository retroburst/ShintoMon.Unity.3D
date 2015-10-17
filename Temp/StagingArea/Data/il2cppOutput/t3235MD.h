#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3235;
struct t9;
#include "t459.h"

extern "C" void m18294_gshared (t3235 * __this, MethodInfo* method);
#define m18294(__this, method) (( void (*) (t3235 *, MethodInfo*))m18294_gshared)(__this, method)
extern "C" void m18295_gshared (t9 * __this , MethodInfo* method);
#define m18295(__this , method) (( void (*) (t9 * , MethodInfo*))m18295_gshared)(__this , method)
extern "C" int32_t m18296_gshared (t3235 * __this, t9 * p0, MethodInfo* method);
#define m18296(__this, p0, method) (( int32_t (*) (t3235 *, t9 *, MethodInfo*))m18296_gshared)(__this, p0, method)
extern "C" bool m18297_gshared (t3235 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18297(__this, p0, p1, method) (( bool (*) (t3235 *, t9 *, t9 *, MethodInfo*))m18297_gshared)(__this, p0, p1, method)
extern "C" t3235 * m18298_gshared (t9 * __this , MethodInfo* method);
#define m18298(__this , method) (( t3235 * (*) (t9 * , MethodInfo*))m18298_gshared)(__this , method)
