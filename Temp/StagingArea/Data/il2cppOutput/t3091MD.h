#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3091;
struct t9;
struct t121;
#include "t354.h"

extern "C" void m16670_gshared (t3091 * __this, t121 * p0, MethodInfo* method);
#define m16670(__this, p0, method) (( void (*) (t3091 *, t121 *, MethodInfo*))m16670_gshared)(__this, p0, method)
extern "C" t9 * m16671_gshared (t3091 * __this, MethodInfo* method);
#define m16671(__this, method) (( t9 * (*) (t3091 *, MethodInfo*))m16671_gshared)(__this, method)
extern "C" void m16672_gshared (t3091 * __this, MethodInfo* method);
#define m16672(__this, method) (( void (*) (t3091 *, MethodInfo*))m16672_gshared)(__this, method)
extern "C" bool m16673_gshared (t3091 * __this, MethodInfo* method);
#define m16673(__this, method) (( bool (*) (t3091 *, MethodInfo*))m16673_gshared)(__this, method)
extern "C" t354  m16674_gshared (t3091 * __this, MethodInfo* method);
#define m16674(__this, method) (( t354  (*) (t3091 *, MethodInfo*))m16674_gshared)(__this, method)
