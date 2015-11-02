#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3360;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m19505_gshared (t3360 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m19505(__this, p0, p1, method) (( void (*) (t3360 *, t9 *, t58, MethodInfo*))m19505_gshared)(__this, p0, p1, method)
extern "C" void m19506_gshared (t3360 * __this, uint8_t p0, MethodInfo* method);
#define m19506(__this, p0, method) (( void (*) (t3360 *, uint8_t, MethodInfo*))m19506_gshared)(__this, p0, method)
extern "C" t9 * m19507_gshared (t3360 * __this, uint8_t p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m19507(__this, p0, p1, p2, method) (( t9 * (*) (t3360 *, uint8_t, t477 *, t9 *, MethodInfo*))m19507_gshared)(__this, p0, p1, p2, method)
extern "C" void m19508_gshared (t3360 * __this, t9 * p0, MethodInfo* method);
#define m19508(__this, p0, method) (( void (*) (t3360 *, t9 *, MethodInfo*))m19508_gshared)(__this, p0, method)
