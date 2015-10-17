#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2793;
struct t9;
struct t121;
#include "t2792.h"

extern "C" void m13802_gshared (t2793 * __this, t121 * p0, MethodInfo* method);
#define m13802(__this, p0, method) (( void (*) (t2793 *, t121 *, MethodInfo*))m13802_gshared)(__this, p0, method)
extern "C" t9 * m13803_gshared (t2793 * __this, MethodInfo* method);
#define m13803(__this, method) (( t9 * (*) (t2793 *, MethodInfo*))m13803_gshared)(__this, method)
extern "C" void m13804_gshared (t2793 * __this, MethodInfo* method);
#define m13804(__this, method) (( void (*) (t2793 *, MethodInfo*))m13804_gshared)(__this, method)
extern "C" bool m13805_gshared (t2793 * __this, MethodInfo* method);
#define m13805(__this, method) (( bool (*) (t2793 *, MethodInfo*))m13805_gshared)(__this, method)
extern "C" t2792  m13806_gshared (t2793 * __this, MethodInfo* method);
#define m13806(__this, method) (( t2792  (*) (t2793 *, MethodInfo*))m13806_gshared)(__this, method)
