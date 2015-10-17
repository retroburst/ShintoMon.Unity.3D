#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3161;
struct t9;
struct t2;

extern "C" void m17488_gshared (t3161 * __this, t9 * p0, int32_t p1, MethodInfo* method);
#define m17488(__this, p0, p1, method) (( void (*) (t3161 *, t9 *, int32_t, MethodInfo*))m17488_gshared)(__this, p0, p1, method)
extern "C" t9 * m17489_gshared (t3161 * __this, MethodInfo* method);
#define m17489(__this, method) (( t9 * (*) (t3161 *, MethodInfo*))m17489_gshared)(__this, method)
extern "C" void m17490_gshared (t3161 * __this, t9 * p0, MethodInfo* method);
#define m17490(__this, p0, method) (( void (*) (t3161 *, t9 *, MethodInfo*))m17490_gshared)(__this, p0, method)
extern "C" int32_t m17491_gshared (t3161 * __this, MethodInfo* method);
#define m17491(__this, method) (( int32_t (*) (t3161 *, MethodInfo*))m17491_gshared)(__this, method)
extern "C" void m17492_gshared (t3161 * __this, int32_t p0, MethodInfo* method);
#define m17492(__this, p0, method) (( void (*) (t3161 *, int32_t, MethodInfo*))m17492_gshared)(__this, p0, method)
extern "C" t2* m17493_gshared (t3161 * __this, MethodInfo* method);
#define m17493(__this, method) (( t2* (*) (t3161 *, MethodInfo*))m17493_gshared)(__this, method)
