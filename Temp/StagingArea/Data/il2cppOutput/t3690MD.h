#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3690;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3636.h"

extern "C" void m22875_gshared (t3690 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22875(__this, p0, p1, method) (( void (*) (t3690 *, t9 *, t58, MethodInfo*))m22875_gshared)(__this, p0, p1, method)
extern "C" t3636  m22877_gshared (t3690 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m22877(__this, p0, p1, method) (( t3636  (*) (t3690 *, t9 *, t9 *, MethodInfo*))m22877_gshared)(__this, p0, p1, method)
extern "C" t9 * m22879_gshared (t3690 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m22879(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3690 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m22879_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3636  m22881_gshared (t3690 * __this, t9 * p0, MethodInfo* method);
#define m22881(__this, p0, method) (( t3636  (*) (t3690 *, t9 *, MethodInfo*))m22881_gshared)(__this, p0, method)
