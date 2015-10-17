#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t488;
struct t603;
struct t828;
struct t2;
struct t9;
struct t863;

extern "C" void m2821_gshared (t488 * __this, MethodInfo* method);
#define m2821(__this, method) (( void (*) (t488 *, MethodInfo*))m2821_gshared)(__this, method)
extern "C" void m2854_gshared (t488 * __this, t603 * p0, MethodInfo* method);
#define m2854(__this, p0, method) (( void (*) (t488 *, t603 *, MethodInfo*))m2854_gshared)(__this, p0, method)
extern "C" void m2853_gshared (t488 * __this, t603 * p0, MethodInfo* method);
#define m2853(__this, p0, method) (( void (*) (t488 *, t603 *, MethodInfo*))m2853_gshared)(__this, p0, method)
extern "C" t828 * m3050_gshared (t488 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m3050(__this, p0, p1, method) (( t828 * (*) (t488 *, t2*, t9 *, MethodInfo*))m3050_gshared)(__this, p0, p1, method)
extern "C" t863 * m3051_gshared (t488 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m3051(__this, p0, p1, method) (( t863 * (*) (t488 *, t9 *, t828 *, MethodInfo*))m3051_gshared)(__this, p0, p1, method)
extern "C" t863 * m18962_gshared (t9 * __this , t603 * p0, MethodInfo* method);
#define m18962(__this , p0, method) (( t863 * (*) (t9 * , t603 *, MethodInfo*))m18962_gshared)(__this , p0, method)
extern "C" void m2830_gshared (t488 * __this, float p0, MethodInfo* method);
#define m2830(__this, p0, method) (( void (*) (t488 *, float, MethodInfo*))m2830_gshared)(__this, p0, method)
