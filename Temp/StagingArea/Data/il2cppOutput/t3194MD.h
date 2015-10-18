#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3194;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3184.h"

extern "C" void m17843_gshared (t3194 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17843(__this, p0, p1, method) (( void (*) (t3194 *, t9 *, t58, MethodInfo*))m17843_gshared)(__this, p0, p1, method)
extern "C" t3184  m17845_gshared (t3194 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17845(__this, p0, p1, method) (( t3184  (*) (t3194 *, t9 *, int32_t, MethodInfo*))m17845_gshared)(__this, p0, p1, method)
extern "C" t9 * m17847_gshared (t3194 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17847(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3194 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m17847_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3184  m17849_gshared (t3194 * __this, t9 * p0, MethodInfo* method);
#define m17849(__this, p0, method) (( t3184  (*) (t3194 *, t9 *, MethodInfo*))m17849_gshared)(__this, p0, method)
