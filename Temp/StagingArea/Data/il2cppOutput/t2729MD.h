#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2729;
struct t9;
struct t121;
#include "t2728.h"

extern "C" void m13151_gshared (t2729 * __this, t121 * p0, MethodInfo* method);
#define m13151(__this, p0, method) (( void (*) (t2729 *, t121 *, MethodInfo*))m13151_gshared)(__this, p0, method)
extern "C" t9 * m13152_gshared (t2729 * __this, MethodInfo* method);
#define m13152(__this, method) (( t9 * (*) (t2729 *, MethodInfo*))m13152_gshared)(__this, method)
extern "C" void m13153_gshared (t2729 * __this, MethodInfo* method);
#define m13153(__this, method) (( void (*) (t2729 *, MethodInfo*))m13153_gshared)(__this, method)
extern "C" bool m13154_gshared (t2729 * __this, MethodInfo* method);
#define m13154(__this, method) (( bool (*) (t2729 *, MethodInfo*))m13154_gshared)(__this, method)
extern "C" t2728  m13155_gshared (t2729 * __this, MethodInfo* method);
#define m13155(__this, method) (( t2728  (*) (t2729 *, MethodInfo*))m13155_gshared)(__this, method)
