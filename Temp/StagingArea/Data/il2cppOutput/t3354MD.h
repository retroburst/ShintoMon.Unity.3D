#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3354;
struct t3355;
struct t828;
struct t2;
struct t9;
struct t863;

extern "C" void m19460_gshared (t3354 * __this, MethodInfo* method);
#define m19460(__this, method) (( void (*) (t3354 *, MethodInfo*))m19460_gshared)(__this, method)
extern "C" void m19462_gshared (t3354 * __this, t3355 * p0, MethodInfo* method);
#define m19462(__this, p0, method) (( void (*) (t3354 *, t3355 *, MethodInfo*))m19462_gshared)(__this, p0, method)
extern "C" void m19464_gshared (t3354 * __this, t3355 * p0, MethodInfo* method);
#define m19464(__this, p0, method) (( void (*) (t3354 *, t3355 *, MethodInfo*))m19464_gshared)(__this, p0, method)
extern "C" t828 * m19465_gshared (t3354 * __this, t2* p0, t9 * p1, MethodInfo* method);
#define m19465(__this, p0, p1, method) (( t828 * (*) (t3354 *, t2*, t9 *, MethodInfo*))m19465_gshared)(__this, p0, p1, method)
extern "C" t863 * m19466_gshared (t3354 * __this, t9 * p0, t828 * p1, MethodInfo* method);
#define m19466(__this, p0, p1, method) (( t863 * (*) (t3354 *, t9 *, t828 *, MethodInfo*))m19466_gshared)(__this, p0, p1, method)
extern "C" t863 * m19468_gshared (t9 * __this , t3355 * p0, MethodInfo* method);
#define m19468(__this , p0, method) (( t863 * (*) (t9 * , t3355 *, MethodInfo*))m19468_gshared)(__this , p0, method)
extern "C" void m19469_gshared (t3354 * __this, uint8_t p0, MethodInfo* method);
#define m19469(__this, p0, method) (( void (*) (t3354 *, uint8_t, MethodInfo*))m19469_gshared)(__this, p0, method)
