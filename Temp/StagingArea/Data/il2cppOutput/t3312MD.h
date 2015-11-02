#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3312;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t28.h"

extern "C" void m19008_gshared (t3312 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m19008(__this, p0, p1, method) (( void (*) (t3312 *, t9 *, t58, MethodInfo*))m19008_gshared)(__this, p0, p1, method)
extern "C" void m19009_gshared (t3312 * __this, t28  p0, MethodInfo* method);
#define m19009(__this, p0, method) (( void (*) (t3312 *, t28 , MethodInfo*))m19009_gshared)(__this, p0, method)
extern "C" t9 * m19010_gshared (t3312 * __this, t28  p0, t477 * p1, t9 * p2, MethodInfo* method);
#define m19010(__this, p0, p1, p2, method) (( t9 * (*) (t3312 *, t28 , t477 *, t9 *, MethodInfo*))m19010_gshared)(__this, p0, p1, p2, method)
extern "C" void m19011_gshared (t3312 * __this, t9 * p0, MethodInfo* method);
#define m19011(__this, p0, method) (( void (*) (t3312 *, t9 *, MethodInfo*))m19011_gshared)(__this, p0, method)
