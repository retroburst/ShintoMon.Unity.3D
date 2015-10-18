#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3411;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3400.h"

extern "C" void m19997_gshared (t3411 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m19997(__this, p0, p1, method) (( void (*) (t3411 *, t9 *, t58, MethodInfo*))m19997_gshared)(__this, p0, p1, method)
extern "C" t3400  m19999_gshared (t3411 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m19999(__this, p0, p1, method) (( t3400  (*) (t3411 *, int32_t, t9 *, MethodInfo*))m19999_gshared)(__this, p0, p1, method)
extern "C" t9 * m20001_gshared (t3411 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m20001(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3411 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m20001_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3400  m20003_gshared (t3411 * __this, t9 * p0, MethodInfo* method);
#define m20003(__this, p0, method) (( t3400  (*) (t3411 *, t9 *, MethodInfo*))m20003_gshared)(__this, p0, method)
