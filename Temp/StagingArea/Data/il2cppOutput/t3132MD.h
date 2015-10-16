#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3132;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m17322_gshared (t3132 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17322(__this, p0, p1, method) (( void (*) (t3132 *, t9 *, t58, MethodInfo*))m17322_gshared)(__this, p0, p1, method)
extern "C" t9 * m17323_gshared (t3132 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17323(__this, p0, p1, method) (( t9 * (*) (t3132 *, t9 *, int32_t, MethodInfo*))m17323_gshared)(__this, p0, p1, method)
extern "C" t9 * m17324_gshared (t3132 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17324(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3132 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m17324_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m17325_gshared (t3132 * __this, t9 * p0, MethodInfo* method);
#define m17325(__this, p0, method) (( t9 * (*) (t3132 *, t9 *, MethodInfo*))m17325_gshared)(__this, p0, method)
