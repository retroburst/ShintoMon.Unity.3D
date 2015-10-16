#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3878;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m24414_gshared (t3878 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24414(__this, p0, p1, method) (( void (*) (t3878 *, t9 *, t58, MethodInfo*))m24414_gshared)(__this, p0, p1, method)
extern "C" t9 * m24415_gshared (t3878 * __this, MethodInfo* method);
#define m24415(__this, method) (( t9 * (*) (t3878 *, MethodInfo*))m24415_gshared)(__this, method)
extern "C" t9 * m24416_gshared (t3878 * __this, t463 * p0, t9 * p1, MethodInfo* method);
#define m24416(__this, p0, p1, method) (( t9 * (*) (t3878 *, t463 *, t9 *, MethodInfo*))m24416_gshared)(__this, p0, p1, method)
extern "C" t9 * m24417_gshared (t3878 * __this, t9 * p0, MethodInfo* method);
#define m24417(__this, p0, method) (( t9 * (*) (t3878 *, t9 *, MethodInfo*))m24417_gshared)(__this, p0, method)
