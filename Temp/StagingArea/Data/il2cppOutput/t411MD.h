#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t411;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t43.h"

extern "C" void m2632_gshared (t411 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2632(__this, p0, p1, method) (( void (*) (t411 *, t9 *, t58, MethodInfo*))m2632_gshared)(__this, p0, p1, method)
extern "C" void m17406_gshared (t411 * __this, t43  p0, MethodInfo* method);
#define m17406(__this, p0, method) (( void (*) (t411 *, t43 , MethodInfo*))m17406_gshared)(__this, p0, method)
extern "C" t9 * m17407_gshared (t411 * __this, t43  p0, t470 * p1, t9 * p2, MethodInfo* method);
#define m17407(__this, p0, p1, p2, method) (( t9 * (*) (t411 *, t43 , t470 *, t9 *, MethodInfo*))m17407_gshared)(__this, p0, p1, p2, method)
extern "C" void m17408_gshared (t411 * __this, t9 * p0, MethodInfo* method);
#define m17408(__this, p0, method) (( void (*) (t411 *, t9 *, MethodInfo*))m17408_gshared)(__this, p0, method)
