#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3094;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t347.h"

extern "C" void m16725_gshared (t3094 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16725(__this, p0, p1, method) (( void (*) (t3094 *, t9 *, t58, MethodInfo*))m16725_gshared)(__this, p0, p1, method)
extern "C" void m16726_gshared (t3094 * __this, t347  p0, MethodInfo* method);
#define m16726(__this, p0, method) (( void (*) (t3094 *, t347 , MethodInfo*))m16726_gshared)(__this, p0, method)
extern "C" t9 * m16727_gshared (t3094 * __this, t347  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m16727(__this, p0, p1, p2, method) (( t9 * (*) (t3094 *, t347 , t470 *, t9 *, MethodInfo*))m16727_gshared)(__this, p0, p1, p2, method)
extern "C" void m16728_gshared (t3094 * __this, t9 * p0, MethodInfo* method);
#define m16728(__this, p0, method) (( void (*) (t3094 *, t9 *, MethodInfo*))m16728_gshared)(__this, p0, method)
