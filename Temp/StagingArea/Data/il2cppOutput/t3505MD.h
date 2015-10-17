#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3505;
struct t9;
#include "t593.h"

extern "C" void m21156_gshared (t3505 * __this, MethodInfo* method);
#define m21156(__this, method) (( void (*) (t3505 *, MethodInfo*))m21156_gshared)(__this, method)
extern "C" void m21157_gshared (t9 * __this , MethodInfo* method);
#define m21157(__this , method) (( void (*) (t9 * , MethodInfo*))m21157_gshared)(__this , method)
extern "C" int32_t m21158_gshared (t3505 * __this, t9 * p0, MethodInfo* method);
#define m21158(__this, p0, method) (( int32_t (*) (t3505 *, t9 *, MethodInfo*))m21158_gshared)(__this, p0, method)
extern "C" bool m21159_gshared (t3505 * __this, t9 * p0, t9 * p1, MethodInfo* method);
#define m21159(__this, p0, p1, method) (( bool (*) (t3505 *, t9 *, t9 *, MethodInfo*))m21159_gshared)(__this, p0, p1, method)
extern "C" t3505 * m21160_gshared (t9 * __this , MethodInfo* method);
#define m21160(__this , method) (( t3505 * (*) (t9 * , MethodInfo*))m21160_gshared)(__this , method)
