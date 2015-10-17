#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3919;
struct t9;
struct t121;
#include "t304.h"

extern "C" void m24656_gshared (t3919 * __this, t121 * p0, MethodInfo* method);
#define m24656(__this, p0, method) (( void (*) (t3919 *, t121 *, MethodInfo*))m24656_gshared)(__this, p0, method)
extern "C" t9 * m24657_gshared (t3919 * __this, MethodInfo* method);
#define m24657(__this, method) (( t9 * (*) (t3919 *, MethodInfo*))m24657_gshared)(__this, method)
extern "C" void m24658_gshared (t3919 * __this, MethodInfo* method);
#define m24658(__this, method) (( void (*) (t3919 *, MethodInfo*))m24658_gshared)(__this, method)
extern "C" bool m24659_gshared (t3919 * __this, MethodInfo* method);
#define m24659(__this, method) (( bool (*) (t3919 *, MethodInfo*))m24659_gshared)(__this, method)
extern "C" t304  m24660_gshared (t3919 * __this, MethodInfo* method);
#define m24660(__this, method) (( t304  (*) (t3919 *, MethodInfo*))m24660_gshared)(__this, method)
