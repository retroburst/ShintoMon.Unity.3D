#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2734;
struct t9;

extern "C" void m13214_gshared (t2734 * __this, MethodInfo* method);
#define m13214(__this, method) (( void (*) (t2734 *, MethodInfo*))m13214_gshared)(__this, method)
extern "C" int32_t m13216_gshared (t2734 * __this, t9 * p0, MethodInfo* method);
#define m13216(__this, p0, method) (( int32_t (*) (t2734 *, t9 *, MethodInfo*))m13216_gshared)(__this, p0, method)
extern "C" bool m13218_gshared (t2734 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13218(__this, p0, p1, method) (( bool (*) (t2734 *, t9 *, t9 *, MethodInfo*))m13218_gshared)(__this, p0, p1, method)
