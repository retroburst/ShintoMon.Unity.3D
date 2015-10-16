#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2706;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m13036_gshared (t2706 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13036(__this, p0, p1, method) (( void (*) (t2706 *, t9 *, t58, MethodInfo*))m13036_gshared)(__this, p0, p1, method)
extern "C" t9 * m13037_gshared (t2706 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13037(__this, p0, p1, method) (( t9 * (*) (t2706 *, t9 *, t9 *, MethodInfo*))m13037_gshared)(__this, p0, p1, method)
extern "C" t9 * m13038_gshared (t2706 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13038(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2706 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m13038_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m13039_gshared (t2706 * __this, t9 * p0, MethodInfo* method);
#define m13039(__this, p0, method) (( t9 * (*) (t2706 *, t9 *, MethodInfo*))m13039_gshared)(__this, p0, method)
