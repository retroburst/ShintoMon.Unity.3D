#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3748;
struct t9;
struct t821;
struct t158;

extern "C" void m23461_gshared (t3748 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23461(__this, p0, p1, method) (( void (*) (t3748 *, t9 *, t821 *, MethodInfo*))m23461_gshared)(__this, p0, p1, method)
extern "C" void m23462_gshared (t3748 * __this, t158* p0, MethodInfo* method);
#define m23462(__this, p0, method) (( void (*) (t3748 *, t158*, MethodInfo*))m23462_gshared)(__this, p0, method)
extern "C" bool m23463_gshared (t3748 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m23463(__this, p0, p1, method) (( bool (*) (t3748 *, t9 *, t821 *, MethodInfo*))m23463_gshared)(__this, p0, p1, method)
