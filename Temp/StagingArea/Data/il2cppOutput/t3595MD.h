#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3595;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m22010_gshared (t3595 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22010(__this, p0, p1, method) (( void (*) (t3595 *, t9 *, t58, MethodInfo*))m22010_gshared)(__this, p0, p1, method)
extern "C" t9 * m22011_gshared (t3595 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m22011(__this, p0, p1, method) (( t9 * (*) (t3595 *, uint64_t, t9 *, MethodInfo*))m22011_gshared)(__this, p0, p1, method)
extern "C" t9 * m22012_gshared (t3595 * __this, uint64_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22012(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3595 *, uint64_t, t9 *, t477 *, t9 *, MethodInfo*))m22012_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m22013_gshared (t3595 * __this, t9 * p0, MethodInfo* method);
#define m22013(__this, p0, method) (( t9 * (*) (t3595 *, t9 *, MethodInfo*))m22013_gshared)(__this, p0, method)
