#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3855;
struct t9;

extern "C" void m24355_gshared (t3855 * __this, MethodInfo* method);
#define m24355(__this, method) (( void (*) (t3855 *, MethodInfo*))m24355_gshared)(__this, method)
extern "C" void m24356_gshared (t9 * __this , MethodInfo* method);
#define m24356(__this , method) (( void (*) (t9 * , MethodInfo*))m24356_gshared)(__this , method)
extern "C" int32_t m24357_gshared (t3855 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24357(__this, p0, p1, method) (( int32_t (*) (t3855 *, t9 *, t9 *, MethodInfo*))m24357_gshared)(__this, p0, p1, method)
extern "C" t3855 * m24358_gshared (t9 * __this , MethodInfo* method);
#define m24358(__this , method) (( t3855 * (*) (t9 * , MethodInfo*))m24358_gshared)(__this , method)
