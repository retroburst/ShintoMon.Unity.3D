#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3533;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3521.h"

extern "C" void m21413_gshared (t3533 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21413(__this, p0, p1, method) (( void (*) (t3533 *, t9 *, t58, MethodInfo*))m21413_gshared)(__this, p0, p1, method)
extern "C" t3521  m21414_gshared (t3533 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21414(__this, p0, p1, method) (( t3521  (*) (t3533 *, t9 *, int64_t, MethodInfo*))m21414_gshared)(__this, p0, p1, method)
extern "C" t9 * m21415_gshared (t3533 * __this, t9 * p0, int64_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21415(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3533 *, t9 *, int64_t, t477 *, t9 *, MethodInfo*))m21415_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3521  m21416_gshared (t3533 * __this, t9 * p0, MethodInfo* method);
#define m21416(__this, p0, method) (( t3521  (*) (t3533 *, t9 *, MethodInfo*))m21416_gshared)(__this, p0, method)
