#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3086;
struct t9;
struct t121;
#include "t347.h"

extern "C" void m16635_gshared (t3086 * __this, t121 * p0, MethodInfo* method);
#define m16635(__this, p0, method) (( void (*) (t3086 *, t121 *, MethodInfo*))m16635_gshared)(__this, p0, method)
extern "C" t9 * m16636_gshared (t3086 * __this, MethodInfo* method);
#define m16636(__this, method) (( t9 * (*) (t3086 *, MethodInfo*))m16636_gshared)(__this, method)
extern "C" void m16637_gshared (t3086 * __this, MethodInfo* method);
#define m16637(__this, method) (( void (*) (t3086 *, MethodInfo*))m16637_gshared)(__this, method)
extern "C" bool m16638_gshared (t3086 * __this, MethodInfo* method);
#define m16638(__this, method) (( bool (*) (t3086 *, MethodInfo*))m16638_gshared)(__this, method)
extern "C" t347  m16639_gshared (t3086 * __this, MethodInfo* method);
#define m16639(__this, method) (( t347  (*) (t3086 *, MethodInfo*))m16639_gshared)(__this, method)
