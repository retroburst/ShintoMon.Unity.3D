#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2910;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m14907_gshared (t2910 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14907(__this, p0, p1, method) (( void (*) (t2910 *, t9 *, t58, MethodInfo*))m14907_gshared)(__this, p0, p1, method)
extern "C" int32_t m14908_gshared (t2910 * __this, uint16_t p0, uint16_t p1, MethodInfo* method);
#define m14908(__this, p0, p1, method) (( int32_t (*) (t2910 *, uint16_t, uint16_t, MethodInfo*))m14908_gshared)(__this, p0, p1, method)
extern "C" t9 * m14909_gshared (t2910 * __this, uint16_t p0, uint16_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m14909(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2910 *, uint16_t, uint16_t, t463 *, t9 *, MethodInfo*))m14909_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m14910_gshared (t2910 * __this, t9 * p0, MethodInfo* method);
#define m14910(__this, p0, method) (( int32_t (*) (t2910 *, t9 *, MethodInfo*))m14910_gshared)(__this, p0, method)
