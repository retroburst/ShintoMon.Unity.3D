#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3243;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t466.h"

extern "C" void m18341_gshared (t3243 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18341(__this, p0, p1, method) (( void (*) (t3243 *, t9 *, t58, MethodInfo*))m18341_gshared)(__this, p0, p1, method)
extern "C" void m18342_gshared (t3243 * __this, t466  p0, MethodInfo* method);
#define m18342(__this, p0, method) (( void (*) (t3243 *, t466 , MethodInfo*))m18342_gshared)(__this, p0, method)
extern "C" t9 * m18343_gshared (t3243 * __this, t466  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m18343(__this, p0, p1, p2, method) (( t9 * (*) (t3243 *, t466 , t477 *, t9 *, MethodInfo*))m18343_gshared)(__this, p0, p1, p2, method)
extern "C" void m18344_gshared (t3243 * __this, t9 * p0, MethodInfo* method);
#define m18344(__this, p0, method) (( void (*) (t3243 *, t9 *, MethodInfo*))m18344_gshared)(__this, p0, method)
