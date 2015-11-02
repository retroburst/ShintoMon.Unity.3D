#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3246;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t466.h"

extern "C" void m18351_gshared (t3246 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18351(__this, p0, p1, method) (( void (*) (t3246 *, t9 *, t58, MethodInfo*))m18351_gshared)(__this, p0, p1, method)
extern "C" int32_t m18352_gshared (t3246 * __this, t466  p0, t466  p1, MethodInfo* method);
#define m18352(__this, p0, p1, method) (( int32_t (*) (t3246 *, t466 , t466 , MethodInfo*))m18352_gshared)(__this, p0, p1, method)
extern "C" t9 * m18353_gshared (t3246 * __this, t466  p0, t466  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m18353(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3246 *, t466 , t466 , t477 *, t9 *, MethodInfo*))m18353_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m18354_gshared (t3246 * __this, t9 * p0, MethodInfo* method);
#define m18354(__this, p0, method) (( int32_t (*) (t3246 *, t9 *, MethodInfo*))m18354_gshared)(__this, p0, method)
