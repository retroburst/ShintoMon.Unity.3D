#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3880;
struct t9;
struct t121;
#include "t1687.h"

extern "C" void m24463_gshared (t3880 * __this, t121 * p0, MethodInfo* method);
#define m24463(__this, p0, method) (( void (*) (t3880 *, t121 *, MethodInfo*))m24463_gshared)(__this, p0, method)
extern "C" t9 * m24464_gshared (t3880 * __this, MethodInfo* method);
#define m24464(__this, method) (( t9 * (*) (t3880 *, MethodInfo*))m24464_gshared)(__this, method)
extern "C" void m24465_gshared (t3880 * __this, MethodInfo* method);
#define m24465(__this, method) (( void (*) (t3880 *, MethodInfo*))m24465_gshared)(__this, method)
extern "C" bool m24466_gshared (t3880 * __this, MethodInfo* method);
#define m24466(__this, method) (( bool (*) (t3880 *, MethodInfo*))m24466_gshared)(__this, method)
extern "C" t1687  m24467_gshared (t3880 * __this, MethodInfo* method);
#define m24467(__this, method) (( t1687  (*) (t3880 *, MethodInfo*))m24467_gshared)(__this, method)
