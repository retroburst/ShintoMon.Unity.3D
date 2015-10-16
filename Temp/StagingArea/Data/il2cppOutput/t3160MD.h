#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3160;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3150.h"

extern "C" void m17634_gshared (t3160 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17634(__this, p0, p1, method) (( void (*) (t3160 *, t9 *, t58, MethodInfo*))m17634_gshared)(__this, p0, p1, method)
extern "C" t3150  m17636_gshared (t3160 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17636(__this, p0, p1, method) (( t3150  (*) (t3160 *, t9 *, int32_t, MethodInfo*))m17636_gshared)(__this, p0, p1, method)
extern "C" t9 * m17638_gshared (t3160 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17638(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3160 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m17638_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3150  m17640_gshared (t3160 * __this, t9 * p0, MethodInfo* method);
#define m17640(__this, p0, method) (( t3150  (*) (t3160 *, t9 *, MethodInfo*))m17640_gshared)(__this, p0, method)
