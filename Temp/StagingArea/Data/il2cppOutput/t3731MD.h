#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3731;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3640.h"
#include "t922.h"

extern "C" void m23271_gshared (t3731 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23271(__this, p0, p1, method) (( void (*) (t3731 *, t9 *, t58, MethodInfo*))m23271_gshared)(__this, p0, p1, method)
extern "C" t3640  m23273_gshared (t3731 * __this, t9 * p0, t922  p1, MethodInfo* method);
#define m23273(__this, p0, p1, method) (( t3640  (*) (t3731 *, t9 *, t922 , MethodInfo*))m23273_gshared)(__this, p0, p1, method)
extern "C" t9 * m23275_gshared (t3731 * __this, t9 * p0, t922  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23275(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3731 *, t9 *, t922 , t477 *, t9 *, MethodInfo*))m23275_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3640  m23277_gshared (t3731 * __this, t9 * p0, MethodInfo* method);
#define m23277(__this, p0, method) (( t3640  (*) (t3731 *, t9 *, MethodInfo*))m23277_gshared)(__this, p0, method)
