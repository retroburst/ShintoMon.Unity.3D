#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3941;
struct t9;
#include "t270.h"

extern "C" void m24861_gshared (t3941 * __this, MethodInfo* method);
#define m24861(__this, method) (( void (*) (t3941 *, MethodInfo*))m24861_gshared)(__this, method)
extern "C" void m24862_gshared (t9 * __this , MethodInfo* method);
#define m24862(__this , method) (( void (*) (t9 * , MethodInfo*))m24862_gshared)(__this , method)
extern "C" int32_t m24863_gshared (t3941 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24863(__this, p0, p1, method) (( int32_t (*) (t3941 *, t9 *, t9 *, MethodInfo*))m24863_gshared)(__this, p0, p1, method)
extern "C" t3941 * m24864_gshared (t9 * __this , MethodInfo* method);
#define m24864(__this , method) (( t3941 * (*) (t9 * , MethodInfo*))m24864_gshared)(__this , method)
