#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3786;
struct t9;
struct t121;
#include "t3785.h"

extern "C" void m23819_gshared (t3786 * __this, t121 * p0, MethodInfo* method);
#define m23819(__this, p0, method) (( void (*) (t3786 *, t121 *, MethodInfo*))m23819_gshared)(__this, p0, method)
extern "C" t9 * m23820_gshared (t3786 * __this, MethodInfo* method);
#define m23820(__this, method) (( t9 * (*) (t3786 *, MethodInfo*))m23820_gshared)(__this, method)
extern "C" void m23821_gshared (t3786 * __this, MethodInfo* method);
#define m23821(__this, method) (( void (*) (t3786 *, MethodInfo*))m23821_gshared)(__this, method)
extern "C" bool m23822_gshared (t3786 * __this, MethodInfo* method);
#define m23822(__this, method) (( bool (*) (t3786 *, MethodInfo*))m23822_gshared)(__this, method)
extern "C" t3785  m23823_gshared (t3786 * __this, MethodInfo* method);
#define m23823(__this, method) (( t3785  (*) (t3786 *, MethodInfo*))m23823_gshared)(__this, method)
