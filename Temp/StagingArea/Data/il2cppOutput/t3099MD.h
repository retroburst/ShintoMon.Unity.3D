#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3099;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t354.h"

extern "C" void m16759_gshared (t3099 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16759(__this, p0, p1, method) (( void (*) (t3099 *, t9 *, t58, MethodInfo*))m16759_gshared)(__this, p0, p1, method)
extern "C" void m16760_gshared (t3099 * __this, t354  p0, MethodInfo* method);
#define m16760(__this, p0, method) (( void (*) (t3099 *, t354 , MethodInfo*))m16760_gshared)(__this, p0, method)
extern "C" t9 * m16761_gshared (t3099 * __this, t354  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m16761(__this, p0, p1, p2, method) (( t9 * (*) (t3099 *, t354 , t477 *, t9 *, MethodInfo*))m16761_gshared)(__this, p0, p1, p2, method)
extern "C" void m16762_gshared (t3099 * __this, t9 * p0, MethodInfo* method);
#define m16762(__this, p0, method) (( void (*) (t3099 *, t9 *, MethodInfo*))m16762_gshared)(__this, p0, method)
