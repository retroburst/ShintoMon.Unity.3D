#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2985;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m15626_gshared (t2985 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m15626(__this, p0, p1, method) (( void (*) (t2985 *, t9 *, t58, MethodInfo*))m15626_gshared)(__this, p0, p1, method)
extern "C" int32_t m15627_gshared (t2985 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15627(__this, p0, p1, method) (( int32_t (*) (t2985 *, int32_t, t9 *, MethodInfo*))m15627_gshared)(__this, p0, p1, method)
extern "C" t9 * m15628_gshared (t2985 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m15628(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2985 *, int32_t, t9 *, t477 *, t9 *, MethodInfo*))m15628_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m15629_gshared (t2985 * __this, t9 * p0, MethodInfo* method);
#define m15629(__this, p0, method) (( int32_t (*) (t2985 *, t9 *, MethodInfo*))m15629_gshared)(__this, p0, method)
