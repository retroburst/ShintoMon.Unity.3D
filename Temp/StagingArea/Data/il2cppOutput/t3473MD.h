#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3473;
#include "t586.h"

extern "C" void m20958_gshared (t3473 * __this, MethodInfo* method);
#define m20958(__this, method) (( void (*) (t3473 *, MethodInfo*))m20958_gshared)(__this, method)
extern "C" int32_t m20959_gshared (t3473 * __this, t586  p0, MethodInfo* method);
#define m20959(__this, p0, method) (( int32_t (*) (t3473 *, t586 , MethodInfo*))m20959_gshared)(__this, p0, method)
extern "C" bool m20960_gshared (t3473 * __this, t586  p0, t586  p1, MethodInfo* method);
#define m20960(__this, p0, p1, method) (( bool (*) (t3473 *, t586 , t586 , MethodInfo*))m20960_gshared)(__this, p0, p1, method)
