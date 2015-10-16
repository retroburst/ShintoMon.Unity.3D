#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3639;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3595.h"

extern "C" void m22492_gshared (t3639 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22492(__this, p0, p1, method) (( void (*) (t3639 *, t9 *, t58, MethodInfo*))m22492_gshared)(__this, p0, p1, method)
extern "C" t3595  m22494_gshared (t3639 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22494(__this, p0, p1, method) (( t3595  (*) (t3639 *, t9 *, t9 *, MethodInfo*))m22494_gshared)(__this, p0, p1, method)
extern "C" t9 * m22496_gshared (t3639 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22496(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3639 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m22496_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3595  m22498_gshared (t3639 * __this, t9 * p0, MethodInfo* method);
#define m22498(__this, p0, method) (( t3595  (*) (t3639 *, t9 *, MethodInfo*))m22498_gshared)(__this, p0, method)
