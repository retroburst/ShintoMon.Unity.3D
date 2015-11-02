#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3142;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t573.h"

extern "C" void m17254_gshared (t3142 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17254(__this, p0, p1, method) (( void (*) (t3142 *, t9 *, t58, MethodInfo*))m17254_gshared)(__this, p0, p1, method)
extern "C" t573  m17256_gshared (t3142 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m17256(__this, p0, p1, method) (( t573  (*) (t3142 *, int32_t, t9 *, MethodInfo*))m17256_gshared)(__this, p0, p1, method)
extern "C" t9 * m17258_gshared (t3142 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17258(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3142 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m17258_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t573  m17260_gshared (t3142 * __this, t9 * p0, MethodInfo* method);
#define m17260(__this, p0, method) (( t573  (*) (t3142 *, t9 *, MethodInfo*))m17260_gshared)(__this, p0, method)
