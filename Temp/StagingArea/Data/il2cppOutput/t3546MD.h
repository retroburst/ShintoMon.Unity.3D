#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3546;
struct t9;
struct t2;

extern "C" void m21692_gshared (t3546 * __this, uint64_t p0, t9 * p1, MethodInfo* method);
#define m21692(__this, p0, p1, method) (( void (*) (t3546 *, uint64_t, t9 *, MethodInfo*))m21692_gshared)(__this, p0, p1, method)
extern "C" uint64_t m21693_gshared (t3546 * __this, MethodInfo* method);
#define m21693(__this, method) (( uint64_t (*) (t3546 *, MethodInfo*))m21693_gshared)(__this, method)
extern "C" void m21694_gshared (t3546 * __this, uint64_t p0, MethodInfo* method);
#define m21694(__this, p0, method) (( void (*) (t3546 *, uint64_t, MethodInfo*))m21694_gshared)(__this, p0, method)
extern "C" t9 * m21695_gshared (t3546 * __this, MethodInfo* method);
#define m21695(__this, method) (( t9 * (*) (t3546 *, MethodInfo*))m21695_gshared)(__this, method)
extern "C" void m21696_gshared (t3546 * __this, t9 * p0, MethodInfo* method);
#define m21696(__this, p0, method) (( void (*) (t3546 *, t9 *, MethodInfo*))m21696_gshared)(__this, p0, method)
extern "C" t2* m21697_gshared (t3546 * __this, MethodInfo* method);
#define m21697(__this, method) (( t2* (*) (t3546 *, MethodInfo*))m21697_gshared)(__this, method)
