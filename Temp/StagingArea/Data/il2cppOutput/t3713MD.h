#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3713;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t916.h"

extern "C" void m23147_gshared (t3713 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23147(__this, p0, p1, method) (( void (*) (t3713 *, t9 *, t58, MethodInfo*))m23147_gshared)(__this, p0, p1, method)
extern "C" t916  m23148_gshared (t3713 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m23148(__this, p0, p1, method) (( t916  (*) (t3713 *, t9 *, t916 , MethodInfo*))m23148_gshared)(__this, p0, p1, method)
extern "C" t9 * m23149_gshared (t3713 * __this, t9 * p0, t916  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23149(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3713 *, t9 *, t916 , t470 *, t9 *, MethodInfo*))m23149_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t916  m23150_gshared (t3713 * __this, t9 * p0, MethodInfo* method);
#define m23150(__this, p0, method) (( t916  (*) (t3713 *, t9 *, MethodInfo*))m23150_gshared)(__this, p0, method)
