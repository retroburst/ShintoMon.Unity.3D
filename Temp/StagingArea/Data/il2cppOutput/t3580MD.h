#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3580;
struct t9;
struct t121;
#include "t3579.h"

extern "C" void m21902_gshared (t3580 * __this, t121 * p0, MethodInfo* method);
#define m21902(__this, p0, method) (( void (*) (t3580 *, t121 *, MethodInfo*))m21902_gshared)(__this, p0, method)
extern "C" t9 * m21903_gshared (t3580 * __this, MethodInfo* method);
#define m21903(__this, method) (( t9 * (*) (t3580 *, MethodInfo*))m21903_gshared)(__this, method)
extern "C" void m21904_gshared (t3580 * __this, MethodInfo* method);
#define m21904(__this, method) (( void (*) (t3580 *, MethodInfo*))m21904_gshared)(__this, method)
extern "C" bool m21905_gshared (t3580 * __this, MethodInfo* method);
#define m21905(__this, method) (( bool (*) (t3580 *, MethodInfo*))m21905_gshared)(__this, method)
extern "C" t3579  m21906_gshared (t3580 * __this, MethodInfo* method);
#define m21906(__this, method) (( t3579  (*) (t3580 *, MethodInfo*))m21906_gshared)(__this, method)
