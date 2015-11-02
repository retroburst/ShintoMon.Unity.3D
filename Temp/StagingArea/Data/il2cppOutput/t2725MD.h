#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2725;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2703.h"

extern "C" void m13136_gshared (t2725 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13136(__this, p0, p1, method) (( void (*) (t2725 *, t9 *, t58, MethodInfo*))m13136_gshared)(__this, p0, p1, method)
extern "C" t2703  m13137_gshared (t2725 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m13137(__this, p0, p1, method) (( t2703  (*) (t2725 *, t9 *, t9 *, MethodInfo*))m13137_gshared)(__this, p0, p1, method)
extern "C" t9 * m13138_gshared (t2725 * __this, t9 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13138(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2725 *, t9 *, t9 *, t477 *, t9 *, MethodInfo*))m13138_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2703  m13139_gshared (t2725 * __this, t9 * p0, MethodInfo* method);
#define m13139(__this, p0, method) (( t2703  (*) (t2725 *, t9 *, MethodInfo*))m13139_gshared)(__this, p0, method)
