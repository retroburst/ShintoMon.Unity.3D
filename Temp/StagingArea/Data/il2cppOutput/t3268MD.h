#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3268;
struct t9;
struct t121;
#include "t586.h"

extern "C" void m18733_gshared (t3268 * __this, t121 * p0, MethodInfo* method);
#define m18733(__this, p0, method) (( void (*) (t3268 *, t121 *, MethodInfo*))m18733_gshared)(__this, p0, method)
extern "C" t9 * m18734_gshared (t3268 * __this, MethodInfo* method);
#define m18734(__this, method) (( t9 * (*) (t3268 *, MethodInfo*))m18734_gshared)(__this, method)
extern "C" void m18735_gshared (t3268 * __this, MethodInfo* method);
#define m18735(__this, method) (( void (*) (t3268 *, MethodInfo*))m18735_gshared)(__this, method)
extern "C" bool m18736_gshared (t3268 * __this, MethodInfo* method);
#define m18736(__this, method) (( bool (*) (t3268 *, MethodInfo*))m18736_gshared)(__this, method)
extern "C" t586  m18737_gshared (t3268 * __this, MethodInfo* method);
#define m18737(__this, method) (( t586  (*) (t3268 *, MethodInfo*))m18737_gshared)(__this, method)
