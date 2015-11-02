#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3583;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m22014_gshared (t3583 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22014(__this, p0, p1, method) (( void (*) (t3583 *, t9 *, t58, MethodInfo*))m22014_gshared)(__this, p0, p1, method)
extern "C" t1170  m22015_gshared (t3583 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m22015(__this, p0, p1, method) (( t1170  (*) (t3583 *, uint64_t, t9 *, MethodInfo*))m22015_gshared)(__this, p0, p1, method)
extern "C" t9 * m22016_gshared (t3583 * __this, uint64_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22016(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3583 *, uint64_t, t9 *, t477 *, t9 *, MethodInfo*))m22016_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m22017_gshared (t3583 * __this, t9 * p0, MethodInfo* method);
#define m22017(__this, p0, method) (( t1170  (*) (t3583 *, t9 *, MethodInfo*))m22017_gshared)(__this, p0, method)
