#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3783;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m23685_gshared (t3783 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23685(__this, p0, p1, method) (( void (*) (t3783 *, t9 *, t58, MethodInfo*))m23685_gshared)(__this, p0, p1, method)
extern "C" void m23686_gshared (t3783 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m23686(__this, p0, p1, method) (( void (*) (t3783 *, t9 *, t9 *, MethodInfo*))m23686_gshared)(__this, p0, p1, method)
extern "C" t9 * m23687_gshared (t3783 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23687(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3783 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m23687_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m23688_gshared (t3783 * __this, t9 * p0, MethodInfo* method);
#define m23688(__this, p0, method) (( void (*) (t3783 *, t9 *, MethodInfo*))m23688_gshared)(__this, p0, method)
