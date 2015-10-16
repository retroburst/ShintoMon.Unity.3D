#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3320;
struct t3321;
struct t821;
struct t2;
struct t9;
struct t856;

extern "C" void m19252_gshared (t3320 * __this, MethodInfo* method);
#define m19252(__this, method) (( void (*) (t3320 *, MethodInfo*))m19252_gshared)(__this, method)
extern "C" void m19254_gshared (t3320 * __this, t3321 * p0, MethodInfo* method);
#define m19254(__this, p0, method) (( void (*) (t3320 *, t3321 *, MethodInfo*))m19254_gshared)(__this, p0, method)
extern "C" void m19256_gshared (t3320 * __this, t3321 * p0, MethodInfo* method);
#define m19256(__this, p0, method) (( void (*) (t3320 *, t3321 *, MethodInfo*))m19256_gshared)(__this, p0, method)
extern "C" t821 * m19257_gshared (t3320 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m19257(__this, p0, p1, method) (( t821 * (*) (t3320 *, t2*, t9 *, MethodInfo*))m19257_gshared)(__this, p0, p1, method)
extern "C" t856 * m19258_gshared (t3320 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m19258(__this, p0, p1, method) (( t856 * (*) (t3320 *, t9 *, t821 *, MethodInfo*))m19258_gshared)(__this, p0, p1, method)
extern "C" t856 * m19260_gshared (t9 * __this , t3321 * p0, MethodInfo* method);
#define m19260(__this , p0, method) (( t856 * (*) (t9 * , t3321 *, MethodInfo*))m19260_gshared)(__this , p0, method)
extern "C" void m19261_gshared (t3320 * __this, uint8_t p0, MethodInfo* method);
#define m19261(__this, p0, method) (( void (*) (t3320 *, uint8_t, MethodInfo*))m19261_gshared)(__this, p0, method)
