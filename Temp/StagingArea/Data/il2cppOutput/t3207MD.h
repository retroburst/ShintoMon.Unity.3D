#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3207;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t452.h"

extern "C" void m18108_gshared (t3207 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m18108(__this, p0, p1, method) (( void (*) (t3207 *, t9 *, t58, MethodInfo*))m18108_gshared)(__this, p0, p1, method)
extern "C" int32_t m18109_gshared (t3207 * __this, t452  p0, t452  p1, MethodInfo* method);
#define m18109(__this, p0, p1, method) (( int32_t (*) (t3207 *, t452 , t452 , MethodInfo*))m18109_gshared)(__this, p0, p1, method)
extern "C" t9 * m18110_gshared (t3207 * __this, t452  p0, t452  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m18110(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3207 *, t452 , t452 , t463 *, t9 *, MethodInfo*))m18110_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m18111_gshared (t3207 * __this, t9 * p0, MethodInfo* method);
#define m18111(__this, p0, method) (( int32_t (*) (t3207 *, t9 *, MethodInfo*))m18111_gshared)(__this, p0, method)
