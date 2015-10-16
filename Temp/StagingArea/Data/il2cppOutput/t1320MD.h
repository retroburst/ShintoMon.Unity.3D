#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1320;
struct t1320_marshaled;
struct t2;

extern "C" void m5603 (t1320 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1320_marshal(const t1320& unmarshaled, t1320_marshaled& marshaled);
void t1320_marshal_back(const t1320_marshaled& marshaled, t1320& unmarshaled);
void t1320_marshal_cleanup(t1320_marshaled& marshaled);
