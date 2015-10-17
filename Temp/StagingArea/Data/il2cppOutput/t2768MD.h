#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2768;
struct t9;

extern "C" void m13556_gshared (t2768 * __this, MethodInfo* method);
#define m13556(__this, method) (( void (*) (t2768 *, MethodInfo*))m13556_gshared)(__this, method)
extern "C" void m13557_gshared (t9 * __this , MethodInfo* method);
#define m13557(__this , method) (( void (*) (t9 * , MethodInfo*))m13557_gshared)(__this , method)
extern "C" int32_t m13558_gshared (t2768 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13558(__this, p0, p1, method) (( int32_t (*) (t2768 *, t9 *, t9 *, MethodInfo*))m13558_gshared)(__this, p0, p1, method)
extern "C" t2768 * m13559_gshared (t9 * __this , MethodInfo* method);
#define m13559(__this , method) (( t2768 * (*) (t9 * , MethodInfo*))m13559_gshared)(__this , method)
