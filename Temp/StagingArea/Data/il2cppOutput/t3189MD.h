#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3189;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3166.h"

extern "C" void m17922_gshared (t3189 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17922(__this, p0, p1, method) (( void (*) (t3189 *, t9 *, t58, MethodInfo*))m17922_gshared)(__this, p0, p1, method)
extern "C" t3166  m17924_gshared (t3189 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m17924(__this, p0, p1, method) (( t3166  (*) (t3189 *, t9 *, t9 *, MethodInfo*))m17924_gshared)(__this, p0, p1, method)
extern "C" t9 * m17926_gshared (t3189 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17926(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3189 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m17926_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3166  m17928_gshared (t3189 * __this, t9 * p0, MethodInfo* method);
#define m17928(__this, p0, method) (( t3166  (*) (t3189 *, t9 *, MethodInfo*))m17928_gshared)(__this, p0, method)
