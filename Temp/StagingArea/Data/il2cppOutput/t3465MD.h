#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3465;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t587.h"

extern "C" void m20817_gshared (t3465 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20817(__this, p0, p1, method) (( void (*) (t3465 *, t9 *, t58, MethodInfo*))m20817_gshared)(__this, p0, p1, method)
extern "C" void m20818_gshared (t3465 * __this, t587  p0, MethodInfo* method);
#define m20818(__this, p0, method) (( void (*) (t3465 *, t587 , MethodInfo*))m20818_gshared)(__this, p0, method)
extern "C" t9 * m20819_gshared (t3465 * __this, t587  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m20819(__this, p0, p1, p2, method) (( t9 * (*) (t3465 *, t587 , t463 *, t9 *, MethodInfo*))m20819_gshared)(__this, p0, p1, p2, method)
extern "C" void m20820_gshared (t3465 * __this, t9 * p0, MethodInfo* method);
#define m20820(__this, p0, method) (( void (*) (t3465 *, t9 *, MethodInfo*))m20820_gshared)(__this, p0, method)
