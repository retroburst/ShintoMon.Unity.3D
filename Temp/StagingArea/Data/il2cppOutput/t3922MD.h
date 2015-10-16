#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3922;
struct t9;
#include "t297.h"

extern "C" void m24722_gshared (t3922 * __this, MethodInfo* method);
#define m24722(__this, method) (( void (*) (t3922 *, MethodInfo*))m24722_gshared)(__this, method)
extern "C" void m24723_gshared (t9 * __this , MethodInfo* method);
#define m24723(__this , method) (( void (*) (t9 * , MethodInfo*))m24723_gshared)(__this , method)
extern "C" int32_t m24724_gshared (t3922 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24724(__this, p0, p1, method) (( int32_t (*) (t3922 *, t9 *, t9 *, MethodInfo*))m24724_gshared)(__this, p0, p1, method)
extern "C" t3922 * m24725_gshared (t9 * __this , MethodInfo* method);
#define m24725(__this , method) (( t3922 * (*) (t9 * , MethodInfo*))m24725_gshared)(__this , method)
