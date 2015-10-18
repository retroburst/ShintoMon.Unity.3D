#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3511;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t593.h"

extern "C" void m21179_gshared (t3511 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21179(__this, p0, p1, method) (( void (*) (t3511 *, t9 *, t58, MethodInfo*))m21179_gshared)(__this, p0, p1, method)
extern "C" int32_t m21180_gshared (t3511 * __this, t593  p0, t593  p1, MethodInfo* method);
#define m21180(__this, p0, p1, method) (( int32_t (*) (t3511 *, t593 , t593 , MethodInfo*))m21180_gshared)(__this, p0, p1, method)
extern "C" t9 * m21181_gshared (t3511 * __this, t593  p0, t593  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m21181(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3511 *, t593 , t593 , t470 *, t9 *, MethodInfo*))m21181_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m21182_gshared (t3511 * __this, t9 * p0, MethodInfo* method);
#define m21182(__this, p0, method) (( int32_t (*) (t3511 *, t9 *, MethodInfo*))m21182_gshared)(__this, p0, method)
