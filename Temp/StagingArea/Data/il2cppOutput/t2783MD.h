#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2783;
struct t9;
struct t2;

extern "C" void m13768_gshared (t2783 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13768(__this, p0, p1, method) (( void (*) (t2783 *, t9 *, uint8_t, MethodInfo*))m13768_gshared)(__this, p0, p1, method)
extern "C" t9 * m13769_gshared (t2783 * __this, MethodInfo* method);
#define m13769(__this, method) (( t9 * (*) (t2783 *, MethodInfo*))m13769_gshared)(__this, method)
extern "C" void m13770_gshared (t2783 * __this, t9 * p0, MethodInfo* method);
#define m13770(__this, p0, method) (( void (*) (t2783 *, t9 *, MethodInfo*))m13770_gshared)(__this, p0, method)
extern "C" uint8_t m13771_gshared (t2783 * __this, MethodInfo* method);
#define m13771(__this, method) (( uint8_t (*) (t2783 *, MethodInfo*))m13771_gshared)(__this, method)
extern "C" void m13772_gshared (t2783 * __this, uint8_t p0, MethodInfo* method);
#define m13772(__this, p0, method) (( void (*) (t2783 *, uint8_t, MethodInfo*))m13772_gshared)(__this, p0, method)
extern "C" t2* m13773_gshared (t2783 * __this, MethodInfo* method);
#define m13773(__this, method) (( t2* (*) (t2783 *, MethodInfo*))m13773_gshared)(__this, method)
