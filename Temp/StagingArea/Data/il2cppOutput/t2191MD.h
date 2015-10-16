#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2191;
#include "t297.h"

extern "C" void m12131_gshared (t2191 * __this, MethodInfo* method);
#define m12131(__this, method) (( void (*) (t2191 *, MethodInfo*))m12131_gshared)(__this, method)
extern "C" int32_t m24728_gshared (t2191 * __this, t297  p0, MethodInfo* method);
#define m24728(__this, p0, method) (( int32_t (*) (t2191 *, t297 , MethodInfo*))m24728_gshared)(__this, p0, method)
extern "C" bool m24729_gshared (t2191 * __this, t297  p0, t297  p1, MethodInfo* method);
#define m24729(__this, p0, p1, method) (( bool (*) (t2191 *, t297 , t297 , MethodInfo*))m24729_gshared)(__this, p0, p1, method)
