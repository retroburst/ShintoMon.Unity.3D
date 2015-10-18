#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2975;
struct t9;
struct t2;

extern "C" void m15550_gshared (t2975 * __this, int32_t p0, t9 * p1, MethodInfo* method);
#define m15550(__this, p0, p1, method) (( void (*) (t2975 *, int32_t, t9 *, MethodInfo*))m15550_gshared)(__this, p0, p1, method)
extern "C" int32_t m15551_gshared (t2975 * __this, MethodInfo* method);
#define m15551(__this, method) (( int32_t (*) (t2975 *, MethodInfo*))m15551_gshared)(__this, method)
extern "C" void m15552_gshared (t2975 * __this, int32_t p0, MethodInfo* method);
#define m15552(__this, p0, method) (( void (*) (t2975 *, int32_t, MethodInfo*))m15552_gshared)(__this, p0, method)
extern "C" t9 * m15553_gshared (t2975 * __this, MethodInfo* method);
#define m15553(__this, method) (( t9 * (*) (t2975 *, MethodInfo*))m15553_gshared)(__this, method)
extern "C" void m15554_gshared (t2975 * __this, t9 * p0, MethodInfo* method);
#define m15554(__this, p0, method) (( void (*) (t2975 *, t9 *, MethodInfo*))m15554_gshared)(__this, p0, method)
extern "C" t2* m15555_gshared (t2975 * __this, MethodInfo* method);
#define m15555(__this, method) (( t2* (*) (t2975 *, MethodInfo*))m15555_gshared)(__this, method)
