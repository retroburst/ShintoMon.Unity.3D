#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3241;
#include "t466.h"

extern "C" void m18334_gshared (t3241 * __this, MethodInfo* method);
#define m18334(__this, method) (( void (*) (t3241 *, MethodInfo*))m18334_gshared)(__this, method)
extern "C" int32_t m18335_gshared (t3241 * __this, t466  p0, MethodInfo* method);
#define m18335(__this, p0, method) (( int32_t (*) (t3241 *, t466 , MethodInfo*))m18335_gshared)(__this, p0, method)
extern "C" bool m18336_gshared (t3241 * __this, t466  p0, t466  p1, MethodInfo* method);
#define m18336(__this, p0, p1, method) (( bool (*) (t3241 *, t466 , t466 , MethodInfo*))m18336_gshared)(__this, p0, p1, method)
