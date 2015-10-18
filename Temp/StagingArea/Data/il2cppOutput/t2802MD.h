#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2802;
struct t9;
struct t2790;

extern "C" void m13872_gshared (t2802 * __this, t2790 * p0, MethodInfo* method);
#define m13872(__this, p0, method) (( void (*) (t2802 *, t2790 *, MethodInfo*))m13872_gshared)(__this, p0, method)
extern "C" t9 * m13873_gshared (t2802 * __this, MethodInfo* method);
#define m13873(__this, method) (( t9 * (*) (t2802 *, MethodInfo*))m13873_gshared)(__this, method)
extern "C" void m13874_gshared (t2802 * __this, MethodInfo* method);
#define m13874(__this, method) (( void (*) (t2802 *, MethodInfo*))m13874_gshared)(__this, method)
extern "C" bool m13875_gshared (t2802 * __this, MethodInfo* method);
#define m13875(__this, method) (( bool (*) (t2802 *, MethodInfo*))m13875_gshared)(__this, method)
extern "C" uint8_t m13876_gshared (t2802 * __this, MethodInfo* method);
#define m13876(__this, method) (( uint8_t (*) (t2802 *, MethodInfo*))m13876_gshared)(__this, method)
