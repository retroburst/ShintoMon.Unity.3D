#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1603;
struct t1603_marshaled;

extern "C" void m7862 (t1603 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1603_marshal(const t1603& unmarshaled, t1603_marshaled& marshaled);
void t1603_marshal_back(const t1603_marshaled& marshaled, t1603& unmarshaled);
void t1603_marshal_cleanup(t1603_marshaled& marshaled);
