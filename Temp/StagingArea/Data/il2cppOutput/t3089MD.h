#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3089;
struct t3033;
struct t821;
struct t2;
struct t9;
struct t856;

extern "C" void m16825_gshared (t3089 * __this, MethodInfo* method);
#define m16825(__this, method) (( void (*) (t3089 *, MethodInfo*))m16825_gshared)(__this, method)
extern "C" void m16827_gshared (t3089 * __this, t3033 * p0, MethodInfo* method);
#define m16827(__this, p0, method) (( void (*) (t3089 *, t3033 *, MethodInfo*))m16827_gshared)(__this, p0, method)
extern "C" void m16829_gshared (t3089 * __this, t3033 * p0, MethodInfo* method);
#define m16829(__this, p0, method) (( void (*) (t3089 *, t3033 *, MethodInfo*))m16829_gshared)(__this, p0, method)
extern "C" t821 * m16830_gshared (t3089 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m16830(__this, p0, p1, method) (( t821 * (*) (t3089 *, t2*, t9 *, MethodInfo*))m16830_gshared)(__this, p0, p1, method)
extern "C" t856 * m16831_gshared (t3089 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m16831(__this, p0, p1, method) (( t856 * (*) (t3089 *, t9 *, t821 *, MethodInfo*))m16831_gshared)(__this, p0, p1, method)
extern "C" t856 * m16833_gshared (t9 * __this , t3033 * p0, MethodInfo* method);
#define m16833(__this , p0, method) (( t856 * (*) (t9 * , t3033 *, MethodInfo*))m16833_gshared)(__this , p0, method)
extern "C" void m16834_gshared (t3089 * __this, t9 * p0, MethodInfo* method);
#define m16834(__this, p0, method) (( void (*) (t3089 *, t9 *, MethodInfo*))m16834_gshared)(__this, p0, method)
