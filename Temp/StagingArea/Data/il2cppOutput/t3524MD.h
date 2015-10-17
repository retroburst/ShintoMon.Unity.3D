#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3524;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m21347_gshared (t3524 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21347(__this, p0, p1, method) (( void (*) (t3524 *, t9 *, t58, MethodInfo*))m21347_gshared)(__this, p0, p1, method)
extern "C" t9 * m21348_gshared (t3524 * __this, t9 * p0, int64_t p1, MethodInfo* method);
#define m21348(__this, p0, p1, method) (( t9 * (*) (t3524 *, t9 *, int64_t, MethodInfo*))m21348_gshared)(__this, p0, p1, method)
extern "C" t9 * m21349_gshared (t3524 * __this, t9 * p0, int64_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21349(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3524 *, t9 *, int64_t, t470 *, t9 *, MethodInfo*))m21349_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m21350_gshared (t3524 * __this, t9 * p0, MethodInfo* method);
#define m21350(__this, p0, method) (( t9 * (*) (t3524 *, t9 *, MethodInfo*))m21350_gshared)(__this, p0, method)
