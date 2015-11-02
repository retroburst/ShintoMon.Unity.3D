#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3837;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t3827.h"

extern "C" void m24188_gshared (t3837 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24188(__this, p0, p1, method) (( void (*) (t3837 *, t9 *, t58, MethodInfo*))m24188_gshared)(__this, p0, p1, method)
extern "C" t3827  m24190_gshared (t3837 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m24190(__this, p0, p1, method) (( t3827  (*) (t3837 *, t9 *, uint8_t, MethodInfo*))m24190_gshared)(__this, p0, p1, method)
extern "C" t9 * m24192_gshared (t3837 * __this, t9 * p0, uint8_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m24192(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3837 *, t9 *, uint8_t, t477 *, t9 *, MethodInfo*))m24192_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3827  m24194_gshared (t3837 * __this, t9 * p0, MethodInfo* method);
#define m24194(__this, p0, method) (( t3827  (*) (t3837 *, t9 *, MethodInfo*))m24194_gshared)(__this, p0, method)
