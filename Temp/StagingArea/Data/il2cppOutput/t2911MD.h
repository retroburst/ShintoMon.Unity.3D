#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2911;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m14808_gshared (t2911 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14808(__this, p0, p1, method) (( void (*) (t2911 *, t9 *, t58, MethodInfo*))m14808_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14810_gshared (t2911 * __this, uint16_t p0, MethodInfo* method);
#define m14810(__this, p0, method) (( uint8_t (*) (t2911 *, uint16_t, MethodInfo*))m14810_gshared)(__this, p0, method)
extern "C" t9 * m14812_gshared (t2911 * __this, uint16_t p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m14812(__this, p0, p1, p2, method) (( t9 * (*) (t2911 *, uint16_t, t477 *, t9 *, MethodInfo*))m14812_gshared)(__this, p0, p1, p2, method)
extern "C" uint8_t m14814_gshared (t2911 * __this, t9 * p0, MethodInfo* method);
#define m14814(__this, p0, method) (( uint8_t (*) (t2911 *, t9 *, MethodInfo*))m14814_gshared)(__this, p0, method)
