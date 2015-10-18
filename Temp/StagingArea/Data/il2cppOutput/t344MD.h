#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t344;
struct t9;
struct t469;
struct t470;
#include "t58.h"
#include "t347.h"

extern "C" void m2416_gshared (t344 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m2416(__this, p0, p1, method) (( void (*) (t344 *, t9 *, t58, MethodInfo*))m2416_gshared)(__this, p0, p1, method)
extern "C" int32_t m16219_gshared (t344 * __this, t347  p0, t347  p1, MethodInfo* method);
#define m16219(__this, p0, p1, method) (( int32_t (*) (t344 *, t347 , t347 , MethodInfo*))m16219_gshared)(__this, p0, p1, method)
extern "C" t9 * m16220_gshared (t344 * __this, t347  p0, t347  p1, t470 * p2, t9 * p3, MethodInfo* method);
#define m16220(__this, p0, p1, p2, p3, method) (( t9 * (*) (t344 *, t347 , t347 , t470 *, t9 *, MethodInfo*))m16220_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m16221_gshared (t344 * __this, t9 * p0, MethodInfo* method);
#define m16221(__this, p0, method) (( int32_t (*) (t344 *, t9 *, MethodInfo*))m16221_gshared)(__this, p0, method)
