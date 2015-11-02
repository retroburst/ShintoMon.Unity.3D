#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3711;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"
#include "t922.h"

extern "C" void m23186_gshared (t3711 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m23186(__this, p0, p1, method) (( void (*) (t3711 *, t9 *, t58, MethodInfo*))m23186_gshared)(__this, p0, p1, method)
extern "C" t1170  m23187_gshared (t3711 * __this, t9 * p0, t922  p1, MethodInfo* method);
#define m23187(__this, p0, p1, method) (( t1170  (*) (t3711 *, t9 *, t922 , MethodInfo*))m23187_gshared)(__this, p0, p1, method)
extern "C" t9 * m23188_gshared (t3711 * __this, t9 * p0, t922  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m23188(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3711 *, t9 *, t922 , t477 *, t9 *, MethodInfo*))m23188_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m23189_gshared (t3711 * __this, t9 * p0, MethodInfo* method);
#define m23189(__this, p0, method) (( t1170  (*) (t3711 *, t9 *, MethodInfo*))m23189_gshared)(__this, p0, method)
