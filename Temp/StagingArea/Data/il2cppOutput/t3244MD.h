#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3244;
struct t9;
#include "t466.h"

extern "C" void m18345_gshared (t3244 * __this, MethodInfo* method);
#define m18345(__this, method) (( void (*) (t3244 *, MethodInfo*))m18345_gshared)(__this, method)
extern "C" void m18346_gshared (t9 * __this , MethodInfo* method);
#define m18346(__this , method) (( void (*) (t9 * , MethodInfo*))m18346_gshared)(__this , method)
extern "C" int32_t m18347_gshared (t3244 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m18347(__this, p0, p1, method) (( int32_t (*) (t3244 *, t9 *, t9 *, MethodInfo*))m18347_gshared)(__this, p0, p1, method)
extern "C" t3244 * m18348_gshared (t9 * __this , MethodInfo* method);
#define m18348(__this , method) (( t3244 * (*) (t9 * , MethodInfo*))m18348_gshared)(__this , method)
