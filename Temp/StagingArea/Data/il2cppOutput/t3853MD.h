#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3853;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3845.h"

extern "C" void m24345_gshared (t3853 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24345(__this, p0, p1, method) (( void (*) (t3853 *, t9 *, t58, MethodInfo*))m24345_gshared)(__this, p0, p1, method)
extern "C" t3845  m24346_gshared (t3853 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24346(__this, p0, p1, method) (( t3845  (*) (t3853 *, int32_t, int32_t, MethodInfo*))m24346_gshared)(__this, p0, p1, method)
extern "C" t9 * m24347_gshared (t3853 * __this, int32_t p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m24347(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3853 *, int32_t, int32_t, t477 *, t9 *, MethodInfo*))m24347_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3845  m24348_gshared (t3853 * __this, t9 * p0, MethodInfo* method);
#define m24348(__this, p0, method) (( t3845  (*) (t3853 *, t9 *, MethodInfo*))m24348_gshared)(__this, p0, method)
