#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3529;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m21382_gshared (t3529 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21382(__this, p0, p1, method) (( void (*) (t3529 *, t9 *, t58, MethodInfo*))m21382_gshared)(__this, p0, p1, method)
extern "C" t9 * m21383_gshared (t3529 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21383(__this, p0, p1, method) (( t9 * (*) (t3529 *, t9 *, int64_t, MethodInfo*))m21383_gshared)(__this, p0, p1, method)
extern "C" t9 * m21384_gshared (t3529 * __this, t9 * p0, int64_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21384(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3529 *, t9 *, int64_t, t477 *, t9 *, MethodInfo*))m21384_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m21385_gshared (t3529 * __this, t9 * p0, MethodInfo* method);
#define m21385(__this, p0, method) (( t9 * (*) (t3529 *, t9 *, MethodInfo*))m21385_gshared)(__this, p0, method)
