#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3491;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m21144_gshared (t3491 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21144(__this, p0, p1, method) (( void (*) (t3491 *, t9 *, t58, MethodInfo*))m21144_gshared)(__this, p0, p1, method)
extern "C" t9 * m21145_gshared (t3491 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21145(__this, p0, p1, method) (( t9 * (*) (t3491 *, t9 *, int64_t, MethodInfo*))m21145_gshared)(__this, p0, p1, method)
extern "C" t9 * m21146_gshared (t3491 * __this, t9 * p0, int64_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21146(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3491 *, t9 *, int64_t, t463 *, t9 *, MethodInfo*))m21146_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m21147_gshared (t3491 * __this, t9 * p0, MethodInfo* method);
#define m21147(__this, p0, method) (( t9 * (*) (t3491 *, t9 *, MethodInfo*))m21147_gshared)(__this, p0, method)
