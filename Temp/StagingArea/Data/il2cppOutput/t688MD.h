#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t688;
struct t688_marshaled;

extern "C" void m3171 (t688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3172 (t688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3173 (t688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3174 (t688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t688_marshal(const t688& unmarshaled, t688_marshaled& marshaled);
void t688_marshal_back(const t688_marshaled& marshaled, t688& unmarshaled);
void t688_marshal_cleanup(t688_marshaled& marshaled);
