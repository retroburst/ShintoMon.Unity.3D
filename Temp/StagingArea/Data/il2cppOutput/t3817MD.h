#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3817;
struct t9;
struct t462;
struct t463;
#include "t58.h"
#include "t3809.h"

extern "C" void m24117_gshared (t3817 * __this, t9 * p0, t58 p1, MethodInfo* method);
#define m24117(__this, p0, p1, method) (( void (*) (t3817 *, t9 *, t58, MethodInfo*))m24117_gshared)(__this, p0, p1, method)
extern "C" t3809  m24118_gshared (t3817 * __this, int32_t p0, int32_t p1, MethodInfo* method);
#define m24118(__this, p0, p1, method) (( t3809  (*) (t3817 *, int32_t, int32_t, MethodInfo*))m24118_gshared)(__this, p0, p1, method)
extern "C" t9 * m24119_gshared (t3817 * __this, int32_t p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method);
#define m24119(__this, p0, p1, p2, p3, method) (( t9 * (*) (t3817 *, int32_t, int32_t, t463 *, t9 *, MethodInfo*))m24119_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t3809  m24120_gshared (t3817 * __this, t9 * p0, MethodInfo* method);
#define m24120(__this, p0, method) (( t3809  (*) (t3817 *, t9 *, MethodInfo*))m24120_gshared)(__this, p0, method)
