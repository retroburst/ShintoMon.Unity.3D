#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2189;
#include "t911.h"

extern "C" void m12120_gshared (t2189 * __this, MethodInfo* method);
#define m12120(__this, method) (( void (*) (t2189 *, MethodInfo*))m12120_gshared)(__this, method)
extern "C" int32_t m24711_gshared (t2189 * __this, t911  p0, MethodInfo* method);
#define m24711(__this, p0, method) (( int32_t (*) (t2189 *, t911 , MethodInfo*))m24711_gshared)(__this, p0, method)
extern "C" bool m24712_gshared (t2189 * __this, t911  p0, t911  p1, MethodInfo* method);
#define m24712(__this, p0, p1, method) (( bool (*) (t2189 *, t911 , t911 , MethodInfo*))m24712_gshared)(__this, p0, p1, method)
