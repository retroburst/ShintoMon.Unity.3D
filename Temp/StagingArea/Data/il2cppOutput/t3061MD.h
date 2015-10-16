#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3061;
struct t9;
#include "t340.h"

extern "C" void m16520_gshared (t3061 * __this, MethodInfo* method);
#define m16520(__this, method) (( void (*) (t3061 *, MethodInfo*))m16520_gshared)(__this, method)
extern "C" void m16521_gshared (t9 * __this , MethodInfo* method);
#define m16521(__this , method) (( void (*) (t9 * , MethodInfo*))m16521_gshared)(__this , method)
extern "C" int32_t m16522_gshared (t3061 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m16522(__this, p0, p1, method) (( int32_t (*) (t3061 *, t9 *, t9 *, MethodInfo*))m16522_gshared)(__this, p0, p1, method)
extern "C" t3061 * m16523_gshared (t9 * __this , MethodInfo* method);
#define m16523(__this , method) (( t3061 * (*) (t9 * , MethodInfo*))m16523_gshared)(__this , method)
