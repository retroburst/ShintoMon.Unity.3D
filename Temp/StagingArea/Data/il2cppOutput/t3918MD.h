#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3918;
struct t9;
#include "t911.h"

extern "C" void m24705_gshared (t3918 * __this, MethodInfo* method);
#define m24705(__this, method) (( void (*) (t3918 *, MethodInfo*))m24705_gshared)(__this, method)
extern "C" void m24706_gshared (t9 * __this , MethodInfo* method);
#define m24706(__this , method) (( void (*) (t9 * , MethodInfo*))m24706_gshared)(__this , method)
extern "C" int32_t m24707_gshared (t3918 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24707(__this, p0, p1, method) (( int32_t (*) (t3918 *, t9 *, t9 *, MethodInfo*))m24707_gshared)(__this, p0, p1, method)
extern "C" t3918 * m24708_gshared (t9 * __this , MethodInfo* method);
#define m24708(__this , method) (( t3918 * (*) (t9 * , MethodInfo*))m24708_gshared)(__this , method)
