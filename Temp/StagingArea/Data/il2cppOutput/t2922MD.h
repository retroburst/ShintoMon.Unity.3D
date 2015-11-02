#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2922;
struct t9;

extern "C" void m14964_gshared (t2922 * __this, MethodInfo* method);
#define m14964(__this, method) (( void (*) (t2922 *, MethodInfo*))m14964_gshared)(__this, method)
extern "C" void m14965_gshared (t9 * __this , MethodInfo* method);
#define m14965(__this , method) (( void (*) (t9 * , MethodInfo*))m14965_gshared)(__this , method)
extern "C" int32_t m14966_gshared (t2922 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14966(__this, p0, p1, method) (( int32_t (*) (t2922 *, t9 *, t9 *, MethodInfo*))m14966_gshared)(__this, p0, p1, method)
extern "C" t2922 * m14967_gshared (t9 * __this , MethodInfo* method);
#define m14967(__this , method) (( t2922 * (*) (t9 * , MethodInfo*))m14967_gshared)(__this , method)
