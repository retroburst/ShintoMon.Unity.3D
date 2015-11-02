#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2797;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t1170.h"

extern "C" void m13920_gshared (t2797 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13920(__this, p0, p1, method) (( void (*) (t2797 *, t9 *, t58, MethodInfo*))m13920_gshared)(__this, p0, p1, method)
extern "C" t1170  m13921_gshared (t2797 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13921(__this, p0, p1, method) (( t1170  (*) (t2797 *, t9 *, uint8_t, MethodInfo*))m13921_gshared)(__this, p0, p1, method)
extern "C" t9 * m13922_gshared (t2797 * __this, t9 * p0, uint8_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13922(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2797 *, t9 *, uint8_t, t477 *, t9 *, MethodInfo*))m13922_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1170  m13923_gshared (t2797 * __this, t9 * p0, MethodInfo* method);
#define m13923(__this, p0, method) (( t1170  (*) (t2797 *, t9 *, MethodInfo*))m13923_gshared)(__this, p0, method)
