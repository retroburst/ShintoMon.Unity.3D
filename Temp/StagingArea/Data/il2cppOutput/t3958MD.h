#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3958;
struct t9;
#include "t310.h"

extern "C" void m24950_gshared (t3958 * __this, MethodInfo* method);
#define m24950(__this, method) (( void (*) (t3958 *, MethodInfo*))m24950_gshared)(__this, method)
extern "C" void m24951_gshared (t9 * __this , MethodInfo* method);
#define m24951(__this , method) (( void (*) (t9 * , MethodInfo*))m24951_gshared)(__this , method)
extern "C" int32_t m24952_gshared (t3958 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24952(__this, p0, p1, method) (( int32_t (*) (t3958 *, t9 *, t9 *, MethodInfo*))m24952_gshared)(__this, p0, p1, method)
extern "C" t3958 * m24953_gshared (t9 * __this , MethodInfo* method);
#define m24953(__this , method) (( t3958 * (*) (t9 * , MethodInfo*))m24953_gshared)(__this , method)
