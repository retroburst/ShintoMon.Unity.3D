#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3472;
struct t9;
#include "t586.h"

extern "C" void m20953_gshared (t3472 * __this, MethodInfo* method);
#define m20953(__this, method) (( void (*) (t3472 *, MethodInfo*))m20953_gshared)(__this, method)
extern "C" void m20954_gshared (t9 * __this , MethodInfo* method);
#define m20954(__this , method) (( void (*) (t9 * , MethodInfo*))m20954_gshared)(__this , method)
extern "C" int32_t m20955_gshared (t3472 * __this, t9 * p0, MethodInfo* method);
#define m20955(__this, p0, method) (( int32_t (*) (t3472 *, t9 *, MethodInfo*))m20955_gshared)(__this, p0, method)
extern "C" bool m20956_gshared (t3472 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20956(__this, p0, p1, method) (( bool (*) (t3472 *, t9 *, t9 *, MethodInfo*))m20956_gshared)(__this, p0, p1, method)
extern "C" t3472 * m20957_gshared (t9 * __this , MethodInfo* method);
#define m20957(__this , method) (( t3472 * (*) (t9 * , MethodInfo*))m20957_gshared)(__this , method)
