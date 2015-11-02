#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3952;
struct t9;
#include "t923.h"

extern "C" void m24920_gshared (t3952 * __this, MethodInfo* method);
#define m24920(__this, method) (( void (*) (t3952 *, MethodInfo*))m24920_gshared)(__this, method)
extern "C" void m24921_gshared (t9 * __this , MethodInfo* method);
#define m24921(__this , method) (( void (*) (t9 * , MethodInfo*))m24921_gshared)(__this , method)
extern "C" int32_t m24922_gshared (t3952 * __this, t9 * p0, MethodInfo* method);
#define m24922(__this, p0, method) (( int32_t (*) (t3952 *, t9 *, MethodInfo*))m24922_gshared)(__this, p0, method)
extern "C" bool m24923_gshared (t3952 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24923(__this, p0, p1, method) (( bool (*) (t3952 *, t9 *, t9 *, MethodInfo*))m24923_gshared)(__this, p0, p1, method)
extern "C" t3952 * m24924_gshared (t9 * __this , MethodInfo* method);
#define m24924(__this , method) (( t3952 * (*) (t9 * , MethodInfo*))m24924_gshared)(__this , method)
