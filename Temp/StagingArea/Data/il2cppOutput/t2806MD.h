#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2806;
struct t9;
struct t476;
struct t477;
#include "t58.h"

extern "C" void m13893_gshared (t2806 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13893(__this, p0, p1, method) (( void (*) (t2806 *, t9 *, t58, MethodInfo*))m13893_gshared)(__this, p0, p1, method)
extern "C" t9 * m13894_gshared (t2806 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13894(__this, p0, p1, method) (( t9 * (*) (t2806 *, t9 *, uint8_t, MethodInfo*))m13894_gshared)(__this, p0, p1, method)
extern "C" t9 * m13895_gshared (t2806 * __this, t9 * p0, uint8_t p1, t477 * p2, t9 * p3, MethodInfo* method);
#define m13895(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2806 *, t9 *, uint8_t, t477 *, t9 *, MethodInfo*))m13895_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t9 * m13896_gshared (t2806 * __this, t9 * p0, MethodInfo* method);
#define m13896(__this, p0, method) (( t9 * (*) (t2806 *, t9 *, MethodInfo*))m13896_gshared)(__this, p0, method)
