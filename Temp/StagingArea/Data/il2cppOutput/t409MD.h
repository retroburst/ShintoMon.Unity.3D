#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t409;
struct t411;
struct t828;
struct t2;
struct t9;
struct t863;
#include "t43.h"

extern "C" void m2563_gshared (t409 * __this, MethodInfo* method);
#define m2563(__this, method) (( void (*) (t409 *, MethodInfo*))m2563_gshared)(__this, method)
extern "C" void m2566_gshared (t409 * __this, t411 * p0, MethodInfo* method);
#define m2566(__this, p0, method) (( void (*) (t409 *, t411 *, MethodInfo*))m2566_gshared)(__this, p0, method)
extern "C" void m17403_gshared (t409 * __this, t411 * p0, MethodInfo* method);
#define m17403(__this, p0, method) (( void (*) (t409 *, t411 *, MethodInfo*))m17403_gshared)(__this, p0, method)
extern "C" t828 * m3029_gshared (t409 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m3029(__this, p0, p1, method) (( t828 * (*) (t409 *, t2*, t9 *, MethodInfo*))m3029_gshared)(__this, p0, p1, method)
extern "C" t863 * m3030_gshared (t409 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m3030(__this, p0, p1, method) (( t863 * (*) (t409 *, t9 *, t828 *, MethodInfo*))m3030_gshared)(__this, p0, p1, method)
extern "C" t863 * m17404_gshared (t9 * __this , t411 * p0, MethodInfo* method);
#define m17404(__this , p0, method) (( t863 * (*) (t9 * , t411 *, MethodInfo*))m17404_gshared)(__this , p0, method)
extern "C" void m2565_gshared (t409 * __this, t43  p0, MethodInfo* method);
#define m2565(__this, p0, method) (( void (*) (t409 *, t43 , MethodInfo*))m2565_gshared)(__this, p0, method)
