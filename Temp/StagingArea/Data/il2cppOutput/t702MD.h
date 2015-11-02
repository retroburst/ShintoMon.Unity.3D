#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t702;
struct t702_marshaled;

extern "C" void m3235 (t702 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3236 (t702 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3237 (t702 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3238 (t702 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t702_marshal(const t702& unmarshaled, t702_marshaled& marshaled);
void t702_marshal_back(const t702_marshaled& marshaled, t702& unmarshaled);
void t702_marshal_cleanup(t702_marshaled& marshaled);
