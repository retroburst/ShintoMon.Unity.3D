#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3128;
struct t3072;
struct t835;
struct t2;
struct t9;
struct t870;

extern "C" void m17068_gshared (t3128 * __this, MethodInfo* method);
#define m17068(__this, method) (( void (*) (t3128 *, MethodInfo*))m17068_gshared)(__this, method)
extern "C" void m17070_gshared (t3128 * __this, t3072 * p0, MethodInfo* method);
#define m17070(__this, p0, method) (( void (*) (t3128 *, t3072 *, MethodInfo*))m17070_gshared)(__this, p0, method)
extern "C" void m17072_gshared (t3128 * __this, t3072 * p0, MethodInfo* method);
#define m17072(__this, p0, method) (( void (*) (t3128 *, t3072 *, MethodInfo*))m17072_gshared)(__this, p0, method)
extern "C" t835 * m17073_gshared (t3128 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m17073(__this, p0, p1, method) (( t835 * (*) (t3128 *, t2*, t9 *, MethodInfo*))m17073_gshared)(__this, p0, p1, method)
extern "C" t870 * m17074_gshared (t3128 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m17074(__this, p0, p1, method) (( t870 * (*) (t3128 *, t9 *, t835 *, MethodInfo*))m17074_gshared)(__this, p0, p1, method)
extern "C" t870 * m17076_gshared (t9 * __this , t3072 * p0, MethodInfo* method);
#define m17076(__this , p0, method) (( t870 * (*) (t9 * , t3072 *, MethodInfo*))m17076_gshared)(__this , p0, method)
extern "C" void m17077_gshared (t3128 * __this, t9 * p0, MethodInfo* method);
#define m17077(__this, p0, method) (( void (*) (t3128 *, t9 *, MethodInfo*))m17077_gshared)(__this, p0, method)
