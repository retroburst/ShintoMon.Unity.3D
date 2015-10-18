#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3850;
struct t9;

extern "C" void m24321_gshared (t3850 * __this, MethodInfo* method);
#define m24321(__this, method) (( void (*) (t3850 *, MethodInfo*))m24321_gshared)(__this, method)
extern "C" void m24322_gshared (t9 * __this , MethodInfo* method);
#define m24322(__this , method) (( void (*) (t9 * , MethodInfo*))m24322_gshared)(__this , method)
extern "C" int32_t m24323_gshared (t3850 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24323(__this, p0, p1, method) (( int32_t (*) (t3850 *, t9 *, t9 *, MethodInfo*))m24323_gshared)(__this, p0, p1, method)
extern "C" t3850 * m24324_gshared (t9 * __this , MethodInfo* method);
#define m24324(__this , method) (( t3850 * (*) (t9 * , MethodInfo*))m24324_gshared)(__this , method)
