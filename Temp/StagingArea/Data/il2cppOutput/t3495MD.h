#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3495;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3483.h"

extern "C" void m21175_gshared (t3495 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21175(__this, p0, p1, method) (( void (*) (t3495 *, t9 *, t58, MethodInfo*))m21175_gshared)(__this, p0, p1, method)
extern "C" t3483  m21176_gshared (t3495 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21176(__this, p0, p1, method) (( t3483  (*) (t3495 *, t9 *, int64_t, MethodInfo*))m21176_gshared)(__this, p0, p1, method)
extern "C" t9 * m21177_gshared (t3495 * __this, t9 * p0, int64_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21177(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3495 *, t9 *, int64_t, t463 *, t9 *, MethodInfo*))m21177_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3483  m21178_gshared (t3495 * __this, t9 * p0, MethodInfo* method);
#define m21178(__this, p0, method) (( t3483  (*) (t3495 *, t9 *, MethodInfo*))m21178_gshared)(__this, p0, method)
