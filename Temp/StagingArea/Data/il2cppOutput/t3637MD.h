#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3637;
struct t9;
struct t2;
#include "t922.h"

extern "C" void m22358_gshared (t3637 * __this, t9 * p0, t922  p1, MethodInfo* method);
#define m22358(__this, p0, p1, method) (( void (*) (t3637 *, t9 *, t922 , MethodInfo*))m22358_gshared)(__this, p0, p1, method)
extern "C" t9 * m22359_gshared (t3637 * __this, MethodInfo* method);
#define m22359(__this, method) (( t9 * (*) (t3637 *, MethodInfo*))m22359_gshared)(__this, method)
extern "C" void m22360_gshared (t3637 * __this, t9 * p0, MethodInfo* method);
#define m22360(__this, p0, method) (( void (*) (t3637 *, t9 *, MethodInfo*))m22360_gshared)(__this, p0, method)
extern "C" t922  m22361_gshared (t3637 * __this, MethodInfo* method);
#define m22361(__this, method) (( t922  (*) (t3637 *, MethodInfo*))m22361_gshared)(__this, method)
extern "C" void m22362_gshared (t3637 * __this, t922  p0, MethodInfo* method);
#define m22362(__this, p0, method) (( void (*) (t3637 *, t922 , MethodInfo*))m22362_gshared)(__this, p0, method)
extern "C" t2* m22363_gshared (t3637 * __this, MethodInfo* method);
#define m22363(__this, method) (( t2* (*) (t3637 *, MethodInfo*))m22363_gshared)(__this, method)
