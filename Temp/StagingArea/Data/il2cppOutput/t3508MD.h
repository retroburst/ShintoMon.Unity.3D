#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3508;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t593.h"

extern "C" void m21168_gshared (t3508 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21168(__this, p0, p1, method) (( void (*) (t3508 *, t9 *, t58, MethodInfo*))m21168_gshared)(__this, p0, p1, method)
extern "C" void m21169_gshared (t3508 * __this, t593  p0, MethodInfo* method);
#define m21169(__this, p0, method) (( void (*) (t3508 *, t593 , MethodInfo*))m21169_gshared)(__this, p0, method)
extern "C" t9 * m21170_gshared (t3508 * __this, t593  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m21170(__this, p0, p1, p2, method) (( t9 * (*) (t3508 *, t593 , t470 *, t9 *, MethodInfo*))m21170_gshared)(__this, p0, p1, p2, method)
extern "C" void m21171_gshared (t3508 * __this, t9 * p0, MethodInfo* method);
#define m21171(__this, p0, method) (( void (*) (t3508 *, t9 *, MethodInfo*))m21171_gshared)(__this, p0, method)
