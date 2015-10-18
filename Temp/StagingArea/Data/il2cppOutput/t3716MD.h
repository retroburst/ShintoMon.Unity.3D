#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3716;
struct t9;
#include "t916.h"

extern "C" void m23166_gshared (t3716 * __this, MethodInfo* method);
#define m23166(__this, method) (( void (*) (t3716 *, MethodInfo*))m23166_gshared)(__this, method)
extern "C" void m23167_gshared (t9 * __this , MethodInfo* method);
#define m23167(__this , method) (( void (*) (t9 * , MethodInfo*))m23167_gshared)(__this , method)
extern "C" int32_t m23168_gshared (t3716 * __this, t9 * p0, MethodInfo* method);
#define m23168(__this, p0, method) (( int32_t (*) (t3716 *, t9 *, MethodInfo*))m23168_gshared)(__this, p0, method)
extern "C" bool m23169_gshared (t3716 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m23169(__this, p0, p1, method) (( bool (*) (t3716 *, t9 *, t9 *, MethodInfo*))m23169_gshared)(__this, p0, p1, method)
extern "C" t3716 * m23170_gshared (t9 * __this , MethodInfo* method);
#define m23170(__this , method) (( t3716 * (*) (t9 * , MethodInfo*))m23170_gshared)(__this , method)
