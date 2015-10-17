#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2916;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m14925_gshared (t2916 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14925(__this, p0, p1, method) (( void (*) (t2916 *, t9 *, t58, MethodInfo*))m14925_gshared)(__this, p0, p1, method)
extern "C" void m14926_gshared (t2916 * __this, uint16_t p0, MethodInfo* method);
#define m14926(__this, p0, method) (( void (*) (t2916 *, uint16_t, MethodInfo*))m14926_gshared)(__this, p0, method)
extern "C" t9 * m14927_gshared (t2916 * __this, uint16_t p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m14927(__this, p0, p1, p2, method) (( t9 * (*) (t2916 *, uint16_t, t470 *, t9 *, MethodInfo*))m14927_gshared)(__this, p0, p1, p2, method)
extern "C" void m14928_gshared (t2916 * __this, t9 * p0, MethodInfo* method);
#define m14928(__this, p0, method) (( void (*) (t2916 *, t9 *, MethodInfo*))m14928_gshared)(__this, p0, method)
