#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3585;
struct t9;
struct t121;
#include "t3584.h"

extern "C" void m21936_gshared (t3585 * __this, t121 * p0, MethodInfo* method);
#define m21936(__this, p0, method) (( void (*) (t3585 *, t121 *, MethodInfo*))m21936_gshared)(__this, p0, method)
extern "C" t9 * m21937_gshared (t3585 * __this, MethodInfo* method);
#define m21937(__this, method) (( t9 * (*) (t3585 *, MethodInfo*))m21937_gshared)(__this, method)
extern "C" void m21938_gshared (t3585 * __this, MethodInfo* method);
#define m21938(__this, method) (( void (*) (t3585 *, MethodInfo*))m21938_gshared)(__this, method)
extern "C" bool m21939_gshared (t3585 * __this, MethodInfo* method);
#define m21939(__this, method) (( bool (*) (t3585 *, MethodInfo*))m21939_gshared)(__this, method)
extern "C" t3584  m21940_gshared (t3585 * __this, MethodInfo* method);
#define m21940(__this, method) (( t3584  (*) (t3585 *, MethodInfo*))m21940_gshared)(__this, method)
