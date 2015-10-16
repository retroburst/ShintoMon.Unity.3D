#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3059;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t340.h"

extern "C" void m16512_gshared (t3059 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16512(__this, p0, p1, method) (( void (*) (t3059 *, t9 *, t58, MethodInfo*))m16512_gshared)(__this, p0, p1, method)
extern "C" bool m16513_gshared (t3059 * __this, t340  p0, MethodInfo* method);
#define m16513(__this, p0, method) (( bool (*) (t3059 *, t340 , MethodInfo*))m16513_gshared)(__this, p0, method)
extern "C" t9 * m16514_gshared (t3059 * __this, t340  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m16514(__this, p0, p1, p2, method) (( t9 * (*) (t3059 *, t340 , t463 *, t9 *, MethodInfo*))m16514_gshared)(__this, p0, p1, p2, method)
extern "C" bool m16515_gshared (t3059 * __this, t9 * p0, MethodInfo* method);
#define m16515(__this, p0, method) (( bool (*) (t3059 *, t9 *, MethodInfo*))m16515_gshared)(__this, p0, method)
