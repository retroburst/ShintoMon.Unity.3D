#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2976;
struct t9;

extern "C" void m15595_gshared (t2976 * __this, MethodInfo* method);
#define m15595(__this, method) (( void (*) (t2976 *, MethodInfo*))m15595_gshared)(__this, method)
extern "C" void m15596_gshared (t9 * __this , MethodInfo* method);
#define m15596(__this , method) (( void (*) (t9 * , MethodInfo*))m15596_gshared)(__this , method)
extern "C" int32_t m15597_gshared (t2976 * __this, t9 * p0, MethodInfo* method);
#define m15597(__this, p0, method) (( int32_t (*) (t2976 *, t9 *, MethodInfo*))m15597_gshared)(__this, p0, method)
extern "C" bool m15598_gshared (t2976 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m15598(__this, p0, p1, method) (( bool (*) (t2976 *, t9 *, t9 *, MethodInfo*))m15598_gshared)(__this, p0, p1, method)
extern "C" t2976 * m15599_gshared (t9 * __this , MethodInfo* method);
#define m15599(__this , method) (( t2976 * (*) (t9 * , MethodInfo*))m15599_gshared)(__this , method)
