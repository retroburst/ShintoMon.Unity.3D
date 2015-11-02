#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3721;
struct t9;
#include "t922.h"

extern "C" void m23200_gshared (t3721 * __this, MethodInfo* method);
#define m23200(__this, method) (( void (*) (t3721 *, MethodInfo*))m23200_gshared)(__this, method)
extern "C" void m23201_gshared (t9 * __this , MethodInfo* method);
#define m23201(__this , method) (( void (*) (t9 * , MethodInfo*))m23201_gshared)(__this , method)
extern "C" int32_t m23202_gshared (t3721 * __this, t9 * p0, MethodInfo* method);
#define m23202(__this, p0, method) (( int32_t (*) (t3721 *, t9 *, MethodInfo*))m23202_gshared)(__this, p0, method)
extern "C" bool m23203_gshared (t3721 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m23203(__this, p0, p1, method) (( bool (*) (t3721 *, t9 *, t9 *, MethodInfo*))m23203_gshared)(__this, p0, p1, method)
extern "C" t3721 * m23204_gshared (t9 * __this , MethodInfo* method);
#define m23204(__this , method) (( t3721 * (*) (t9 * , MethodInfo*))m23204_gshared)(__this , method)
