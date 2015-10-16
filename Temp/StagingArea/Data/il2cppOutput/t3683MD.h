#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3683;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3601.h"
#include "t909.h"

extern "C" void m22962_gshared (t3683 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22962(__this, p0, p1, method) (( void (*) (t3683 *, t9 *, t58, MethodInfo*))m22962_gshared)(__this, p0, p1, method)
extern "C" t3601  m22963_gshared (t3683 * __this, t9 * p0, t909  p1, MethodInfo* method);
#define m22963(__this, p0, p1, method) (( t3601  (*) (t3683 *, t9 *, t909 , MethodInfo*))m22963_gshared)(__this, p0, p1, method)
extern "C" t9 * m22964_gshared (t3683 * __this, t9 * p0, t909  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22964(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3683 *, t9 *, t909 , t463 *, t9 *, MethodInfo*))m22964_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3601  m22965_gshared (t3683 * __this, t9 * p0, MethodInfo* method);
#define m22965(__this, p0, method) (( t3601  (*) (t3683 *, t9 *, MethodInfo*))m22965_gshared)(__this, p0, method)
