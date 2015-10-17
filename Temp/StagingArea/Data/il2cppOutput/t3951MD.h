#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3951;
struct t9;
#include "t918.h"

extern "C" void m24906_gshared (t3951 * __this, MethodInfo* method);
#define m24906(__this, method) (( void (*) (t3951 *, MethodInfo*))m24906_gshared)(__this, method)
extern "C" void m24907_gshared (t9 * __this , MethodInfo* method);
#define m24907(__this , method) (( void (*) (t9 * , MethodInfo*))m24907_gshared)(__this , method)
extern "C" int32_t m24908_gshared (t3951 * __this, t9 * p0, MethodInfo* method);
#define m24908(__this, p0, method) (( int32_t (*) (t3951 *, t9 *, MethodInfo*))m24908_gshared)(__this, p0, method)
extern "C" bool m24909_gshared (t3951 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24909(__this, p0, p1, method) (( bool (*) (t3951 *, t9 *, t9 *, MethodInfo*))m24909_gshared)(__this, p0, p1, method)
extern "C" t3951 * m24910_gshared (t9 * __this , MethodInfo* method);
#define m24910(__this , method) (( t3951 * (*) (t9 * , MethodInfo*))m24910_gshared)(__this , method)
