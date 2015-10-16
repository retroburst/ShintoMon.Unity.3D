#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3120;
struct t9;
struct t121;
#include "t561.h"

extern "C" void m17182_gshared (t3120 * __this, t121 * p0, MethodInfo* method);
#define m17182(__this, p0, method) (( void (*) (t3120 *, t121 *, MethodInfo*))m17182_gshared)(__this, p0, method)
extern "C" t9 * m17183_gshared (t3120 * __this, MethodInfo* method);
#define m17183(__this, method) (( t9 * (*) (t3120 *, MethodInfo*))m17183_gshared)(__this, method)
extern "C" void m17184_gshared (t3120 * __this, MethodInfo* method);
#define m17184(__this, method) (( void (*) (t3120 *, MethodInfo*))m17184_gshared)(__this, method)
extern "C" bool m17185_gshared (t3120 * __this, MethodInfo* method);
#define m17185(__this, method) (( bool (*) (t3120 *, MethodInfo*))m17185_gshared)(__this, method)
extern "C" t561  m17186_gshared (t3120 * __this, MethodInfo* method);
#define m17186(__this, method) (( t561  (*) (t3120 *, MethodInfo*))m17186_gshared)(__this, method)
