#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3914;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m24642_gshared (t3914 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24642(__this, p0, p1, method) (( void (*) (t3914 *, t9 *, t58, MethodInfo*))m24642_gshared)(__this, p0, p1, method)
extern "C" t9 * m24643_gshared (t3914 * __this, MethodInfo* method);
#define m24643(__this, method) (( t9 * (*) (t3914 *, MethodInfo*))m24643_gshared)(__this, method)
extern "C" t9 * m24644_gshared (t3914 * __this, t477 * p0, t9 * p1, MethodInfo* method);
#define m24644(__this, p0, p1, method) (( t9 * (*) (t3914 *, t477 *, t9 *, MethodInfo*))m24644_gshared)(__this, p0, p1, method)
extern "C" t9 * m24645_gshared (t3914 * __this, t9 * p0, MethodInfo* method);
#define m24645(__this, p0, method) (( t9 * (*) (t3914 *, t9 *, MethodInfo*))m24645_gshared)(__this, p0, method)
