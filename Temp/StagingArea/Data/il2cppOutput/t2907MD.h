#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2907;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m14897_gshared (t2907 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14897(__this, p0, p1, method) (( void (*) (t2907 *, t9 *, t58, MethodInfo*))m14897_gshared)(__this, p0, p1, method)
extern "C" void m14898_gshared (t2907 * __this, uint16_t p0, MethodInfo* method);
#define m14898(__this, p0, method) (( void (*) (t2907 *, uint16_t, MethodInfo*))m14898_gshared)(__this, p0, method)
extern "C" t9 * m14899_gshared (t2907 * __this, uint16_t p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m14899(__this, p0, p1, p2, method) (( t9 * (*) (t2907 *, uint16_t, t463 *, t9 *, MethodInfo*))m14899_gshared)(__this, p0, p1, p2, method)
extern "C" void m14900_gshared (t2907 * __this, t9 * p0, MethodInfo* method);
#define m14900(__this, p0, method) (( void (*) (t2907 *, t9 *, MethodInfo*))m14900_gshared)(__this, p0, method)
