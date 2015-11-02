#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3240;
struct t9;
#include "t466.h"

extern "C" void m18329_gshared (t3240 * __this, MethodInfo* method);
#define m18329(__this, method) (( void (*) (t3240 *, MethodInfo*))m18329_gshared)(__this, method)
extern "C" void m18330_gshared (t9 * __this , MethodInfo* method);
#define m18330(__this , method) (( void (*) (t9 * , MethodInfo*))m18330_gshared)(__this , method)
extern "C" int32_t m18331_gshared (t3240 * __this, t9 * p0, MethodInfo* method);
#define m18331(__this, p0, method) (( int32_t (*) (t3240 *, t9 *, MethodInfo*))m18331_gshared)(__this, p0, method)
extern "C" bool m18332_gshared (t3240 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18332(__this, p0, p1, method) (( bool (*) (t3240 *, t9 *, t9 *, MethodInfo*))m18332_gshared)(__this, p0, p1, method)
extern "C" t3240 * m18333_gshared (t9 * __this , MethodInfo* method);
#define m18333(__this , method) (( t3240 * (*) (t9 * , MethodInfo*))m18333_gshared)(__this , method)
