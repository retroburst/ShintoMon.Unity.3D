#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3241;
struct t9;
struct t121;
#include "t3240.h"

extern "C" void m18548_gshared (t3241 * __this, t121 * p0, MethodInfo* method);
#define m18548(__this, p0, method) (( void (*) (t3241 *, t121 *, MethodInfo*))m18548_gshared)(__this, p0, method)
extern "C" t9 * m18549_gshared (t3241 * __this, MethodInfo* method);
#define m18549(__this, method) (( t9 * (*) (t3241 *, MethodInfo*))m18549_gshared)(__this, method)
extern "C" void m18550_gshared (t3241 * __this, MethodInfo* method);
#define m18550(__this, method) (( void (*) (t3241 *, MethodInfo*))m18550_gshared)(__this, method)
extern "C" bool m18551_gshared (t3241 * __this, MethodInfo* method);
#define m18551(__this, method) (( bool (*) (t3241 *, MethodInfo*))m18551_gshared)(__this, method)
extern "C" t3240  m18552_gshared (t3241 * __this, MethodInfo* method);
#define m18552(__this, method) (( t3240  (*) (t3241 *, MethodInfo*))m18552_gshared)(__this, method)
