#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1294;
struct t1294_marshaled;

extern "C" int32_t m5406 (t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5407 (t1294 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5408 (t1294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5409 (t1294 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1294_marshal(const t1294& unmarshaled, t1294_marshaled& marshaled);
void t1294_marshal_back(const t1294_marshaled& marshaled, t1294& unmarshaled);
void t1294_marshal_cleanup(t1294_marshaled& marshaled);
