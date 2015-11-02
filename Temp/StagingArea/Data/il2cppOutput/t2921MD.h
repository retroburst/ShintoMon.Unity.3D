#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2921;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m14960_gshared (t2921 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14960(__this, p0, p1, method) (( void (*) (t2921 *, t9 *, t58, MethodInfo*))m14960_gshared)(__this, p0, p1, method)
extern "C" void m14961_gshared (t2921 * __this, uint16_t p0, MethodInfo* method);
#define m14961(__this, p0, method) (( void (*) (t2921 *, uint16_t, MethodInfo*))m14961_gshared)(__this, p0, method)
extern "C" t9 * m14962_gshared (t2921 * __this, uint16_t p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m14962(__this, p0, p1, p2, method) (( t9 * (*) (t2921 *, uint16_t, t477 *, t9 *, MethodInfo*))m14962_gshared)(__this, p0, p1, p2, method)
extern "C" void m14963_gshared (t2921 * __this, t9 * p0, MethodInfo* method);
#define m14963(__this, p0, method) (( void (*) (t2921 *, t9 *, MethodInfo*))m14963_gshared)(__this, p0, method)
