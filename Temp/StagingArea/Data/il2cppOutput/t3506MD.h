#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3506;
#include "t593.h"

extern "C" void m21162_gshared (t3506 * __this, MethodInfo* method);
#define m21162(__this, method) (( void (*) (t3506 *, MethodInfo*))m21162_gshared)(__this, method)
extern "C" int32_t m21163_gshared (t3506 * __this, t593  p0, MethodInfo* method);
#define m21163(__this, p0, method) (( int32_t (*) (t3506 *, t593 , MethodInfo*))m21163_gshared)(__this, p0, method)
extern "C" bool m21164_gshared (t3506 * __this, t593  p0, t593  p1, MethodInfo* method);
#define m21164(__this, p0, p1, method) (( bool (*) (t3506 *, t593 , t593 , MethodInfo*))m21164_gshared)(__this, p0, p1, method)
