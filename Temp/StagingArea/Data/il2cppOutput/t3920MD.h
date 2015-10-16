#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3920;
struct t9;
#include "t911.h"

extern "C" void m24713_gshared (t3920 * __this, MethodInfo* method);
#define m24713(__this, method) (( void (*) (t3920 *, MethodInfo*))m24713_gshared)(__this, method)
extern "C" void m24714_gshared (t9 * __this , MethodInfo* method);
#define m24714(__this , method) (( void (*) (t9 * , MethodInfo*))m24714_gshared)(__this , method)
extern "C" int32_t m24715_gshared (t3920 * __this, t9 * p0, MethodInfo* method);
#define m24715(__this, p0, method) (( int32_t (*) (t3920 *, t9 *, MethodInfo*))m24715_gshared)(__this, p0, method)
extern "C" bool m24716_gshared (t3920 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24716(__this, p0, p1, method) (( bool (*) (t3920 *, t9 *, t9 *, MethodInfo*))m24716_gshared)(__this, p0, p1, method)
extern "C" t3920 * m24717_gshared (t9 * __this , MethodInfo* method);
#define m24717(__this , method) (( t3920 * (*) (t9 * , MethodInfo*))m24717_gshared)(__this , method)
