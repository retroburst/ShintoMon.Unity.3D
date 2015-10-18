#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3591;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t3579.h"

extern "C" void m21984_gshared (t3591 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21984(__this, p0, p1, method) (( void (*) (t3591 *, t9 *, t58, MethodInfo*))m21984_gshared)(__this, p0, p1, method)
extern "C" t3579  m21985_gshared (t3591 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21985(__this, p0, p1, method) (( t3579  (*) (t3591 *, uint64_t, t9 *, MethodInfo*))m21985_gshared)(__this, p0, p1, method)
extern "C" t9 * m21986_gshared (t3591 * __this, uint64_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21986(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3591 *, uint64_t, t9 *, t470 *, t9 *, MethodInfo*))m21986_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3579  m21987_gshared (t3591 * __this, t9 * p0, MethodInfo* method);
#define m21987(__this, p0, method) (( t3579  (*) (t3591 *, t9 *, MethodInfo*))m21987_gshared)(__this, p0, method)
