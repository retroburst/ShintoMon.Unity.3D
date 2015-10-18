#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3947;
struct t9;
#include "t917.h"

extern "C" void m24886_gshared (t3947 * __this, MethodInfo* method);
#define m24886(__this, method) (( void (*) (t3947 *, MethodInfo*))m24886_gshared)(__this, method)
extern "C" void m24887_gshared (t9 * __this , MethodInfo* method);
#define m24887(__this , method) (( void (*) (t9 * , MethodInfo*))m24887_gshared)(__this , method)
extern "C" int32_t m24888_gshared (t3947 * __this, t9 * p0, MethodInfo* method);
#define m24888(__this, p0, method) (( int32_t (*) (t3947 *, t9 *, MethodInfo*))m24888_gshared)(__this, p0, method)
extern "C" bool m24889_gshared (t3947 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24889(__this, p0, p1, method) (( bool (*) (t3947 *, t9 *, t9 *, MethodInfo*))m24889_gshared)(__this, p0, p1, method)
extern "C" t3947 * m24890_gshared (t9 * __this , MethodInfo* method);
#define m24890(__this , method) (( t3947 * (*) (t9 * , MethodInfo*))m24890_gshared)(__this , method)
