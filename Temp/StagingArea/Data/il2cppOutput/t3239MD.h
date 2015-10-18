#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3239;
struct t9;
#include "t459.h"

extern "C" void m18311_gshared (t3239 * __this, MethodInfo* method);
#define m18311(__this, method) (( void (*) (t3239 *, MethodInfo*))m18311_gshared)(__this, method)
extern "C" void m18312_gshared (t9 * __this , MethodInfo* method);
#define m18312(__this , method) (( void (*) (t9 * , MethodInfo*))m18312_gshared)(__this , method)
extern "C" int32_t m18313_gshared (t3239 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18313(__this, p0, p1, method) (( int32_t (*) (t3239 *, t9 *, t9 *, MethodInfo*))m18313_gshared)(__this, p0, p1, method)
extern "C" t3239 * m18314_gshared (t9 * __this , MethodInfo* method);
#define m18314(__this , method) (( t3239 * (*) (t9 * , MethodInfo*))m18314_gshared)(__this , method)
