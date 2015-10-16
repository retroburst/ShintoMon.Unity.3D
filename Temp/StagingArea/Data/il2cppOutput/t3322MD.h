#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3322;
struct t9;
struct t821;
struct t3321;
struct t158;

extern "C" void m19266_gshared (t3322 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m19266(__this, p0, p1, method) (( void (*) (t3322 *, t9 *, t821 *, MethodInfo*))m19266_gshared)(__this, p0, p1, method)
extern "C" void m19267_gshared (t3322 * __this, t3321 * p0, MethodInfo* method);
#define m19267(__this, p0, method) (( void (*) (t3322 *, t3321 *, MethodInfo*))m19267_gshared)(__this, p0, method)
extern "C" void m19268_gshared (t3322 * __this, t158* p0, MethodInfo* method);
#define m19268(__this, p0, method) (( void (*) (t3322 *, t158*, MethodInfo*))m19268_gshared)(__this, p0, method)
extern "C" bool m19269_gshared (t3322 * __this, t9 * p0, t821 * p1, MethodInfo* method);
#define m19269(__this, p0, p1, method) (( bool (*) (t3322 *, t9 *, t821 *, MethodInfo*))m19269_gshared)(__this, p0, p1, method)
