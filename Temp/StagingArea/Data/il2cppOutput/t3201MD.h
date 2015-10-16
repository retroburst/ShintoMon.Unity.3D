#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3201;
struct t9;
#include "t452.h"

extern "C" void m18086_gshared (t3201 * __this, MethodInfo* method);
#define m18086(__this, method) (( void (*) (t3201 *, MethodInfo*))m18086_gshared)(__this, method)
extern "C" void m18087_gshared (t9 * __this , MethodInfo* method);
#define m18087(__this , method) (( void (*) (t9 * , MethodInfo*))m18087_gshared)(__this , method)
extern "C" int32_t m18088_gshared (t3201 * __this, t9 * p0, MethodInfo* method);
#define m18088(__this, p0, method) (( int32_t (*) (t3201 *, t9 *, MethodInfo*))m18088_gshared)(__this, p0, method)
extern "C" bool m18089_gshared (t3201 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18089(__this, p0, p1, method) (( bool (*) (t3201 *, t9 *, t9 *, MethodInfo*))m18089_gshared)(__this, p0, p1, method)
extern "C" t3201 * m18090_gshared (t9 * __this , MethodInfo* method);
#define m18090(__this , method) (( t3201 * (*) (t9 * , MethodInfo*))m18090_gshared)(__this , method)
