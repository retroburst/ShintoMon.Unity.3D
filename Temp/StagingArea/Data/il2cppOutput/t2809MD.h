#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2809;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m13916_gshared (t2809 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13916(__this, p0, p1, method) (( void (*) (t2809 *, t9 *, t58, MethodInfo*))m13916_gshared)(__this, p0, p1, method)
extern "C" uint8_t m13917_gshared (t2809 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13917(__this, p0, p1, method) (( uint8_t (*) (t2809 *, t9 *, uint8_t, MethodInfo*))m13917_gshared)(__this, p0, p1, method)
extern "C" t9 * m13918_gshared (t2809 * __this, t9 * p0, uint8_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13918(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2809 *, t9 *, uint8_t, t477 *, t9 *, MethodInfo*))m13918_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m13919_gshared (t2809 * __this, t9 * p0, MethodInfo* method);
#define m13919(__this, p0, method) (( uint8_t (*) (t2809 *, t9 *, MethodInfo*))m13919_gshared)(__this, p0, method)
