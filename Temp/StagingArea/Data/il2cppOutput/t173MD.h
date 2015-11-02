#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t173;
struct t173_marshaled;

extern "C" void m3627 (t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3628 (t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3629 (t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t173_marshal(const t173& unmarshaled, t173_marshaled& marshaled);
void t173_marshal_back(const t173_marshaled& marshaled, t173& unmarshaled);
void t173_marshal_cleanup(t173_marshaled& marshaled);
