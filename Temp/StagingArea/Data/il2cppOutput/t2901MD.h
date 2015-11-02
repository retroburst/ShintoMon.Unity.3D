#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2901;
struct t9;

extern "C" void m14767_gshared (t2901 * __this, MethodInfo* method);
#define m14767(__this, method) (( void (*) (t2901 *, MethodInfo*))m14767_gshared)(__this, method)
extern "C" void m14768_gshared (t9 * __this , MethodInfo* method);
#define m14768(__this , method) (( void (*) (t9 * , MethodInfo*))m14768_gshared)(__this , method)
extern "C" int32_t m14769_gshared (t2901 * __this, t9 * p0, MethodInfo* method);
#define m14769(__this, p0, method) (( int32_t (*) (t2901 *, t9 *, MethodInfo*))m14769_gshared)(__this, p0, method)
extern "C" bool m14770_gshared (t2901 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14770(__this, p0, p1, method) (( bool (*) (t2901 *, t9 *, t9 *, MethodInfo*))m14770_gshared)(__this, p0, p1, method)
extern "C" t2901 * m14771_gshared (t9 * __this , MethodInfo* method);
#define m14771(__this , method) (( t2901 * (*) (t9 * , MethodInfo*))m14771_gshared)(__this , method)
