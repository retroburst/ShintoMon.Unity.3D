#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3925;
#include "t297.h"

extern "C" void m24735_gshared (t3925 * __this, MethodInfo* method);
#define m24735(__this, method) (( void (*) (t3925 *, MethodInfo*))m24735_gshared)(__this, method)
extern "C" int32_t m24736_gshared (t3925 * __this, t297  p0, MethodInfo* method);
#define m24736(__this, p0, method) (( int32_t (*) (t3925 *, t297 , MethodInfo*))m24736_gshared)(__this, p0, method)
extern "C" bool m24737_gshared (t3925 * __this, t297  p0, t297  p1, MethodInfo* method);
#define m24737(__this, p0, p1, method) (( bool (*) (t3925 *, t297 , t297 , MethodInfo*))m24737_gshared)(__this, p0, p1, method)
