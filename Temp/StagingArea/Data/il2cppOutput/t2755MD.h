#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2755;
struct t9;
struct t121;
#include "t141.h"

extern "C" void m13375_gshared (t2755 * __this, t121 * p0, MethodInfo* method);
#define m13375(__this, p0, method) (( void (*) (t2755 *, t121 *, MethodInfo*))m13375_gshared)(__this, p0, method)
extern "C" t9 * m13376_gshared (t2755 * __this, MethodInfo* method);
#define m13376(__this, method) (( t9 * (*) (t2755 *, MethodInfo*))m13376_gshared)(__this, method)
extern "C" void m13377_gshared (t2755 * __this, MethodInfo* method);
#define m13377(__this, method) (( void (*) (t2755 *, MethodInfo*))m13377_gshared)(__this, method)
extern "C" bool m13378_gshared (t2755 * __this, MethodInfo* method);
#define m13378(__this, method) (( bool (*) (t2755 *, MethodInfo*))m13378_gshared)(__this, method)
extern "C" t141  m13379_gshared (t2755 * __this, MethodInfo* method);
#define m13379(__this, method) (( t141  (*) (t2755 *, MethodInfo*))m13379_gshared)(__this, method)
