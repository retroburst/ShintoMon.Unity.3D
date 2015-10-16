#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3057;
struct t9;
#include "t340.h"

extern "C" void m16504_gshared (t3057 * __this, MethodInfo* method);
#define m16504(__this, method) (( void (*) (t3057 *, MethodInfo*))m16504_gshared)(__this, method)
extern "C" void m16505_gshared (t9 * __this , MethodInfo* method);
#define m16505(__this , method) (( void (*) (t9 * , MethodInfo*))m16505_gshared)(__this , method)
extern "C" int32_t m16506_gshared (t3057 * __this, t9 * p0, MethodInfo* method);
#define m16506(__this, p0, method) (( int32_t (*) (t3057 *, t9 *, MethodInfo*))m16506_gshared)(__this, p0, method)
extern "C" bool m16507_gshared (t3057 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m16507(__this, p0, p1, method) (( bool (*) (t3057 *, t9 *, t9 *, MethodInfo*))m16507_gshared)(__this, p0, p1, method)
extern "C" t3057 * m16508_gshared (t9 * __this , MethodInfo* method);
#define m16508(__this , method) (( t3057 * (*) (t9 * , MethodInfo*))m16508_gshared)(__this , method)
