#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3579;
struct t9;
struct t2;

extern "C" void m21896_gshared (t3579 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21896(__this, p0, p1, method) (( void (*) (t3579 *, uint64_t, t9 *, MethodInfo*))m21896_gshared)(__this, p0, p1, method)
extern "C" uint64_t m21897_gshared (t3579 * __this, MethodInfo* method);
#define m21897(__this, method) (( uint64_t (*) (t3579 *, MethodInfo*))m21897_gshared)(__this, method)
extern "C" void m21898_gshared (t3579 * __this, uint64_t p0, MethodInfo* method);
#define m21898(__this, p0, method) (( void (*) (t3579 *, uint64_t, MethodInfo*))m21898_gshared)(__this, p0, method)
extern "C" t9 * m21899_gshared (t3579 * __this, MethodInfo* method);
#define m21899(__this, method) (( t9 * (*) (t3579 *, MethodInfo*))m21899_gshared)(__this, method)
extern "C" void m21900_gshared (t3579 * __this, t9 * p0, MethodInfo* method);
#define m21900(__this, p0, method) (( void (*) (t3579 *, t9 *, MethodInfo*))m21900_gshared)(__this, p0, method)
extern "C" t2* m21901_gshared (t3579 * __this, MethodInfo* method);
#define m21901(__this, method) (( t2* (*) (t3579 *, MethodInfo*))m21901_gshared)(__this, method)
