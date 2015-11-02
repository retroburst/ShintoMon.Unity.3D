#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3020;
struct t9;
struct t121;
#include "t3019.h"

extern "C" void m15860_gshared (t3020 * __this, t121 * p0, MethodInfo* method);
#define m15860(__this, p0, method) (( void (*) (t3020 *, t121 *, MethodInfo*))m15860_gshared)(__this, p0, method)
extern "C" t9 * m15861_gshared (t3020 * __this, MethodInfo* method);
#define m15861(__this, method) (( t9 * (*) (t3020 *, MethodInfo*))m15861_gshared)(__this, method)
extern "C" void m15862_gshared (t3020 * __this, MethodInfo* method);
#define m15862(__this, method) (( void (*) (t3020 *, MethodInfo*))m15862_gshared)(__this, method)
extern "C" bool m15863_gshared (t3020 * __this, MethodInfo* method);
#define m15863(__this, method) (( bool (*) (t3020 *, MethodInfo*))m15863_gshared)(__this, method)
extern "C" t3019  m15864_gshared (t3020 * __this, MethodInfo* method);
#define m15864(__this, method) (( t3019  (*) (t3020 *, MethodInfo*))m15864_gshared)(__this, method)
