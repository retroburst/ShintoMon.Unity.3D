#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t402;
struct t404;
struct t821;
struct t2;
struct t9;
struct t856;
#include "t43.h"

extern "C" void m2539_gshared (t402 * __this, MethodInfo* method);
#define m2539(__this, method) (( void (*) (t402 *, MethodInfo*))m2539_gshared)(__this, method)
extern "C" void m2542_gshared (t402 * __this, t404 * p0, MethodInfo* method);
#define m2542(__this, p0, method) (( void (*) (t402 *, t404 *, MethodInfo*))m2542_gshared)(__this, p0, method)
extern "C" void m17195_gshared (t402 * __this, t404 * p0, MethodInfo* method);
#define m17195(__this, p0, method) (( void (*) (t402 *, t404 *, MethodInfo*))m17195_gshared)(__this, p0, method)
extern "C" t821 * m3005_gshared (t402 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m3005(__this, p0, p1, method) (( t821 * (*) (t402 *, t2*, t9 *, MethodInfo*))m3005_gshared)(__this, p0, p1, method)
extern "C" t856 * m3006_gshared (t402 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m3006(__this, p0, p1, method) (( t856 * (*) (t402 *, t9 *, t821 *, MethodInfo*))m3006_gshared)(__this, p0, p1, method)
extern "C" t856 * m17196_gshared (t9 * __this , t404 * p0, MethodInfo* method);
#define m17196(__this , p0, method) (( t856 * (*) (t9 * , t404 *, MethodInfo*))m17196_gshared)(__this , p0, method)
extern "C" void m2541_gshared (t402 * __this, t43  p0, MethodInfo* method);
#define m2541(__this, p0, method) (( void (*) (t402 *, t43 , MethodInfo*))m2541_gshared)(__this, p0, method)
