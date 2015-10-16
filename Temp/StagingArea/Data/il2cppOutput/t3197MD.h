#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3197;
struct t9;
struct t121;
#include "t452.h"

extern "C" void m18009_gshared (t3197 * __this, t121 * p0, MethodInfo* method);
#define m18009(__this, p0, method) (( void (*) (t3197 *, t121 *, MethodInfo*))m18009_gshared)(__this, p0, method)
extern "C" t9 * m18010_gshared (t3197 * __this, MethodInfo* method);
#define m18010(__this, method) (( t9 * (*) (t3197 *, MethodInfo*))m18010_gshared)(__this, method)
extern "C" void m18011_gshared (t3197 * __this, MethodInfo* method);
#define m18011(__this, method) (( void (*) (t3197 *, MethodInfo*))m18011_gshared)(__this, method)
extern "C" bool m18012_gshared (t3197 * __this, MethodInfo* method);
#define m18012(__this, method) (( bool (*) (t3197 *, MethodInfo*))m18012_gshared)(__this, method)
extern "C" t452  m18013_gshared (t3197 * __this, MethodInfo* method);
#define m18013(__this, method) (( t452  (*) (t3197 *, MethodInfo*))m18013_gshared)(__this, method)
