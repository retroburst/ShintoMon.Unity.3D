#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3924;
struct t9;
#include "t297.h"

extern "C" void m24730_gshared (t3924 * __this, MethodInfo* method);
#define m24730(__this, method) (( void (*) (t3924 *, MethodInfo*))m24730_gshared)(__this, method)
extern "C" void m24731_gshared (t9 * __this , MethodInfo* method);
#define m24731(__this , method) (( void (*) (t9 * , MethodInfo*))m24731_gshared)(__this , method)
extern "C" int32_t m24732_gshared (t3924 * __this, t9 * p0, MethodInfo* method);
#define m24732(__this, p0, method) (( int32_t (*) (t3924 *, t9 *, MethodInfo*))m24732_gshared)(__this, p0, method)
extern "C" bool m24733_gshared (t3924 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24733(__this, p0, p1, method) (( bool (*) (t3924 *, t9 *, t9 *, MethodInfo*))m24733_gshared)(__this, p0, p1, method)
extern "C" t3924 * m24734_gshared (t9 * __this , MethodInfo* method);
#define m24734(__this , method) (( t3924 * (*) (t9 * , MethodInfo*))m24734_gshared)(__this , method)
