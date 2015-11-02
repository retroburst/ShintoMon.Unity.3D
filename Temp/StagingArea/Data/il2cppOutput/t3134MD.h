#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3134;
struct t9;
struct t121;
#include "t573.h"

extern "C" void m17181_gshared (t3134 * __this, t121 * p0, MethodInfo* method);
#define m17181(__this, p0, method) (( void (*) (t3134 *, t121 *, MethodInfo*))m17181_gshared)(__this, p0, method)
extern "C" t9 * m17182_gshared (t3134 * __this, MethodInfo* method);
#define m17182(__this, method) (( t9 * (*) (t3134 *, MethodInfo*))m17182_gshared)(__this, method)
extern "C" void m17183_gshared (t3134 * __this, MethodInfo* method);
#define m17183(__this, method) (( void (*) (t3134 *, MethodInfo*))m17183_gshared)(__this, method)
extern "C" bool m17184_gshared (t3134 * __this, MethodInfo* method);
#define m17184(__this, method) (( bool (*) (t3134 *, MethodInfo*))m17184_gshared)(__this, method)
extern "C" t573  m17185_gshared (t3134 * __this, MethodInfo* method);
#define m17185(__this, method) (( t573  (*) (t3134 *, MethodInfo*))m17185_gshared)(__this, method)
