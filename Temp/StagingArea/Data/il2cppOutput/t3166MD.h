#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3166;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m17530_gshared (t3166 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17530(__this, p0, p1, method) (( void (*) (t3166 *, t9 *, t58, MethodInfo*))m17530_gshared)(__this, p0, p1, method)
extern "C" t9 * m17531_gshared (t3166 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17531(__this, p0, p1, method) (( t9 * (*) (t3166 *, t9 *, int32_t, MethodInfo*))m17531_gshared)(__this, p0, p1, method)
extern "C" t9 * m17532_gshared (t3166 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17532(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3166 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m17532_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m17533_gshared (t3166 * __this, t9 * p0, MethodInfo* method);
#define m17533(__this, p0, method) (( t9 * (*) (t3166 *, t9 *, MethodInfo*))m17533_gshared)(__this, p0, method)
