#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2979;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m15653_gshared (t2979 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15653(__this, p0, p1, method) (( void (*) (t2979 *, t9 *, t58, MethodInfo*))m15653_gshared)(__this, p0, p1, method)
extern "C" t1170  m15654_gshared (t2979 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15654(__this, p0, p1, method) (( t1170  (*) (t2979 *, int32_t, t9 *, MethodInfo*))m15654_gshared)(__this, p0, p1, method)
extern "C" t9 * m15655_gshared (t2979 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15655(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2979 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m15655_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m15656_gshared (t2979 * __this, t9 * p0, MethodInfo* method);
#define m15656(__this, p0, method) (( t1170  (*) (t2979 *, t9 *, MethodInfo*))m15656_gshared)(__this, p0, method)
