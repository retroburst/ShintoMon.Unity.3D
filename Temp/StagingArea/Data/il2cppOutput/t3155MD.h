#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3155;
struct t9;
struct t121;
#include "t164.h"

extern "C" void m17398_gshared (t3155 * __this, t121 * p0, MethodInfo* method);
#define m17398(__this, p0, method) (( void (*) (t3155 *, t121 *, MethodInfo*))m17398_gshared)(__this, p0, method)
extern "C" t9 * m17399_gshared (t3155 * __this, MethodInfo* method);
#define m17399(__this, method) (( t9 * (*) (t3155 *, MethodInfo*))m17399_gshared)(__this, method)
extern "C" void m17400_gshared (t3155 * __this, MethodInfo* method);
#define m17400(__this, method) (( void (*) (t3155 *, MethodInfo*))m17400_gshared)(__this, method)
extern "C" bool m17401_gshared (t3155 * __this, MethodInfo* method);
#define m17401(__this, method) (( bool (*) (t3155 *, MethodInfo*))m17401_gshared)(__this, method)
extern "C" t164  m17402_gshared (t3155 * __this, MethodInfo* method);
#define m17402(__this, method) (( t164  (*) (t3155 *, MethodInfo*))m17402_gshared)(__this, method)
