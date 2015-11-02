#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3448;
struct t9;
struct t121;
#include "t3447.h"

extern "C" void m20398_gshared (t3448 * __this, t121 * p0, MethodInfo* method);
#define m20398(__this, p0, method) (( void (*) (t3448 *, t121 *, MethodInfo*))m20398_gshared)(__this, p0, method)
extern "C" t9 * m20399_gshared (t3448 * __this, MethodInfo* method);
#define m20399(__this, method) (( t9 * (*) (t3448 *, MethodInfo*))m20399_gshared)(__this, method)
extern "C" void m20400_gshared (t3448 * __this, MethodInfo* method);
#define m20400(__this, method) (( void (*) (t3448 *, MethodInfo*))m20400_gshared)(__this, method)
extern "C" bool m20401_gshared (t3448 * __this, MethodInfo* method);
#define m20401(__this, method) (( bool (*) (t3448 *, MethodInfo*))m20401_gshared)(__this, method)
extern "C" t3447  m20402_gshared (t3448 * __this, MethodInfo* method);
#define m20402(__this, method) (( t3447  (*) (t3448 *, MethodInfo*))m20402_gshared)(__this, method)
