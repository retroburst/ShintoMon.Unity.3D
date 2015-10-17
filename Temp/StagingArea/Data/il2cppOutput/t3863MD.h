#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3863;
struct t9;
struct t121;

extern "C" void m24381_gshared (t3863 * __this, t121 * p0, MethodInfo* method);
#define m24381(__this, p0, method) (( void (*) (t3863 *, t121 *, MethodInfo*))m24381_gshared)(__this, p0, method)
extern "C" t9 * m24382_gshared (t3863 * __this, MethodInfo* method);
#define m24382(__this, method) (( t9 * (*) (t3863 *, MethodInfo*))m24382_gshared)(__this, method)
extern "C" void m24383_gshared (t3863 * __this, MethodInfo* method);
#define m24383(__this, method) (( void (*) (t3863 *, MethodInfo*))m24383_gshared)(__this, method)
extern "C" bool m24384_gshared (t3863 * __this, MethodInfo* method);
#define m24384(__this, method) (( bool (*) (t3863 *, MethodInfo*))m24384_gshared)(__this, method)
extern "C" int8_t m24385_gshared (t3863 * __this, MethodInfo* method);
#define m24385(__this, method) (( int8_t (*) (t3863 *, MethodInfo*))m24385_gshared)(__this, method)
