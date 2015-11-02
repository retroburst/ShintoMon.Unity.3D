#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3514;
struct t9;
#include "t600.h"

extern "C" void m21207_gshared (t3514 * __this, MethodInfo* method);
#define m21207(__this, method) (( void (*) (t3514 *, MethodInfo*))m21207_gshared)(__this, method)
extern "C" void m21208_gshared (t9 * __this , MethodInfo* method);
#define m21208(__this , method) (( void (*) (t9 * , MethodInfo*))m21208_gshared)(__this , method)
extern "C" int32_t m21209_gshared (t3514 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21209(__this, p0, p1, method) (( int32_t (*) (t3514 *, t9 *, t9 *, MethodInfo*))m21209_gshared)(__this, p0, p1, method)
extern "C" t3514 * m21210_gshared (t9 * __this , MethodInfo* method);
#define m21210(__this , method) (( t3514 * (*) (t9 * , MethodInfo*))m21210_gshared)(__this , method)
