#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3712;
struct t9;
struct t3705;
#include "t916.h"

extern "C" void m23143_gshared (t3712 * __this, t3705 * p0, MethodInfo* method);
#define m23143(__this, p0, method) (( void (*) (t3712 *, t3705 *, MethodInfo*))m23143_gshared)(__this, p0, method)
extern "C" t9 * m23144_gshared (t3712 * __this, MethodInfo* method);
#define m23144(__this, method) (( t9 * (*) (t3712 *, MethodInfo*))m23144_gshared)(__this, method)
extern "C" void m23145_gshared (t3712 * __this, MethodInfo* method);
#define m23145(__this, method) (( void (*) (t3712 *, MethodInfo*))m23145_gshared)(__this, method)
extern "C" bool m23146_gshared (t3712 * __this, MethodInfo* method);
#define m23146(__this, method) (( bool (*) (t3712 *, MethodInfo*))m23146_gshared)(__this, method)
extern "C" t916  m23147_gshared (t3712 * __this, MethodInfo* method);
#define m23147(__this, method) (( t916  (*) (t3712 *, MethodInfo*))m23147_gshared)(__this, method)
