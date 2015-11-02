#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t287;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m1223_gshared (t287 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m1223(__this, p0, p1, method) (( void (*) (t287 *, t9 *, t58, MethodInfo*))m1223_gshared)(__this, p0, p1, method)
extern "C" void m1246_gshared (t287 * __this, float p0, MethodInfo* method);
#define m1246(__this, p0, method) (( void (*) (t287 *, float, MethodInfo*))m1246_gshared)(__this, p0, method)
extern "C" t9 * m15476_gshared (t287 * __this, float p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m15476(__this, p0, p1, p2, method) (( t9 * (*) (t287 *, float, t477 *, t9 *, MethodInfo*))m15476_gshared)(__this, p0, p1, p2, method)
extern "C" void m15477_gshared (t287 * __this, t9 * p0, MethodInfo* method);
#define m15477(__this, p0, method) (( void (*) (t287 *, t9 *, MethodInfo*))m15477_gshared)(__this, p0, method)
