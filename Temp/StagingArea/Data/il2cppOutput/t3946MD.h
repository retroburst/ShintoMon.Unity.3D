#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3946;
struct t9;
#include "t272.h"

extern "C" void m24895_gshared (t3946 * __this, MethodInfo* method);
#define m24895(__this, method) (( void (*) (t3946 *, MethodInfo*))m24895_gshared)(__this, method)
extern "C" void m24896_gshared (t9 * __this , MethodInfo* method);
#define m24896(__this , method) (( void (*) (t9 * , MethodInfo*))m24896_gshared)(__this , method)
extern "C" int32_t m24897_gshared (t3946 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24897(__this, p0, p1, method) (( int32_t (*) (t3946 *, t9 *, t9 *, MethodInfo*))m24897_gshared)(__this, p0, p1, method)
extern "C" t3946 * m24898_gshared (t9 * __this , MethodInfo* method);
#define m24898(__this , method) (( t3946 * (*) (t9 * , MethodInfo*))m24898_gshared)(__this , method)
