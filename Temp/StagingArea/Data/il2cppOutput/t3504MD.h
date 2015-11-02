#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3504;
struct t9;
#include "t601.h"

extern "C" void m21059_gshared (t3504 * __this, MethodInfo* method);
#define m21059(__this, method) (( void (*) (t3504 *, MethodInfo*))m21059_gshared)(__this, method)
extern "C" void m21060_gshared (t9 * __this , MethodInfo* method);
#define m21060(__this , method) (( void (*) (t9 * , MethodInfo*))m21060_gshared)(__this , method)
extern "C" int32_t m21061_gshared (t3504 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21061(__this, p0, p1, method) (( int32_t (*) (t3504 *, t9 *, t9 *, MethodInfo*))m21061_gshared)(__this, p0, p1, method)
extern "C" t3504 * m21062_gshared (t9 * __this , MethodInfo* method);
#define m21062(__this , method) (( t3504 * (*) (t9 * , MethodInfo*))m21062_gshared)(__this , method)
