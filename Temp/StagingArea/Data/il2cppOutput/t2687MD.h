#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2687;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m13059_gshared (t2687 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13059(__this, p0, p1, method) (( void (*) (t2687 *, t9 *, t58, MethodInfo*))m13059_gshared)(__this, p0, p1, method)
extern "C" t1155  m13060_gshared (t2687 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13060(__this, p0, p1, method) (( t1155  (*) (t2687 *, t9 *, t9 *, MethodInfo*))m13060_gshared)(__this, p0, p1, method)
extern "C" t9 * m13061_gshared (t2687 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13061(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2687 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m13061_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m13062_gshared (t2687 * __this, t9 * p0, MethodInfo* method);
#define m13062(__this, p0, method) (( t1155  (*) (t2687 *, t9 *, MethodInfo*))m13062_gshared)(__this, p0, method)
