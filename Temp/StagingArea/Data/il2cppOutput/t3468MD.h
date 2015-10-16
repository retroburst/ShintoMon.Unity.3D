#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3468;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t587.h"

extern "C" void m20827_gshared (t3468 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20827(__this, p0, p1, method) (( void (*) (t3468 *, t9 *, t58, MethodInfo*))m20827_gshared)(__this, p0, p1, method)
extern "C" int32_t m20828_gshared (t3468 * __this, t587  p0, t587  p1, MethodInfo* method);
#define m20828(__this, p0, p1, method) (( int32_t (*) (t3468 *, t587 , t587 , MethodInfo*))m20828_gshared)(__this, p0, p1, method)
extern "C" t9 * m20829_gshared (t3468 * __this, t587  p0, t587  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m20829(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3468 *, t587 , t587 , t463 *, t9 *, MethodInfo*))m20829_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m20830_gshared (t3468 * __this, t9 * p0, MethodInfo* method);
#define m20830(__this, p0, method) (( int32_t (*) (t3468 *, t9 *, MethodInfo*))m20830_gshared)(__this, p0, method)
