#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3467;
#include "t587.h"

extern "C" void m20825_gshared (t3467 * __this, MethodInfo* method);
#define m20825(__this, method) (( void (*) (t3467 *, MethodInfo*))m20825_gshared)(__this, method)
extern "C" int32_t m20826_gshared (t3467 * __this, t587  p0, t587  p1, MethodInfo* method);
#define m20826(__this, p0, p1, method) (( int32_t (*) (t3467 *, t587 , t587 , MethodInfo*))m20826_gshared)(__this, p0, p1, method)
