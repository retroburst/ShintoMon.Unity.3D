#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3093;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t347.h"

extern "C" void m16721_gshared (t3093 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16721(__this, p0, p1, method) (( void (*) (t3093 *, t9 *, t58, MethodInfo*))m16721_gshared)(__this, p0, p1, method)
extern "C" bool m16722_gshared (t3093 * __this, t347  p0, MethodInfo* method);
#define m16722(__this, p0, method) (( bool (*) (t3093 *, t347 , MethodInfo*))m16722_gshared)(__this, p0, method)
extern "C" t9 * m16723_gshared (t3093 * __this, t347  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m16723(__this, p0, p1, p2, method) (( t9 * (*) (t3093 *, t347 , t470 *, t9 *, MethodInfo*))m16723_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16724_gshared (t3093 * __this, t9 * p0, MethodInfo* method);
#define m16724(__this, p0, method) (( bool (*) (t3093 *, t9 *, MethodInfo*))m16724_gshared)(__this, p0, method)
