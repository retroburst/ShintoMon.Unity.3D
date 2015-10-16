#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2908;
struct t9;

extern "C" void m14901_gshared (t2908 * __this, MethodInfo* method);
#define m14901(__this, method) (( void (*) (t2908 *, MethodInfo*))m14901_gshared)(__this, method)
extern "C" void m14902_gshared (t9 * __this , MethodInfo* method);
#define m14902(__this , method) (( void (*) (t9 * , MethodInfo*))m14902_gshared)(__this , method)
extern "C" int32_t m14903_gshared (t2908 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14903(__this, p0, p1, method) (( int32_t (*) (t2908 *, t9 *, t9 *, MethodInfo*))m14903_gshared)(__this, p0, p1, method)
extern "C" t2908 * m14904_gshared (t9 * __this , MethodInfo* method);
#define m14904(__this , method) (( t2908 * (*) (t9 * , MethodInfo*))m14904_gshared)(__this , method)
