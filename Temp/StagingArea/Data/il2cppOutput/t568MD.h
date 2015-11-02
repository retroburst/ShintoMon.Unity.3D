#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t568;
struct t9;
struct t350;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m16256_gshared (t568 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16256(__this, p0, p1, method) (( void (*) (t568 *, t9 *, t58, MethodInfo*))m16256_gshared)(__this, p0, p1, method)
extern "C" void m16258_gshared (t568 * __this, t9 * p0, t350 * p1, MethodInfo* method);
#define m16258(__this, p0, p1, method) (( void (*) (t568 *, t9 *, t350 *, MethodInfo*))m16258_gshared)(__this, p0, p1, method)
extern "C" t9 * m16260_gshared (t568 * __this, t9 * p0, t350 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m16260(__this, p0, p1, p2, p3, method) (( t9 * (*) (t568 *, t9 *, t350 *, t477 *, t9 *, MethodInfo*))m16260_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m16262_gshared (t568 * __this, t9 * p0, MethodInfo* method);
#define m16262(__this, p0, method) (( void (*) (t568 *, t9 *, MethodInfo*))m16262_gshared)(__this, p0, method)
