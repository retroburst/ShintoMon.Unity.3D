#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3704;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t925.h"

extern "C" void m23008_gshared (t3704 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23008(__this, p0, p1, method) (( void (*) (t3704 *, t9 *, t58, MethodInfo*))m23008_gshared)(__this, p0, p1, method)
extern "C" t925  m23010_gshared (t3704 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m23010(__this, p0, p1, method) (( t925  (*) (t3704 *, t9 *, t9 *, MethodInfo*))m23010_gshared)(__this, p0, p1, method)
extern "C" t9 * m23012_gshared (t3704 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23012(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3704 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m23012_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t925  m23014_gshared (t3704 * __this, t9 * p0, MethodInfo* method);
#define m23014(__this, p0, method) (( t925  (*) (t3704 *, t9 *, MethodInfo*))m23014_gshared)(__this, p0, method)
