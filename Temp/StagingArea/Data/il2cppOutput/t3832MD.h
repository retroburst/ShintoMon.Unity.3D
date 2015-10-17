#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3832;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3822.h"

extern "C" void m24153_gshared (t3832 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24153(__this, p0, p1, method) (( void (*) (t3832 *, t9 *, t58, MethodInfo*))m24153_gshared)(__this, p0, p1, method)
extern "C" t3822  m24155_gshared (t3832 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m24155(__this, p0, p1, method) (( t3822  (*) (t3832 *, t9 *, uint8_t, MethodInfo*))m24155_gshared)(__this, p0, p1, method)
extern "C" t9 * m24157_gshared (t3832 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m24157(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3832 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m24157_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3822  m24159_gshared (t3832 * __this, t9 * p0, MethodInfo* method);
#define m24159(__this, p0, method) (( t3822  (*) (t3832 *, t9 *, MethodInfo*))m24159_gshared)(__this, p0, method)
