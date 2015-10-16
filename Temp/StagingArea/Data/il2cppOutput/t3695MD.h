#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3695;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3604.h"
#include "t909.h"

extern "C" void m23043_gshared (t3695 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23043(__this, p0, p1, method) (( void (*) (t3695 *, t9 *, t58, MethodInfo*))m23043_gshared)(__this, p0, p1, method)
extern "C" t3604  m23045_gshared (t3695 * __this, t9 * p0, t909  p1, MethodInfo* method);
#define m23045(__this, p0, p1, method) (( t3604  (*) (t3695 *, t9 *, t909 , MethodInfo*))m23045_gshared)(__this, p0, p1, method)
extern "C" t9 * m23047_gshared (t3695 * __this, t9 * p0, t909  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m23047(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3695 *, t9 *, t909 , t463 *, t9 *, MethodInfo*))m23047_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3604  m23049_gshared (t3695 * __this, t9 * p0, MethodInfo* method);
#define m23049(__this, p0, method) (( t3604  (*) (t3695 *, t9 *, MethodInfo*))m23049_gshared)(__this, p0, method)
