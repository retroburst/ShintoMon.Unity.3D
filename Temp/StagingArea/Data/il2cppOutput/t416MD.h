#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t416;
struct t418;
struct t835;
struct t2;
struct t9;
struct t870;
#include "t43.h"

extern "C" void m2603_gshared (t416 * __this, MethodInfo* method);
#define m2603(__this, method) (( void (*) (t416 *, MethodInfo*))m2603_gshared)(__this, method)
extern "C" void m2606_gshared (t416 * __this, t418 * p0, MethodInfo* method);
#define m2606(__this, p0, method) (( void (*) (t416 *, t418 *, MethodInfo*))m2606_gshared)(__this, p0, method)
extern "C" void m17438_gshared (t416 * __this, t418 * p0, MethodInfo* method);
#define m17438(__this, p0, method) (( void (*) (t416 *, t418 *, MethodInfo*))m17438_gshared)(__this, p0, method)
extern "C" t835 * m3069_gshared (t416 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m3069(__this, p0, p1, method) (( t835 * (*) (t416 *, t2*, t9 *, MethodInfo*))m3069_gshared)(__this, p0, p1, method)
extern "C" t870 * m3070_gshared (t416 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m3070(__this, p0, p1, method) (( t870 * (*) (t416 *, t9 *, t835 *, MethodInfo*))m3070_gshared)(__this, p0, p1, method)
extern "C" t870 * m17439_gshared (t9 * __this , t418 * p0, MethodInfo* method);
#define m17439(__this , p0, method) (( t870 * (*) (t9 * , t418 *, MethodInfo*))m17439_gshared)(__this , p0, method)
extern "C" void m2605_gshared (t416 * __this, t43  p0, MethodInfo* method);
#define m2605(__this, p0, method) (( void (*) (t416 *, t43 , MethodInfo*))m2605_gshared)(__this, p0, method)
