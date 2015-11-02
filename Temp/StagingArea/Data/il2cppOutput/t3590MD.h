#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3590;
struct t9;
struct t3581;

extern "C" void m21970_gshared (t3590 * __this, t3581 * p0, MethodInfo* method);
#define m21970(__this, p0, method) (( void (*) (t3590 *, t3581 *, MethodInfo*))m21970_gshared)(__this, p0, method)
extern "C" t9 * m21971_gshared (t3590 * __this, MethodInfo* method);
#define m21971(__this, method) (( t9 * (*) (t3590 *, MethodInfo*))m21971_gshared)(__this, method)
extern "C" void m21972_gshared (t3590 * __this, MethodInfo* method);
#define m21972(__this, method) (( void (*) (t3590 *, MethodInfo*))m21972_gshared)(__this, method)
extern "C" bool m21973_gshared (t3590 * __this, MethodInfo* method);
#define m21973(__this, method) (( bool (*) (t3590 *, MethodInfo*))m21973_gshared)(__this, method)
extern "C" uint64_t m21974_gshared (t3590 * __this, MethodInfo* method);
#define m21974(__this, method) (( uint64_t (*) (t3590 *, MethodInfo*))m21974_gshared)(__this, method)
