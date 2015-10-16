#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2970;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m15554_gshared (t2970 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15554(__this, p0, p1, method) (( void (*) (t2970 *, t9 *, t58, MethodInfo*))m15554_gshared)(__this, p0, p1, method)
extern "C" int32_t m15555_gshared (t2970 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15555(__this, p0, p1, method) (( int32_t (*) (t2970 *, int32_t, t9 *, MethodInfo*))m15555_gshared)(__this, p0, p1, method)
extern "C" t9 * m15556_gshared (t2970 * __this, int32_t p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m15556(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2970 *, int32_t, t9 *, t463 *, t9 *, MethodInfo*))m15556_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15557_gshared (t2970 * __this, t9 * p0, MethodInfo* method);
#define m15557(__this, p0, method) (( int32_t (*) (t2970 *, t9 *, MethodInfo*))m15557_gshared)(__this, p0, method)
