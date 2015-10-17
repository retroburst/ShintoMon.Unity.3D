#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3621;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t812.h"

extern "C" void m22258_gshared (t3621 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22258(__this, p0, p1, method) (( void (*) (t3621 *, t9 *, t58, MethodInfo*))m22258_gshared)(__this, p0, p1, method)
extern "C" t812  m22260_gshared (t3621 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22260(__this, p0, p1, method) (( t812  (*) (t3621 *, t9 *, t9 *, MethodInfo*))m22260_gshared)(__this, p0, p1, method)
extern "C" t9 * m22262_gshared (t3621 * __this, t9 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m22262(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3621 *, t9 *, t9 *, t470 *, t9 *, MethodInfo*))m22262_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t812  m22264_gshared (t3621 * __this, t9 * p0, MethodInfo* method);
#define m22264(__this, p0, method) (( t812  (*) (t3621 *, t9 *, MethodInfo*))m22264_gshared)(__this, p0, method)
