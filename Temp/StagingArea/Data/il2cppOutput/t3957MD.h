#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3957;
#include "t924.h"

extern "C" void m24946_gshared (t3957 * __this, MethodInfo* method);
#define m24946(__this, method) (( void (*) (t3957 *, MethodInfo*))m24946_gshared)(__this, method)
extern "C" int32_t m24947_gshared (t3957 * __this, t924  p0, MethodInfo* method);
#define m24947(__this, p0, method) (( int32_t (*) (t3957 *, t924 , MethodInfo*))m24947_gshared)(__this, p0, method)
extern "C" bool m24948_gshared (t3957 * __this, t924  p0, t924  p1, MethodInfo* method);
#define m24948(__this, p0, p1, method) (( bool (*) (t3957 *, t924 , t924 , MethodInfo*))m24948_gshared)(__this, p0, p1, method)
