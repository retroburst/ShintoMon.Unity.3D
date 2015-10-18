#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2803;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m13877_gshared (t2803 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13877(__this, p0, p1, method) (( void (*) (t2803 *, t9 *, t58, MethodInfo*))m13877_gshared)(__this, p0, p1, method)
extern "C" uint8_t m13878_gshared (t2803 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13878(__this, p0, p1, method) (( uint8_t (*) (t2803 *, t9 *, uint8_t, MethodInfo*))m13878_gshared)(__this, p0, p1, method)
extern "C" t9 * m13879_gshared (t2803 * __this, t9 * p0, uint8_t p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m13879(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2803 *, t9 *, uint8_t, t470 *, t9 *, MethodInfo*))m13879_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m13880_gshared (t2803 * __this, t9 * p0, MethodInfo* method);
#define m13880(__this, p0, method) (( uint8_t (*) (t2803 *, t9 *, MethodInfo*))m13880_gshared)(__this, p0, method)
