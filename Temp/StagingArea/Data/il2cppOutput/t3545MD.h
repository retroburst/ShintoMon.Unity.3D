#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3545;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"

extern "C" void m21776_gshared (t3545 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21776(__this, p0, p1, method) (( void (*) (t3545 *, t9 *, t58, MethodInfo*))m21776_gshared)(__this, p0, p1, method)
extern "C" t1155  m21777_gshared (t3545 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21777(__this, p0, p1, method) (( t1155  (*) (t3545 *, uint64_t, t9 *, MethodInfo*))m21777_gshared)(__this, p0, p1, method)
extern "C" t9 * m21778_gshared (t3545 * __this, uint64_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21778(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3545 *, uint64_t, t9 *, t463 *, t9 *, MethodInfo*))m21778_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m21779_gshared (t3545 * __this, t9 * p0, MethodInfo* method);
#define m21779(__this, p0, method) (( t1155  (*) (t3545 *, t9 *, MethodInfo*))m21779_gshared)(__this, p0, method)
