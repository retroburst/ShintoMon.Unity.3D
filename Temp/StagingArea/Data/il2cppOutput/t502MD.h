#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t502;
struct t3312;
struct t835;
struct t2;
struct t9;
struct t870;
#include "t28.h"

extern "C" void m2871_gshared (t502 * __this, MethodInfo* method);
#define m2871(__this, method) (( void (*) (t502 *, MethodInfo*))m2871_gshared)(__this, method)
extern "C" void m19005_gshared (t502 * __this, t3312 * p0, MethodInfo* method);
#define m19005(__this, p0, method) (( void (*) (t502 *, t3312 *, MethodInfo*))m19005_gshared)(__this, p0, method)
extern "C" void m19006_gshared (t502 * __this, t3312 * p0, MethodInfo* method);
#define m19006(__this, p0, method) (( void (*) (t502 *, t3312 *, MethodInfo*))m19006_gshared)(__this, p0, method)
extern "C" t835 * m3093_gshared (t502 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m3093(__this, p0, p1, method) (( t835 * (*) (t502 *, t2*, t9 *, MethodInfo*))m3093_gshared)(__this, p0, p1, method)
extern "C" t870 * m3094_gshared (t502 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m3094(__this, p0, p1, method) (( t870 * (*) (t502 *, t9 *, t835 *, MethodInfo*))m3094_gshared)(__this, p0, p1, method)
extern "C" t870 * m19007_gshared (t9 * __this , t3312 * p0, MethodInfo* method);
#define m19007(__this , p0, method) (( t870 * (*) (t9 * , t3312 *, MethodInfo*))m19007_gshared)(__this , p0, method)
extern "C" void m2895_gshared (t502 * __this, t28  p0, MethodInfo* method);
#define m2895(__this, p0, method) (( void (*) (t502 *, t28 , MethodInfo*))m2895_gshared)(__this, p0, method)
