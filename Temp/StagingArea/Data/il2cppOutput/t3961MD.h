#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3961;
#include "t310.h"

extern "C" void m24963_gshared (t3961 * __this, MethodInfo* method);
#define m24963(__this, method) (( void (*) (t3961 *, MethodInfo*))m24963_gshared)(__this, method)
extern "C" int32_t m24964_gshared (t3961 * __this, t310  p0, MethodInfo* method);
#define m24964(__this, p0, method) (( int32_t (*) (t3961 *, t310 , MethodInfo*))m24964_gshared)(__this, p0, method)
extern "C" bool m24965_gshared (t3961 * __this, t310  p0, t310  p1, MethodInfo* method);
#define m24965(__this, p0, p1, method) (( bool (*) (t3961 *, t310 , t310 , MethodInfo*))m24965_gshared)(__this, p0, p1, method)
