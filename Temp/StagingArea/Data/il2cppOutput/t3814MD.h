#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3814;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m24090_gshared (t3814 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24090(__this, p0, p1, method) (( void (*) (t3814 *, t9 *, t58, MethodInfo*))m24090_gshared)(__this, p0, p1, method)
extern "C" int32_t m24091_gshared (t3814 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24091(__this, p0, p1, method) (( int32_t (*) (t3814 *, int32_t, int32_t, MethodInfo*))m24091_gshared)(__this, p0, p1, method)
extern "C" t9 * m24092_gshared (t3814 * __this, int32_t p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m24092(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3814 *, int32_t, int32_t, t463 *, t9 *, MethodInfo*))m24092_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m24093_gshared (t3814 * __this, t9 * p0, MethodInfo* method);
#define m24093(__this, p0, method) (( int32_t (*) (t3814 *, t9 *, MethodInfo*))m24093_gshared)(__this, p0, method)
