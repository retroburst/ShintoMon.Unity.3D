#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2897;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m14745_gshared (t2897 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14745(__this, p0, p1, method) (( void (*) (t2897 *, t9 *, t58, MethodInfo*))m14745_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14747_gshared (t2897 * __this, uint16_t p0, MethodInfo* method);
#define m14747(__this, p0, method) (( uint8_t (*) (t2897 *, uint16_t, MethodInfo*))m14747_gshared)(__this, p0, method)
extern "C" t9 * m14749_gshared (t2897 * __this, uint16_t p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m14749(__this, p0, p1, p2, method) (( t9 * (*) (t2897 *, uint16_t, t463 *, t9 *, MethodInfo*))m14749_gshared)(__this, p0, p1, p2, method)
extern "C" uint8_t m14751_gshared (t2897 * __this, t9 * p0, MethodInfo* method);
#define m14751(__this, p0, method) (( uint8_t (*) (t2897 *, t9 *, MethodInfo*))m14751_gshared)(__this, p0, method)
