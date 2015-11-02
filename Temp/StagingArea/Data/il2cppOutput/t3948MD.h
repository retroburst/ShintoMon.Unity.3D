#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3948;
struct t9;
#include "t272.h"

extern "C" void m24903_gshared (t3948 * __this, MethodInfo* method);
#define m24903(__this, method) (( void (*) (t3948 *, MethodInfo*))m24903_gshared)(__this, method)
extern "C" void m24904_gshared (t9 * __this , MethodInfo* method);
#define m24904(__this , method) (( void (*) (t9 * , MethodInfo*))m24904_gshared)(__this , method)
extern "C" int32_t m24905_gshared (t3948 * __this, t9 * p0, MethodInfo* method);
#define m24905(__this, p0, method) (( int32_t (*) (t3948 *, t9 *, MethodInfo*))m24905_gshared)(__this, p0, method)
extern "C" bool m24906_gshared (t3948 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24906(__this, p0, p1, method) (( bool (*) (t3948 *, t9 *, t9 *, MethodInfo*))m24906_gshared)(__this, p0, p1, method)
extern "C" t3948 * m24907_gshared (t9 * __this , MethodInfo* method);
#define m24907(__this , method) (( t3948 * (*) (t9 * , MethodInfo*))m24907_gshared)(__this , method)
