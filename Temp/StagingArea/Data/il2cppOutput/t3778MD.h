#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3778;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m23650_gshared (t3778 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23650(__this, p0, p1, method) (( void (*) (t3778 *, t9 *, t58, MethodInfo*))m23650_gshared)(__this, p0, p1, method)
extern "C" void m23651_gshared (t3778 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m23651(__this, p0, p1, method) (( void (*) (t3778 *, t9 *, t9 *, MethodInfo*))m23651_gshared)(__this, p0, p1, method)
extern "C" t9 * m23652_gshared (t3778 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23652(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3778 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m23652_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m23653_gshared (t3778 * __this, t9 * p0, MethodInfo* method);
#define m23653(__this, p0, method) (( void (*) (t3778 *, t9 *, MethodInfo*))m23653_gshared)(__this, p0, method)
