#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t285;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m13524_gshared (t285 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13524(__this, p0, p1, method) (( void (*) (t285 *, t9 *, t58, MethodInfo*))m13524_gshared)(__this, p0, p1, method)
extern "C" void m13525_gshared (t285 * __this, t9 * p0, MethodInfo* method);
#define m13525(__this, p0, method) (( void (*) (t285 *, t9 *, MethodInfo*))m13525_gshared)(__this, p0, method)
extern "C" t9 * m13526_gshared (t285 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m13526(__this, p0, p1, p2, method) (( t9 * (*) (t285 *, t9 *, t463 *, t9 *, MethodInfo*))m13526_gshared)(__this, p0, p1, p2, method)
extern "C" void m13527_gshared (t285 * __this, t9 * p0, MethodInfo* method);
#define m13527(__this, p0, method) (( void (*) (t285 *, t9 *, MethodInfo*))m13527_gshared)(__this, p0, method)
