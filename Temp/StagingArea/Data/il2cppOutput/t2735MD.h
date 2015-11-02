#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2735;
struct t9;
struct t121;
#include "t2734.h"

extern "C" void m13190_gshared (t2735 * __this, t121 * p0, MethodInfo* method);
#define m13190(__this, p0, method) (( void (*) (t2735 *, t121 *, MethodInfo*))m13190_gshared)(__this, p0, method)
extern "C" t9 * m13191_gshared (t2735 * __this, MethodInfo* method);
#define m13191(__this, method) (( t9 * (*) (t2735 *, MethodInfo*))m13191_gshared)(__this, method)
extern "C" void m13192_gshared (t2735 * __this, MethodInfo* method);
#define m13192(__this, method) (( void (*) (t2735 *, MethodInfo*))m13192_gshared)(__this, method)
extern "C" bool m13193_gshared (t2735 * __this, MethodInfo* method);
#define m13193(__this, method) (( bool (*) (t2735 *, MethodInfo*))m13193_gshared)(__this, method)
extern "C" t2734  m13194_gshared (t2735 * __this, MethodInfo* method);
#define m13194(__this, method) (( t2734  (*) (t2735 *, MethodInfo*))m13194_gshared)(__this, method)
