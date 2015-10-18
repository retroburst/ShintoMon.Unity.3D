#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2764;
struct t9;
struct t121;
#include "t141.h"

extern "C" void m13404_gshared (t2764 * __this, t121 * p0, MethodInfo* method);
#define m13404(__this, p0, method) (( void (*) (t2764 *, t121 *, MethodInfo*))m13404_gshared)(__this, p0, method)
extern "C" t9 * m13405_gshared (t2764 * __this, MethodInfo* method);
#define m13405(__this, method) (( t9 * (*) (t2764 *, MethodInfo*))m13405_gshared)(__this, method)
extern "C" void m13406_gshared (t2764 * __this, MethodInfo* method);
#define m13406(__this, method) (( void (*) (t2764 *, MethodInfo*))m13406_gshared)(__this, method)
extern "C" bool m13407_gshared (t2764 * __this, MethodInfo* method);
#define m13407(__this, method) (( bool (*) (t2764 *, MethodInfo*))m13407_gshared)(__this, method)
extern "C" t141  m13408_gshared (t2764 * __this, MethodInfo* method);
#define m13408(__this, method) (( t141  (*) (t2764 *, MethodInfo*))m13408_gshared)(__this, method)
