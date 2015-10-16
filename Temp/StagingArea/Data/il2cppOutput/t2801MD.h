#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2801;
struct t9;
struct t121;
#include "t2800.h"

extern "C" void m13883_gshared (t2801 * __this, t121 * p0, MethodInfo* method);
#define m13883(__this, p0, method) (( void (*) (t2801 *, t121 *, MethodInfo*))m13883_gshared)(__this, p0, method)
extern "C" t9 * m13884_gshared (t2801 * __this, MethodInfo* method);
#define m13884(__this, method) (( t9 * (*) (t2801 *, MethodInfo*))m13884_gshared)(__this, method)
extern "C" void m13885_gshared (t2801 * __this, MethodInfo* method);
#define m13885(__this, method) (( void (*) (t2801 *, MethodInfo*))m13885_gshared)(__this, method)
extern "C" bool m13886_gshared (t2801 * __this, MethodInfo* method);
#define m13886(__this, method) (( bool (*) (t2801 *, MethodInfo*))m13886_gshared)(__this, method)
extern "C" t2800  m13887_gshared (t2801 * __this, MethodInfo* method);
#define m13887(__this, method) (( t2800  (*) (t2801 *, MethodInfo*))m13887_gshared)(__this, method)
