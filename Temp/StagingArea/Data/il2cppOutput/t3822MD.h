#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3822;
struct t9;
struct t121;
#include "t3821.h"

extern "C" void m24047_gshared (t3822 * __this, t121 * p0, MethodInfo* method);
#define m24047(__this, p0, method) (( void (*) (t3822 *, t121 *, MethodInfo*))m24047_gshared)(__this, p0, method)
extern "C" t9 * m24048_gshared (t3822 * __this, MethodInfo* method);
#define m24048(__this, method) (( t9 * (*) (t3822 *, MethodInfo*))m24048_gshared)(__this, method)
extern "C" void m24049_gshared (t3822 * __this, MethodInfo* method);
#define m24049(__this, method) (( void (*) (t3822 *, MethodInfo*))m24049_gshared)(__this, method)
extern "C" bool m24050_gshared (t3822 * __this, MethodInfo* method);
#define m24050(__this, method) (( bool (*) (t3822 *, MethodInfo*))m24050_gshared)(__this, method)
extern "C" t3821  m24051_gshared (t3822 * __this, MethodInfo* method);
#define m24051(__this, method) (( t3821  (*) (t3822 *, MethodInfo*))m24051_gshared)(__this, method)
