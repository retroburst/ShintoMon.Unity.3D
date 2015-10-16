#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2794;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m13848_gshared (t2794 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m13848(__this, p0, p1, method) (( void (*) (t2794 *, t9 *, t58, MethodInfo*))m13848_gshared)(__this, p0, p1, method)
extern "C" uint8_t m13849_gshared (t2794 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
#define m13849(__this, p0, p1, method) (( uint8_t (*) (t2794 *, t9 *, uint8_t, MethodInfo*))m13849_gshared)(__this, p0, p1, method)
extern "C" t9 * m13850_gshared (t2794 * __this, t9 * p0, uint8_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m13850(__this, p0, p1, p2, p3, method) (( t9 * (*) (t2794 *, t9 *, uint8_t, t463 *, t9 *, MethodInfo*))m13850_gshared)(__this, p0, p1, p2, p3, method)
extern "C" uint8_t m13851_gshared (t2794 * __this, t9 * p0, MethodInfo* method);
#define m13851(__this, p0, method) (( uint8_t (*) (t2794 *, t9 *, MethodInfo*))m13851_gshared)(__this, p0, method)
