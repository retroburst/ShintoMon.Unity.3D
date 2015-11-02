#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3641;
struct t9;
struct t121;
#include "t3640.h"

extern "C" void m22385_gshared (t3641 * __this, t121 * p0, MethodInfo* method);
#define m22385(__this, p0, method) (( void (*) (t3641 *, t121 *, MethodInfo*))m22385_gshared)(__this, p0, method)
extern "C" t9 * m22386_gshared (t3641 * __this, MethodInfo* method);
#define m22386(__this, method) (( t9 * (*) (t3641 *, MethodInfo*))m22386_gshared)(__this, method)
extern "C" void m22387_gshared (t3641 * __this, MethodInfo* method);
#define m22387(__this, method) (( void (*) (t3641 *, MethodInfo*))m22387_gshared)(__this, method)
extern "C" bool m22388_gshared (t3641 * __this, MethodInfo* method);
#define m22388(__this, method) (( bool (*) (t3641 *, MethodInfo*))m22388_gshared)(__this, method)
extern "C" t3640  m22389_gshared (t3641 * __this, MethodInfo* method);
#define m22389(__this, method) (( t3640  (*) (t3641 *, MethodInfo*))m22389_gshared)(__this, method)
