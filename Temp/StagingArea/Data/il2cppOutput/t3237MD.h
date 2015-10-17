#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3237;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t459.h"

extern "C" void m18302_gshared (t3237 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18302(__this, p0, p1, method) (( void (*) (t3237 *, t9 *, t58, MethodInfo*))m18302_gshared)(__this, p0, p1, method)
extern "C" bool m18303_gshared (t3237 * __this, t459  p0, MethodInfo* method);
#define m18303(__this, p0, method) (( bool (*) (t3237 *, t459 , MethodInfo*))m18303_gshared)(__this, p0, method)
extern "C" t9 * m18304_gshared (t3237 * __this, t459  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m18304(__this, p0, p1, p2, method) (( t9 * (*) (t3237 *, t459 , t470 *, t9 *, MethodInfo*))m18304_gshared)(__this, p0, p1, p2, method)
extern "C" bool m18305_gshared (t3237 * __this, t9 * p0, MethodInfo* method);
#define m18305(__this, p0, method) (( bool (*) (t3237 *, t9 *, MethodInfo*))m18305_gshared)(__this, p0, method)
