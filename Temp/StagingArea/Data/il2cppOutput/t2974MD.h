#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2974;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2965.h"

extern "C" void m15585_gshared (t2974 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15585(__this, p0, p1, method) (( void (*) (t2974 *, t9 *, t58, MethodInfo*))m15585_gshared)(__this, p0, p1, method)
extern "C" t2965  m15586_gshared (t2974 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15586(__this, p0, p1, method) (( t2965  (*) (t2974 *, int32_t, t9 *, MethodInfo*))m15586_gshared)(__this, p0, p1, method)
extern "C" t9 * m15587_gshared (t2974 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m15587(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2974 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m15587_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2965  m15588_gshared (t2974 * __this, t9 * p0, MethodInfo* method);
#define m15588(__this, p0, method) (( t2965  (*) (t2974 *, t9 *, MethodInfo*))m15588_gshared)(__this, p0, method)
