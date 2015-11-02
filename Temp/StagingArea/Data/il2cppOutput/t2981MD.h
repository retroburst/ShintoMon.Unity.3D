#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2981;
struct t9;
struct t121;
#include "t2980.h"

extern "C" void m15590_gshared (t2981 * __this, t121 * p0, MethodInfo* method);
#define m15590(__this, p0, method) (( void (*) (t2981 *, t121 *, MethodInfo*))m15590_gshared)(__this, p0, method)
extern "C" t9 * m15591_gshared (t2981 * __this, MethodInfo* method);
#define m15591(__this, method) (( t9 * (*) (t2981 *, MethodInfo*))m15591_gshared)(__this, method)
extern "C" void m15592_gshared (t2981 * __this, MethodInfo* method);
#define m15592(__this, method) (( void (*) (t2981 *, MethodInfo*))m15592_gshared)(__this, method)
extern "C" bool m15593_gshared (t2981 * __this, MethodInfo* method);
#define m15593(__this, method) (( bool (*) (t2981 *, MethodInfo*))m15593_gshared)(__this, method)
extern "C" t2980  m15594_gshared (t2981 * __this, MethodInfo* method);
#define m15594(__this, method) (( t2980  (*) (t2981 *, MethodInfo*))m15594_gshared)(__this, method)
