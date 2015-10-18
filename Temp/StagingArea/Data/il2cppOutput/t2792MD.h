#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2792;
struct t9;
struct t2;

extern "C" void m13797_gshared (t2792 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13797(__this, p0, p1, method) (( void (*) (t2792 *, t9 *, uint8_t, MethodInfo*))m13797_gshared)(__this, p0, p1, method)
extern "C" t9 * m13798_gshared (t2792 * __this, MethodInfo* method);
#define m13798(__this, method) (( t9 * (*) (t2792 *, MethodInfo*))m13798_gshared)(__this, method)
extern "C" void m13799_gshared (t2792 * __this, t9 * p0, MethodInfo* method);
#define m13799(__this, p0, method) (( void (*) (t2792 *, t9 *, MethodInfo*))m13799_gshared)(__this, p0, method)
extern "C" uint8_t m13800_gshared (t2792 * __this, MethodInfo* method);
#define m13800(__this, method) (( uint8_t (*) (t2792 *, MethodInfo*))m13800_gshared)(__this, method)
extern "C" void m13801_gshared (t2792 * __this, uint8_t p0, MethodInfo* method);
#define m13801(__this, p0, method) (( void (*) (t2792 *, uint8_t, MethodInfo*))m13801_gshared)(__this, p0, method)
extern "C" t2* m13802_gshared (t2792 * __this, MethodInfo* method);
#define m13802(__this, method) (( t2* (*) (t2792 *, MethodInfo*))m13802_gshared)(__this, method)
