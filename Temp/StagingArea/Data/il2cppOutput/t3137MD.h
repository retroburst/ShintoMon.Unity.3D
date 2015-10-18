#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3137;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t566.h"

extern "C" void m17220_gshared (t3137 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17220(__this, p0, p1, method) (( void (*) (t3137 *, t9 *, t58, MethodInfo*))m17220_gshared)(__this, p0, p1, method)
extern "C" t566  m17222_gshared (t3137 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m17222(__this, p0, p1, method) (( t566  (*) (t3137 *, int32_t, t9 *, MethodInfo*))m17222_gshared)(__this, p0, p1, method)
extern "C" t9 * m17224_gshared (t3137 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17224(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3137 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m17224_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t566  m17226_gshared (t3137 * __this, t9 * p0, MethodInfo* method);
#define m17226(__this, p0, method) (( t566  (*) (t3137 *, t9 *, MethodInfo*))m17226_gshared)(__this, p0, method)
