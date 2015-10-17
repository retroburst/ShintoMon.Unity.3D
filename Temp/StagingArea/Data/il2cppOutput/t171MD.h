#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t171;
struct t171_marshaled;

extern "C" void m3145 (t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3146 (t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3147 (t171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t171_marshal(const t171& unmarshaled, t171_marshaled& marshaled);
void t171_marshal_back(const t171_marshaled& marshaled, t171& unmarshaled);
void t171_marshal_cleanup(t171_marshaled& marshaled);
