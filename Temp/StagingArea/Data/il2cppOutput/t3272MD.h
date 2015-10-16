#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3272;
struct t9;
struct t821;
struct t596;
struct t158;

extern "C" void m18758_gshared (t3272 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m18758(__this, p0, p1, method) (( void (*) (t3272 *, t9 *, t821 *, MethodInfo*))m18758_gshared)(__this, p0, p1, method)
extern "C" void m18759_gshared (t3272 * __this, t596 * p0, MethodInfo* method);
#define m18759(__this, p0, method) (( void (*) (t3272 *, t596 *, MethodInfo*))m18759_gshared)(__this, p0, method)
extern "C" void m18760_gshared (t3272 * __this, t158* p0, MethodInfo* method);
#define m18760(__this, p0, method) (( void (*) (t3272 *, t158*, MethodInfo*))m18760_gshared)(__this, p0, method)
extern "C" bool m18761_gshared (t3272 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m18761(__this, p0, p1, method) (( bool (*) (t3272 *, t9 *, t821 *, MethodInfo*))m18761_gshared)(__this, p0, p1, method)
