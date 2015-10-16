#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3478;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t586.h"

extern "C" void m20975_gshared (t3478 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20975(__this, p0, p1, method) (( void (*) (t3478 *, t9 *, t58, MethodInfo*))m20975_gshared)(__this, p0, p1, method)
extern "C" int32_t m20976_gshared (t3478 * __this, t586  p0, t586  p1, MethodInfo* method);
#define m20976(__this, p0, p1, method) (( int32_t (*) (t3478 *, t586 , t586 , MethodInfo*))m20976_gshared)(__this, p0, p1, method)
extern "C" t9 * m20977_gshared (t3478 * __this, t586  p0, t586  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m20977(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3478 *, t586 , t586 , t463 *, t9 *, MethodInfo*))m20977_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m20978_gshared (t3478 * __this, t9 * p0, MethodInfo* method);
#define m20978(__this, p0, method) (( int32_t (*) (t3478 *, t9 *, MethodInfo*))m20978_gshared)(__this, p0, method)
