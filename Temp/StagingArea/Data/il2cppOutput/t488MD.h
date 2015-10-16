#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t488;
struct t3273;
struct t821;
struct t2;
struct t9;
struct t856;
#include "t28.h"

extern "C" void m2807_gshared (t488 * __this, MethodInfo* method);
#define m2807(__this, method) (( void (*) (t488 *, MethodInfo*))m2807_gshared)(__this, method)
extern "C" void m18762_gshared (t488 * __this, t3273 * p0, MethodInfo* method);
#define m18762(__this, p0, method) (( void (*) (t488 *, t3273 *, MethodInfo*))m18762_gshared)(__this, p0, method)
extern "C" void m18763_gshared (t488 * __this, t3273 * p0, MethodInfo* method);
#define m18763(__this, p0, method) (( void (*) (t488 *, t3273 *, MethodInfo*))m18763_gshared)(__this, p0, method)
extern "C" t821 * m3029_gshared (t488 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m3029(__this, p0, p1, method) (( t821 * (*) (t488 *, t2*, t9 *, MethodInfo*))m3029_gshared)(__this, p0, p1, method)
extern "C" t856 * m3030_gshared (t488 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m3030(__this, p0, p1, method) (( t856 * (*) (t488 *, t9 *, t821 *, MethodInfo*))m3030_gshared)(__this, p0, p1, method)
extern "C" t856 * m18764_gshared (t9 * __this , t3273 * p0, MethodInfo* method);
#define m18764(__this , p0, method) (( t856 * (*) (t9 * , t3273 *, MethodInfo*))m18764_gshared)(__this , p0, method)
extern "C" void m2831_gshared (t488 * __this, t28  p0, MethodInfo* method);
#define m2831(__this, p0, method) (( void (*) (t488 *, t28 , MethodInfo*))m2831_gshared)(__this, p0, method)
