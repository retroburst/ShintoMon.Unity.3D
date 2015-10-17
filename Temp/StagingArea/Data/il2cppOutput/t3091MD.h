#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3091;
struct t9;
#include "t347.h"

extern "C" void m16712_gshared (t3091 * __this, MethodInfo* method);
#define m16712(__this, method) (( void (*) (t3091 *, MethodInfo*))m16712_gshared)(__this, method)
extern "C" void m16713_gshared (t9 * __this , MethodInfo* method);
#define m16713(__this , method) (( void (*) (t9 * , MethodInfo*))m16713_gshared)(__this , method)
extern "C" int32_t m16714_gshared (t3091 * __this, t9 * p0, MethodInfo* method);
#define m16714(__this, p0, method) (( int32_t (*) (t3091 *, t9 *, MethodInfo*))m16714_gshared)(__this, p0, method)
extern "C" bool m16715_gshared (t3091 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m16715(__this, p0, p1, method) (( bool (*) (t3091 *, t9 *, t9 *, MethodInfo*))m16715_gshared)(__this, p0, p1, method)
extern "C" t3091 * m16716_gshared (t9 * __this , MethodInfo* method);
#define m16716(__this , method) (( t3091 * (*) (t9 * , MethodInfo*))m16716_gshared)(__this , method)
