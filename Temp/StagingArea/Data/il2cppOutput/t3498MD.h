#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3498;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t594.h"

extern "C" void m21021_gshared (t3498 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21021(__this, p0, p1, method) (( void (*) (t3498 *, t9 *, t58, MethodInfo*))m21021_gshared)(__this, p0, p1, method)
extern "C" void m21022_gshared (t3498 * __this, t594  p0, MethodInfo* method);
#define m21022(__this, p0, method) (( void (*) (t3498 *, t594 , MethodInfo*))m21022_gshared)(__this, p0, method)
extern "C" t9 * m21023_gshared (t3498 * __this, t594  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m21023(__this, p0, p1, p2, method) (( t9 * (*) (t3498 *, t594 , t470 *, t9 *, MethodInfo*))m21023_gshared)(__this, p0, p1, p2, method)
extern "C" void m21024_gshared (t3498 * __this, t9 * p0, MethodInfo* method);
#define m21024(__this, p0, method) (( void (*) (t3498 *, t9 *, MethodInfo*))m21024_gshared)(__this, p0, method)
