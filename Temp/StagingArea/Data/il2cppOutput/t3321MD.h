#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3321;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m19262_gshared (t3321 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m19262(__this, p0, p1, method) (( void (*) (t3321 *, t9 *, t58, MethodInfo*))m19262_gshared)(__this, p0, p1, method)
extern "C" void m19263_gshared (t3321 * __this, uint8_t p0, MethodInfo* method);
#define m19263(__this, p0, method) (( void (*) (t3321 *, uint8_t, MethodInfo*))m19263_gshared)(__this, p0, method)
extern "C" t9 * m19264_gshared (t3321 * __this, uint8_t p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m19264(__this, p0, p1, p2, method) (( t9 * (*) (t3321 *, uint8_t, t463 *, t9 *, MethodInfo*))m19264_gshared)(__this, p0, p1, p2, method)
extern "C" void m19265_gshared (t3321 * __this, t9 * p0, MethodInfo* method);
#define m19265(__this, p0, method) (( void (*) (t3321 *, t9 *, MethodInfo*))m19265_gshared)(__this, p0, method)
