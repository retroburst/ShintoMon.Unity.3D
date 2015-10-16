#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3847;
struct t9;

extern "C" void m24263_gshared (t3847 * __this, MethodInfo* method);
#define m24263(__this, method) (( void (*) (t3847 *, MethodInfo*))m24263_gshared)(__this, method)
extern "C" int32_t m24264_gshared (t3847 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24264(__this, p0, p1, method) (( int32_t (*) (t3847 *, t9 *, t9 *, MethodInfo*))m24264_gshared)(__this, p0, p1, method)
