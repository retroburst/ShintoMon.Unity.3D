#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3072;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m16440_gshared (t3072 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16440(__this, p0, p1, method) (( void (*) (t3072 *, t9 *, t58, MethodInfo*))m16440_gshared)(__this, p0, p1, method)
extern "C" void m16441_gshared (t3072 * __this, t9 * p0, MethodInfo* method);
#define m16441(__this, p0, method) (( void (*) (t3072 *, t9 *, MethodInfo*))m16441_gshared)(__this, p0, method)
extern "C" t9 * m16442_gshared (t3072 * __this, t9 * p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m16442(__this, p0, p1, p2, method) (( t9 * (*) (t3072 *, t9 *, t477 *, t9 *, MethodInfo*))m16442_gshared)(__this, p0, p1, p2, method)
extern "C" void m16443_gshared (t3072 * __this, t9 * p0, MethodInfo* method);
#define m16443(__this, p0, method) (( void (*) (t3072 *, t9 *, MethodInfo*))m16443_gshared)(__this, p0, method)
