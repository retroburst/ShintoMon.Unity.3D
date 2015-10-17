#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3956;
#include "t304.h"

extern "C" void m24928_gshared (t3956 * __this, MethodInfo* method);
#define m24928(__this, method) (( void (*) (t3956 *, MethodInfo*))m24928_gshared)(__this, method)
extern "C" int32_t m24929_gshared (t3956 * __this, t304  p0, MethodInfo* method);
#define m24929(__this, p0, method) (( int32_t (*) (t3956 *, t304 , MethodInfo*))m24929_gshared)(__this, p0, method)
extern "C" bool m24930_gshared (t3956 * __this, t304  p0, t304  p1, MethodInfo* method);
#define m24930(__this, p0, p1, method) (( bool (*) (t3956 *, t304 , t304 , MethodInfo*))m24930_gshared)(__this, p0, p1, method)
