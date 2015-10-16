#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2760;
struct t9;

extern "C" void m13532_gshared (t2760 * __this, MethodInfo* method);
#define m13532(__this, method) (( void (*) (t2760 *, MethodInfo*))m13532_gshared)(__this, method)
extern "C" int32_t m13533_gshared (t2760 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13533(__this, p0, p1, method) (( int32_t (*) (t2760 *, t9 *, t9 *, MethodInfo*))m13533_gshared)(__this, p0, p1, method)
