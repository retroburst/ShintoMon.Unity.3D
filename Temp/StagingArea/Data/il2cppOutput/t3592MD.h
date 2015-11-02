#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3592;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m21987_gshared (t3592 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21987(__this, p0, p1, method) (( void (*) (t3592 *, t9 *, t58, MethodInfo*))m21987_gshared)(__this, p0, p1, method)
extern "C" uint64_t m21988_gshared (t3592 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21988(__this, p0, p1, method) (( uint64_t (*) (t3592 *, uint64_t, t9 *, MethodInfo*))m21988_gshared)(__this, p0, p1, method)
extern "C" t9 * m21989_gshared (t3592 * __this, uint64_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21989(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3592 *, uint64_t, t9 *, t477 *, t9 *, MethodInfo*))m21989_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint64_t m21990_gshared (t3592 * __this, t9 * p0, MethodInfo* method);
#define m21990(__this, p0, method) (( uint64_t (*) (t3592 *, t9 *, MethodInfo*))m21990_gshared)(__this, p0, method)
