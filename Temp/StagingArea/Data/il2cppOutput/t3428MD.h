#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3428;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t878.h"

extern "C" void m20347_gshared (t3428 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m20347(__this, p0, p1, method) (( void (*) (t3428 *, t9 *, t58, MethodInfo*))m20347_gshared)(__this, p0, p1, method)
extern "C" t878  m20349_gshared (t3428 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m20349(__this, p0, p1, method) (( t878  (*) (t3428 *, t9 *, t9 *, MethodInfo*))m20349_gshared)(__this, p0, p1, method)
extern "C" t9 * m20351_gshared (t3428 * __this, t9 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m20351(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3428 *, t9 *, t9 *, t463 *, t9 *, MethodInfo*))m20351_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t878  m20353_gshared (t3428 * __this, t9 * p0, MethodInfo* method);
#define m20353(__this, p0, method) (( t878  (*) (t3428 *, t9 *, MethodInfo*))m20353_gshared)(__this, p0, method)
