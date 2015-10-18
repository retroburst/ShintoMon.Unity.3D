#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2906;
struct t9;
struct t469;
struct t470;
#include "t58.h"

extern "C" void m14774_gshared (t2906 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14774(__this, p0, p1, method) (( void (*) (t2906 *, t9 *, t58, MethodInfo*))m14774_gshared)(__this, p0, p1, method)
extern "C" uint8_t m14776_gshared (t2906 * __this, uint16_t p0, MethodInfo* method);
#define m14776(__this, p0, method) (( uint8_t (*) (t2906 *, uint16_t, MethodInfo*))m14776_gshared)(__this, p0, method)
extern "C" t9 * m14778_gshared (t2906 * __this, uint16_t p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m14778(__this, p0, p1, p2, method) (( t9 * (*) (t2906 *, uint16_t, t470 *, t9 *, MethodInfo*))m14778_gshared)(__this, p0, p1, p2, method)
extern "C" uint8_t m14780_gshared (t2906 * __this, t9 * p0, MethodInfo* method);
#define m14780(__this, p0, method) (( uint8_t (*) (t2906 *, t9 *, MethodInfo*))m14780_gshared)(__this, p0, method)
