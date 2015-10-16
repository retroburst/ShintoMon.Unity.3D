#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3601;
struct t9;
struct t2;
#include "t909.h"

extern "C" void m22130_gshared (t3601 * __this, t9 * p0, t909  p1, MethodInfo* method);
#define m22130(__this, p0, p1, method) (( void (*) (t3601 *, t9 *, t909 , MethodInfo*))m22130_gshared)(__this, p0, p1, method)
extern "C" t9 * m22131_gshared (t3601 * __this, MethodInfo* method);
#define m22131(__this, method) (( t9 * (*) (t3601 *, MethodInfo*))m22131_gshared)(__this, method)
extern "C" void m22132_gshared (t3601 * __this, t9 * p0, MethodInfo* method);
#define m22132(__this, p0, method) (( void (*) (t3601 *, t9 *, MethodInfo*))m22132_gshared)(__this, p0, method)
extern "C" t909  m22133_gshared (t3601 * __this, MethodInfo* method);
#define m22133(__this, method) (( t909  (*) (t3601 *, MethodInfo*))m22133_gshared)(__this, method)
extern "C" void m22134_gshared (t3601 * __this, t909  p0, MethodInfo* method);
#define m22134(__this, p0, method) (( void (*) (t3601 *, t909 , MethodInfo*))m22134_gshared)(__this, p0, method)
extern "C" t2* m22135_gshared (t3601 * __this, MethodInfo* method);
#define m22135(__this, method) (( t2* (*) (t3601 *, MethodInfo*))m22135_gshared)(__this, method)
