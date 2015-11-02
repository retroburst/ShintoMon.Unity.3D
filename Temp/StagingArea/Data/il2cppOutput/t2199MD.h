#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2199;
#include "t272.h"

extern "C" void m12174_gshared (t2199 * __this, MethodInfo* method);
#define m12174(__this, method) (( void (*) (t2199 *, MethodInfo*))m12174_gshared)(__this, method)
extern "C" int32_t m24894_gshared (t2199 * __this, t272  p0, t272  p1, MethodInfo* method);
#define m24894(__this, p0, p1, method) (( int32_t (*) (t2199 *, t272 , t272 , MethodInfo*))m24894_gshared)(__this, p0, p1, method)
