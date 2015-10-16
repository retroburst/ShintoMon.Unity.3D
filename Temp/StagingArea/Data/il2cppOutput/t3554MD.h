#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3554;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m21749_gshared (t3554 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21749(__this, p0, p1, method) (( void (*) (t3554 *, t9 *, t58, MethodInfo*))m21749_gshared)(__this, p0, p1, method)
extern "C" uint64_t m21750_gshared (t3554 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21750(__this, p0, p1, method) (( uint64_t (*) (t3554 *, uint64_t, t9 *, MethodInfo*))m21750_gshared)(__this, p0, p1, method)
extern "C" t9 * m21751_gshared (t3554 * __this, uint64_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m21751(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3554 *, uint64_t, t9 *, t463 *, t9 *, MethodInfo*))m21751_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint64_t m21752_gshared (t3554 * __this, t9 * p0, MethodInfo* method);
#define m21752(__this, p0, method) (( uint64_t (*) (t3554 *, t9 *, MethodInfo*))m21752_gshared)(__this, p0, method)
