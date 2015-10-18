#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3302;
struct t9;
struct t121;
#include "t593.h"

extern "C" void m18942_gshared (t3302 * __this, t121 * p0, MethodInfo* method);
#define m18942(__this, p0, method) (( void (*) (t3302 *, t121 *, MethodInfo*))m18942_gshared)(__this, p0, method)
extern "C" t9 * m18943_gshared (t3302 * __this, MethodInfo* method);
#define m18943(__this, method) (( t9 * (*) (t3302 *, MethodInfo*))m18943_gshared)(__this, method)
extern "C" void m18944_gshared (t3302 * __this, MethodInfo* method);
#define m18944(__this, method) (( void (*) (t3302 *, MethodInfo*))m18944_gshared)(__this, method)
extern "C" bool m18945_gshared (t3302 * __this, MethodInfo* method);
#define m18945(__this, method) (( bool (*) (t3302 *, MethodInfo*))m18945_gshared)(__this, method)
extern "C" t593  m18946_gshared (t3302 * __this, MethodInfo* method);
#define m18946(__this, method) (( t593  (*) (t3302 *, MethodInfo*))m18946_gshared)(__this, method)
