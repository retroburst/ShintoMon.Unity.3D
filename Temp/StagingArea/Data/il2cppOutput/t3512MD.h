#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3512;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t600.h"

extern "C" void m21199_gshared (t3512 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21199(__this, p0, p1, method) (( void (*) (t3512 *, t9 *, t58, MethodInfo*))m21199_gshared)(__this, p0, p1, method)
extern "C" bool m21200_gshared (t3512 * __this, t600  p0, MethodInfo* method);
#define m21200(__this, p0, method) (( bool (*) (t3512 *, t600 , MethodInfo*))m21200_gshared)(__this, p0, method)
extern "C" t9 * m21201_gshared (t3512 * __this, t600  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m21201(__this, p0, p1, p2, method) (( t9 * (*) (t3512 *, t600 , t477 *, t9 *, MethodInfo*))m21201_gshared)(__this, p0, p1, p2, method)
extern "C" bool m21202_gshared (t3512 * __this, t9 * p0, MethodInfo* method);
#define m21202(__this, p0, method) (( bool (*) (t3512 *, t9 *, MethodInfo*))m21202_gshared)(__this, p0, method)
