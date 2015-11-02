#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3165;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m17592_gshared (t3165 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17592(__this, p0, p1, method) (( void (*) (t3165 *, t9 *, t58, MethodInfo*))m17592_gshared)(__this, p0, p1, method)
extern "C" t1170  m17593_gshared (t3165 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17593(__this, p0, p1, method) (( t1170  (*) (t3165 *, t9 *, int32_t, MethodInfo*))m17593_gshared)(__this, p0, p1, method)
extern "C" t9 * m17594_gshared (t3165 * __this, t9 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m17594(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3165 *, t9 *, int32_t, t477 *, t9 *, MethodInfo*))m17594_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m17595_gshared (t3165 * __this, t9 * p0, MethodInfo* method);
#define m17595(__this, p0, method) (( t1170  (*) (t3165 *, t9 *, MethodInfo*))m17595_gshared)(__this, p0, method)
