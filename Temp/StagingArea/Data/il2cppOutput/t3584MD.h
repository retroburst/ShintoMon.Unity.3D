#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3584;
struct t9;
struct t2;

extern "C" void m21930_gshared (t3584 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21930(__this, p0, p1, method) (( void (*) (t3584 *, uint64_t, t9 *, MethodInfo*))m21930_gshared)(__this, p0, p1, method)
extern "C" uint64_t m21931_gshared (t3584 * __this, MethodInfo* method);
#define m21931(__this, method) (( uint64_t (*) (t3584 *, MethodInfo*))m21931_gshared)(__this, method)
extern "C" void m21932_gshared (t3584 * __this, uint64_t p0, MethodInfo* method);
#define m21932(__this, p0, method) (( void (*) (t3584 *, uint64_t, MethodInfo*))m21932_gshared)(__this, p0, method)
extern "C" t9 * m21933_gshared (t3584 * __this, MethodInfo* method);
#define m21933(__this, method) (( t9 * (*) (t3584 *, MethodInfo*))m21933_gshared)(__this, method)
extern "C" void m21934_gshared (t3584 * __this, t9 * p0, MethodInfo* method);
#define m21934(__this, p0, method) (( void (*) (t3584 *, t9 *, MethodInfo*))m21934_gshared)(__this, p0, method)
extern "C" t2* m21935_gshared (t3584 * __this, MethodInfo* method);
#define m21935(__this, method) (( t2* (*) (t3584 *, MethodInfo*))m21935_gshared)(__this, method)
