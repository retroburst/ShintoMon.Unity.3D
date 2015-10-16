#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2906;
struct t9;
struct t462;
struct t463;
#include "t58.h"

extern "C" void m14893_gshared (t2906 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m14893(__this, p0, p1, method) (( void (*) (t2906 *, t9 *, t58, MethodInfo*))m14893_gshared)(__this, p0, p1, method)
extern "C" bool m14894_gshared (t2906 * __this, uint16_t p0, MethodInfo* method);
#define m14894(__this, p0, method) (( bool (*) (t2906 *, uint16_t, MethodInfo*))m14894_gshared)(__this, p0, method)
extern "C" t9 * m14895_gshared (t2906 * __this, uint16_t p0, t463 * p1, t9 * p2, MethodInfo* method);
#define m14895(__this, p0, p1, p2, method) (( t9 * (*) (t2906 *, uint16_t, t463 *, t9 *, MethodInfo*))m14895_gshared)(__this, p0, p1, p2, method)
extern "C" bool m14896_gshared (t2906 * __this, t9 * p0, MethodInfo* method);
#define m14896(__this, p0, method) (( bool (*) (t2906 *, t9 *, MethodInfo*))m14896_gshared)(__this, p0, method)
