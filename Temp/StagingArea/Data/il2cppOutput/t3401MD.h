#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3401;
struct t9;
struct t121;
#include "t3400.h"

extern "C" void m19924_gshared (t3401 * __this, t121 * p0, MethodInfo* method);
#define m19924(__this, p0, method) (( void (*) (t3401 *, t121 *, MethodInfo*))m19924_gshared)(__this, p0, method)
extern "C" t9 * m19925_gshared (t3401 * __this, MethodInfo* method);
#define m19925(__this, method) (( t9 * (*) (t3401 *, MethodInfo*))m19925_gshared)(__this, method)
extern "C" void m19926_gshared (t3401 * __this, MethodInfo* method);
#define m19926(__this, method) (( void (*) (t3401 *, MethodInfo*))m19926_gshared)(__this, method)
extern "C" bool m19927_gshared (t3401 * __this, MethodInfo* method);
#define m19927(__this, method) (( bool (*) (t3401 *, MethodInfo*))m19927_gshared)(__this, method)
extern "C" t3400  m19928_gshared (t3401 * __this, MethodInfo* method);
#define m19928(__this, method) (( t3400  (*) (t3401 *, MethodInfo*))m19928_gshared)(__this, method)
