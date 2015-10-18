#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3952;
#include "t918.h"

extern "C" void m24912_gshared (t3952 * __this, MethodInfo* method);
#define m24912(__this, method) (( void (*) (t3952 *, MethodInfo*))m24912_gshared)(__this, method)
extern "C" int32_t m24913_gshared (t3952 * __this, t918  p0, MethodInfo* method);
#define m24913(__this, p0, method) (( int32_t (*) (t3952 *, t918 , MethodInfo*))m24913_gshared)(__this, p0, method)
extern "C" bool m24914_gshared (t3952 * __this, t918  p0, t918  p1, MethodInfo* method);
#define m24914(__this, p0, p1, method) (( bool (*) (t3952 *, t918 , t918 , MethodInfo*))m24914_gshared)(__this, p0, p1, method)
