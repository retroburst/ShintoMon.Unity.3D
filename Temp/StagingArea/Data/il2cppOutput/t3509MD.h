#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3509;
struct t9;
#include "t593.h"

extern "C" void m21173_gshared (t3509 * __this, MethodInfo* method);
#define m21173(__this, method) (( void (*) (t3509 *, MethodInfo*))m21173_gshared)(__this, method)
extern "C" void m21174_gshared (t9 * __this , MethodInfo* method);
#define m21174(__this , method) (( void (*) (t9 * , MethodInfo*))m21174_gshared)(__this , method)
extern "C" int32_t m21175_gshared (t3509 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21175(__this, p0, p1, method) (( int32_t (*) (t3509 *, t9 *, t9 *, MethodInfo*))m21175_gshared)(__this, p0, p1, method)
extern "C" t3509 * m21176_gshared (t9 * __this , MethodInfo* method);
#define m21176(__this , method) (( t3509 * (*) (t9 * , MethodInfo*))m21176_gshared)(__this , method)
