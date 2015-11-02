#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t610;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m2872_gshared (t610 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2872(__this, p0, p1, method) (( void (*) (t610 *, t9 *, t58, MethodInfo*))m2872_gshared)(__this, p0, p1, method)
extern "C" void m18998_gshared (t610 * __this, float p0, MethodInfo* method);
#define m18998(__this, p0, method) (( void (*) (t610 *, float, MethodInfo*))m18998_gshared)(__this, p0, method)
extern "C" t9 * m18999_gshared (t610 * __this, float p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m18999(__this, p0, p1, p2, method) (( t9 * (*) (t610 *, float, t477 *, t9 *, MethodInfo*))m18999_gshared)(__this, p0, p1, p2, method)
extern "C" void m19000_gshared (t610 * __this, t9 * p0, MethodInfo* method);
#define m19000(__this, p0, method) (( void (*) (t610 *, t9 *, MethodInfo*))m19000_gshared)(__this, p0, method)
