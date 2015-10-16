#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3675;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t1155.h"
#include "t909.h"

extern "C" void m22958_gshared (t3675 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m22958(__this, p0, p1, method) (( void (*) (t3675 *, t9 *, t58, MethodInfo*))m22958_gshared)(__this, p0, p1, method)
extern "C" t1155  m22959_gshared (t3675 * __this, t9 * p0, t909  p1, MethodInfo* method);
#define m22959(__this, p0, p1, method) (( t1155  (*) (t3675 *, t9 *, t909 , MethodInfo*))m22959_gshared)(__this, p0, p1, method)
extern "C" t9 * m22960_gshared (t3675 * __this, t9 * p0, t909  p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m22960(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3675 *, t9 *, t909 , t463 *, t9 *, MethodInfo*))m22960_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t1155  m22961_gshared (t3675 * __this, t9 * p0, MethodInfo* method);
#define m22961(__this, p0, method) (( t1155  (*) (t3675 *, t9 *, MethodInfo*))m22961_gshared)(__this, p0, method)
