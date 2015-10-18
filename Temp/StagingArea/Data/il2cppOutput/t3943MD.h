#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3943;
struct t9;
#include "t270.h"

extern "C" void m24869_gshared (t3943 * __this, MethodInfo* method);
#define m24869(__this, method) (( void (*) (t3943 *, MethodInfo*))m24869_gshared)(__this, method)
extern "C" void m24870_gshared (t9 * __this , MethodInfo* method);
#define m24870(__this , method) (( void (*) (t9 * , MethodInfo*))m24870_gshared)(__this , method)
extern "C" int32_t m24871_gshared (t3943 * __this, t9 * p0, MethodInfo* method);
#define m24871(__this, p0, method) (( int32_t (*) (t3943 *, t9 *, MethodInfo*))m24871_gshared)(__this, p0, method)
extern "C" bool m24872_gshared (t3943 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24872(__this, p0, p1, method) (( bool (*) (t3943 *, t9 *, t9 *, MethodInfo*))m24872_gshared)(__this, p0, p1, method)
extern "C" t3943 * m24873_gshared (t9 * __this , MethodInfo* method);
#define m24873(__this , method) (( t3943 * (*) (t9 * , MethodInfo*))m24873_gshared)(__this , method)
