#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t399;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t164.h"

extern "C" void m2535_gshared (t399 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2535(__this, p0, p1, method) (( void (*) (t399 *, t9 *, t58, MethodInfo*))m2535_gshared)(__this, p0, p1, method)
extern "C" int32_t m17187_gshared (t399 * __this, t164  p0, t164  p1, MethodInfo* method);
#define m17187(__this, p0, p1, method) (( int32_t (*) (t399 *, t164 , t164 , MethodInfo*))m17187_gshared)(__this, p0, p1, method)
extern "C" t9 * m17188_gshared (t399 * __this, t164  p0, t164  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17188(__this, p0, p1, p2, p3, method) (( t9 * (*) (t399 *, t164 , t164 , t463 *, t9 *, MethodInfo*))m17188_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17189_gshared (t399 * __this, t9 * p0, MethodInfo* method);
#define m17189(__this, p0, method) (( int32_t (*) (t399 *, t9 *, MethodInfo*))m17189_gshared)(__this, p0, method)
