#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3377;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3366.h"

extern "C" void m19788_gshared (t3377 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m19788(__this, p0, p1, method) (( void (*) (t3377 *, t9 *, t58, MethodInfo*))m19788_gshared)(__this, p0, p1, method)
extern "C" t3366  m19790_gshared (t3377 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m19790(__this, p0, p1, method) (( t3366  (*) (t3377 *, int32_t, t9 *, MethodInfo*))m19790_gshared)(__this, p0, p1, method)
extern "C" t9 * m19792_gshared (t3377 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m19792(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3377 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m19792_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3366  m19794_gshared (t3377 * __this, t9 * p0, MethodInfo* method);
#define m19794(__this, p0, method) (( t3366  (*) (t3377 *, t9 *, MethodInfo*))m19794_gshared)(__this, p0, method)
