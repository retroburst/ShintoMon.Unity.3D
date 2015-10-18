#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1612;
struct t1612_marshaled;

extern "C" void m7891 (t1612 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1612_marshal(const t1612& unmarshaled, t1612_marshaled& marshaled);
void t1612_marshal_back(const t1612_marshaled& marshaled, t1612& unmarshaled);
void t1612_marshal_cleanup(t1612_marshaled& marshaled);
