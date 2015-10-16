#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3557;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m21772_gshared (t3557 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21772(__this, p0, p1, method) (( void (*) (t3557 *, t9 *, t58, MethodInfo*))m21772_gshared)(__this, p0, p1, method)
extern "C" t9 * m21773_gshared (t3557 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21773(__this, p0, p1, method) (( t9 * (*) (t3557 *, uint64_t, t9 *, MethodInfo*))m21773_gshared)(__this, p0, p1, method)
extern "C" t9 * m21774_gshared (t3557 * __this, uint64_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21774(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3557 *, uint64_t, t9 *, t463 *, t9 *, MethodInfo*))m21774_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m21775_gshared (t3557 * __this, t9 * p0, MethodInfo* method);
#define m21775(__this, p0, method) (( t9 * (*) (t3557 *, t9 *, MethodInfo*))m21775_gshared)(__this, p0, method)
