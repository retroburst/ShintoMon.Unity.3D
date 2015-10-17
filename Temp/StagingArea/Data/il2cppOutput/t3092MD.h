#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3092;
#include "t347.h"

extern "C" void m16717_gshared (t3092 * __this, MethodInfo* method);
#define m16717(__this, method) (( void (*) (t3092 *, MethodInfo*))m16717_gshared)(__this, method)
extern "C" int32_t m16718_gshared (t3092 * __this, t347  p0, MethodInfo* method);
#define m16718(__this, p0, method) (( int32_t (*) (t3092 *, t347 , MethodInfo*))m16718_gshared)(__this, p0, method)
extern "C" bool m16719_gshared (t3092 * __this, t347  p0, t347  p1, MethodInfo* method);
#define m16719(__this, p0, p1, method) (( bool (*) (t3092 *, t347 , t347 , MethodInfo*))m16719_gshared)(__this, p0, p1, method)
