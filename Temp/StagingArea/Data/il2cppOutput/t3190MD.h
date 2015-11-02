#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3190;
struct t9;
struct t121;
#include "t3189.h"

extern "C" void m17809_gshared (t3190 * __this, t121 * p0, MethodInfo* method);
#define m17809(__this, p0, method) (( void (*) (t3190 *, t121 *, MethodInfo*))m17809_gshared)(__this, p0, method)
extern "C" t9 * m17810_gshared (t3190 * __this, MethodInfo* method);
#define m17810(__this, method) (( t9 * (*) (t3190 *, MethodInfo*))m17810_gshared)(__this, method)
extern "C" void m17811_gshared (t3190 * __this, MethodInfo* method);
#define m17811(__this, method) (( void (*) (t3190 *, MethodInfo*))m17811_gshared)(__this, method)
extern "C" bool m17812_gshared (t3190 * __this, MethodInfo* method);
#define m17812(__this, method) (( bool (*) (t3190 *, MethodInfo*))m17812_gshared)(__this, method)
extern "C" t3189  m17813_gshared (t3190 * __this, MethodInfo* method);
#define m17813(__this, method) (( t3189  (*) (t3190 *, MethodInfo*))m17813_gshared)(__this, method)
