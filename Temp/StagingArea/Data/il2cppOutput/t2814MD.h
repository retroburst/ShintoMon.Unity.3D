#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2814;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t2800.h"

extern "C" void m13971_gshared (t2814 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13971(__this, p0, p1, method) (( void (*) (t2814 *, t9 *, t58, MethodInfo*))m13971_gshared)(__this, p0, p1, method)
extern "C" t2800  m13973_gshared (t2814 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13973(__this, p0, p1, method) (( t2800  (*) (t2814 *, t9 *, uint8_t, MethodInfo*))m13973_gshared)(__this, p0, p1, method)
extern "C" t9 * m13975_gshared (t2814 * __this, t9 * p0, uint8_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13975(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2814 *, t9 *, uint8_t, t463 *, t9 *, MethodInfo*))m13975_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2800  m13977_gshared (t2814 * __this, t9 * p0, MethodInfo* method);
#define m13977(__this, p0, method) (( t2800  (*) (t2814 *, t9 *, MethodInfo*))m13977_gshared)(__this, p0, method)
