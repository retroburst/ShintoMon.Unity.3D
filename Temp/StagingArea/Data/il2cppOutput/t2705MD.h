#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2705;
struct t9;
struct t121;
#include "t2697.h"

extern "C" void m12998_gshared (t2705 * __this, t121 * p0, MethodInfo* method);
#define m12998(__this, p0, method) (( void (*) (t2705 *, t121 *, MethodInfo*))m12998_gshared)(__this, p0, method)
extern "C" t9 * m12999_gshared (t2705 * __this, MethodInfo* method);
#define m12999(__this, method) (( t9 * (*) (t2705 *, MethodInfo*))m12999_gshared)(__this, method)
extern "C" void m13000_gshared (t2705 * __this, MethodInfo* method);
#define m13000(__this, method) (( void (*) (t2705 *, MethodInfo*))m13000_gshared)(__this, method)
extern "C" bool m13001_gshared (t2705 * __this, MethodInfo* method);
#define m13001(__this, method) (( bool (*) (t2705 *, MethodInfo*))m13001_gshared)(__this, method)
extern "C" t2697  m13002_gshared (t2705 * __this, MethodInfo* method);
#define m13002(__this, method) (( t2697  (*) (t2705 *, MethodInfo*))m13002_gshared)(__this, method)
