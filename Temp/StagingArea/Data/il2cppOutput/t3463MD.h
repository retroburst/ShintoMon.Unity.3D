#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3463;
#include "t587.h"

extern "C" void m20810_gshared (t3463 * __this, MethodInfo* method);
#define m20810(__this, method) (( void (*) (t3463 *, MethodInfo*))m20810_gshared)(__this, method)
extern "C" int32_t m20811_gshared (t3463 * __this, t587  p0, MethodInfo* method);
#define m20811(__this, p0, method) (( int32_t (*) (t3463 *, t587 , MethodInfo*))m20811_gshared)(__this, p0, method)
extern "C" bool m20812_gshared (t3463 * __this, t587  p0, t587  p1, MethodInfo* method);
#define m20812(__this, p0, p1, method) (( bool (*) (t3463 *, t587 , t587 , MethodInfo*))m20812_gshared)(__this, p0, p1, method)
