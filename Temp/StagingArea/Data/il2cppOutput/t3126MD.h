#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3126;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m17349_gshared (t3126 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17349(__this, p0, p1, method) (( void (*) (t3126 *, t9 *, t58, MethodInfo*))m17349_gshared)(__this, p0, p1, method)
extern "C" t1155  m17350_gshared (t3126 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17350(__this, p0, p1, method) (( t1155  (*) (t3126 *, t9 *, int32_t, MethodInfo*))m17350_gshared)(__this, p0, p1, method)
extern "C" t9 * m17351_gshared (t3126 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17351(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3126 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m17351_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m17352_gshared (t3126 * __this, t9 * p0, MethodInfo* method);
#define m17352(__this, p0, method) (( t1155  (*) (t3126 *, t9 *, MethodInfo*))m17352_gshared)(__this, p0, method)
