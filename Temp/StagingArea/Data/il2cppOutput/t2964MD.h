#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2964;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m15581_gshared (t2964 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15581(__this, p0, p1, method) (( void (*) (t2964 *, t9 *, t58, MethodInfo*))m15581_gshared)(__this, p0, p1, method)
extern "C" t1155  m15582_gshared (t2964 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15582(__this, p0, p1, method) (( t1155  (*) (t2964 *, int32_t, t9 *, MethodInfo*))m15582_gshared)(__this, p0, p1, method)
extern "C" t9 * m15583_gshared (t2964 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m15583(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2964 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m15583_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m15584_gshared (t2964 * __this, t9 * p0, MethodInfo* method);
#define m15584(__this, p0, method) (( t1155  (*) (t2964 *, t9 *, MethodInfo*))m15584_gshared)(__this, p0, method)
