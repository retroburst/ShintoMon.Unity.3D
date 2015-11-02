#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3955;
#include "t924.h"

extern "C" void m24937_gshared (t3955 * __this, MethodInfo* method);
#define m24937(__this, method) (( void (*) (t3955 *, MethodInfo*))m24937_gshared)(__this, method)
extern "C" int32_t m24938_gshared (t3955 * __this, t924  p0, t924  p1, MethodInfo* method);
#define m24938(__this, p0, p1, method) (( int32_t (*) (t3955 *, t924 , t924 , MethodInfo*))m24938_gshared)(__this, p0, p1, method)
