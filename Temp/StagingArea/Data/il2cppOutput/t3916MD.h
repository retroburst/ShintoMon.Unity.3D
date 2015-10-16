#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3916;
struct t9;
#include "t910.h"

extern "C" void m24692_gshared (t3916 * __this, MethodInfo* method);
#define m24692(__this, method) (( void (*) (t3916 *, MethodInfo*))m24692_gshared)(__this, method)
extern "C" void m24693_gshared (t9 * __this , MethodInfo* method);
#define m24693(__this , method) (( void (*) (t9 * , MethodInfo*))m24693_gshared)(__this , method)
extern "C" int32_t m24694_gshared (t3916 * __this, t9 * p0, MethodInfo* method);
#define m24694(__this, p0, method) (( int32_t (*) (t3916 *, t9 *, MethodInfo*))m24694_gshared)(__this, p0, method)
extern "C" bool m24695_gshared (t3916 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m24695(__this, p0, p1, method) (( bool (*) (t3916 *, t9 *, t9 *, MethodInfo*))m24695_gshared)(__this, p0, p1, method)
extern "C" t3916 * m24696_gshared (t9 * __this , MethodInfo* method);
#define m24696(__this , method) (( t3916 * (*) (t9 * , MethodInfo*))m24696_gshared)(__this , method)
