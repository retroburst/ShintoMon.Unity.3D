#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2806;
struct t9;

extern "C" void m13894_gshared (t2806 * __this, MethodInfo* method);
#define m13894(__this, method) (( void (*) (t2806 *, MethodInfo*))m13894_gshared)(__this, method)
extern "C" void m13895_gshared (t9 * __this , MethodInfo* method);
#define m13895(__this , method) (( void (*) (t9 * , MethodInfo*))m13895_gshared)(__this , method)
extern "C" int32_t m13896_gshared (t2806 * __this, t9 * p0, MethodInfo* method);
#define m13896(__this, p0, method) (( int32_t (*) (t2806 *, t9 *, MethodInfo*))m13896_gshared)(__this, p0, method)
extern "C" bool m13897_gshared (t2806 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13897(__this, p0, p1, method) (( bool (*) (t2806 *, t9 *, t9 *, MethodInfo*))m13897_gshared)(__this, p0, p1, method)
extern "C" t2806 * m13898_gshared (t9 * __this , MethodInfo* method);
#define m13898(__this , method) (( t2806 * (*) (t9 * , MethodInfo*))m13898_gshared)(__this , method)
