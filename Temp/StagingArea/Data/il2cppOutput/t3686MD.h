#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3686;
#include "t909.h"

extern "C" void m22977_gshared (t3686 * __this, MethodInfo* method);
#define m22977(__this, method) (( void (*) (t3686 *, MethodInfo*))m22977_gshared)(__this, method)
extern "C" int32_t m22978_gshared (t3686 * __this, t909  p0, MethodInfo* method);
#define m22978(__this, p0, method) (( int32_t (*) (t3686 *, t909 , MethodInfo*))m22978_gshared)(__this, p0, method)
extern "C" bool m22979_gshared (t3686 * __this, t909  p0, t909  p1, MethodInfo* method);
#define m22979(__this, p0, p1, method) (( bool (*) (t3686 *, t909 , t909 , MethodInfo*))m22979_gshared)(__this, p0, p1, method)
