#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2810;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t2798.h"

extern "C" void m13924_gshared (t2810 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13924(__this, p0, p1, method) (( void (*) (t2810 *, t9 *, t58, MethodInfo*))m13924_gshared)(__this, p0, p1, method)
extern "C" t2798  m13925_gshared (t2810 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13925(__this, p0, p1, method) (( t2798  (*) (t2810 *, t9 *, uint8_t, MethodInfo*))m13925_gshared)(__this, p0, p1, method)
extern "C" t9 * m13926_gshared (t2810 * __this, t9 * p0, uint8_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13926(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2810 *, t9 *, uint8_t, t477 *, t9 *, MethodInfo*))m13926_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2798  m13927_gshared (t2810 * __this, t9 * p0, MethodInfo* method);
#define m13927(__this, p0, method) (( t2798  (*) (t2810 *, t9 *, MethodInfo*))m13927_gshared)(__this, p0, method)
