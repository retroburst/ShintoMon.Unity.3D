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

extern "C" void m17219_gshared (t3137 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17219(__this, p0, p1, method) (( void (*) (t3137 *, t9 *, t58, MethodInfo*))m17219_gshared)(__this, p0, p1, method)
extern "C" t566  m17221_gshared (t3137 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m17221(__this, p0, p1, method) (( t566  (*) (t3137 *, int32_t, t9 *, MethodInfo*))m17221_gshared)(__this, p0, p1, method)
extern "C" t9 * m17223_gshared (t3137 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m17223(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3137 *, int32_t, t9 *, t470 *, t9 *, MethodInfo*))m17223_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t566  m17225_gshared (t3137 * __this, t9 * p0, MethodInfo* method);
#define m17225(__this, p0, method) (( t566  (*) (t3137 *, t9 *, MethodInfo*))m17225_gshared)(__this, p0, method)
