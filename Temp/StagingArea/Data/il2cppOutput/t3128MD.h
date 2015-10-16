#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3128;
struct t9;
struct t121;
#include "t3127.h"

extern "C" void m17286_gshared (t3128 * __this, t121 * p0, MethodInfo* method);
#define m17286(__this, p0, method) (( void (*) (t3128 *, t121 *, MethodInfo*))m17286_gshared)(__this, p0, method)
extern "C" t9 * m17287_gshared (t3128 * __this, MethodInfo* method);
#define m17287(__this, method) (( t9 * (*) (t3128 *, MethodInfo*))m17287_gshared)(__this, method)
extern "C" void m17288_gshared (t3128 * __this, MethodInfo* method);
#define m17288(__this, method) (( void (*) (t3128 *, MethodInfo*))m17288_gshared)(__this, method)
extern "C" bool m17289_gshared (t3128 * __this, MethodInfo* method);
#define m17289(__this, method) (( bool (*) (t3128 *, MethodInfo*))m17289_gshared)(__this, method)
extern "C" t3127  m17290_gshared (t3128 * __this, MethodInfo* method);
#define m17290(__this, method) (( t3127  (*) (t3128 *, MethodInfo*))m17290_gshared)(__this, method)
