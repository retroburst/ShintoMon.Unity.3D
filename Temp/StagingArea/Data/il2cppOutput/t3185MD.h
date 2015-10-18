#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3185;
struct t9;
struct t121;
#include "t3184.h"

extern "C" void m17775_gshared (t3185 * __this, t121 * p0, MethodInfo* method);
#define m17775(__this, p0, method) (( void (*) (t3185 *, t121 *, MethodInfo*))m17775_gshared)(__this, p0, method)
extern "C" t9 * m17776_gshared (t3185 * __this, MethodInfo* method);
#define m17776(__this, method) (( t9 * (*) (t3185 *, MethodInfo*))m17776_gshared)(__this, method)
extern "C" void m17777_gshared (t3185 * __this, MethodInfo* method);
#define m17777(__this, method) (( void (*) (t3185 *, MethodInfo*))m17777_gshared)(__this, method)
extern "C" bool m17778_gshared (t3185 * __this, MethodInfo* method);
#define m17778(__this, method) (( bool (*) (t3185 *, MethodInfo*))m17778_gshared)(__this, method)
extern "C" t3184  m17779_gshared (t3185 * __this, MethodInfo* method);
#define m17779(__this, method) (( t3184  (*) (t3185 *, MethodInfo*))m17779_gshared)(__this, method)
