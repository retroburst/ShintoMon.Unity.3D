#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3482;
struct t9;
struct t121;
#include "t58.h"

extern "C" void m20758_gshared (t3482 * __this, t121 * p0, MethodInfo* method);
#define m20758(__this, p0, method) (( void (*) (t3482 *, t121 *, MethodInfo*))m20758_gshared)(__this, p0, method)
extern "C" t9 * m20759_gshared (t3482 * __this, MethodInfo* method);
#define m20759(__this, method) (( t9 * (*) (t3482 *, MethodInfo*))m20759_gshared)(__this, method)
extern "C" void m20760_gshared (t3482 * __this, MethodInfo* method);
#define m20760(__this, method) (( void (*) (t3482 *, MethodInfo*))m20760_gshared)(__this, method)
extern "C" bool m20761_gshared (t3482 * __this, MethodInfo* method);
#define m20761(__this, method) (( bool (*) (t3482 *, MethodInfo*))m20761_gshared)(__this, method)
extern "C" t58 m20762_gshared (t3482 * __this, MethodInfo* method);
#define m20762(__this, method) (( t58 (*) (t3482 *, MethodInfo*))m20762_gshared)(__this, method)
