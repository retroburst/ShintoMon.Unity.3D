#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2804;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t2792.h"

extern "C" void m13885_gshared (t2804 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13885(__this, p0, p1, method) (( void (*) (t2804 *, t9 *, t58, MethodInfo*))m13885_gshared)(__this, p0, p1, method)
extern "C" t2792  m13886_gshared (t2804 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13886(__this, p0, p1, method) (( t2792  (*) (t2804 *, t9 *, uint8_t, MethodInfo*))m13886_gshared)(__this, p0, p1, method)
extern "C" t9 * m13887_gshared (t2804 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13887(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2804 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m13887_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2792  m13888_gshared (t2804 * __this, t9 * p0, MethodInfo* method);
#define m13888(__this, p0, method) (( t2792  (*) (t2804 *, t9 *, MethodInfo*))m13888_gshared)(__this, p0, method)
