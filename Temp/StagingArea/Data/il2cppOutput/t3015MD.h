#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3015;
struct t9;
struct t121;
#include "t3014.h"

extern "C" void m15825_gshared (t3015 * __this, t121 * p0, MethodInfo* method);
#define m15825(__this, p0, method) (( void (*) (t3015 *, t121 *, MethodInfo*))m15825_gshared)(__this, p0, method)
extern "C" t9 * m15826_gshared (t3015 * __this, MethodInfo* method);
#define m15826(__this, method) (( t9 * (*) (t3015 *, MethodInfo*))m15826_gshared)(__this, method)
extern "C" void m15827_gshared (t3015 * __this, MethodInfo* method);
#define m15827(__this, method) (( void (*) (t3015 *, MethodInfo*))m15827_gshared)(__this, method)
extern "C" bool m15828_gshared (t3015 * __this, MethodInfo* method);
#define m15828(__this, method) (( bool (*) (t3015 *, MethodInfo*))m15828_gshared)(__this, method)
extern "C" t3014  m15829_gshared (t3015 * __this, MethodInfo* method);
#define m15829(__this, method) (( t3014  (*) (t3015 *, MethodInfo*))m15829_gshared)(__this, method)
