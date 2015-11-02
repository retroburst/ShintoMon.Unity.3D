#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1335;
struct t1335_marshaled;
struct t2;

extern "C" void m5673 (t1335 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1335_marshal(const t1335& unmarshaled, t1335_marshaled& marshaled);
void t1335_marshal_back(const t1335_marshaled& marshaled, t1335& unmarshaled);
void t1335_marshal_cleanup(t1335_marshaled& marshaled);
