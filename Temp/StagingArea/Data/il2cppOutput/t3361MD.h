#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t3361;
struct t9;
struct t835;
struct t3360;
struct t158;

extern "C" void m19509_gshared (t3361 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m19509(__this, p0, p1, method) (( void (*) (t3361 *, t9 *, t835 *, MethodInfo*))m19509_gshared)(__this, p0, p1, method)
extern "C" void m19510_gshared (t3361 * __this, t3360 * p0, MethodInfo* method);
#define m19510(__this, p0, method) (( void (*) (t3361 *, t3360 *, MethodInfo*))m19510_gshared)(__this, p0, method)
extern "C" void m19511_gshared (t3361 * __this, t158* p0, MethodInfo* method);
#define m19511(__this, p0, method) (( void (*) (t3361 *, t158*, MethodInfo*))m19511_gshared)(__this, p0, method)
extern "C" bool m19512_gshared (t3361 * __this, t9 * p0, t835 * p1, MethodInfo* method);
#define m19512(__this, p0, p1, method) (( bool (*) (t3361 *, t9 *, t835 *, MethodInfo*))m19512_gshared)(__this, p0, p1, method)
