#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3238;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t459.h"

extern "C" void m18307_gshared (t3238 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18307(__this, p0, p1, method) (( void (*) (t3238 *, t9 *, t58, MethodInfo*))m18307_gshared)(__this, p0, p1, method)
extern "C" void m18308_gshared (t3238 * __this, t459  p0, MethodInfo* method);
#define m18308(__this, p0, method) (( void (*) (t3238 *, t459 , MethodInfo*))m18308_gshared)(__this, p0, method)
extern "C" t9 * m18309_gshared (t3238 * __this, t459  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m18309(__this, p0, p1, p2, method) (( t9 * (*) (t3238 *, t459 , t470 *, t9 *, MethodInfo*))m18309_gshared)(__this, p0, p1, p2, method)
extern "C" void m18310_gshared (t3238 * __this, t9 * p0, MethodInfo* method);
#define m18310(__this, p0, method) (( void (*) (t3238 *, t9 *, MethodInfo*))m18310_gshared)(__this, p0, method)
