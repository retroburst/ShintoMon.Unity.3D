#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3530;
struct t9;

extern "C" void m21389_gshared (t3530 * __this, MethodInfo* method);
#define m21389(__this, method) (( void (*) (t3530 *, MethodInfo*))m21389_gshared)(__this, method)
extern "C" void m21390_gshared (t9 * __this , MethodInfo* method);
#define m21390(__this , method) (( void (*) (t9 * , MethodInfo*))m21390_gshared)(__this , method)
extern "C" int32_t m21391_gshared (t3530 * __this, t9 * p0, MethodInfo* method);
#define m21391(__this, p0, method) (( int32_t (*) (t3530 *, t9 *, MethodInfo*))m21391_gshared)(__this, p0, method)
extern "C" bool m21392_gshared (t3530 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21392(__this, p0, p1, method) (( bool (*) (t3530 *, t9 *, t9 *, MethodInfo*))m21392_gshared)(__this, p0, p1, method)
extern "C" t3530 * m21393_gshared (t9 * __this , MethodInfo* method);
#define m21393(__this , method) (( t3530 * (*) (t9 * , MethodInfo*))m21393_gshared)(__this , method)
