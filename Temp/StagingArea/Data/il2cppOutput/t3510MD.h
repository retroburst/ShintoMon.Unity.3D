#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3510;
#include "t593.h"

extern "C" void m21177_gshared (t3510 * __this, MethodInfo* method);
#define m21177(__this, method) (( void (*) (t3510 *, MethodInfo*))m21177_gshared)(__this, method)
extern "C" int32_t m21178_gshared (t3510 * __this, t593  p0, t593  p1, MethodInfo* method);
#define m21178(__this, p0, p1, method) (( int32_t (*) (t3510 *, t593 , t593 , MethodInfo*))m21178_gshared)(__this, p0, p1, method)
