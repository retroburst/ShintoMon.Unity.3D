#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3714;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3632.h"
#include "t916.h"

extern "C" void m23155_gshared (t3714 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23155(__this, p0, p1, method) (( void (*) (t3714 *, t9 *, t58, MethodInfo*))m23155_gshared)(__this, p0, p1, method)
extern "C" t3632  m23156_gshared (t3714 * __this, t9 * p0, t916  p1, MethodInfo* method);
#define m23156(__this, p0, p1, method) (( t3632  (*) (t3714 *, t9 *, t916 , MethodInfo*))m23156_gshared)(__this, p0, p1, method)
extern "C" t9 * m23157_gshared (t3714 * __this, t9 * p0, t916  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m23157(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3714 *, t9 *, t916 , t470 *, t9 *, MethodInfo*))m23157_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3632  m23158_gshared (t3714 * __this, t9 * p0, MethodInfo* method);
#define m23158(__this, p0, method) (( t3632  (*) (t3714 *, t9 *, MethodInfo*))m23158_gshared)(__this, p0, method)
