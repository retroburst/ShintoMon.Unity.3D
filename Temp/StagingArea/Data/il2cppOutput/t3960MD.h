#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3960;
struct t9;
#include "t310.h"

extern "C" void m24958_gshared (t3960 * __this, MethodInfo* method);
#define m24958(__this, method) (( void (*) (t3960 *, MethodInfo*))m24958_gshared)(__this, method)
extern "C" void m24959_gshared (t9 * __this , MethodInfo* method);
#define m24959(__this , method) (( void (*) (t9 * , MethodInfo*))m24959_gshared)(__this , method)
extern "C" int32_t m24960_gshared (t3960 * __this, t9 * p0, MethodInfo* method);
#define m24960(__this, p0, method) (( int32_t (*) (t3960 *, t9 *, MethodInfo*))m24960_gshared)(__this, p0, method)
extern "C" bool m24961_gshared (t3960 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24961(__this, p0, p1, method) (( bool (*) (t3960 *, t9 *, t9 *, MethodInfo*))m24961_gshared)(__this, p0, p1, method)
extern "C" t3960 * m24962_gshared (t9 * __this , MethodInfo* method);
#define m24962(__this , method) (( t3960 * (*) (t9 * , MethodInfo*))m24962_gshared)(__this , method)
