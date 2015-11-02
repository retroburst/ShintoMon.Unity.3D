#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3159;
struct t9;
struct t121;
#include "t575.h"

extern "C" void m17425_gshared (t3159 * __this, t121 * p0, MethodInfo* method);
#define m17425(__this, p0, method) (( void (*) (t3159 *, t121 *, MethodInfo*))m17425_gshared)(__this, p0, method)
extern "C" t9 * m17426_gshared (t3159 * __this, MethodInfo* method);
#define m17426(__this, method) (( t9 * (*) (t3159 *, MethodInfo*))m17426_gshared)(__this, method)
extern "C" void m17427_gshared (t3159 * __this, MethodInfo* method);
#define m17427(__this, method) (( void (*) (t3159 *, MethodInfo*))m17427_gshared)(__this, method)
extern "C" bool m17428_gshared (t3159 * __this, MethodInfo* method);
#define m17428(__this, method) (( bool (*) (t3159 *, MethodInfo*))m17428_gshared)(__this, method)
extern "C" t575  m17429_gshared (t3159 * __this, MethodInfo* method);
#define m17429(__this, method) (( t575  (*) (t3159 *, MethodInfo*))m17429_gshared)(__this, method)
