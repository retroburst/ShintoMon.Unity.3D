#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1285;
struct t1285_marshaled;

extern "C" int32_t m5377 (t1285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5378 (t1285 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5379 (t1285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5380 (t1285 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1285_marshal(const t1285& unmarshaled, t1285_marshaled& marshaled);
void t1285_marshal_back(const t1285_marshaled& marshaled, t1285& unmarshaled);
void t1285_marshal_cleanup(t1285_marshaled& marshaled);
