#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2816;
struct t9;
struct t121;
#include "t2815.h"

extern "C" void m13951_gshared (t2816 * __this, t121 * p0, MethodInfo* method);
#define m13951(__this, p0, method) (( void (*) (t2816 *, t121 *, MethodInfo*))m13951_gshared)(__this, p0, method)
extern "C" t9 * m13952_gshared (t2816 * __this, MethodInfo* method);
#define m13952(__this, method) (( t9 * (*) (t2816 *, MethodInfo*))m13952_gshared)(__this, method)
extern "C" void m13953_gshared (t2816 * __this, MethodInfo* method);
#define m13953(__this, method) (( void (*) (t2816 *, MethodInfo*))m13953_gshared)(__this, method)
extern "C" bool m13954_gshared (t2816 * __this, MethodInfo* method);
#define m13954(__this, method) (( bool (*) (t2816 *, MethodInfo*))m13954_gshared)(__this, method)
extern "C" t2815  m13955_gshared (t2816 * __this, MethodInfo* method);
#define m13955(__this, method) (( t2815  (*) (t2816 *, MethodInfo*))m13955_gshared)(__this, method)
