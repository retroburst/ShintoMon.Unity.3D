#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3632;
struct t9;
struct t2;
#include "t916.h"

extern "C" void m22324_gshared (t3632 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m22324(__this, p0, p1, method) (( void (*) (t3632 *, t9 *, t916 , MethodInfo*))m22324_gshared)(__this, p0, p1, method)
extern "C" t9 * m22325_gshared (t3632 * __this, MethodInfo* method);
#define m22325(__this, method) (( t9 * (*) (t3632 *, MethodInfo*))m22325_gshared)(__this, method)
extern "C" void m22326_gshared (t3632 * __this, t9 * p0, MethodInfo* method);
#define m22326(__this, p0, method) (( void (*) (t3632 *, t9 *, MethodInfo*))m22326_gshared)(__this, p0, method)
extern "C" t916  m22327_gshared (t3632 * __this, MethodInfo* method);
#define m22327(__this, method) (( t916  (*) (t3632 *, MethodInfo*))m22327_gshared)(__this, method)
extern "C" void m22328_gshared (t3632 * __this, t916  p0, MethodInfo* method);
#define m22328(__this, p0, method) (( void (*) (t3632 *, t916 , MethodInfo*))m22328_gshared)(__this, p0, method)
extern "C" t2* m22329_gshared (t3632 * __this, MethodInfo* method);
#define m22329(__this, method) (( t2* (*) (t3632 *, MethodInfo*))m22329_gshared)(__this, method)
