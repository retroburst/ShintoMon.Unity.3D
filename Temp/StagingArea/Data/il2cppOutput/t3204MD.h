#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3204;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t452.h"

extern "C" void m18098_gshared (t3204 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18098(__this, p0, p1, method) (( void (*) (t3204 *, t9 *, t58, MethodInfo*))m18098_gshared)(__this, p0, p1, method)
extern "C" void m18099_gshared (t3204 * __this, t452  p0, MethodInfo* method);
#define m18099(__this, p0, method) (( void (*) (t3204 *, t452 , MethodInfo*))m18099_gshared)(__this, p0, method)
extern "C" t9 * m18100_gshared (t3204 * __this, t452  p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m18100(__this, p0, p1, p2, method) (( t9 * (*) (t3204 *, t452 , t463 *, t9 *, MethodInfo*))m18100_gshared)(__this, p0, p1, p2, method)
extern "C" void m18101_gshared (t3204 * __this, t9 * p0, MethodInfo* method);
#define m18101(__this, p0, method) (( void (*) (t3204 *, t9 *, MethodInfo*))m18101_gshared)(__this, p0, method)
