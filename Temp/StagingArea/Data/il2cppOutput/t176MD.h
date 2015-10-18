#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t176;
struct t176_marshaled;

extern "C" void m596 (t176 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t176_marshal(const t176& unmarshaled, t176_marshaled& marshaled);
void t176_marshal_back(const t176_marshaled& marshaled, t176& unmarshaled);
void t176_marshal_cleanup(t176_marshaled& marshaled);
