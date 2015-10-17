#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2175;
struct t9;

extern "C" void m13106_gshared (t2175 * __this, MethodInfo* method);
#define m13106(__this, method) (( void (*) (t2175 *, MethodInfo*))m13106_gshared)(__this, method)
extern "C" void m13107_gshared (t9 * __this , MethodInfo* method);
#define m13107(__this , method) (( void (*) (t9 * , MethodInfo*))m13107_gshared)(__this , method)
extern "C" int32_t m13108_gshared (t2175 * __this, t9 * p0, MethodInfo* method);
#define m13108(__this, p0, method) (( int32_t (*) (t2175 *, t9 *, MethodInfo*))m13108_gshared)(__this, p0, method)
extern "C" bool m13109_gshared (t2175 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13109(__this, p0, p1, method) (( bool (*) (t2175 *, t9 *, t9 *, MethodInfo*))m13109_gshared)(__this, p0, p1, method)
extern "C" t2175 * m13110_gshared (t9 * __this , MethodInfo* method);
#define m13110(__this , method) (( t2175 * (*) (t9 * , MethodInfo*))m13110_gshared)(__this , method)
