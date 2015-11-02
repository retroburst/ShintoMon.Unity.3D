#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2967;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2956.h"

extern "C" void m15450_gshared (t2967 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15450(__this, p0, p1, method) (( void (*) (t2967 *, t9 *, t58, MethodInfo*))m15450_gshared)(__this, p0, p1, method)
extern "C" t2956  m15452_gshared (t2967 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m15452(__this, p0, p1, method) (( t2956  (*) (t2967 *, t9 *, t9 *, MethodInfo*))m15452_gshared)(__this, p0, p1, method)
extern "C" t9 * m15454_gshared (t2967 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15454(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2967 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m15454_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2956  m15456_gshared (t2967 * __this, t9 * p0, MethodInfo* method);
#define m15456(__this, p0, method) (( t2956  (*) (t2967 *, t9 *, MethodInfo*))m15456_gshared)(__this, p0, method)
