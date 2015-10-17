#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3817;
struct t9;
struct t121;
#include "t3816.h"

extern "C" void m24012_gshared (t3817 * __this, t121 * p0, MethodInfo* method);
#define m24012(__this, p0, method) (( void (*) (t3817 *, t121 *, MethodInfo*))m24012_gshared)(__this, p0, method)
extern "C" t9 * m24013_gshared (t3817 * __this, MethodInfo* method);
#define m24013(__this, method) (( t9 * (*) (t3817 *, MethodInfo*))m24013_gshared)(__this, method)
extern "C" void m24014_gshared (t3817 * __this, MethodInfo* method);
#define m24014(__this, method) (( void (*) (t3817 *, MethodInfo*))m24014_gshared)(__this, method)
extern "C" bool m24015_gshared (t3817 * __this, MethodInfo* method);
#define m24015(__this, method) (( bool (*) (t3817 *, MethodInfo*))m24015_gshared)(__this, method)
extern "C" t3816  m24016_gshared (t3817 * __this, MethodInfo* method);
#define m24016(__this, method) (( t3816  (*) (t3817 *, MethodInfo*))m24016_gshared)(__this, method)
