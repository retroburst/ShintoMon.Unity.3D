#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3560;
struct t9;

extern "C" void m21790_gshared (t3560 * __this, MethodInfo* method);
#define m21790(__this, method) (( void (*) (t3560 *, MethodInfo*))m21790_gshared)(__this, method)
extern "C" void m21791_gshared (t9 * __this , MethodInfo* method);
#define m21791(__this , method) (( void (*) (t9 * , MethodInfo*))m21791_gshared)(__this , method)
extern "C" int32_t m21792_gshared (t3560 * __this, t9 * p0, MethodInfo* method);
#define m21792(__this, p0, method) (( int32_t (*) (t3560 *, t9 *, MethodInfo*))m21792_gshared)(__this, p0, method)
extern "C" bool m21793_gshared (t3560 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21793(__this, p0, p1, method) (( bool (*) (t3560 *, t9 *, t9 *, MethodInfo*))m21793_gshared)(__this, p0, p1, method)
extern "C" t3560 * m21794_gshared (t9 * __this , MethodInfo* method);
#define m21794(__this , method) (( t3560 * (*) (t9 * , MethodInfo*))m21794_gshared)(__this , method)
