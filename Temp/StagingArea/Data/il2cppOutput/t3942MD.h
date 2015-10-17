#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3942;
#include "t270.h"

extern "C" void m24864_gshared (t3942 * __this, MethodInfo* method);
#define m24864(__this, method) (( void (*) (t3942 *, MethodInfo*))m24864_gshared)(__this, method)
extern "C" int32_t m24865_gshared (t3942 * __this, t270  p0, t270  p1, MethodInfo* method);
#define m24865(__this, p0, p1, method) (( int32_t (*) (t3942 *, t270 , t270 , MethodInfo*))m24865_gshared)(__this, p0, p1, method)
