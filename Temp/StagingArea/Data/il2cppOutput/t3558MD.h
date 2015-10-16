#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3558;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3546.h"

extern "C" void m21780_gshared (t3558 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21780(__this, p0, p1, method) (( void (*) (t3558 *, t9 *, t58, MethodInfo*))m21780_gshared)(__this, p0, p1, method)
extern "C" t3546  m21781_gshared (t3558 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21781(__this, p0, p1, method) (( t3546  (*) (t3558 *, uint64_t, t9 *, MethodInfo*))m21781_gshared)(__this, p0, p1, method)
extern "C" t9 * m21782_gshared (t3558 * __this, uint64_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21782(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3558 *, uint64_t, t9 *, t463 *, t9 *, MethodInfo*))m21782_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3546  m21783_gshared (t3558 * __this, t9 * p0, MethodInfo* method);
#define m21783(__this, p0, method) (( t3546  (*) (t3558 *, t9 *, MethodInfo*))m21783_gshared)(__this, p0, method)
