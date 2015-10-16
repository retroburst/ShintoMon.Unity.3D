#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2829;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t154.h"

extern "C" void m14115_gshared (t2829 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14115(__this, p0, p1, method) (( void (*) (t2829 *, t9 *, t58, MethodInfo*))m14115_gshared)(__this, p0, p1, method)
extern "C" t154  m14117_gshared (t2829 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m14117(__this, p0, p1, method) (( t154  (*) (t2829 *, t9 *, t9 *, MethodInfo*))m14117_gshared)(__this, p0, p1, method)
extern "C" t9 * m14119_gshared (t2829 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m14119(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2829 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m14119_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t154  m14121_gshared (t2829 * __this, t9 * p0, MethodInfo* method);
#define m14121(__this, p0, method) (( t154  (*) (t2829 *, t9 *, MethodInfo*))m14121_gshared)(__this, p0, method)
