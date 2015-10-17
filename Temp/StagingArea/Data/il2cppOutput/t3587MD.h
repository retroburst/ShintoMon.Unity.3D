#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3587;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m21952_gshared (t3587 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21952(__this, p0, p1, method) (( void (*) (t3587 *, t9 *, t58, MethodInfo*))m21952_gshared)(__this, p0, p1, method)
extern "C" uint64_t m21953_gshared (t3587 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21953(__this, p0, p1, method) (( uint64_t (*) (t3587 *, uint64_t, t9 *, MethodInfo*))m21953_gshared)(__this, p0, p1, method)
extern "C" t9 * m21954_gshared (t3587 * __this, uint64_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21954(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3587 *, uint64_t, t9 *, t470 *, t9 *, MethodInfo*))m21954_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint64_t m21955_gshared (t3587 * __this, t9 * p0, MethodInfo* method);
#define m21955(__this, p0, method) (( uint64_t (*) (t3587 *, t9 *, MethodInfo*))m21955_gshared)(__this, p0, method)
