#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3948;
#include "t917.h"

extern "C" void m24890_gshared (t3948 * __this, MethodInfo* method);
#define m24890(__this, method) (( void (*) (t3948 *, MethodInfo*))m24890_gshared)(__this, method)
extern "C" int32_t m24891_gshared (t3948 * __this, t917  p0, MethodInfo* method);
#define m24891(__this, p0, method) (( int32_t (*) (t3948 *, t917 , MethodInfo*))m24891_gshared)(__this, p0, method)
extern "C" bool m24892_gshared (t3948 * __this, t917  p0, t917  p1, MethodInfo* method);
#define m24892(__this, p0, p1, method) (( bool (*) (t3948 *, t917 , t917 , MethodInfo*))m24892_gshared)(__this, p0, p1, method)
