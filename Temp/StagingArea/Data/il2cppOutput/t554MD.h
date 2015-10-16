#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t554;
struct t9;
struct t336;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m16013_gshared (t554 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m16013(__this, p0, p1, method) (( void (*) (t554 *, t9 *, t58, MethodInfo*))m16013_gshared)(__this, p0, p1, method)
extern "C" void m16015_gshared (t554 * __this, t9 * p0, t336 * p1, MethodInfo* method);
#define m16015(__this, p0, p1, method) (( void (*) (t554 *, t9 *, t336 *, MethodInfo*))m16015_gshared)(__this, p0, p1, method)
extern "C" t9 * m16017_gshared (t554 * __this, t9 * p0, t336 * p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m16017(__this, p0, p1, p2, p3, method) (( t9 * (*) (t554 *, t9 *, t336 *, t463 *, t9 *, MethodInfo*))m16017_gshared)(__this, p0, p1, p2, p3, method)
extern "C" void m16019_gshared (t554 * __this, t9 * p0, MethodInfo* method);
#define m16019(__this, p0, method) (( void (*) (t554 *, t9 *, MethodInfo*))m16019_gshared)(__this, p0, method)
