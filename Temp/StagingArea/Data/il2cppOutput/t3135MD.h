#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3135;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m17345_gshared (t3135 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m17345(__this, p0, p1, method) (( void (*) (t3135 *, t9 *, t58, MethodInfo*))m17345_gshared)(__this, p0, p1, method)
extern "C" int32_t m17346_gshared (t3135 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17346(__this, p0, p1, method) (( int32_t (*) (t3135 *, t9 *, int32_t, MethodInfo*))m17346_gshared)(__this, p0, p1, method)
extern "C" t9 * m17347_gshared (t3135 * __this, t9 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m17347(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3135 *, t9 *, int32_t, t463 *, t9 *, MethodInfo*))m17347_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m17348_gshared (t3135 * __this, t9 * p0, MethodInfo* method);
#define m17348(__this, p0, method) (( int32_t (*) (t3135 *, t9 *, MethodInfo*))m17348_gshared)(__this, p0, method)
