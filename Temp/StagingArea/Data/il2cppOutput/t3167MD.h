#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3167;
struct t9;
struct t121;
#include "t3166.h"

extern "C" void m17529_gshared (t3167 * __this, t121 * p0, MethodInfo* method);
#define m17529(__this, p0, method) (( void (*) (t3167 *, t121 *, MethodInfo*))m17529_gshared)(__this, p0, method)
extern "C" t9 * m17530_gshared (t3167 * __this, MethodInfo* method);
#define m17530(__this, method) (( t9 * (*) (t3167 *, MethodInfo*))m17530_gshared)(__this, method)
extern "C" void m17531_gshared (t3167 * __this, MethodInfo* method);
#define m17531(__this, method) (( void (*) (t3167 *, MethodInfo*))m17531_gshared)(__this, method)
extern "C" bool m17532_gshared (t3167 * __this, MethodInfo* method);
#define m17532(__this, method) (( bool (*) (t3167 *, MethodInfo*))m17532_gshared)(__this, method)
extern "C" t3166  m17533_gshared (t3167 * __this, MethodInfo* method);
#define m17533(__this, method) (( t3166  (*) (t3167 *, MethodInfo*))m17533_gshared)(__this, method)
