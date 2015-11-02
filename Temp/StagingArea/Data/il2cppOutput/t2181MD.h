#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2181;
struct t9;

extern "C" void m13146_gshared (t2181 * __this, MethodInfo* method);
#define m13146(__this, method) (( void (*) (t2181 *, MethodInfo*))m13146_gshared)(__this, method)
extern "C" void m13147_gshared (t9 * __this , MethodInfo* method);
#define m13147(__this , method) (( void (*) (t9 * , MethodInfo*))m13147_gshared)(__this , method)
extern "C" int32_t m13148_gshared (t2181 * __this, t9 * p0, MethodInfo* method);
#define m13148(__this, p0, method) (( int32_t (*) (t2181 *, t9 *, MethodInfo*))m13148_gshared)(__this, p0, method)
extern "C" bool m13149_gshared (t2181 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13149(__this, p0, p1, method) (( bool (*) (t2181 *, t9 *, t9 *, MethodInfo*))m13149_gshared)(__this, p0, p1, method)
extern "C" t2181 * m13150_gshared (t9 * __this , MethodInfo* method);
#define m13150(__this , method) (( t2181 * (*) (t9 * , MethodInfo*))m13150_gshared)(__this , method)
