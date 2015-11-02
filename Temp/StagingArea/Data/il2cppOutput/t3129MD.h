#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3129;
struct t9;
struct t835;
struct t3072;
struct t158;

extern "C" void m17078_gshared (t3129 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m17078(__this, p0, p1, method) (( void (*) (t3129 *, t9 *, t835 *, MethodInfo*))m17078_gshared)(__this, p0, p1, method)
extern "C" void m17079_gshared (t3129 * __this, t3072 * p0, MethodInfo* method);
#define m17079(__this, p0, method) (( void (*) (t3129 *, t3072 *, MethodInfo*))m17079_gshared)(__this, p0, method)
extern "C" void m17080_gshared (t3129 * __this, t158* p0, MethodInfo* method);
#define m17080(__this, p0, method) (( void (*) (t3129 *, t158*, MethodInfo*))m17080_gshared)(__this, p0, method)
extern "C" bool m17081_gshared (t3129 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m17081(__this, p0, p1, method) (( bool (*) (t3129 *, t9 *, t835 *, MethodInfo*))m17081_gshared)(__this, p0, p1, method)
