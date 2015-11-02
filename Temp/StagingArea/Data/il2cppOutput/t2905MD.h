#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2905;
struct t9;
struct t121;
#include "t2893.h"

extern "C" void m14782_gshared (t2905 * __this, t121 * p0, MethodInfo* method);
#define m14782(__this, p0, method) (( void (*) (t2905 *, t121 *, MethodInfo*))m14782_gshared)(__this, p0, method)
extern "C" t9 * m14783_gshared (t2905 * __this, MethodInfo* method);
#define m14783(__this, method) (( t9 * (*) (t2905 *, MethodInfo*))m14783_gshared)(__this, method)
extern "C" void m14784_gshared (t2905 * __this, MethodInfo* method);
#define m14784(__this, method) (( void (*) (t2905 *, MethodInfo*))m14784_gshared)(__this, method)
extern "C" bool m14785_gshared (t2905 * __this, MethodInfo* method);
#define m14785(__this, method) (( bool (*) (t2905 *, MethodInfo*))m14785_gshared)(__this, method)
extern "C" t2893  m14786_gshared (t2905 * __this, MethodInfo* method);
#define m14786(__this, method) (( t2893  (*) (t2905 *, MethodInfo*))m14786_gshared)(__this, method)
