#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3685;
struct t9;
#include "t909.h"

extern "C" void m22972_gshared (t3685 * __this, MethodInfo* method);
#define m22972(__this, method) (( void (*) (t3685 *, MethodInfo*))m22972_gshared)(__this, method)
extern "C" void m22973_gshared (t9 * __this , MethodInfo* method);
#define m22973(__this , method) (( void (*) (t9 * , MethodInfo*))m22973_gshared)(__this , method)
extern "C" int32_t m22974_gshared (t3685 * __this, t9 * p0, MethodInfo* method);
#define m22974(__this, p0, method) (( int32_t (*) (t3685 *, t9 *, MethodInfo*))m22974_gshared)(__this, p0, method)
extern "C" bool m22975_gshared (t3685 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22975(__this, p0, p1, method) (( bool (*) (t3685 *, t9 *, t9 *, MethodInfo*))m22975_gshared)(__this, p0, p1, method)
extern "C" t3685 * m22976_gshared (t9 * __this , MethodInfo* method);
#define m22976(__this , method) (( t3685 * (*) (t9 * , MethodInfo*))m22976_gshared)(__this , method)
