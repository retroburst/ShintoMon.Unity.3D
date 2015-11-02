#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2203;
#include "t924.h"

extern "C" void m12187_gshared (t2203 * __this, MethodInfo* method);
#define m12187(__this, method) (( void (*) (t2203 *, MethodInfo*))m12187_gshared)(__this, method)
extern "C" int32_t m24932_gshared (t2203 * __this, t924  p0, t924  p1, MethodInfo* method);
#define m24932(__this, p0, p1, method) (( int32_t (*) (t2203 *, t924 , t924 , MethodInfo*))m24932_gshared)(__this, p0, p1, method)
