#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2800;
struct t9;
struct t121;

extern "C" void m13847_gshared (t2800 * __this, t121 * p0, MethodInfo* method);
#define m13847(__this, p0, method) (( void (*) (t2800 *, t121 *, MethodInfo*))m13847_gshared)(__this, p0, method)
extern "C" t9 * m13848_gshared (t2800 * __this, MethodInfo* method);
#define m13848(__this, method) (( t9 * (*) (t2800 *, MethodInfo*))m13848_gshared)(__this, method)
extern "C" void m13849_gshared (t2800 * __this, MethodInfo* method);
#define m13849(__this, method) (( void (*) (t2800 *, MethodInfo*))m13849_gshared)(__this, method)
extern "C" bool m13850_gshared (t2800 * __this, MethodInfo* method);
#define m13850(__this, method) (( bool (*) (t2800 *, MethodInfo*))m13850_gshared)(__this, method)
extern "C" uint8_t m13851_gshared (t2800 * __this, MethodInfo* method);
#define m13851(__this, method) (( uint8_t (*) (t2800 *, MethodInfo*))m13851_gshared)(__this, method)
