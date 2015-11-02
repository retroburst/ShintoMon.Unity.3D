#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3758;
struct t9;
struct t121;
#include "t940.h"

extern "C" void m23509_gshared (t3758 * __this, t121 * p0, MethodInfo* method);
#define m23509(__this, p0, method) (( void (*) (t3758 *, t121 *, MethodInfo*))m23509_gshared)(__this, p0, method)
extern "C" t9 * m23510_gshared (t3758 * __this, MethodInfo* method);
#define m23510(__this, method) (( t9 * (*) (t3758 *, MethodInfo*))m23510_gshared)(__this, method)
extern "C" void m23511_gshared (t3758 * __this, MethodInfo* method);
#define m23511(__this, method) (( void (*) (t3758 *, MethodInfo*))m23511_gshared)(__this, method)
extern "C" bool m23512_gshared (t3758 * __this, MethodInfo* method);
#define m23512(__this, method) (( bool (*) (t3758 *, MethodInfo*))m23512_gshared)(__this, method)
extern "C" t940  m23513_gshared (t3758 * __this, MethodInfo* method);
#define m23513(__this, method) (( t940  (*) (t3758 *, MethodInfo*))m23513_gshared)(__this, method)
