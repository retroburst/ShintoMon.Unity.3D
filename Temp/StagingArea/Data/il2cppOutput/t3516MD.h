#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3516;
struct t9;
struct t476;
struct t477;
#include "t58.h"
#include "t600.h"

extern "C" void m21213_gshared (t3516 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m21213(__this, p0, p1, method) (( void (*) (t3516 *, t9 *, t58, MethodInfo*))m21213_gshared)(__this, p0, p1, method)
extern "C" int32_t m21214_gshared (t3516 * __this, t600  p0, t600  p1, MethodInfo* method);
#define m21214(__this, p0, p1, method) (( int32_t (*) (t3516 *, t600 , t600 , MethodInfo*))m21214_gshared)(__this, p0, p1, method)
extern "C" t9 * m21215_gshared (t3516 * __this, t600  p0, t600  p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m21215(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3516 *, t600 , t600 , t477 *, t9 *, MethodInfo*))m21215_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m21216_gshared (t3516 * __this, t9 * p0, MethodInfo* method);
#define m21216(__this, p0, method) (( int32_t (*) (t3516 *, t9 *, MethodInfo*))m21216_gshared)(__this, p0, method)
