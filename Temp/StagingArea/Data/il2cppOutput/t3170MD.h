#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3170;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3161.h"

extern "C" void m17562_gshared (t3170 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17562(__this, p0, p1, method) (( void (*) (t3170 *, t9 *, t58, MethodInfo*))m17562_gshared)(__this, p0, p1, method)
extern "C" t3161  m17563_gshared (t3170 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17563(__this, p0, p1, method) (( t3161  (*) (t3170 *, t9 *, int32_t, MethodInfo*))m17563_gshared)(__this, p0, p1, method)
extern "C" t9 * m17564_gshared (t3170 * __this, t9 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17564(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3170 *, t9 *, int32_t, t470 *, t9 *, MethodInfo*))m17564_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3161  m17565_gshared (t3170 * __this, t9 * p0, MethodInfo* method);
#define m17565(__this, p0, method) (( t3161  (*) (t3170 *, t9 *, MethodInfo*))m17565_gshared)(__this, p0, method)
