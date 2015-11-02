#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2733;
struct t9;

extern "C" void m13181_gshared (t2733 * __this, MethodInfo* method);
#define m13181(__this, method) (( void (*) (t2733 *, MethodInfo*))m13181_gshared)(__this, method)
extern "C" int32_t m13182_gshared (t2733 * __this, t9 * p0, MethodInfo* method);
#define m13182(__this, p0, method) (( int32_t (*) (t2733 *, t9 *, MethodInfo*))m13182_gshared)(__this, p0, method)
extern "C" bool m13183_gshared (t2733 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13183(__this, p0, p1, method) (( bool (*) (t2733 *, t9 *, t9 *, MethodInfo*))m13183_gshared)(__this, p0, p1, method)
