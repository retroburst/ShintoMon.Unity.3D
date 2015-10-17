#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3945;
struct t9;
#include "t917.h"

extern "C" void m24877_gshared (t3945 * __this, MethodInfo* method);
#define m24877(__this, method) (( void (*) (t3945 *, MethodInfo*))m24877_gshared)(__this, method)
extern "C" void m24878_gshared (t9 * __this , MethodInfo* method);
#define m24878(__this , method) (( void (*) (t9 * , MethodInfo*))m24878_gshared)(__this , method)
extern "C" int32_t m24879_gshared (t3945 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24879(__this, p0, p1, method) (( int32_t (*) (t3945 *, t9 *, t9 *, MethodInfo*))m24879_gshared)(__this, p0, p1, method)
extern "C" t3945 * m24880_gshared (t9 * __this , MethodInfo* method);
#define m24880(__this , method) (( t3945 * (*) (t9 * , MethodInfo*))m24880_gshared)(__this , method)
