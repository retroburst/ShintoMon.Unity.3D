#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3959;
#include "t310.h"

extern "C" void m24954_gshared (t3959 * __this, MethodInfo* method);
#define m24954(__this, method) (( void (*) (t3959 *, MethodInfo*))m24954_gshared)(__this, method)
extern "C" int32_t m24955_gshared (t3959 * __this, t310  p0, t310  p1, MethodInfo* method);
#define m24955(__this, p0, p1, method) (( int32_t (*) (t3959 *, t310 , t310 , MethodInfo*))m24955_gshared)(__this, p0, p1, method)
