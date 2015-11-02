#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3626;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t819.h"

extern "C" void m22293_gshared (t3626 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22293(__this, p0, p1, method) (( void (*) (t3626 *, t9 *, t58, MethodInfo*))m22293_gshared)(__this, p0, p1, method)
extern "C" t819  m22295_gshared (t3626 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22295(__this, p0, p1, method) (( t819  (*) (t3626 *, t9 *, t9 *, MethodInfo*))m22295_gshared)(__this, p0, p1, method)
extern "C" t9 * m22297_gshared (t3626 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22297(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3626 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m22297_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t819  m22299_gshared (t3626 * __this, t9 * p0, MethodInfo* method);
#define m22299(__this, p0, method) (( t819  (*) (t3626 *, t9 *, MethodInfo*))m22299_gshared)(__this, p0, method)
