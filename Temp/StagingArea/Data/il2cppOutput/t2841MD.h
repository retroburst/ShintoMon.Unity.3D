#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2841;
struct t9;
struct t121;
#include "t166.h"

extern "C" void m14161_gshared (t2841 * __this, t121 * p0, MethodInfo* method);
#define m14161(__this, p0, method) (( void (*) (t2841 *, t121 *, MethodInfo*))m14161_gshared)(__this, p0, method)
extern "C" t9 * m14162_gshared (t2841 * __this, MethodInfo* method);
#define m14162(__this, method) (( t9 * (*) (t2841 *, MethodInfo*))m14162_gshared)(__this, method)
extern "C" void m14163_gshared (t2841 * __this, MethodInfo* method);
#define m14163(__this, method) (( void (*) (t2841 *, MethodInfo*))m14163_gshared)(__this, method)
extern "C" bool m14164_gshared (t2841 * __this, MethodInfo* method);
#define m14164(__this, method) (( bool (*) (t2841 *, MethodInfo*))m14164_gshared)(__this, method)
extern "C" t166  m14165_gshared (t2841 * __this, MethodInfo* method);
#define m14165(__this, method) (( t166  (*) (t2841 *, MethodInfo*))m14165_gshared)(__this, method)
